/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109894
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
    var_15 = ((/* implicit */unsigned short) (short)(-32767 - 1));
    var_16 = ((/* implicit */int) 15023313999669539260ULL);
    var_17 = ((/* implicit */short) (+(var_2)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_18 = 755966788;
        arr_3 [i_0] = ((((/* implicit */long long int) ((unsigned int) max((((/* implicit */int) var_1)), (var_13))))) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (6888655533035965378LL))))));
        var_19 = ((/* implicit */short) ((min((((/* implicit */long long int) var_11)), (max((var_2), (((/* implicit */long long int) var_7)))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    }
}
