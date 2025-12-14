/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134868
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
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (short)32767))));
        var_15 = ((/* implicit */unsigned char) var_6);
    }
    for (signed char i_1 = 1; i_1 < 23; i_1 += 1) 
    {
        var_16 ^= ((int) ((arr_3 [(short)24]) ? (((/* implicit */int) arr_3 [18U])) : (arr_4 [2U])));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) var_2);
        var_17 = (i_1 % 2 == zero) ? (((((((/* implicit */_Bool) ((int) arr_3 [i_1]))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_13)) + (2147483647))) << (((/* implicit */int) arr_3 [i_1]))))) : (max((((/* implicit */unsigned int) 314353348)), (var_2))))) >> (((((((/* implicit */_Bool) (unsigned char)111)) ? (6840801205262473652ULL) : (((/* implicit */unsigned long long int) arr_4 [i_1])))) - (6840801205262473631ULL))))) : (((((((/* implicit */_Bool) ((int) arr_3 [i_1]))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_13)) + (2147483647))) << (((((/* implicit */int) arr_3 [i_1])) - (1)))))) : (max((((/* implicit */unsigned int) 314353348)), (var_2))))) >> (((((((/* implicit */_Bool) (unsigned char)111)) ? (6840801205262473652ULL) : (((/* implicit */unsigned long long int) arr_4 [i_1])))) - (6840801205262473631ULL)))));
    }
    var_18 = ((/* implicit */int) var_11);
    var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)26723)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)144))) / (var_7))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
}
