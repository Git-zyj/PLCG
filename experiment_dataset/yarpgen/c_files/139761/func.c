/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139761
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
    var_17 = ((/* implicit */short) (+(min((((((/* implicit */_Bool) 468790510U)) ? (3826176798U) : (3826176771U))), (3826176785U)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_3 [8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((-(arr_0 [i_0]))) : ((~(((/* implicit */int) (unsigned char)25))))));
        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
        var_19 = ((/* implicit */int) max((var_19), ((-(arr_0 [i_0])))));
    }
    var_20 += ((/* implicit */int) min((((/* implicit */long long int) (-(892379384)))), ((+(min((var_6), (((/* implicit */long long int) var_0))))))));
}
