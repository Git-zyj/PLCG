/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18396
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [0U] [i_0] = ((/* implicit */unsigned char) var_0);
                    arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [(signed char)0] &= ((/* implicit */_Bool) ((int) max((1446758461U), (1446758469U))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_9);
}
