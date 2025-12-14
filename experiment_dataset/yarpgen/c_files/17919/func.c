/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17919
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
    var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) -9127454597162124931LL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (((-9127454597162124941LL) - (((/* implicit */long long int) 2001067467U)))))) >= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (+(var_12))))))));
    var_18 = ((/* implicit */unsigned long long int) ((9223372036854775795LL) + (-5776643885976781621LL)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((short) arr_2 [i_0] [i_0]);
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) arr_1 [(unsigned char)9]))));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_7 [i_1] = arr_6 [i_1] [i_1];
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_6 [i_1] [i_1])))) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])))))));
        arr_9 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9127454597162124917LL)) ? (((/* implicit */long long int) 1512364860U)) : (arr_0 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_1])))) : (arr_6 [i_1] [i_1]))) ^ (arr_0 [i_1])));
        arr_10 [i_1] [i_1] |= ((/* implicit */unsigned int) max((9127454597162124933LL), (9127454597162124931LL)));
    }
    var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_8)))) ? (((/* implicit */unsigned long long int) var_14)) : (((unsigned long long int) (unsigned char)250))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8449366200757904595LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_16))))) ? (((((/* implicit */int) var_15)) >> (((((/* implicit */int) var_1)) - (49))))) : (((/* implicit */int) ((_Bool) var_12))))) : (max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) 1914534700U)) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) var_7))))))));
}
