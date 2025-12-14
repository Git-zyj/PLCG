/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177840
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
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (~(1551210444))))) ? (((/* implicit */int) var_4)) : (max(((-(-1551210445))), ((((_Bool)1) ? (1551210443) : (1551210444))))))))));
    var_21 = ((/* implicit */unsigned int) var_9);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_22 ^= ((/* implicit */int) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) (_Bool)0))))), (((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_11), (((/* implicit */int) var_15))))) ? (min((arr_0 [i_0] [i_0]), (var_16))) : (max((-1551210445), (arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) (~(max((6746590923689888662LL), (((/* implicit */long long int) arr_1 [i_0 - 1]))))));
        var_23 ^= var_17;
        var_24 = arr_2 [i_0 + 1];
    }
}
