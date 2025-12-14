/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182238
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
    var_14 = ((((/* implicit */_Bool) ((max((9978601773904947557ULL), (((/* implicit */unsigned long long int) var_1)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_8))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) -1LL))))))) : (((((/* implicit */int) var_1)) - (var_9))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] = ((((/* implicit */_Bool) (-(5456768833514401552LL)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((int) arr_3 [i_1] [i_1]))) : (((((/* implicit */long long int) ((/* implicit */int) var_2))) + (var_11))))) : (((/* implicit */long long int) (~(((((/* implicit */int) (_Bool)0)) << (((2965178454U) - (2965178428U)))))))));
                arr_6 [i_1] [i_1 + 2] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)73)) != (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_1 + 2] [i_1]))))));
            }
        } 
    } 
}
