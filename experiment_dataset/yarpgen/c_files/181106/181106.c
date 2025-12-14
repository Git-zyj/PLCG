/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 ^= (arr_1 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_3] [i_1] = (max(((((var_15 ? (arr_4 [i_0] [i_1]) : (arr_6 [i_3] [i_0] [i_0] [i_0]))))), (((arr_2 [i_1]) ? var_1 : (arr_8 [i_3] [i_2] [i_1] [i_0])))));

                            for (int i_4 = 2; i_4 < 23;i_4 += 1)
                            {
                                var_19 += -var_7;
                                var_20 *= (((((min((arr_1 [i_3]), (arr_3 [1] [i_1])))) ? (arr_4 [i_0] [i_3]) : 127)));
                                arr_14 [i_3] [i_3] [i_3] = (!8691);
                                var_21 = (max(var_21, (arr_10 [i_4] [i_4] [i_4 + 1] [i_4] [i_4] [i_4])));
                            }
                            for (int i_5 = 0; i_5 < 24;i_5 += 1)
                            {
                                var_22 -= arr_1 [i_1];
                                var_23 += ((!(!1)));
                                var_24 += (((((25 ? 8596 : 255))) ? (((max((arr_3 [i_0] [i_1]), (arr_5 [i_0] [i_0] [i_0] [12]))))) : (arr_13 [16] [8] [i_0] [i_1] [i_2] [i_3] [16])));
                                arr_18 [i_3] [i_1] [21] [11] [i_1] [i_1] = 4294967295;
                                var_25 = (arr_6 [i_3] [9] [i_1] [i_0]);
                            }
                            arr_19 [i_0] [i_0] [i_3] [i_1] [11] [i_3] = (min(124950518499058919, ((((arr_16 [i_3] [i_1] [i_1] [i_1] [i_1] [i_2] [i_3]) & (((arr_16 [i_3] [i_1] [i_2] [16] [i_2] [i_1] [i_2]) ? (arr_16 [i_3] [22] [i_2] [i_1] [i_1] [21] [i_3]) : (arr_10 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))))));

                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 24;i_6 += 1)
                            {
                                arr_22 [i_3] [13] [i_1] [4] [8] [i_6] = ((var_9 ? (arr_1 [21]) : -34));
                                var_26 += (arr_21 [i_0] [i_1] [i_3] [i_0] [i_6] [i_1]);
                                arr_23 [i_3] [i_1] [i_2] [i_3] [7] = 28851;
                                arr_24 [i_6] [i_3] [i_3] [i_3] [i_1] [21] = (arr_7 [i_0] [i_0]);
                            }
                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                var_27 += ((!(arr_6 [i_7] [i_3] [i_1] [20])));
                                arr_27 [i_7] [i_0] [i_3] [i_1] [i_1] [i_0] [i_0] |= 59421;
                            }
                            for (int i_8 = 1; i_8 < 22;i_8 += 1) /* same iter space */
                            {
                                var_28 = (min(var_28, var_2));
                                var_29 += (min(((13 / (((max((arr_21 [i_3] [i_3] [i_3] [14] [i_3] [i_3]), (arr_0 [i_3]))))))), ((max((arr_28 [i_1]), (arr_10 [i_8 + 2] [i_8 + 2] [i_8] [i_8 + 2] [i_8 + 2] [i_8]))))));
                            }
                            /* vectorizable */
                            for (int i_9 = 1; i_9 < 22;i_9 += 1) /* same iter space */
                            {
                                var_30 = (arr_15 [i_9 + 2] [i_9 + 1] [i_2]);
                                var_31 -= ((13 ? 6115 : 56022));
                                arr_34 [i_0] [11] [20] [i_3] [i_9] = (arr_16 [i_3] [i_9 + 1] [i_9 + 2] [i_9] [i_9 - 1] [i_9] [i_3]);
                            }
                        }
                    }
                }
                var_32 = arr_2 [i_0];
                var_33 ^= ((((min((arr_1 [i_0]), (((arr_17 [i_0] [i_0] [i_1] [i_0] [i_1] [i_1]) ? var_6 : (arr_13 [13] [i_1] [20] [i_1] [i_1] [10] [i_1])))))) ? 43727 : (((min(var_5, (arr_33 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
            }
        }
    }
    var_34 = var_9;
    var_35 *= (min(var_15, 43727));
    #pragma endscop
}
