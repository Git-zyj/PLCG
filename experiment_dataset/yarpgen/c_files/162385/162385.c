/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_17 = (max(var_0, ((var_3 ? (arr_0 [1] [i_2]) : (arr_6 [i_0 - 1])))));
                                var_18 = (((((max(var_3, (arr_14 [i_0] [i_1] [i_2] [i_3 - 1] [i_1])))) ? ((1075003845 ? 1075003845 : 1075003843)) : var_12)));
                                var_19 = (var_6 & 950783402);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_20 = var_5;
                                var_21 = ((361385339 << (3904280705012330200 - 3904280705012330200)));
                                var_22 = var_5;
                                var_23 *= (!361385339);
                                var_24 = (min(var_24, (((1 ? (var_7 | -10917) : 3904280705012330200)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (((((((var_7 ? 361385335 : var_1)) != (var_1 > var_4)))) / ((((var_2 * var_5) != var_12)))));
    var_26 &= (min(-950783384, ((var_2 ? var_15 : var_13))));
    var_27 ^= ((+(((var_0 == var_10) * ((var_1 ? var_14 : var_0))))));
    #pragma endscop
}
