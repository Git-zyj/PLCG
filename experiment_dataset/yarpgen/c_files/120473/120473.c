/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, -var_11));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = min((max((arr_0 [i_0]), (arr_0 [i_0]))), (max((arr_0 [i_0]), (arr_0 [i_0]))));
        arr_5 [i_0] [i_0] = (((arr_2 [i_0]) ? 255 : (((-(arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_16 [i_0] [i_1] [i_2] = ((~((~(arr_13 [i_0] [i_0] [i_2])))));
                        var_17 = (((-(arr_14 [i_2] [i_2 + 1] [i_2] [i_2]))));
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_19 [i_0] [8] [8] &= (~0);

                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            var_18 += (max(((var_7 ? (max((arr_6 [12]), (arr_15 [i_5] [i_4] [i_2 + 1] [i_0] [i_0]))) : (arr_9 [1] [8] [i_5]))), ((~(!var_15)))));
                            var_19 *= ((~(((arr_17 [i_0] [i_2] [i_4] [i_5]) ? 1073741792 : (((-(arr_6 [i_5]))))))));
                        }
                        arr_23 [i_0] [i_2] = (arr_22 [i_2] [i_2] [i_1] [i_1] [i_2]);
                        var_20 = ((-94 ? ((~(arr_15 [i_2 + 1] [i_2 + 2] [i_2] [i_2 + 1] [i_4]))) : var_15));
                        arr_24 [i_0] [i_2] [i_2] [i_2] = ((+((50650 ? ((1 ? (arr_10 [i_4] [i_4] [i_4] [i_4]) : (arr_2 [15]))) : (((-(arr_13 [i_0] [i_2] [i_2]))))))));
                    }
                    arr_25 [i_0] [i_2] [i_2 + 2] = (((arr_14 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 2]) != (arr_14 [i_2] [i_2 - 1] [i_2 + 1] [i_2 + 2])));
                    var_21 -= (max(35519, -690));
                    var_22 -= (min(92, (((arr_17 [i_0] [14] [i_1] [i_2]) ? var_12 : var_2))));
                }
            }
        }
        var_23 ^= ((-((23321 ? -688 : (arr_22 [0] [2] [i_0] [i_0] [0])))));
    }
    #pragma endscop
}
