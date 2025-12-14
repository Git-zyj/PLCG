/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147911
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
    for (int i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        var_12 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_2 [i_0 - 1] [i_0 + 2])))) ? ((~(arr_2 [i_0 + 2] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_5))))));
        arr_4 [i_0] = ((/* implicit */signed char) var_7);
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_0]), (var_6)))) ? (max((arr_1 [i_0]), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1047070025U))))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) (~(1047070016U)))) ? (-839833297) : (2066257123)))));
        var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) var_3)))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_1 = 2; i_1 < 16; i_1 += 4) 
    {
        arr_9 [i_1] [(unsigned short)14] |= ((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1]);
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (~(-1756233883))))));
    }
    for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 4) 
    {
        var_16 += ((/* implicit */unsigned char) arr_11 [i_2]);
        arr_12 [i_2 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(signed char)21] [i_2 - 1])) ? (max((((/* implicit */unsigned long long int) var_1)), (arr_2 [i_2] [i_2 - 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_7))))));
    }
    var_17 += ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (min((min((((/* implicit */int) (unsigned short)36549)), (1229907350))), (((((/* implicit */int) var_4)) / (-1756233875))))) : (((/* implicit */int) ((unsigned char) var_6))));
}
