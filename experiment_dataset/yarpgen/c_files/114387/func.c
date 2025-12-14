/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114387
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
    var_18 = ((/* implicit */unsigned char) var_13);
    var_19 = ((/* implicit */unsigned long long int) (signed char)-94);
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551593ULL)) ? (((/* implicit */int) var_6)) : ((+((-2147483647 - 1))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))))) : (min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) var_11)) : (var_2))), (((/* implicit */unsigned long long int) ((var_14) < (var_13))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) 18446744073709551593ULL);
        var_21 = ((/* implicit */int) arr_0 [i_0] [i_0]);
        var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12))))) ? (arr_2 [(signed char)0]) : (((((((/* implicit */int) arr_0 [i_0 - 2] [2])) + (2147483647))) << (((((/* implicit */int) var_6)) - (76)))))));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_23 += ((/* implicit */int) var_4);
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (~(((arr_7 [i_1]) | (var_7))))))));
    }
}
