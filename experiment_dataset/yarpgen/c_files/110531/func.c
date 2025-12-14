/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110531
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) var_7);
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (unsigned short)40307))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114))) : (8189740793309985621ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) : ((((!(((/* implicit */_Bool) (signed char)-114)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((var_11) >= (var_19))))))));
}
