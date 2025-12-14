/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((((max((max(27583, -27583)), (max(-27584, 0))))) * ((53683 >> (((max(27583, 15)) - 27567))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_18 -= 181;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, 2));
                            var_20 |= (min((min(27583, 2254068725508915074)), ((min((4096 || 199), (-72 ^ 176))))));
                            var_21 = 8113875183970683408;
                            var_22 = -10;
                            var_23 -= 27579;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_24 = (4294967295 | 74);
                            var_25 = 168;
                        }
                    }
                }
                var_26 = 15;
            }
        }
    }
    #pragma endscop
}
