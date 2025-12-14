/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102379
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
    var_18 &= ((/* implicit */unsigned short) (short)-3871);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [(unsigned short)0] = ((/* implicit */unsigned short) ((short) (+(((/* implicit */int) (unsigned short)26063)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_0 [i_0])), (max((((/* implicit */int) arr_0 [(unsigned short)10])), (((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_4))))))));
    }
    var_19 = ((/* implicit */short) ((unsigned short) var_11));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)48902)) ? (((/* implicit */int) (short)-7740)) : (((/* implicit */int) (unsigned short)49919))));
}
