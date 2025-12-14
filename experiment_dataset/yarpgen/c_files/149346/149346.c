/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_16 = var_7;
                            var_17 = ((36952 == ((-343730667 ? 1 : -1))));
                            var_18 ^= (((((var_5 == -1209735732) == var_14)) || (92 ^ 0)));
                        }
                    }
                }
                var_19 = var_3;
            }
        }
    }
    #pragma endscop
}
