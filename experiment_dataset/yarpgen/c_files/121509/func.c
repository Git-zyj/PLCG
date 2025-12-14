/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121509
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
    var_11 = ((/* implicit */unsigned char) (short)-32761);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned char) var_2);
        var_13 = min((var_2), (max((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (var_2))), (((/* implicit */unsigned int) min((var_3), (((/* implicit */short) var_9))))))));
    }
    var_14 = ((/* implicit */unsigned char) min((max((min(((short)32761), (var_7))), (((/* implicit */short) var_6)))), (max(((short)2), (((/* implicit */short) (!(((/* implicit */_Bool) var_2)))))))));
}
