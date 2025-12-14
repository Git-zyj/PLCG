/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123165
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_16 += ((/* implicit */unsigned short) var_0);
        arr_3 [i_0] = ((/* implicit */short) var_3);
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))) : (arr_2 [i_0 - 1])));
        arr_5 [i_0 - 1] [i_0] = ((/* implicit */long long int) ((int) arr_0 [i_0 - 1] [3]));
        var_17 = ((/* implicit */signed char) ((arr_2 [i_0 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */long long int) ((arr_6 [i_1]) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1]))));
        arr_10 [i_1] = ((/* implicit */_Bool) ((long long int) arr_6 [i_1]));
        arr_11 [i_1] = ((unsigned short) arr_6 [i_1]);
    }
    var_18 = ((/* implicit */int) var_9);
}
