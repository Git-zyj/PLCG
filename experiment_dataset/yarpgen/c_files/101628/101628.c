/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(65520, -var_1));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] [i_2] [i_1] = var_10;
                    var_13 = var_2;
                    var_14 = -65520;
                }
            }
        }
        arr_7 [i_0] = (arr_1 [i_0 + 1]);
        var_15 = (min((((((var_11 - (arr_4 [i_0] [i_0] [i_0] [i_0]))) < (arr_2 [i_0] [i_0] [i_0])))), (max(((((arr_2 [i_0] [i_0] [i_0]) < (arr_2 [i_0] [i_0] [i_0])))), ((65517 ? 65520 : (arr_5 [i_0] [i_0] [8] [i_0])))))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_16 = (((((((arr_9 [i_3]) || (arr_11 [i_3]))) ? (arr_11 [i_3]) : ((15 ? (arr_11 [i_3]) : 17)))) ^ ((((15 < ((min(65531, 22)))))))));
        arr_12 [i_3] = ((arr_10 [i_3]) ? ((((7 > 17) + ((min(12, 17)))))) : (((min(47, var_4)) - var_4)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_15 [i_4] = (((arr_13 [i_4]) ? (65500 | var_0) : 6));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_17 = var_9;
                    var_18 = ((~(arr_16 [i_6] [i_4] [i_5 - 1])));
                    var_19 = (((arr_23 [i_5 - 1] [i_4]) < 65529));
                    var_20 = ((~(((arr_13 [i_4]) ? 65521 : 34))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                {
                    arr_29 [i_4] [i_7] [i_7] [i_7] = (arr_17 [i_4]);
                    arr_30 [i_4] [i_7] [i_7] = (((arr_16 [i_8] [i_4] [i_4]) ^ var_6));
                    var_21 = -6;
                    var_22 = var_9;
                    arr_31 [i_4] [i_7] [i_4] = (65532 > 65532);
                }
            }
        }
    }
    var_23 = (min(var_3, (((~(~65528))))));
    #pragma endscop
}
