/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125536
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_14 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((var_10) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)226))))), (((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (unsigned char)236)))))))));
                var_15 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0 + 1])) / (((/* implicit */int) (unsigned char)3)))) * (max(((~(((/* implicit */int) var_9)))), (((/* implicit */int) ((var_11) && (var_4))))))));
                var_16 |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)244)) * (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) ^ (var_3)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (!(((_Bool) var_9))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) < (max((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))), (((((/* implicit */int) var_13)) / (((/* implicit */int) var_13))))))));
}
