/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129628
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
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_16 &= ((/* implicit */unsigned int) (~((+(((/* implicit */int) (short)-30225))))));
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0 - 1] [i_1])) & (((/* implicit */int) var_1))))) & (var_5)));
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned char)11]))) - ((+(arr_1 [i_0])))));
        }
    }
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) == (9223372036854775807LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((unsigned int) var_2)) >> (((((-9223372036854775806LL) / (((/* implicit */long long int) ((/* implicit */int) var_4))))) + (102481911520608628LL))))))))));
}
