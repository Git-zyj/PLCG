/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127274
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
    var_14 *= ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_13)), (var_12))))) / (var_9))), (((/* implicit */unsigned int) var_2))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (max((var_9), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_8))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * ((+(((/* implicit */int) var_13)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((long long int) min((((/* implicit */long long int) (signed char)58)), (2150320150962402918LL)))))));
        var_18 = ((/* implicit */int) ((unsigned long long int) -2147483645));
        arr_2 [i_0] = ((/* implicit */int) ((((((/* implicit */int) (!((_Bool)1)))) <= (arr_1 [i_0] [i_0]))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) (+(arr_1 [i_0] [i_0]))))));
        var_19 -= ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) arr_1 [i_0] [i_0])) >= (((((/* implicit */unsigned int) arr_1 [i_0] [(short)1])) - (arr_0 [i_0]))))))));
    }
}
