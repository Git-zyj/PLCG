/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((((1 ^ 5733) && ((((arr_3 [i_2] [i_0]) ? ((max(var_5, var_15))) : (var_5 && var_1)))))))));
                                var_19 = var_3;
                            }
                        }
                    }
                    var_20 &= ((2 ? (arr_13 [i_1] [10] [i_1 - 1] [10] [i_1]) : 105934404));
                }
            }
        }
    }
    var_21 = -10694;
    #pragma endscop
}
