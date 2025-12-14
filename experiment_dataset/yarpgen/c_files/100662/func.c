/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100662
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */_Bool) (+(1097364144128LL)))) ? (arr_3 [4U] [i_0] [i_0]) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1] [i_0])) ? (((/* implicit */int) arr_2 [i_1] [i_0] [i_0])) : (((/* implicit */int) (_Bool)0))))))))));
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_7))) - (((var_11) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [1] [1ULL])))))))) ? ((-((-(1097364144134LL))))) : (((/* implicit */long long int) var_9))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)2047))) + (var_5))) - (var_11)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((unsigned short) (-(var_10)))))));
}
