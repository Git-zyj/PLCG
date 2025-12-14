/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_13, ((min(var_6, var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 *= ((0 & (max((var_4 + var_3), (!44295)))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 |= ((((((~var_8) ? -47 : 0))) ? -25818 : (arr_4 [i_2 + 2] [22] [i_2])));
                            var_20 = (((((((0 ? 64 : 104)) != (((arr_2 [i_0]) ? -46 : -47))))) == ((((1691579881856566644 ? var_12 : var_5))))));
                        }
                    }
                }
                var_21 = (min(((-(~188))), (((((1420317425 ? var_7 : 1))) ? (var_16 << var_1) : ((min(1023, 194)))))));
                var_22 = (17169749351541380492 % 31276);
            }
        }
    }
    #pragma endscop
}
