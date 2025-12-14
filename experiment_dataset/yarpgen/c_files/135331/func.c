/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135331
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
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_6)), (var_7)))) : (((((((/* implicit */_Bool) 2173282308488276092LL)) ? (((/* implicit */unsigned long long int) 2457976834U)) : (9202954058094600017ULL))) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_0 [i_0] [(_Bool)1]))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) max(((_Bool)1), (var_0)))), (var_7)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [7U] [7U])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [14LL]))) : (503316480U)))) ? (((arr_0 [i_0] [(_Bool)1]) ? (arr_1 [i_0] [4ULL]) : (var_3))) : (max((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_1 [i_0] [i_0])))))));
        var_13 = ((/* implicit */int) (-((~(arr_1 [(unsigned short)5] [i_0 + 2])))));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((/* implicit */_Bool) (-(3891365513210064954LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [(unsigned char)6] [i_0 + 2]), (arr_0 [12LL] [i_0 + 2]))))) : (((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 - 1])) ? (((/* implicit */unsigned long long int) (-(-5064452953536341006LL)))) : (9202954058094600013ULL)))))));
    }
}
