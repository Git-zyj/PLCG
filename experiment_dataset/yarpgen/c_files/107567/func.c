/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107567
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
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_7)), (4080607327U)))) : (max((549755813888ULL), (((/* implicit */unsigned long long int) var_1))))))) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) var_2)) ? (arr_1 [9LL]) : (arr_1 [i_0]))), (((/* implicit */unsigned int) var_6))))) : (var_15)));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) -2449856399420691768LL))) ? (var_1) : (((/* implicit */unsigned int) ((1167866320) - (1167866319))))));
            }
        } 
    } 
    var_21 = (((((((((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) ((/* implicit */int) var_3))))) + (9223372036854775807LL))) << (((9223372036854775797LL) - (9223372036854775797LL))))) <= (((/* implicit */long long int) -534722854)));
    var_22 = (+(max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_3)) : (var_2)))))));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-4709376884491848521LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))) : (9223372036854775807LL)));
}
