/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130905
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
    for (long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_15 *= ((/* implicit */unsigned int) ((int) arr_1 [18U]));
        var_16 = ((/* implicit */int) (~(max((((((/* implicit */_Bool) 521910872)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), ((short)16483))))))));
    }
    var_17 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)8610))) >= (4611681620380876800ULL));
    var_18 |= ((/* implicit */unsigned short) var_8);
    var_19 = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)59)) != (((/* implicit */int) (signed char)59)))) ? (((/* implicit */int) min(((signed char)64), ((signed char)-59)))) : ((+(((/* implicit */int) (unsigned short)39119))))));
}
