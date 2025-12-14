/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174190
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
    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) min((((((var_0) ? (var_15) : (((/* implicit */unsigned long long int) var_4)))) << (((((/* implicit */unsigned long long int) var_11)) / (var_15))))), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_12)) : (var_14))))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 7; i_2 += 1) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */short) min(((+(((/* implicit */int) arr_3 [i_2 - 1] [i_2 + 1])))), (((/* implicit */int) ((short) var_8)))));
                    var_21 -= ((/* implicit */unsigned long long int) ((min((min((var_8), (((/* implicit */unsigned long long int) var_1)))), (((((/* implicit */_Bool) var_12)) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [7LL]))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_16)), ((+(var_9)))));
}
