/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_10 = ((+(((((10306586307824558085 ? (-9223372036854775807 - 1) : (-9223372036854775807 - 1)))) ? 1 : ((1078793665 ? 8140157765884993510 : 10306586307824558105))))));
                var_11 *= 16436626537527187273;
                var_12 = ((((((1 << (((((-9223372036854775807 - 1) - -9223372036854775799)) + 28)))) % 10306586307824558054))) ? (max(9223372036854775807, (10306586307824558114 - 10306586307824558105))) : (((255 ? 15692 : ((~(-9223372036854775807 - 1)))))));
                var_13 -= (min(((((((0 ? 10306586307824558085 : 39))) && 594097460))), 9700165099364560302));
            }
        }
    }
    var_14 = 7;
    #pragma endscop
}
