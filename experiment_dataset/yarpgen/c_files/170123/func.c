/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170123
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)17)))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)50925))));
                var_11 = ((/* implicit */short) var_9);
            }
        } 
    } 
}
