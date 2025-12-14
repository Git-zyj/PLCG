/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154319
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
    var_16 += ((/* implicit */short) ((min((var_14), (((/* implicit */long long int) (-(var_3)))))) - (((/* implicit */long long int) min((((/* implicit */unsigned int) ((var_4) != (((/* implicit */long long int) var_9))))), (min((4294967295U), (((/* implicit */unsigned int) var_0)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */int) var_6)), (((((/* implicit */int) var_2)) & (((/* implicit */int) var_15))))))) ^ (((var_14) | (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (1U))))))));
        var_18 += ((/* implicit */int) ((((/* implicit */_Bool) ((4294967295U) * (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (4294967288U)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -308198314)) || (((/* implicit */_Bool) 6165958065463211619ULL)))))) : (var_8)));
    }
    var_19 = ((/* implicit */_Bool) 16382LL);
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / ((-(((((/* implicit */_Bool) var_0)) ? (305782421818692985LL) : (((/* implicit */long long int) 12U))))))));
    var_21 ^= ((/* implicit */unsigned char) ((((min(((~(((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */_Bool) -8974779369406705196LL)) || (((/* implicit */_Bool) var_13))))))) + (2147483647))) << (((((/* implicit */int) ((unsigned char) -8974779369406705196LL))) - (212)))));
}
