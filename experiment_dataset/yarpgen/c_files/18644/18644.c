/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 |= ((var_5 ? (((((((arr_3 [i_0] [i_0]) ? 61 : 3356070516302427671))) ? (arr_1 [i_1] [i_0]) : (((((arr_1 [i_2] [i_0]) + 2147483647)) << (3356070516302427671 - 3356070516302427671)))))) : (var_7 + var_0)));
                    var_15 = (max((((arr_1 [i_0] [i_0]) ? (arr_3 [i_1] [i_2]) : (((arr_0 [i_0]) ? (arr_1 [i_1] [i_2]) : var_13)))), var_5));
                }
            }
        }
    }
    var_16 = var_7;

    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_17 |= (((((arr_7 [i_3] [3]) & (((arr_8 [i_3] [i_3]) ? (arr_7 [i_3] [i_3]) : var_5)))) != (((arr_7 [i_3] [i_3]) ? (arr_7 [i_3] [i_3]) : var_9))));
        var_18 = var_5;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_19 = var_11;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {
                    var_20 = arr_8 [i_4] [i_6];
                    var_21 = (((arr_10 [i_6]) ? (67 + var_11) : (arr_14 [i_4])));
                    var_22 = (((arr_7 [i_6] [i_4]) ? (arr_7 [i_4] [i_4]) : (arr_7 [i_4] [i_6])));

                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_23 |= (arr_11 [i_4] [i_7] [i_6]);

                        for (int i_8 = 2; i_8 < 14;i_8 += 1)
                        {
                            var_24 = (arr_15 [i_8] [i_6] [i_6] [i_5] [i_4]);
                            var_25 = 3845;
                            var_26 |= ((-30245 ? var_7 : (((var_0 ? 8388352 : var_3)))));
                        }
                        var_27 = ((arr_12 [i_7] [i_5] [i_4]) ^ (arr_19 [i_7] [i_7] [i_5] [i_5] [i_5] [i_5] [i_4]));
                    }
                }
            }
        }
    }
    var_28 |= var_10;
    #pragma endscop
}
