/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140127
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
    for (long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)62804)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned short)4095))))) | (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_14)))) : (var_11))))))));
                    arr_10 [i_0 - 2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) max(((((+(((/* implicit */int) arr_6 [i_2] [i_1] [i_1] [i_0 - 1])))) > (((/* implicit */int) ((signed char) arr_6 [i_0] [i_1] [i_2] [i_2]))))), (((((/* implicit */int) (unsigned short)4095)) < (((/* implicit */int) var_18))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */int) var_15);
    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_16) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)61440)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)102)))))))));
}
