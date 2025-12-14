/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176362
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) ((int) -2147483640)))) >= (((/* implicit */int) var_2))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */short) (+(((/* implicit */int) var_4))));
                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_9)) : ((~(min((arr_5 [i_0] [i_1] [i_1]), (((/* implicit */int) (short)-32169))))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned long long int) var_6));
            }
        } 
    } 
}
