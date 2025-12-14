/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152600
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_12)))) % (((((var_10) + (2147483647))) >> (((((/* implicit */int) var_11)) - (61845)))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0]) : (arr_1 [i_0]))) + (2147483647))) >> (((((/* implicit */int) ((unsigned short) arr_0 [i_0]))) - (55978)))));
    }
    var_16 -= ((((var_7) / (var_4))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((signed char) var_10))))));
    var_17 ^= ((/* implicit */unsigned char) var_15);
}
