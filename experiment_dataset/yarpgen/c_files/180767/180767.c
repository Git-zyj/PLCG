/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = (max(2305843008139952128, (0 && 18446744073709551598)));
                    var_18 = (min(2285490076, ((2009477216 ? (-9223372036854775807 - 1) : 3807146416))));
                }
            }
        }
    }
    var_19 = (min((max(536739840, (18 ^ 1814088045))), var_14));
    #pragma endscop
}
