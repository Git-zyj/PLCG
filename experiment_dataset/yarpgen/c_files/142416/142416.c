/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_14 = (min(var_14, ((max(26230, (-104 * -127))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_15 = (max(var_15, ((((!4294967295) && ((max(26230, 26230))))))));
                            var_16 = ((26230 << (((((var_9 << (var_13 - 3260184572)))) - 4741891626529829161))));
                            var_17 = (min(var_17, (var_5 * -80)));
                        }
                    }
                }
            }
        }
    }
    var_18 = (-26231 && 26230);
    #pragma endscop
}
