/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124138
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
    var_14 = ((/* implicit */unsigned int) var_0);
    var_15 = ((/* implicit */long long int) var_12);
    var_16 = ((/* implicit */unsigned int) ((var_5) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4294967271U)) || (((/* implicit */_Bool) (short)-2078))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_17 ^= ((/* implicit */_Bool) var_13);
        arr_2 [i_0] [i_0] = ((/* implicit */short) (~(max((min((((/* implicit */unsigned long long int) var_4)), (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0])))))))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_1 [i_0 + 1]))));
        var_19 += ((/* implicit */unsigned short) var_9);
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) ((max((arr_3 [i_1] [i_1]), (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)46230)), (1281570671)))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))));
        var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)26555)) * (((/* implicit */int) (_Bool)1))))) ? ((-(max((arr_4 [i_1]), (arr_4 [i_1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-2078)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
    }
}
