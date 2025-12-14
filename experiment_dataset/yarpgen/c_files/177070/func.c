/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177070
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
    var_18 = ((/* implicit */int) ((((unsigned long long int) ((unsigned long long int) var_2))) << ((((-(((/* implicit */int) (unsigned short)25830)))) + (25830)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) max(((unsigned short)65409), (((/* implicit */unsigned short) ((unsigned char) (-(((/* implicit */int) (short)24332)))))))))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (max((var_10), (((/* implicit */unsigned long long int) var_5))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-24332)) < (((((/* implicit */int) var_5)) >> (((/* implicit */int) var_12))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (short)-24333)) + (((/* implicit */int) (unsigned short)8536)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) : ((+(((((/* implicit */_Bool) var_8)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
                }
            } 
        } 
    } 
}
