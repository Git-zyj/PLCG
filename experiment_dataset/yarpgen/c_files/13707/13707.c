/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_20 &= ((1 >= ((100 ? 1 : -3782))));
        var_21 = 1;
        var_22 = (min(var_22, (arr_0 [i_0])));
        var_23 &= ((min((arr_1 [i_0 - 1]), (((-(arr_2 [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 20;i_3 += 1)
            {
                {
                    arr_15 [18] [18] &= (((((arr_6 [i_2]) & 13172)) > 10049));
                    var_24 = 187158436678229061;
                    arr_16 [0] [i_2] [i_2] [i_3 - 1] = (((((0 ? 44195 : (arr_1 [i_1])))) ? (0 == 411345090934447443) : 107));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                {
                    arr_21 [i_5] = (((arr_0 [i_5 - 1]) >> (arr_0 [4])));
                    var_25 = (min(var_25, 2047));
                    var_26 |= 21340;
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        arr_30 [8] [i_6 + 1] [18] [i_7] [i_8] [i_8] |= 13172;
                        var_27 = -1951568698;
                        var_28 = (((arr_25 [i_1 + 1] [i_1] [17]) ? (arr_25 [i_1 + 1] [i_1] [i_1]) : (arr_25 [i_1 - 1] [9] [i_1])));
                        arr_31 [i_7] [i_6] [14] [17] = (((arr_19 [i_6 + 1] [0] [0] [i_6]) / (((1 ? 40 : 138)))));
                    }
                }
            }
        }
        var_29 += -1224855682;
    }
    var_30 = ((~(2497 * 2294904754)));
    var_31 = (max(var_31, ((((min(2018981993, var_0))) ^ var_2))));
    var_32 |= (((((1 ? 0 : 46))) ? var_17 : 115));
    #pragma endscop
}
