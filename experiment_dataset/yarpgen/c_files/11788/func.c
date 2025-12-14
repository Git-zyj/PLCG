/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11788
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
    var_20 = ((/* implicit */unsigned short) (+((+(((((/* implicit */int) var_7)) * (((/* implicit */int) var_19))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) var_19);
                    var_22 ^= ((/* implicit */unsigned long long int) (short)3107);
                    var_23 = arr_7 [i_0] [(short)5] [i_1] [i_2];
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) (~(((/* implicit */int) (short)-25514))));
}
