/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112915
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
    var_10 = ((/* implicit */int) max((((/* implicit */unsigned int) (+(var_8)))), ((+(min((((/* implicit */unsigned int) var_0)), (1610612736U)))))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))))), (min((((/* implicit */unsigned long long int) ((unsigned short) var_2))), (arr_1 [(short)8] [1])))));
        arr_5 [i_0] [10ULL] = max((((/* implicit */int) var_9)), (max(((~(var_0))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4501))))))));
        var_11 = ((/* implicit */short) (~(((/* implicit */int) max((var_9), ((short)30592))))));
        var_12 += ((/* implicit */_Bool) (short)29339);
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (~(var_1))))));
    }
}
