/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141211
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
    var_10 += ((/* implicit */_Bool) 12945177146433244698ULL);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_11 &= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))));
        var_12 = ((/* implicit */short) ((((/* implicit */unsigned long long int) 3708565534U)) - (arr_1 [i_0 + 1])));
        var_13 = 4663068808403884009ULL;
        arr_2 [i_0 - 1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (3752599506U)))) : (arr_1 [i_0 + 1])));
        var_14 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)6)) >= (((/* implicit */int) var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : ((~(arr_1 [i_0 - 1])))));
    }
    for (short i_1 = 3; i_1 < 13; i_1 += 1) 
    {
        arr_5 [i_1 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_1 - 3] [i_1 - 2]))))) - (((long long int) arr_0 [i_1 - 1] [i_1 - 1]))));
        var_15 = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 1])) + (((/* implicit */int) (unsigned char)140))))));
        var_16 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1]))) ^ (max((7118690966914970751ULL), (arr_1 [(unsigned short)7]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 1])))))));
    }
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(288230376151711743LL)))) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) var_1))))))) ? (max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) 1322162536315760174ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) var_4))));
}
