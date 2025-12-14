/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11563
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (long long int i_2 = 4; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) arr_8 [i_0] [(short)17] [(unsigned char)13]);
                    var_14 = ((/* implicit */short) min((var_14), (var_10)));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) var_0);
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (max((((/* implicit */long long int) var_5)), ((+(82193415034905381LL))))) : (((/* implicit */long long int) max((((/* implicit */int) var_8)), (var_2))))));
    var_17 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned long long int) min((4055082959U), (((/* implicit */unsigned int) (short)-14932))))) : (var_6)));
}
