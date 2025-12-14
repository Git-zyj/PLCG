/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16371
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
    var_19 ^= (~(((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (var_11))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
    var_20 = ((/* implicit */unsigned int) ((min((((var_17) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), ((_Bool)1))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) var_16)) ? (var_18) : (-1))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14)))))))));
    var_21 |= ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_4)) ? (var_11) : (((/* implicit */unsigned int) max((-1), (((/* implicit */int) var_10))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_3)), (var_1))) != (((/* implicit */unsigned long long int) var_2)))))));
    var_22 ^= ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((var_16) > (((/* implicit */unsigned int) var_2)))))) == ((+(var_16))))) ? ((-(((/* implicit */int) ((-15) >= (-15)))))) : (((/* implicit */int) ((((/* implicit */_Bool) -15)) && (((/* implicit */_Bool) 29)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 - 1])) / ((+(((/* implicit */int) var_8))))))) | (((((unsigned long long int) -1)) | (((((/* implicit */_Bool) arr_1 [7LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (var_17)))))));
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))) < (arr_0 [i_0 + 1]))), ((!(((/* implicit */_Bool) arr_1 [i_0 + 1])))))))));
    }
}
