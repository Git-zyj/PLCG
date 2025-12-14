/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_17 = -1152034902;
                            var_18 ^= (min((((245 << (1590626630 - 1590626617)))), 4294967281));
                            var_19 = -1152034910;
                            var_20 *= (min(1152034902, (max(-1152034902, 4294967281))));
                        }
                    }
                }
                var_21 ^= (min(((((max(1152034918, 4294967281))) / (max(496329916, 14199115765573947609)))), (!65535)));
                var_22 -= (max((min((max(248, 4294967295)), 3544108313)), (--496329916)));
            }
        }
    }
    var_23 = var_12;
    var_24 = -1152034910;
    var_25 = 1629377367;
    #pragma endscop
}
