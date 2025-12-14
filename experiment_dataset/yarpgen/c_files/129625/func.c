/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129625
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
    var_16 = ((/* implicit */signed char) var_2);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) min((((((/* implicit */int) ((short) var_2))) >> (((((/* implicit */int) arr_0 [i_0])) >> (((var_10) - (15660802173757107305ULL))))))), (((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) ((unsigned short) var_2)))))));
        var_18 = ((/* implicit */int) arr_1 [i_0] [i_0]);
        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((signed char) var_14))) ? (((/* implicit */int) ((signed char) var_13))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_14)))))) > (((/* implicit */int) ((unsigned short) var_6)))));
        var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0]))) ? (((unsigned long long int) arr_0 [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [i_0])))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))));
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        var_21 += ((/* implicit */unsigned short) min((((/* implicit */long long int) ((signed char) ((signed char) var_5)))), (arr_3 [i_1])));
        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) ((unsigned short) arr_3 [i_1])))))) - (((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_1]))) ? (((/* implicit */unsigned long long int) arr_3 [i_1])) : (((unsigned long long int) arr_3 [i_1]))))));
        var_23 = ((/* implicit */unsigned int) arr_4 [i_1]);
    }
    var_24 = ((((/* implicit */_Bool) ((unsigned short) ((signed char) var_2)))) ? (((unsigned int) ((int) var_1))) : (((unsigned int) ((unsigned short) var_14))));
}
