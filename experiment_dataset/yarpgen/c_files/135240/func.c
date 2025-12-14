/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135240
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
    var_18 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 - 1])) ? (((((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1])) ^ (((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) ((unsigned char) arr_1 [i_0 - 1] [i_0 - 2])))));
                var_20 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) 9223372036854775790LL)) ? (3971789210327512225LL) : (((/* implicit */long long int) ((/* implicit */int) (short)11990))))));
            }
        } 
    } 
    var_21 -= ((/* implicit */unsigned short) var_1);
}
