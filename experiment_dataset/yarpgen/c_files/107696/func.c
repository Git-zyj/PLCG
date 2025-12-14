/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107696
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [(short)1] [i_0] = ((/* implicit */_Bool) (unsigned char)0);
        arr_3 [i_0] [(unsigned short)8] &= ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (534083730573625215ULL) : (arr_1 [i_0])))));
        arr_4 [i_0] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0]))));
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (((+(17912660343135926369ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)253)) & (((/* implicit */int) arr_0 [i_0]))))))))));
    }
    for (int i_1 = 1; i_1 < 16; i_1 += 4) 
    {
        var_14 *= (unsigned char)0;
        arr_7 [i_1] = ((/* implicit */signed char) min((4611686018427387904LL), (min((((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))) : (-7679829411943088169LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) var_9)))))))));
    }
    for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 3) 
    {
        arr_10 [i_2 - 2] [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) ((arr_6 [i_2 + 1]) | (((/* implicit */int) (unsigned char)19))))) / ((~(7607895102649537749ULL))))), (((/* implicit */unsigned long long int) arr_0 [i_2]))));
        arr_11 [i_2] = ((/* implicit */_Bool) (unsigned char)255);
        arr_12 [i_2 + 1] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) 3097830934220004011LL)), (((((/* implicit */_Bool) arr_0 [i_2 - 3])) ? (min((((/* implicit */unsigned long long int) arr_5 [i_2 - 2] [i_2 - 2])), (7607895102649537749ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2]))))))))));
    }
    var_15 *= ((/* implicit */signed char) 17912660343135926400ULL);
    var_16 -= ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) ((((/* implicit */int) var_2)) << (((((/* implicit */int) var_9)) - (89)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 7607895102649537749ULL)) ? (2860989056101822338ULL) : (534083730573625215ULL))))))));
    var_17 += ((/* implicit */short) var_8);
}
