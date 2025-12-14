/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15377
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
    for (signed char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0 - 3] |= ((/* implicit */short) ((unsigned int) ((_Bool) (~(((/* implicit */int) var_7))))));
                arr_6 [i_0 - 1] [i_1] [i_1] |= ((int) (+(((/* implicit */int) arr_4 [i_0] [i_0 + 1]))));
                arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4262008759039955654ULL)) ? (var_8) : (((/* implicit */unsigned int) var_2))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1087)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)1)))))));
                arr_8 [i_0 - 1] [i_0] [i_0 - 1] &= ((/* implicit */int) ((unsigned int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_0])) : (var_3))) + (((/* implicit */int) ((signed char) (_Bool)1))))));
            }
        } 
    } 
    var_10 = var_6;
}
