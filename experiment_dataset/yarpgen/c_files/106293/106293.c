/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((32755 ? var_18 : ((var_1 ? 15 : -488080061)))) < (!var_4)));
    var_21 = ((~((~(~-488080061)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_22 = ((-(~44)));
                            var_23 = (min(((4294963200 ? -44 : 0)), -177915752));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    var_24 -= ((-(-8491661787372813689 + 9223372036854775807)));
                    var_25 = 18446744073709551595;
                }
            }
        }
    }
    var_26 = 3221225472;
    #pragma endscop
}
