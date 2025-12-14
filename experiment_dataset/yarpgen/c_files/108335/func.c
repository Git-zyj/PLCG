/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108335
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
    var_12 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_0))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_2] [i_2] [1ULL] = var_7;
                        var_13 = ((/* implicit */unsigned int) (short)-23187);
                    }
                    arr_10 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])))) ? (((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1]))))) : (((/* implicit */unsigned int) ((int) (unsigned char)61)))));
                }
            } 
        } 
    } 
}
