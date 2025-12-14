/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167538
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] = var_8;
        arr_4 [i_0] = ((/* implicit */_Bool) ((unsigned char) ((arr_2 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (var_0)))))));
    }
    var_10 = ((/* implicit */unsigned long long int) 3177905694U);
}
