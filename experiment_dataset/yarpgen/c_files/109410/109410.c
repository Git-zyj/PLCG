/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, var_14));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_21 = (min((arr_12 [i_0] [i_0]), ((var_13 + (arr_14 [i_2 + 1])))));
                                var_22 = (arr_15 [i_1] [i_2 - 2] [i_4] [i_4 + 1] [i_4 + 1]);
                            }
                        }
                    }
                    var_23 *= ((((min(-20, 0))) ? var_16 : 4627185148990866241));
                }
            }
        }
    }
    #pragma endscop
}
