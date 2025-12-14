/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149179
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
    var_11 += ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) << (((((((/* implicit */_Bool) max((8388604U), (3413871126U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)63327), (((/* implicit */unsigned short) var_6)))))) : (var_2))) - (63320U)))));
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) (-(((((var_2) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65517))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-65)))) : (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) (signed char)-65))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((843564331U) << (((1671046157U) - (1671046137U))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_3)))))))));
        var_14 &= ((/* implicit */unsigned long long int) ((unsigned short) 1283890173U));
        arr_2 [i_0] [(signed char)11] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) & (((/* implicit */int) arr_1 [i_0] [i_0]))))) % (arr_0 [13ULL] [i_0])));
    }
    var_16 = ((/* implicit */unsigned short) ((1879823015U) << (((/* implicit */int) ((_Bool) (_Bool)1)))));
}
