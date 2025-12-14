/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= var_12;
    var_14 = var_1;
    var_15 = (var_3 ? var_5 : (((((var_8 ? var_7 : var_11))) ? var_11 : (1 / 190514874515828066))));

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        arr_3 [i_0] = var_0;
        var_16 = 2047;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] = 9223372036854775792;
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 17;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_1 - 1] [i_1 - 1] [i_1] = (arr_7 [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 18;i_5 += 1)
                        {
                            {
                                var_17 *= (arr_15 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [2] [i_3] [i_3 - 2]);
                                arr_18 [i_3] [i_3] [i_3] [i_3] = (((arr_16 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1]) | ((152 ? (arr_11 [i_1]) : -22805))));
                                var_18 = ((25763 << (5902636078356525533 - 5902636078356525520)));
                                var_19 = 0;
                                var_20 ^= ((!(arr_13 [i_1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1])));
                            }
                        }
                    }
                    var_21 = (arr_7 [i_1 - 1] [i_3 - 1]);
                }
            }
        }
        arr_19 [i_1] [i_1 + 1] = (((arr_13 [i_1 + 1] [i_1] [i_1] [i_1] [i_1 + 1] [7]) > (arr_13 [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [i_1])));
        arr_20 [i_1] = arr_5 [i_1];
    }
    #pragma endscop
}
