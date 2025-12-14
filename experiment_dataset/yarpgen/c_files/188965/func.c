/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188965
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
    var_16 = (~(((((/* implicit */_Bool) min((15ULL), (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073709551598ULL) >= (0ULL))))) : (11ULL))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        var_17 = max((((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0] [i_0]))) ? (arr_1 [i_0]) : (min((arr_1 [i_0]), (arr_1 [i_0]))))), (((arr_0 [i_0] [i_0 - 2]) * (min((arr_1 [i_0]), (arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((857784375050708911ULL) | (8184765221698939053ULL))) & (((11364634198078315377ULL) & (6958846978836079562ULL))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 2])) ? (arr_0 [i_0] [i_0 - 2]) : (arr_0 [i_0] [i_0 - 2]))));
    }
    var_18 = min((((max((var_0), (var_8))) | (var_7))), (((unsigned long long int) ((0ULL) - (13689164715393705519ULL)))));
}
