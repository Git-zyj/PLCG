/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169458
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_10 = (((((3824497249 ? 1570140821937905416 : (((177 ? 17474 : 3856535560)))))) ? 0 : ((17474 ? 546379500 : -32024))));
                var_11 = (min(var_11, ((min(((-501322143 >> (4216194937 - 4216194936))), (((4216194937 ? 98 : -18857))))))));
                var_12 *= ((-6637959992087873477 ? ((((((-153263157728023205 ? 2610271364 : 255)) < (((3824497256 ? -4573 : 246))))))) : ((((min(-4553, 716833941))) ? (((9031727645330142861 ? 0 : -2095025395303145758))) : ((574208952489738240 ? 438431735 : 7835289944700724949))))));
            }
        }
    }
    var_13 = var_9;
    #pragma endscop
}
