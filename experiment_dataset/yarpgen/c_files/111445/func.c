/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111445
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
    var_12 = ((/* implicit */int) var_9);
    var_13 = ((/* implicit */int) ((((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) min((var_2), (((/* implicit */short) var_5))))))) > (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((signed char) var_10))) : (min((var_1), (((/* implicit */int) (_Bool)0))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */int) min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (2251799812636672ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) -1316045377)) ? (var_11) : (((/* implicit */int) (short)-17195)))))))));
                    arr_8 [i_0] [i_1] = ((/* implicit */short) min((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-17199)) : (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) (short)-17206)) ? (((/* implicit */long long int) -900396956)) : (arr_7 [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) ((int) max((arr_7 [i_0] [i_1] [(_Bool)1]), (((/* implicit */long long int) (short)-17195))))))));
                }
            } 
        } 
    } 
}
