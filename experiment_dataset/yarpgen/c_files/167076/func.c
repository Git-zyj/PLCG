/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167076
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 3462536875067634782ULL)) ? (((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))));
    var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_4)), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1782639760)) ? (((/* implicit */int) (short)7881)) : (var_10)))), (1453876466U)))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)20238))) : (var_13))), (((/* implicit */unsigned int) var_12)))) >= (((/* implicit */unsigned int) var_17))));
        var_21 = ((/* implicit */unsigned int) arr_0 [i_0 + 1]);
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_0 [i_0 + 1]) - (arr_0 [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -1302053087)))) : (((var_5) | (var_5)))));
    }
}
