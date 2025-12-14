/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18363
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned short) var_10)), (arr_0 [i_0] [i_0])))))));
        var_18 = ((var_4) | (arr_1 [i_0] [i_0]));
        arr_2 [i_0] = ((/* implicit */signed char) -548318174);
    }
    var_19 = ((/* implicit */int) var_8);
    var_20 = ((/* implicit */signed char) var_2);
    var_21 = ((/* implicit */signed char) (((-(((/* implicit */int) max((var_1), (((/* implicit */unsigned short) (short)-23541))))))) & (((/* implicit */int) var_15))));
}
