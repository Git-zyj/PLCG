/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    var_18 |= var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [i_0] [10] &= ((2061023286207515856 ? ((2975256597960707625 ? 6413 : 14)) : (!17300)));
                var_19 += (-var_12 ? (var_12 > -171881957) : (~var_2));
                var_20 = (((((!(var_15 == var_3)))) >> (((var_5 & var_7) % 63))));
                arr_7 [15] [i_1] = (max(17310, 11));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_15 [i_4] = (((((-((var_4 ? -6193785917521093555 : 1324310947))))) ? var_14 : (((((var_8 ^ -3128490244856439562) + 9223372036854775807)) << (1 - 1)))));
                                var_21 *= ((!(((var_3 ? 37495 : var_6)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
