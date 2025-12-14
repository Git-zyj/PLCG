/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187998
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((-1618309692) - (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) -1427972444)) ? (((/* implicit */int) (unsigned short)65515)) : ((-2147483647 - 1))))))) ? ((-(((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) (_Bool)1))));
    var_19 = ((((/* implicit */_Bool) max((var_12), (6565171310593697917ULL)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned char) (signed char)27))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_6)), (var_13)))))) : (((/* implicit */int) ((signed char) var_9))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        var_20 -= ((((/* implicit */int) arr_2 [i_0 + 1])) % (((/* implicit */int) arr_2 [i_0 - 2])));
        arr_3 [i_0] = ((/* implicit */int) ((_Bool) -2147483640));
    }
}
