/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122642
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 13440655290685128005ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65))) : (2273054342U)));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)15)) << (((17667012422274962683ULL) - (17667012422274962674ULL)))));
            }
        } 
    } 
    var_21 += ((/* implicit */unsigned int) var_8);
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((((((/* implicit */int) (unsigned short)57606)) <= (((/* implicit */int) var_7)))) ? (min((var_0), (2606310346U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (((/* implicit */signed char) var_6)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-30)))));
}
