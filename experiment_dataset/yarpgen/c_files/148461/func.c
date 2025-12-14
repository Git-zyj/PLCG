/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148461
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((short)24728), (((/* implicit */short) ((_Bool) (unsigned short)48210))))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0]))) ? (((/* implicit */int) ((short) arr_2 [i_0]))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
    }
    var_20 = ((/* implicit */int) ((unsigned char) (signed char)100));
    var_21 &= ((/* implicit */signed char) (((((~(((/* implicit */int) var_6)))) == (((/* implicit */int) var_12)))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((_Bool) (short)18))))))));
}
