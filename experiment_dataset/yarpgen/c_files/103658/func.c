/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103658
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_15 -= ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) / (min((((/* implicit */long long int) arr_0 [i_0])), (arr_1 [i_0] [i_0]))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) 37003720U)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) : (arr_1 [i_0] [i_0])))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_2))))))) + (((((/* implicit */_Bool) ((short) arr_0 [i_0]))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_0 [5ULL]))));
        var_18 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) 10483668)) / (4294967295U)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)-7968))))) : (arr_1 [i_0] [(unsigned char)16])));
    }
    var_19 = var_1;
}
