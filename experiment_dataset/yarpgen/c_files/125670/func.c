/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125670
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                {
                    var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_2) ? (arr_0 [i_2 - 1]) : (arr_0 [i_2 - 3])))) ? (min((((/* implicit */int) (short)-4027)), (-1854947993))) : ((-(((/* implicit */int) arr_2 [i_0] [i_1 + 1] [i_2]))))));
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_0 [i_0]))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */long long int) ((signed char) min((((/* implicit */unsigned long long int) max((var_4), (var_13)))), ((+(var_11))))));
    var_19 = ((/* implicit */signed char) ((((((/* implicit */int) var_6)) / ((-(((/* implicit */int) var_0)))))) < (((/* implicit */int) ((signed char) -618266548)))));
    var_20 = ((/* implicit */signed char) min((((/* implicit */int) (short)4027)), (2081172633)));
    var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) (~(((/* implicit */int) var_7)))))), (((((/* implicit */_Bool) var_9)) ? (var_14) : (4095)))));
}
