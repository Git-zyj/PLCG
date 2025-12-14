/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165703
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) var_0);
        arr_3 [i_0] = ((/* implicit */signed char) (+(max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)48096))) : (0ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)48103))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-33))) : (4294967295U)))) ? (((((/* implicit */_Bool) 1930758328285524512LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17440))) : (max((((/* implicit */unsigned int) var_8)), (var_1))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))));
        arr_8 [i_1] &= ((/* implicit */long long int) min((6ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
    }
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) var_7))));
}
