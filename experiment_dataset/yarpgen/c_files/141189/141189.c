/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= (var_11 | var_4);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = 1;
                    var_14 = (((arr_0 [i_0]) / 1253525442268554971));
                    var_15 = (max(-var_4, (-2147483647 - 1)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_10 [i_0] = max(((2032908331 ? (7316700215989708287 + 2032908331) : var_1)), var_4);
                                var_16 -= (((arr_5 [i_3]) < 2093239892247453601));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
