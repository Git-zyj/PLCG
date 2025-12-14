/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10061
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
    var_13 ^= ((/* implicit */int) max((((long long int) var_2)), (((/* implicit */long long int) var_2))));
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) var_0)))))));
    var_15 = ((/* implicit */unsigned long long int) var_2);
    var_16 = ((/* implicit */unsigned long long int) min((var_8), (((/* implicit */int) (!(((/* implicit */_Bool) 2816515088135319059LL)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)12130))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (!(arr_1 [1LL]))))));
        var_18 += ((/* implicit */_Bool) ((2816515088135319059LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)126)))));
        var_19 += ((/* implicit */_Bool) (~(((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((arr_1 [i_0]), (arr_1 [i_0])))), (((arr_1 [i_0]) ? (2816515088135319054LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
    }
}
