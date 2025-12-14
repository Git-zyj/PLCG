/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182895
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
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_11)))))))) ? (min((min((((/* implicit */long long int) var_13)), (var_1))), (((/* implicit */long long int) var_11)))) : ((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (3532801736U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : (((long long int) (_Bool)1)))))))));
    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(var_4)))) ? ((-(3681372010U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_13), (var_6))))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
    var_18 = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 ^= ((/* implicit */unsigned int) var_11);
                arr_6 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 613595285U))));
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) ((max((var_7), ((+(arr_2 [i_0] [i_0] [i_1]))))) & (((/* implicit */long long int) ((/* implicit */int) var_12)))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_4) : (var_5)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? ((-(var_14))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
}
