/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111753
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
    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((var_3) >> (((((/* implicit */int) var_5)) - (74)))))) : (((((/* implicit */unsigned long long int) var_1)) | (var_4)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) var_13);
        arr_3 [i_0] = ((/* implicit */short) max((((((/* implicit */int) ((var_0) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) << (((/* implicit */int) min((var_19), (var_16)))))), (((/* implicit */int) ((((/* implicit */int) var_8)) < (var_3))))));
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        arr_6 [(signed char)8] &= ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) / (var_4))), (((((/* implicit */_Bool) var_17)) ? (var_4) : (var_0)))))) ? (max((var_17), (((/* implicit */unsigned long long int) var_16)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (var_17)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_15)))) : (((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_14)) + (84)))))))));
        var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))) >> (((((((/* implicit */int) var_7)) % (((/* implicit */int) var_13)))) + (52)))));
    }
    for (int i_2 = 3; i_2 < 18; i_2 += 2) 
    {
        arr_10 [i_2] [(signed char)16] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_10)) + (2147483647))) >> (((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (var_18)))), (var_4))) - (4006503439932051553ULL)))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */long long int) var_15))))) | (((6113579191686066614ULL) - (12333164882023485001ULL)))));
        var_23 ^= ((/* implicit */short) ((((/* implicit */int) var_8)) >= (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_2)))))));
    }
}
