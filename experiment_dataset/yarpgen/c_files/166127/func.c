/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166127
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
    var_14 = ((/* implicit */int) var_4);
    var_15 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((signed char)78), (((/* implicit */signed char) var_12)))))))), ((((~(15685155757381654485ULL))) / (15685155757381654485ULL)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (+(-10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0 + 1]))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 3])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_3 [5] [i_0])) : (((/* implicit */int) (short)-20712))))) ? (((((/* implicit */_Bool) arr_2 [(unsigned char)7] [i_0])) ? (arr_1 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) 2761588316327897144ULL)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]))))))));
        var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 + 1])) || (((/* implicit */_Bool) 15685155757381654470ULL)))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0] [(signed char)1])) < (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (arr_2 [(_Bool)1] [(_Bool)1]) : (((arr_2 [i_0] [(short)1]) - (((/* implicit */int) (unsigned short)47330))))))));
    }
}
