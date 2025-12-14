/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            var_20 += ((-(arr_11 [17] [17] [i_1] [i_1 - 1] [i_1])));
                            var_21 = (((arr_5 [i_0] [i_0] [i_0]) ? var_13 : ((-((var_4 ? (arr_13 [2] [i_2] [i_3] [i_4]) : (arr_15 [i_0] [i_1 - 1] [i_2] [i_0] [i_3 + 3] [i_0])))))));
                        }
                        var_22 = (min(var_22, (((-((+(((arr_6 [i_0] [i_0]) ? var_1 : (arr_13 [i_0] [i_0] [i_2] [i_3]))))))))));
                        var_23 = arr_5 [i_1] [i_2] [i_0];

                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            var_24 = (((arr_15 [i_0] [18] [i_2] [i_3] [i_5] [i_0]) ? var_17 : var_6));
                            var_25 = (arr_4 [i_0]);
                            var_26 *= var_1;
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_27 = (max(var_27, (((~(arr_6 [i_0] [i_0]))))));
                            var_28 = ((var_19 ? var_10 : var_18));
                            arr_23 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3] [i_6] = var_15;
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_1] [i_0] [i_3] [i_7] = (((((((var_0 ? var_17 : var_16))) ? (~var_15) : (((arr_12 [i_7] [i_0] [i_0] [i_0]) ? var_8 : (arr_3 [i_0] [i_0])))))) ? var_15 : var_15);
                            arr_27 [i_0] [i_0] [i_1] [i_2] [i_0] [i_0] [i_7] = (~var_11);
                        }

                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_32 [i_0] [i_0] [i_1] [i_0] [7] [i_3] [i_8] = (-(arr_8 [i_0] [i_0]));
                            var_29 = ((-(~var_3)));
                            arr_33 [i_0] [i_0] = arr_1 [i_0];
                            var_30 = (((!var_3) ? var_17 : (((arr_25 [i_8]) ? (arr_0 [i_1]) : var_11))));
                        }
                    }
                }
            }
        }
        var_31 = (arr_22 [i_0]);

        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            var_32 = (arr_34 [i_0] [i_9] [i_0]);
            var_33 ^= (-((var_14 ? var_7 : var_7)));
        }
    }
    var_34 = (max(var_34, -var_8));
    var_35 = var_16;
    #pragma endscop
}
