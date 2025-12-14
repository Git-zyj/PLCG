/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171877
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
    var_10 = ((/* implicit */int) (!(((((/* implicit */int) var_2)) >= (((/* implicit */int) var_8))))));
    var_11 = ((/* implicit */unsigned char) var_0);
    var_12 = ((/* implicit */unsigned int) var_9);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] [(unsigned char)7] = ((min((((1825686687U) + (2469280611U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [(_Bool)1])) > (((/* implicit */int) arr_0 [i_0] [i_0]))))))) / (1825686687U));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((int) arr_0 [i_0] [i_0])) - (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
}
