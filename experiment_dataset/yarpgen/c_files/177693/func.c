/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177693
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)60745)) && (((/* implicit */_Bool) (short)0)))) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))));
        var_20 = ((/* implicit */signed char) (+(((((((/* implicit */_Bool) (short)-26236)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [(unsigned short)1]))) : (var_8))) ^ (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)159))) / (var_6)))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)45325)) ^ (((/* implicit */int) (unsigned char)159))))) ^ (((((/* implicit */_Bool) arr_1 [(unsigned short)0] [i_0])) ? (var_0) : (arr_1 [i_0] [i_0])))))) && (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
    }
    var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52221))) : (var_18)))) ? (min((var_4), (var_8))) : (var_4))) % (((/* implicit */long long int) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_11))))))))));
    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))));
    var_23 = ((/* implicit */short) (signed char)-86);
}
