/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170076
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
    var_15 = ((/* implicit */unsigned int) var_1);
    var_16 = ((((((unsigned long long int) var_6)) == (max((((/* implicit */unsigned long long int) 1391445790)), (3869578849452136780ULL))))) ? (((/* implicit */unsigned long long int) var_4)) : (var_0));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_12)) ? (var_8) : (var_8))) : (((/* implicit */int) ((signed char) var_1)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_13)) >= (var_10)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) var_4);
    }
}
