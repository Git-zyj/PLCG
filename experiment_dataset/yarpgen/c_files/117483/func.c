/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117483
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
    var_16 = ((/* implicit */int) var_8);
    var_17 = ((/* implicit */long long int) max((var_17), (var_13)));
    var_18 = var_7;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_4 [i_0] [i_0 - 2] |= ((/* implicit */long long int) arr_0 [i_0]);
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_8 [i_1] |= ((/* implicit */_Bool) (unsigned char)22);
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_2 [i_1]) : (arr_2 [i_1])))) ? (((/* implicit */int) arr_0 [i_1])) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1]))))));
    }
}
