/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113784
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) var_14);
                var_18 = ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
                var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) var_9))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (_Bool)1);
}
