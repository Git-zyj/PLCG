/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132265
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
    var_18 = ((/* implicit */unsigned short) ((var_0) | (((/* implicit */int) (short)-24442))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [(unsigned short)2] [i_0] &= ((/* implicit */long long int) 2790963961U);
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(0ULL))))));
        var_20 = 18446744073709551615ULL;
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_4 [i_1]) : (((/* implicit */int) (signed char)-18))))) ? (max((0ULL), ((+(0ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 4026531840U)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))))))))));
        arr_8 [i_1] &= ((/* implicit */int) (_Bool)1);
    }
}
