/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178619
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) << (((((/* implicit */int) var_7)) + (62)))))) ? (((((/* implicit */_Bool) var_6)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        arr_2 [6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [16U]) : (arr_1 [1LL]))) + (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) arr_0 [4U])) : (arr_1 [i_0])))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) || (((/* implicit */_Bool) arr_0 [i_0 - 1])))))) : (arr_1 [i_0 + 2])));
    }
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_7)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))) ? (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_5))));
}
