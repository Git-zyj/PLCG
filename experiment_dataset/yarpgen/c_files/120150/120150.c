/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_2 + 9223372036854775807) << (var_1 - 868)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_13 &= (arr_2 [i_1 + 2]);
                var_14 += ((!(~-8212693024205711207)));
                var_15 &= min((arr_2 [i_1 - 1]), (((-1267790215 ? -32750 : 9223372036854775807))));
            }
        }
    }
    var_16 = (((((~(~var_11)))) ? ((var_5 ? ((var_5 ? -8030815471332706101 : var_6)) : (var_3 & var_4))) : ((((max(var_4, 1363464824375849106)))))));
    #pragma endscop
}
