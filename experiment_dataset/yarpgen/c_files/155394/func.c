/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155394
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
    var_10 = ((/* implicit */long long int) var_4);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) max((arr_4 [i_1 - 1]), (arr_4 [i_1 - 3])))) : ((+(((/* implicit */int) var_7))))));
                var_12 = ((/* implicit */unsigned int) (~(arr_0 [i_0] [i_1])));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) var_6);
}
