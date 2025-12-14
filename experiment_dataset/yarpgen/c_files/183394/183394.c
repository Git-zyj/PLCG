/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183394
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 ^= (((min(((-4555869754764867638 ? -2475370417628925210 : -7530761306545652529)), 1)) - (arr_5 [i_0 - 3] [i_1 + 3])));
                    var_21 = (((-1655634283780529373 | var_10) ? (!var_9) : -6959439745507108239));
                    var_22 = var_17;
                    arr_7 [i_0] [i_1] [i_2] = (min(6959439745507108238, -6959439745507108239));
                    var_23 = ((-1 ? ((-1 ? (max(6959439745507108238, 6077)) : var_3)) : 708372712081995788));
                }
            }
        }
    }
    var_24 = var_17;
    #pragma endscop
}
