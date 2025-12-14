/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114876
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
        var_15 = ((/* implicit */long long int) (unsigned char)251);
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_9) : (var_9)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((((arr_1 [i_0] [i_0]) + (9223372036854775807LL))) >> (((arr_1 [i_0] [i_0]) + (3175494211969312719LL)))))));
        var_17 |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)4)) ? (2060468831U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) + (((/* implicit */unsigned int) ((((/* implicit */int) (short)18519)) % (((/* implicit */int) (unsigned char)4)))))));
        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)125)))))))));
    }
    var_19 = ((/* implicit */long long int) ((unsigned int) ((var_8) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((var_8) ? (var_12) : (((/* implicit */long long int) 0U)))))));
}
