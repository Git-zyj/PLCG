/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14810
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
    var_11 = ((/* implicit */unsigned int) var_1);
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) min((((/* implicit */int) var_7)), ((~(((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                arr_6 [i_0] |= ((/* implicit */_Bool) arr_1 [i_0]);
                var_13 = var_9;
            }
        } 
    } 
}
