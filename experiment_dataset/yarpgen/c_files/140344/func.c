/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140344
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_7 [1] [i_1] = ((/* implicit */unsigned int) (signed char)-127);
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)65535);
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_8);
                    arr_12 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)6)) + (((((/* implicit */int) (short)22552)) - (((/* implicit */int) (unsigned short)65509))))));
                }
                var_10 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)349))) - (((((/* implicit */_Bool) -2031070238)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7406))) : (var_0)))));
            }
        } 
    } 
    var_11 = ((/* implicit */short) var_9);
    var_12 ^= ((/* implicit */short) var_1);
}
