/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123613
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)196)) ? (1863988896U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60))))))) : (((/* implicit */int) var_12))));
    var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)197)), (var_9)))) >= (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_13)) : (var_5))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_19 += ((/* implicit */unsigned int) ((unsigned char) (~(((/* implicit */int) (short)876)))));
                arr_6 [19U] [(_Bool)1] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) max(((unsigned char)196), (var_12))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */long long int) var_15)), (var_13))) : (((((/* implicit */_Bool) max(((unsigned short)208), (((/* implicit */unsigned short) (unsigned char)86))))) ? (max((var_3), (var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_4))))))));
}
