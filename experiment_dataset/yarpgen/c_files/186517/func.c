/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186517
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127))));
                var_14 ^= (_Bool)1;
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (arr_1 [i_1 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_3 [i_1] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_0] [i_1]))) : (arr_1 [i_1 - 1])))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_7);
}
