/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176314
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
    var_17 = ((/* implicit */int) ((unsigned long long int) var_0));
    var_18 |= ((/* implicit */signed char) (~((+(-1LL)))));
    var_19 = ((((/* implicit */_Bool) 8765021674058936453LL)) ? (((((/* implicit */_Bool) var_10)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) var_0)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        arr_3 [i_0 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_2 [i_0] [0U])))) && (((/* implicit */_Bool) ((unsigned long long int) -5LL)))));
        arr_4 [1U] = ((/* implicit */signed char) max((max((arr_2 [i_0] [i_0 + 1]), (arr_2 [8U] [i_0 + 3]))), (((/* implicit */long long int) ((19LL) <= (8LL))))));
    }
    var_20 = (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) + (((/* implicit */int) var_5))))));
}
