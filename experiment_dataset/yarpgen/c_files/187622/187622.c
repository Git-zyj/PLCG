/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_17 ? (((4699391174202026302 > (min(var_5, var_4))))) : -var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = ((-(min((min(var_10, (arr_4 [i_0] [i_0] [i_1]))), var_18))));

                for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    var_22 = (min(var_22, (arr_2 [i_2 + 2] [i_2 + 2])));
                    var_23 -= ((-(max(233, ((var_18 ? 153 : var_12))))));
                    arr_8 [i_1] [i_1] [9] [i_1] = ((-((max((max(var_3, var_15)), (arr_3 [i_1] [i_2 - 1]))))));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = var_10;
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
                {
                    arr_12 [7] [i_1 - 1] [i_1] = (arr_5 [i_0] [i_1]);
                    arr_13 [i_1] [1] [i_3] = var_7;
                }
                for (int i_4 = 3; i_4 < 17;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_24 = (((arr_14 [i_0] [i_0] [i_0]) - (85 && var_4)));

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            arr_21 [i_1] [i_1] [i_4] [i_5] [i_6] = ((((var_8 < (arr_11 [i_1 - 1] [i_1] [1] [i_1])))) << var_15);
                            arr_22 [i_1] [3] [10] [i_5] [i_6] = (min((arr_0 [i_0]), (((arr_18 [i_0] [i_1] [i_0] [i_5] [1]) - ((var_1 >> (var_5 - 38924)))))));
                        }
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            var_25 = (arr_20 [i_7] [i_7] [i_7]);
                            var_26 -= ((((var_1 > (((arr_18 [7] [i_1] [i_4 - 3] [i_5] [i_7]) ? var_14 : (arr_14 [i_7] [1] [i_7]))))) ? (!1) : (min((arr_14 [i_0] [i_4 - 1] [i_1 - 1]), (arr_4 [14] [i_4 - 1] [i_0])))));
                            var_27 = (arr_20 [11] [i_5] [i_7]);
                        }
                        arr_25 [i_0] [i_1] [8] = arr_19 [10] [i_1] [16] [i_5] [13];
                        var_28 = (min(var_28, var_8));
                    }
                    for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                    {
                        arr_28 [i_1] [i_8] [12] [i_8] = (((arr_16 [i_1] [i_1]) ? (((arr_16 [i_1] [i_8]) ? var_3 : (arr_16 [i_1] [i_4 - 1]))) : 150));
                        arr_29 [i_1] [i_1] [i_1] = (arr_23 [i_4 - 3] [i_4] [i_4 - 2]);
                    }
                    for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                    {
                        var_29 *= (((((~(arr_4 [i_1 - 1] [i_4 + 1] [i_0])))) ? var_18 : var_1));
                        arr_34 [i_1] [i_4 - 2] [i_1] [i_1] = (min(105, var_5));
                    }
                    var_30 = (max((((((min((arr_32 [i_4 + 1] [i_1 - 1] [i_1] [i_0]), (arr_24 [11] [i_0] [i_0] [i_1] [i_4] [i_4])))) ? (arr_2 [i_0] [i_4 - 2]) : ((102 << (((arr_31 [16] [i_0] [i_1 - 1] [i_4]) - 181))))))), 4194107945443476820));
                }
            }
        }
    }
    #pragma endscop
}
