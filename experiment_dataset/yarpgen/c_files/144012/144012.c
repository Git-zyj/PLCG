/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144012
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
                var_19 = 0;
                var_20 = (((min(-2462675530, ((var_4 ? 2462675533 : var_16))))) || ((1832291762 || (arr_3 [i_0]))));
                var_21 = (min((((((((-1 + 2147483647) << (((-83 + 94) - 11))))) ? (((max((arr_2 [i_0] [i_1]), var_8)))) : (max(var_15, var_6))))), ((17 ? (((65535 ? 9 : var_11))) : (34634616274944 * -18)))));
            }
        }
    }
    var_22 = (((((var_8 ? 8361 : ((var_0 ? var_5 : var_11))))) ? (~var_11) : ((var_17 ? (((1832291762 ? 27787 : 538058664))) : var_15))));
    var_23 = (max(var_23, (0 + 68719476735)));
    var_24 = var_2;
    #pragma endscop
}
