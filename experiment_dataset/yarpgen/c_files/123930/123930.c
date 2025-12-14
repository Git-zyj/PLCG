/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [8] = ((max(var_0, ((0 ? 24412 : 32767)))));
                var_16 = ((var_7 ? (min((min((arr_0 [i_0]), var_8)), ((((arr_2 [i_0] [i_1] [i_0]) % -20038))))) : -2147483645));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 ^= ((-29072 ? var_4 : 0));
                                var_18 ^= ((-(arr_8 [i_3] [i_1] [i_2] [i_3] [i_4] [i_1])));
                                var_19 = 5244171051684319755;
                                var_20 = arr_10 [i_0] [i_0] [i_0];
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_2] [i_2] &= (arr_8 [i_0] [i_1] [i_2] [i_2] [i_1] [i_0]);
                    arr_14 [i_2] [i_0] [i_2] = var_0;
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            arr_21 [i_0] [i_1] [i_5] [6] [i_6] = ((((((-965795040 ? -1981249186 : 1)) + 2147483647)) << (((((((var_2 ? (-32767 - 1) : 1))) ? (arr_15 [i_0] [i_1] [4]) : (arr_6 [i_0] [i_1] [i_0] [i_0]))) - 28198))));
                            arr_22 [i_0] [i_1] [i_5] [i_0] = (14440 != (arr_9 [1] [i_1] [i_0]));
                            var_21 ^= ((max(var_11, (arr_15 [i_0] [i_1] [i_5]))));
                        }
                    }
                }
            }
        }
    }
    var_22 = (((((!var_2) ? var_3 : -965795037))) ? -var_3 : ((((var_5 ? var_10 : var_6)) * var_2)));
    var_23 -= 255;
    #pragma endscop
}
