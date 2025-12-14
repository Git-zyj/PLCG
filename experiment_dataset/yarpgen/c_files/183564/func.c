/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183564
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
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_12 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))));
        var_13 = ((((/* implicit */_Bool) arr_1 [8U] [i_0 - 1])) ? (((/* implicit */long long int) (~(((/* implicit */int) var_7))))) : (((-5367045711763173607LL) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))));
    }
    var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) 5367045711763173606LL)) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) 28U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (6U))), (((/* implicit */unsigned int) var_2))))) : (-5367045711763173607LL)));
    var_15 = ((/* implicit */unsigned int) ((((long long int) (~(((/* implicit */int) var_1))))) | (((/* implicit */long long int) ((/* implicit */int) ((((4294967290U) | (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) < (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12288))) / (12U)))))))));
}
