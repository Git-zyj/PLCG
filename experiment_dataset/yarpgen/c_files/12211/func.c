/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12211
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
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) max((((((var_9) % (var_9))) / (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)37187))))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0])))))));
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) var_0);
            }
        } 
    } 
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : ((((-(var_1))) * (((/* implicit */unsigned int) var_8))))));
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65529)) ? ((-9223372036854775807LL - 1LL)) : (1152921504606830592LL)))) ? (((((/* implicit */_Bool) (unsigned char)199)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) -1711814519)))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */int) var_5)), (var_7))) > (((/* implicit */int) var_5)))))) : (max((((/* implicit */unsigned int) (unsigned short)2047)), (var_1)))));
    var_12 = ((/* implicit */unsigned short) (unsigned char)85);
}
