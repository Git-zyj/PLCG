/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133803
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
    var_11 = ((/* implicit */unsigned short) var_7);
    var_12 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (96878036424722612LL))))) ^ (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_6))) : ((~(var_6)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_8 [i_1] [i_1] = ((/* implicit */int) var_1);
                arr_9 [i_1] [i_1] = ((/* implicit */signed char) ((var_1) ? (((/* implicit */int) arr_5 [2])) : (((/* implicit */int) max(((unsigned short)12169), (var_8))))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) max((var_13), (((((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) var_0))))) ? (min((var_3), (var_3))) : (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))))) + (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
    var_14 = ((/* implicit */unsigned short) var_1);
}
