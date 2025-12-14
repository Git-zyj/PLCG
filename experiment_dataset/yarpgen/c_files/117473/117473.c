/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (arr_0 [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_18 = (~var_8);
                                var_19 = (((((-5 ? 1 : 1))) ? (max((((var_7 ? var_9 : (arr_6 [i_0] [i_1] [i_0])))), (max(8305899051586663189, var_3)))) : var_5));
                                var_20 = (--94);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
