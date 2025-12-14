/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138428
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
    var_19 |= ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_20 = max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)(-32767 - 1)))))), (((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)217))) : (2857306721U))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) (+(((var_15) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_12), (((/* implicit */unsigned short) (signed char)-6))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
}
