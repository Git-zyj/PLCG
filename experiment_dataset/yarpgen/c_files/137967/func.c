/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137967
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)-45), (var_1)))) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) var_8))));
        var_10 |= ((/* implicit */unsigned char) var_7);
    }
    var_11 = ((/* implicit */signed char) ((((long long int) var_7)) / (((/* implicit */long long int) max((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) (short)15925)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36331))) : (0U))))))));
    var_12 = ((min((var_7), (((((/* implicit */_Bool) 0ULL)) ? (8190768189380225117LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-97))))))) & (((/* implicit */long long int) ((/* implicit */int) var_0))));
    var_13 -= ((/* implicit */signed char) ((long long int) var_5));
    var_14 = ((/* implicit */unsigned long long int) ((short) (unsigned short)36331));
}
