/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 124;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_18 = (((max(124, var_3)) > ((max(((var_12 ? 124 : var_14)), (var_11 > var_15))))));
                            var_19 = (~(!var_10));
                        }
                    }
                }
                var_20 = var_2;
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 4; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_21 = (((min(var_3, var_11)) << (-var_3 - 4710682841733028410)));
                                var_22 = max(13940730925349064968, -124);
                                var_23 = var_14;
                                var_24 = ((((((var_16 << (var_11 - 11491113515846358722)) > 202)))));
                                var_25 = (min(var_5, (((min(var_4, 125)) > (var_14 << var_6)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
