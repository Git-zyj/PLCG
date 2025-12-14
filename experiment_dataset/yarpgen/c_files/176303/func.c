/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176303
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_11 = ((/* implicit */int) var_2);
        arr_2 [i_0] = var_5;
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_12 = ((short) var_4);
        arr_5 [i_1] = ((/* implicit */unsigned long long int) var_6);
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned short) var_4);
        var_13 = ((/* implicit */unsigned short) var_8);
        arr_9 [i_2] = ((/* implicit */unsigned int) ((signed char) ((unsigned long long int) (unsigned short)65533)));
    }
    var_14 = ((/* implicit */_Bool) ((unsigned int) var_0));
    var_15 = ((/* implicit */unsigned int) var_2);
}
