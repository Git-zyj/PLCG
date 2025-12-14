/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176237
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
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) min((var_8), (((/* implicit */long long int) var_12)))))) || (((/* implicit */_Bool) var_12))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)48063)), (824176940U)))) ? (max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)48063))))), (var_0))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48063)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)17490))));
        arr_4 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */int) (unsigned short)48078)) >> (((-4172743425634309314LL) + (4172743425634309345LL)))))));
        var_17 = ((/* implicit */_Bool) (~(((arr_0 [i_0] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17468)))))));
    }
}
