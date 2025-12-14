/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107550
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
    var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_11)) - (230)))));
    var_21 = ((/* implicit */unsigned short) (short)7936);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = arr_1 [i_0 - 2];
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) max((min((arr_0 [i_0 - 4]), (var_4))), ((unsigned short)65535)))) - (min((((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_14))))), (((((/* implicit */int) (unsigned char)77)) & (((/* implicit */int) var_13)))))))))));
    }
}
