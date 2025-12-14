/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144139
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
    var_13 = ((/* implicit */unsigned char) (+(var_8)));
    var_14 = ((/* implicit */unsigned short) min((((/* implicit */int) var_4)), ((+(((/* implicit */int) var_5))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) (((+(17U))) | (((/* implicit */unsigned int) ((var_10) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775789LL))) + (27LL))))))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)127)) == (((/* implicit */int) arr_3 [i_0]))))) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)111))))) >= ((+(var_12))))))));
        var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1]))) : (arr_1 [14ULL] [i_0 + 1])))) ? (max((arr_1 [i_0] [i_0 + 2]), (arr_1 [i_0] [i_0 + 1]))) : (((/* implicit */long long int) (+(((/* implicit */int) var_4)))))));
        var_17 = ((/* implicit */int) var_9);
        arr_4 [i_0] = ((((((/* implicit */int) (unsigned char)141)) & ((+(((/* implicit */int) arr_2 [i_0] [(unsigned short)4])))))) * (((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) (signed char)-13))))));
    }
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) ((((/* implicit */_Bool) (short)11480)) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)137))))))))));
}
