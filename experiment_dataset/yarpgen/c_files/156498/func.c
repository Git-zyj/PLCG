/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156498
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_5), (((((/* implicit */_Bool) (short)-26499)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_12))))))) ? (((unsigned long long int) (-(var_10)))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), ((-(((/* implicit */int) (_Bool)1)))))))));
    var_14 = ((/* implicit */signed char) var_10);
    var_15 = ((/* implicit */unsigned short) ((var_6) ^ (var_8)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_16 = (((-(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4))) : (arr_0 [i_0] [i_1]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((((/* implicit */unsigned short) (_Bool)0)), (arr_3 [i_0] [i_1] [i_1])))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) min((15745064282147966008ULL), ((-(1771672141216899650ULL)))));
            }
        } 
    } 
}
