/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109663
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
    var_19 = ((/* implicit */long long int) var_8);
    var_20 |= ((/* implicit */int) ((((1U) - (32752U))) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)96)) + (((/* implicit */int) (unsigned short)39415)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */short) arr_1 [i_0]);
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1350774472U)) ? (((((arr_3 [i_0]) / (((/* implicit */long long int) arr_1 [i_0])))) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_14)))))) : (((((/* implicit */long long int) ((arr_1 [i_0]) / (((/* implicit */int) var_4))))) / (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0] [14ULL]) : (((/* implicit */long long int) var_8))))))));
        var_22 = ((/* implicit */signed char) 4294967291U);
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) (((-(arr_2 [i_0]))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_18))))))));
    }
    var_23 ^= ((/* implicit */unsigned short) ((var_18) * (((/* implicit */unsigned int) var_15))));
}
