/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122244
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
    var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((var_8) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))) : (2814524684U));
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (+((+(((/* implicit */int) (short)7)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) arr_2 [i_0 - 2] [i_1]);
                var_13 ^= ((/* implicit */long long int) ((((((/* implicit */int) (short)-26144)) + (2147483647))) << (((1480442612U) - (1480442612U)))));
                var_14 = ((short) ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))))) : (max((var_5), (((/* implicit */unsigned long long int) var_4))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_5))));
}
