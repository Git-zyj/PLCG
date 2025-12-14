/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126825
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
    var_15 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)224))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)15))))) : (var_5))), (((/* implicit */unsigned long long int) var_12))));
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((short) var_13)))));
    var_17 = ((((/* implicit */_Bool) (unsigned char)48)) ? (max((((unsigned int) (signed char)-11)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_3))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)26)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (864793371) : (((/* implicit */int) var_11))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (-864793357) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_1 [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) 917719180U);
    }
}
