/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144420
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_10 += max((((/* implicit */unsigned long long int) (unsigned char)255)), (0ULL));
        var_11 = arr_2 [15U];
        var_12 ^= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) * ((-((-(arr_3 [i_0])))))));
        var_13 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_1 [i_0])))) > ((~(arr_0 [i_0] [i_0]))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 3) 
    {
        var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_1 - 2])) ? (((((/* implicit */_Bool) arr_4 [i_1 + 2])) ? (arr_4 [i_1 + 2]) : (arr_6 [i_1]))) : (((arr_4 [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [2ULL]))))))) * (((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(_Bool)1]))) : (arr_4 [i_1 + 1])))));
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [12U]))))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (9458590698134217671ULL) : (((((/* implicit */_Bool) 2ULL)) ? (arr_6 [i_1]) : (8988153375575333935ULL))))))))));
    }
    var_16 |= ((/* implicit */unsigned int) var_1);
    var_17 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)14162))) - (17ULL))), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))) * (((/* implicit */int) var_7)))))));
}
