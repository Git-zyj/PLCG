/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107343
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
    var_13 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned short) min((arr_1 [i_1]), (((/* implicit */int) arr_5 [(unsigned char)2] [i_0 + 1] [i_0 + 1]))));
                var_15 ^= ((/* implicit */signed char) (+(min((((3823667964U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))))), (((/* implicit */unsigned int) ((((/* implicit */int) (short)32762)) / (((/* implicit */int) var_6)))))))));
            }
        } 
    } 
}
