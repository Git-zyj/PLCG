/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113962
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
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] = (-(((unsigned int) max((var_0), (3980043913U)))));
                    arr_10 [i_0] [i_0] = (((!(((/* implicit */_Bool) var_2)))) ? (max((arr_5 [i_0 - 3] [i_1 + 1]), (506193895U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_7))))))));
                }
            } 
        } 
    } 
    var_12 &= ((/* implicit */unsigned int) var_8);
    var_13 = ((/* implicit */unsigned int) var_8);
}
