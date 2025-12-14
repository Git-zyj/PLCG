/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-(min((var_16 & var_6), ((max(var_11, -18658)))))));
    var_19 = ((-(((var_10 ? var_2 : var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_20 = var_10;
                    arr_8 [7] [5] = ((((min((arr_7 [9] [i_1 + 2] [i_1]), -0))) ? (((48 ? (-32767 - 1) : (arr_4 [i_0] [i_0])))) : (((2147483632 + var_0) - (((arr_6 [i_0] [i_0]) + (arr_7 [i_0] [13] [i_0])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_21 = ((((max((arr_5 [i_0] [10]), (arr_10 [i_0] [i_0] [i_0] [i_0 - 1]))))) ? (((var_13 | var_13) & (arr_10 [i_0] [i_0] [i_3 - 1] [i_2]))) : (((((arr_11 [i_1]) ? 432328256711929745 : var_5)) ^ (var_14 | -28))));
                                var_22 = 208;
                            }
                        }
                    }
                    var_23 += (((((min(-16, var_13))) ? (~1) : var_0)));
                }
            }
        }
    }
    #pragma endscop
}
