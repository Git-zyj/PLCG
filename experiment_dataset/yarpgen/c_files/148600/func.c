/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148600
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
    for (long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) (~((((!(((/* implicit */_Bool) -13)))) ? (((((/* implicit */_Bool) 5)) ? (((/* implicit */int) (_Bool)0)) : (-24))) : (((/* implicit */int) (short)-12567))))));
        var_19 = ((/* implicit */short) arr_1 [i_0 + 2]);
        var_20 = (+(((((/* implicit */_Bool) var_4)) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1]))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_1 [i_0 + 3])))) ? ((((_Bool)1) ? (8763053750447949978ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)6))))) : (((/* implicit */unsigned long long int) ((arr_0 [i_0 + 3]) + (arr_0 [i_0 + 3]))))));
    }
    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_16))));
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (!((((~(((/* implicit */int) var_17)))) != (((var_2) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_12)))))))))));
}
