/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137727
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
    for (short i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) ((4195393440U) - (4U)))))));
        var_12 *= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)252))))) & (((((/* implicit */int) arr_1 [i_0])) << (((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0 - 3])), ((unsigned short)3968)))) - (3949)))))));
    }
    var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? ((+(((/* implicit */int) var_5)))) : ((~(((/* implicit */int) var_7))))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) min(((short)2029), (((/* implicit */short) var_10))))) - (((/* implicit */int) var_8))));
}
