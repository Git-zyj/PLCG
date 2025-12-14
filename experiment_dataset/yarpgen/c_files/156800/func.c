/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156800
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
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_6))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_6 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (+(0U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (var_9)))))) : (((unsigned long long int) var_11))));
                    arr_7 [i_2] [i_1] [i_2] = ((/* implicit */signed char) var_6);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((int) 0U))) > (((((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned long long int) var_9)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
    var_17 = ((/* implicit */short) var_13);
}
