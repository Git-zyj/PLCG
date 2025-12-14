/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11163
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
    var_15 &= ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)29093)) || (((/* implicit */_Bool) (unsigned char)255)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)29112))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((((((/* implicit */_Bool) 1640129925154354424ULL)) ? (-4070649046188886880LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-7678))))) <= (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [(unsigned char)0] [i_0]) == (arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (arr_1 [i_0] [i_0])));
    }
}
