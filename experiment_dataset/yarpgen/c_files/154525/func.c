/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154525
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
    var_12 = ((/* implicit */unsigned long long int) ((long long int) ((max((((/* implicit */long long int) (unsigned char)159)), (var_5))) & (((/* implicit */long long int) ((/* implicit */int) var_2))))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_13 *= ((/* implicit */unsigned long long int) (-(67108863)));
        var_14 = ((/* implicit */signed char) ((((((/* implicit */int) var_3)) < (((/* implicit */int) arr_0 [i_0 + 1])))) ? (var_1) : (((/* implicit */int) min((arr_0 [i_0 - 2]), (var_4))))));
        var_15 = var_11;
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) < (((/* implicit */int) arr_3 [i_1] [i_1]))))) << (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (14844208411021273793ULL)))));
        var_17 += ((/* implicit */short) ((3602535662688277822ULL) * (((/* implicit */unsigned long long int) -67108875))));
        var_18 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))));
    }
}
