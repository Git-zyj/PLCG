/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153005
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
    var_14 |= ((((/* implicit */_Bool) (+(max((407488520U), (var_9)))))) ? ((-(var_3))) : (var_2));
    var_15 ^= (((!((!(((/* implicit */_Bool) var_1)))))) ? (var_12) : (((((/* implicit */_Bool) max((var_3), (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_4)))))) : ((+(var_10))))));
    var_16 = (~(((unsigned int) ((63U) & (var_7)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_17 ^= ((arr_0 [0U]) ^ (arr_0 [0U]));
        arr_2 [i_0] = ((unsigned int) var_12);
        var_18 |= max((((var_8) ^ (var_1))), (((arr_0 [10U]) & (arr_0 [0U]))));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_5 [i_1] = min(((~(arr_3 [i_1] [i_1]))), ((~(max((arr_3 [22U] [i_1]), (var_9))))));
        var_19 = ((((/* implicit */_Bool) (-(arr_4 [i_1] [i_1])))) ? (((arr_4 [i_1] [i_1]) * (arr_4 [i_1] [i_1]))) : (((arr_4 [i_1] [i_1]) * (arr_4 [i_1] [i_1]))));
    }
}
