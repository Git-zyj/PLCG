/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165588
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
    var_12 |= ((/* implicit */short) max((((((/* implicit */_Bool) 1084388885420241632LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) (unsigned char)243))))) : (1125899906842623ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned short)8191)))))));
    var_13 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (-(((5736387104835056054ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0]);
    }
}
