/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167936
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
    var_10 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)24274))))) ? (max((var_0), (((/* implicit */unsigned long long int) 1095107693U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)24291)) : (((/* implicit */int) var_7)))))))) ? (((((/* implicit */_Bool) (signed char)126)) ? (23ULL) : (13260328693849126731ULL))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)255)) >> (((((/* implicit */int) var_2)) - (3790))))) << (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_3))))))))));
    var_11 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max(((+(var_8))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_7)))))))) - (max((((/* implicit */unsigned long long int) (unsigned short)41262)), (3973886921061900983ULL)))));
    var_12 ^= ((/* implicit */signed char) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) ((arr_0 [i_0] [(unsigned short)6]) | (arr_0 [(unsigned char)15] [i_0])));
        arr_3 [i_0] = ((/* implicit */int) ((arr_1 [i_0] [i_0]) | (arr_1 [i_0] [i_0])));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_4))));
    }
}
