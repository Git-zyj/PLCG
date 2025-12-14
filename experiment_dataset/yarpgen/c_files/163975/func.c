/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163975
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
    for (short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        arr_2 [(short)11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)0))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_7))))))));
        var_17 = (short)32767;
    }
    var_18 = var_16;
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)4656))));
    var_20 = ((/* implicit */short) (~((~(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_13))))))));
}
