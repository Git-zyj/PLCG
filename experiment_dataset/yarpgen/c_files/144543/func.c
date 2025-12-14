/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144543
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
    var_13 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_14 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65520)))))) & (min((var_5), (((/* implicit */unsigned long long int) ((unsigned short) var_0)))))));
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((var_6), (((((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) + (2147483647))) >> (((var_3) - (1041455929U)))))))) <= ((+(2737526902U)))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) max((((min((var_4), (((/* implicit */int) var_11)))) > (((((/* implicit */int) var_9)) ^ (((/* implicit */int) (unsigned char)104)))))), (((max((((/* implicit */unsigned long long int) var_3)), (var_5))) == (((/* implicit */unsigned long long int) var_12))))));
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) 4988594867627547589LL)), (2785672089581206521ULL))))));
}
