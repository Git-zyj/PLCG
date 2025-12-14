/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178676
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
    var_14 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))))), (min((((((/* implicit */_Bool) (unsigned char)255)) ? (var_0) : (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) var_9))))));
    var_15 = var_10;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) (unsigned char)255)))));
        var_17 = ((/* implicit */unsigned short) (signed char)1);
    }
    var_18 = ((/* implicit */unsigned char) var_6);
}
