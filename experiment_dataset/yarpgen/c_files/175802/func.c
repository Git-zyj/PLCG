/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175802
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_14 = ((/* implicit */unsigned long long int) min((((int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) 1670865359141859220ULL)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
    }
    var_15 = ((/* implicit */_Bool) ((unsigned int) max((((((/* implicit */_Bool) var_1)) ? (16775878714567692392ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)253))))), (((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-13))) : (var_12))))));
}
