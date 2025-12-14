/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16001
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
    var_20 = ((/* implicit */_Bool) var_17);
    var_21 = ((/* implicit */int) (-(var_12)));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_22 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_9)))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_7);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((_Bool) var_4)))));
    var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_19))));
}
