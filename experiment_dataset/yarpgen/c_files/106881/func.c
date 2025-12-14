/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106881
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
    var_19 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) var_17);
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 + 2])) ? (arr_0 [i_0 - 2] [i_0 - 4]) : (((/* implicit */int) var_2)))) >> (((((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) arr_1 [i_0 - 3] [7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_13))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (2) : (var_15)))))) - (4294967182U))))))));
        arr_3 [(signed char)9] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) >> (((-227162031732326658LL) + (227162031732326684LL)))));
        var_21 = ((/* implicit */long long int) (unsigned char)150);
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1])) ^ (((/* implicit */int) max((arr_6 [i_1]), (arr_6 [i_1]))))))), (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (var_12))) + (((/* implicit */unsigned long long int) ((var_10) / (((/* implicit */int) var_0)))))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (-96395609) : (((((var_6) + (2147483647))) >> (((((var_12) << (((((/* implicit */int) (signed char)-43)) + (89))))) - (7227784820720402405ULL)))))));
        var_24 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_16)))) >> (((var_4) - (9274124282168131977ULL)))));
        arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_16)) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)222)) ? (var_15) : (var_18)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)162)))) : (((((/* implicit */_Bool) (short)12036)) ? (((/* implicit */int) arr_4 [i_1])) : (var_15))))) - (5)))));
    }
}
