/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((min(var_11, var_2)), (((var_16 << ((((var_14 ? 2572508086 : 1)) - 2572508073)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] [i_0] = min(55, -1456883701);
                var_20 |= (min((((29 ? 136 : 251658240))), 1));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_17 [i_1] [i_0] = var_18;
                                arr_18 [i_0] = (var_8 >= 0);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(-var_13, (min((!var_15), ((var_3 ? var_18 : var_2))))));
    #pragma endscop
}
