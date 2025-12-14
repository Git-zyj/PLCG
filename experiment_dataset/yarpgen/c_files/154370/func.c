/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154370
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
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        arr_4 [i_0] |= ((unsigned long long int) (-(var_4)));
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((arr_2 [i_0 + 2]) == (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
        var_17 = ((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? (((/* implicit */unsigned long long int) var_14)) : (((15067752603764949199ULL) / (((/* implicit */unsigned long long int) arr_2 [6])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 -= ((/* implicit */short) min((((((/* implicit */_Bool) arr_6 [i_1] [2U])) ? (arr_6 [i_1] [i_1]) : (var_11))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) var_4)) : (var_14)))))))));
        var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_1]))))) / (min((((/* implicit */unsigned long long int) var_4)), (var_11)))));
        arr_7 [i_1] |= -255778162;
    }
    var_20 -= ((/* implicit */unsigned long long int) var_1);
}
