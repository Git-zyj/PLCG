/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_2] = (max(((((((arr_5 [i_0] [i_0]) ? 96 : var_15))) ? ((max(var_5, (arr_2 [i_0] [i_0])))) : ((max(var_1, var_3))))), ((var_7 ? 132 : -var_16))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]);
                                var_22 = (min((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))), 132));
                                var_23 = (max((max(((max((arr_1 [i_0] [i_0]), (arr_8 [i_0] [i_1] [i_4] [i_1])))), var_6)), 1));
                                var_24 = (arr_7 [i_0] [i_0] [i_2] [i_3] [i_3]);
                                var_25 = ((~(((!(((arr_2 [i_0] [i_0]) && (arr_10 [i_0] [i_0] [i_4] [i_0] [i_4] [i_2] [i_0]))))))));
                            }
                        }
                    }
                    arr_12 [i_0] = max((arr_3 [i_2 + 1] [i_0 + 4]), ((-(arr_4 [i_2 - 2]))));
                    var_26 = ((~((-2147483643 / ((var_10 ? var_12 : 52359))))));
                }
            }
        }
    }
    #pragma endscop
}
