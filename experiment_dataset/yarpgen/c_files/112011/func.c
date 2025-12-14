/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112011
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [14LL] [i_0 - 2] [i_0] |= ((/* implicit */short) (unsigned char)0);
                var_19 = ((((((((/* implicit */_Bool) (short)32767)) ? (arr_3 [i_0] [(signed char)8]) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) var_17)), (arr_0 [i_1]))))))) + (9223372036854775807LL))) >> (((((/* implicit */int) var_12)) - (33609))));
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_6))));
                var_21 = ((/* implicit */_Bool) ((18446744073709551615ULL) >> (((18446744073709551615ULL) - (18446744073709551561ULL)))));
            }
        } 
    } 
    var_22 ^= ((/* implicit */long long int) ((((/* implicit */int) var_1)) * (((((/* implicit */int) var_7)) >> ((((+(((/* implicit */int) var_8)))) - (176)))))));
}
