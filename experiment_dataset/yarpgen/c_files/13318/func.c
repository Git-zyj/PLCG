/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13318
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_18 += ((/* implicit */unsigned short) -6988070331573797909LL);
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [(short)14]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) ((short) var_7))))))) : (((((/* implicit */_Bool) (unsigned short)23662)) ? (-5125208390371412195LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)23662)))))));
        arr_2 [i_0] = ((/* implicit */int) ((unsigned short) max((((/* implicit */int) ((short) var_4))), (((((/* implicit */int) (unsigned char)219)) + (((/* implicit */int) var_11)))))));
    }
    var_20 = ((/* implicit */long long int) ((var_17) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)128)) | (((/* implicit */int) (short)-25049))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)47)) > (((/* implicit */int) (_Bool)1)))))))) : (var_0)));
}
