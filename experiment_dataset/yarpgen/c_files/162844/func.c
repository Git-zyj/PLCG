/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162844
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
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) max((((arr_1 [i_0 - 1] [i_0 - 1]) / (arr_1 [i_0 + 1] [i_0 - 2]))), (max((arr_1 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0 - 1] [i_0 - 2])))));
        arr_2 [i_0] = ((/* implicit */signed char) ((arr_1 [i_0 + 1] [i_0 + 1]) * (2)));
    }
    var_13 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))) ? (var_6) : (((/* implicit */int) var_4))))));
    var_14 = ((/* implicit */int) var_4);
    var_15 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (_Bool)1)))))) | (((((/* implicit */_Bool) max((68718428160LL), (((/* implicit */long long int) (signed char)-90))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))));
}
