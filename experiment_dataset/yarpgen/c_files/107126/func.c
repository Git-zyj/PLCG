/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107126
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
    var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_2))))));
    var_14 = ((/* implicit */unsigned short) (!(((max((((/* implicit */int) var_12)), (var_3))) <= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_10))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((((/* implicit */_Bool) ((short) ((long long int) 14554350338450827813ULL)))) ? (3892393735258723803ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0] [i_1 - 1])))))))));
                arr_5 [i_1] [i_0 - 2] [i_0 - 2] = ((/* implicit */long long int) arr_1 [i_0]);
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */int) var_12)) << (((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_5))) & (((var_7) & (((/* implicit */unsigned long long int) var_9)))))) - (2756345382333542392ULL)))));
    var_17 -= ((/* implicit */unsigned long long int) (-(var_1)));
}
