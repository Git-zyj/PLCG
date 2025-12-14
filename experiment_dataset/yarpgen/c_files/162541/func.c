/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162541
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_4 [(unsigned char)5] [6LL] [i_0]), (arr_4 [(_Bool)1] [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0])) ? (arr_4 [(unsigned short)12] [i_1] [(unsigned short)12]) : (arr_4 [i_0] [i_0] [i_1]))) : (((/* implicit */unsigned int) (+(-1644385840))))));
                var_17 = ((/* implicit */unsigned char) (+(max((((/* implicit */unsigned int) ((int) var_13))), (arr_4 [i_0] [i_0] [i_0])))));
                arr_5 [(short)11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0] [1LL])), ((unsigned short)51353)))) << ((((~(var_7))) - (1542544269115048774ULL)))))) ? (min((arr_0 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_5)))) : (arr_0 [i_0] [15])));
            }
        } 
    } 
    var_18 = min((1630667318), ((+(max((((/* implicit */int) (_Bool)0)), (var_15))))));
    var_19 = ((/* implicit */int) ((unsigned int) max(((~(((/* implicit */int) var_9)))), (((/* implicit */int) ((unsigned short) var_12))))));
}
