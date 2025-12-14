/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180257
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
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) 1248411634U);
        arr_3 [i_0] &= ((/* implicit */signed char) var_5);
        var_20 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) max((((/* implicit */unsigned char) var_19)), (var_4)))))) * (((((/* implicit */_Bool) ((signed char) (unsigned char)235))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0 - 1]))))));
    }
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) var_17)))) : (((((/* implicit */_Bool) 1LL)) ? (((/* implicit */int) (short)-4187)) : (((/* implicit */int) (unsigned char)11)))))))));
}
