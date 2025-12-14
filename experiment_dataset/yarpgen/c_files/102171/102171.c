/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= 1;
    var_21 = ((((max((max(23973, 1)), (!var_11)))) % var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((((max(22186, (arr_1 [21] [i_1])))) ^ (((!(var_10 < 220))))));
                var_22 *= 41532;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_16 [i_0] [13] [i_2] [13] [i_2] [i_3] = -var_19;
                            var_23 = ((var_11 < (min(11482323155652943175, (arr_13 [i_0])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_24 = 43350;
                            var_25 = -32761;
                            var_26 = (((arr_0 [i_4 + 2]) < ((((!(arr_0 [i_4 + 1])))))));
                            var_27 = (max(-43328, 6964420918056608445));
                            var_28 = (arr_1 [i_0] [16]);
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_29 = ((~((-32756 ? (~23970) : var_10))));
                                var_30 = (max(var_30, 22186));
                                var_31 = (min(var_31, (((~((-826712609 ? var_4 : ((((arr_27 [i_6] [2] [1]) >= -32739))))))))));
                                var_32 |= ((((-(arr_31 [i_7 + 1] [i_7 - 1] [i_8 + 1] [i_8 - 3] [i_6]))) < ((((min(var_9, var_6)) > var_6)))));
                                var_33 = (max(((((var_15 ? 43352 : (arr_11 [i_6] [i_8]))))), ((-(max(11482323155652943168, var_15))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
