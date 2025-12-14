/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157305
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3828763288U)) ? ((~(466204008U))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2]))) ^ (466204008U)))));
                    var_15 = (-(((/* implicit */int) (!(((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_0]))) : (466204008U))))))));
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */int) ((signed char) var_13));
}
