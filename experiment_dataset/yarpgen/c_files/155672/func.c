/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155672
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
    var_11 = ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))) | (((/* implicit */int) var_7)))), (max((((/* implicit */int) var_3)), (((((/* implicit */int) var_7)) * (((/* implicit */int) (unsigned char)227))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) var_7);
        arr_3 [i_0] = ((/* implicit */_Bool) ((long long int) arr_1 [i_0] [i_0]));
    }
}
