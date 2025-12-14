/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112847
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (((-(2292918542U))) % ((+(2292918543U))))))));
        var_19 = ((/* implicit */unsigned short) (-(min((max((arr_0 [i_0]), (2292918542U))), (arr_0 [i_0 - 1])))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned long long int) max(((+(2002048771U))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)88)) <= (((/* implicit */int) arr_4 [i_1])))))));
        var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2002048754U)) ? (((unsigned int) (_Bool)1)) : (((((2292918532U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))));
        var_21 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 76738168)) ? (((/* implicit */int) (short)21547)) : (((/* implicit */int) (_Bool)1))))), ((+(((((/* implicit */_Bool) arr_3 [i_1])) ? (2292918522U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))))));
    }
    var_22 = ((/* implicit */int) var_14);
}
