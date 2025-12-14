/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172099
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
    var_11 ^= max((var_6), (((/* implicit */unsigned long long int) (unsigned short)60117)));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]);
                arr_7 [(_Bool)0] [i_1] &= ((/* implicit */unsigned short) arr_0 [i_0]);
                var_13 -= min((((/* implicit */unsigned long long int) ((long long int) (+(var_5))))), (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)2]))) : (var_6))) << (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) (signed char)15))))))));
            }
        } 
    } 
}
