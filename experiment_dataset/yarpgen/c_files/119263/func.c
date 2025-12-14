/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119263
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
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_1))));
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) 1739465541))));
    var_19 = ((/* implicit */unsigned char) (signed char)-64);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) (((!(((/* implicit */_Bool) -2290967285481835864LL)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [i_0]))) : (((((/* implicit */int) (signed char)42)) - (-1478031515)))))) : (((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (339163065U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) (unsigned char)221)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
        var_20 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_1 [(unsigned char)17])) ? (var_4) : (((/* implicit */unsigned long long int) arr_1 [i_0])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [20LL]) <= (arr_0 [i_0]))))))) ? (((((/* implicit */int) var_8)) % (arr_1 [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)122))) : (var_11)))) ? (((((/* implicit */_Bool) -420157520)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [10])) || (((/* implicit */_Bool) arr_1 [i_0])))))))));
    }
}
