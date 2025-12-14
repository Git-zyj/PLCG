/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134633
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_10 = ((/* implicit */signed char) (-((-((+(615520215U)))))));
        arr_3 [i_0] = ((/* implicit */signed char) min(((~(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_6) : (arr_0 [i_0]))))), ((~(max((arr_1 [i_0]), (arr_0 [i_0])))))));
    }
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11U)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 0U))))) : (((/* implicit */int) var_1))))) || (((((unsigned int) 0U)) >= (min((var_6), (((/* implicit */unsigned int) var_4))))))));
}
