/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116269
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
    var_17 += ((/* implicit */unsigned short) max((((/* implicit */int) (!((_Bool)1)))), ((((!(((/* implicit */_Bool) 4294967295U)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_11))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 15; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_3))))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((var_16) ^ (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)226))))))))))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_4)), (arr_1 [i_0])))) : (max((var_3), (((/* implicit */unsigned long long int) arr_0 [12U]))))))) ? (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226))) : (var_1))), (min((((/* implicit */unsigned int) var_8)), (arr_1 [i_0 - 4]))))) : (arr_1 [i_0])));
        var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) ? (max((arr_1 [i_0 + 2]), (((/* implicit */unsigned int) arr_0 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) < ((~(var_3)))));
    }
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_10))) : (min((var_3), (var_9)))))));
}
