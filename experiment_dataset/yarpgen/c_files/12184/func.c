/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12184
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
    var_18 |= ((/* implicit */int) var_8);
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_13)) - (121)))))) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (+(((/* implicit */int) (short)2909)))))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_0 [i_0])))))))) : (max((((var_17) + (((/* implicit */long long int) ((/* implicit */int) var_15))))), (((/* implicit */long long int) var_4))))));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) var_12)))) : (((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_1 [i_0]))))))) ? (((((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) arr_1 [i_0]))))) >> (((min((arr_0 [(short)8]), (arr_0 [2]))) - (3968815147U))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(signed char)2])) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((signed char) var_15))))))))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) arr_2 [i_1]))));
        var_24 = var_3;
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)16383)) ^ (((/* implicit */int) (unsigned short)16363))))) && (((/* implicit */_Bool) var_12))));
        var_26 += ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(unsigned char)14]))) == (arr_7 [(short)12]))))));
    }
}
