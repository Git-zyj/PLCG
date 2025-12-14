/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (unsigned char)135);
                arr_4 [i_1] = ((/* implicit */unsigned int) var_12);
                var_21 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7893611776365814749ULL)) ? (8188) : (8180)))) * (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) 1421107958U)) : (14141527677409757556ULL)))));
                arr_5 [i_0] [i_0] = ((/* implicit */int) (+(max(((+(var_3))), (((/* implicit */unsigned long long int) ((var_1) >> (((((/* implicit */int) var_6)) - (22193))))))))));
                var_22 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (var_3))))));
            }
        } 
    } 
    var_23 *= ((/* implicit */unsigned int) (~((~(var_3)))));
    var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_4)))) != (((/* implicit */int) ((unsigned char) var_14))))))) & (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2873859329U)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_6))))), (13271358113063678801ULL)))));
}
