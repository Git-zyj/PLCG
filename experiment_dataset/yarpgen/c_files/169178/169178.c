/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((var_2 % ((((((-10435 + 2147483647) << (((-19 + 48) - 29))))) ? ((var_10 ? 38 : var_0)) : 3432)))))));
    var_21 += (((var_9 <= var_15) ? ((var_5 ? 16776192 : 1061)) : var_0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_22 *= ((var_0 ? (arr_7 [i_0]) : var_10));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] = (!var_14);
                                var_23 = (((var_14 * var_8) >> ((((max(-3432, (arr_6 [i_0] [i_2] [i_4])))) & (var_7 < 19856)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
