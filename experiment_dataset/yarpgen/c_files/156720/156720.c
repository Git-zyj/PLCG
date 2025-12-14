/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_9 ? var_8 : var_0))));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_11 ^= ((((min((arr_2 [i_0 + 1] [i_0 - 3]), (arr_2 [i_0 - 1] [i_0 + 1])))) ? ((var_5 + (arr_2 [i_0 - 1] [i_0 - 2]))) : ((11 ? (arr_2 [i_0 - 1] [i_0 - 1]) : 2304924881249276081))));
                    arr_10 [i_1] [0] [i_1] [i_1] &= -36;
                    arr_11 [i_0] [i_0] = (min((min(var_2, (arr_4 [i_0 + 1] [i_1] [i_0]))), 0));
                }
            }
        }
        var_12 = (arr_2 [i_0 - 3] [i_0 - 2]);
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            arr_17 [0] |= (((((1016805682 ? -498786249 : -4013825976212160043))) ? ((3901710928 ? 152 : 6160)) : var_2));
            arr_18 [i_3] = -var_0;
            var_13 = (min((((-var_0 % (arr_12 [i_3] [i_4])))), var_5));
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        arr_27 [i_3] = (((min(((max(var_4, var_6))), (arr_20 [i_3] [i_3]))) > var_5));
                        var_14 = (min((((arr_22 [1]) ? var_7 : (arr_12 [i_3] [i_5]))), ((((((var_9 ? 4294967295 : var_3))) ? -32747 : ((var_5 ? 9223372036854775807 : var_6)))))));
                        arr_28 [i_3] = (arr_16 [i_3] [12] [i_3]);
                    }
                }
            }
            arr_29 [i_3] [i_5] [i_5] &= ((((min((arr_12 [i_3] [i_5]), (((arr_12 [i_3] [i_5]) ? (arr_25 [i_5] [19] [i_5] [i_5] [8] [i_3]) : (arr_12 [i_3] [i_5])))))) ? ((min((arr_16 [i_3] [i_5] [i_5]), var_4))) : (((43 <= var_7) ? var_7 : -245))));
            var_15 |= (((((~(arr_19 [i_5] [i_5] [i_3])))) ? (min((arr_19 [i_3] [i_5] [i_3]), 0)) : ((((!(arr_19 [i_3] [i_3] [i_3])))))));
        }
        arr_30 [i_3] = arr_19 [6] [7] [i_3];
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        var_16 ^= ((((!231) ? (!64) : (((-64 + 2147483647) >> (((arr_20 [i_8] [i_8]) + 2861471035534784986)))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                {
                    var_17 = ((var_0 - (((((arr_23 [i_8] [i_8] [i_9] [i_10]) + 2147483647)) << (((((arr_23 [i_10] [i_8] [i_8] [i_8]) + 1484981974)) - 15))))));
                    arr_40 [i_8] &= var_9;
                }
            }
        }
    }
    #pragma endscop
}
