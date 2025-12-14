/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122913
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 |= ((/* implicit */int) ((short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_9))))))));
        var_18 |= ((/* implicit */unsigned int) arr_2 [i_0] [i_0 - 1]);
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_19 = ((/* implicit */int) max((((((((/* implicit */_Bool) var_8)) ? (arr_4 [i_1]) : (((/* implicit */unsigned int) var_8)))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_7))))))), (((/* implicit */unsigned int) ((int) (-(arr_4 [i_1])))))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_5 [i_1]))));
    }
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((var_6), (((/* implicit */short) var_14)))), (((/* implicit */short) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_14)))))))) || (((/* implicit */_Bool) ((unsigned char) ((6997643163898800888LL) + (((/* implicit */long long int) var_1))))))));
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) var_11))) & (((((/* implicit */_Bool) max((((/* implicit */short) var_14)), (var_5)))) ? (-4454874192053304171LL) : (min((-4454874192053304161LL), (((/* implicit */long long int) var_1)))))))))));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)18521)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_10)))) & (((/* implicit */int) ((((/* implicit */int) var_5)) > (var_0))))))) ? (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_6))))))) : (var_4)));
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) max((((/* implicit */unsigned int) var_13)), (var_15))))));
}
