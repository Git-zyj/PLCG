/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= ((var_16 ? (((-13776 != 13775) ? var_5 : ((854988754738160735 >> (647618414 - 647618403))))) : ((-3647348878 ? (20 == 13755) : -17591755318971390906))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = (((((min(85, 854988754738160735))) ? 20 : (((84 >> (2078289990 - 2078289980)))))));
                var_21 ^= ((((max(7, (!0)))) ? (~22) : (((~-38) ? (4294967295 < 57) : 230))));
            }
        }
    }
    #pragma endscop
}
