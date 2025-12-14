/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_20 = ((((max(((((arr_3 [i_1]) < 3))), (arr_6 [14] [5] [i_0])))) ? (max(((65525 ? 65532 : -1311568620)), 65533)) : 435142717));
                                var_21 -= var_16;
                            }
                        }
                    }
                    var_22 = 12;
                    arr_15 [i_1] [i_1] [i_1 - 1] [i_2] = ((!((((!var_17) ? ((65533 ? 2 : 1)) : ((var_8 ? var_19 : 8660)))))));
                    var_23 = (((-9949 >= (arr_13 [i_2 - 1] [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [i_1]))));
                }
            }
        }
    }
    var_24 = (max(var_24, ((((1311568620 / var_14) ? -var_5 : (var_10 | var_11))))));
    #pragma endscop
}
