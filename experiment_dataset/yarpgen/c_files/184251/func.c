/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184251
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_0 - 1]))) ? (((((/* implicit */unsigned int) ((((/* implicit */int) (short)-17604)) / (((/* implicit */int) (unsigned char)22))))) * (var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                arr_5 [i_1] [i_0] = arr_0 [i_0 - 2];
                var_17 *= ((/* implicit */unsigned long long int) ((long long int) (((+(((/* implicit */int) arr_2 [i_0])))) <= (((/* implicit */int) ((signed char) var_15))))));
                var_18 = ((/* implicit */unsigned int) var_11);
                arr_6 [i_0 - 2] [i_0 - 2] = ((/* implicit */long long int) ((signed char) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-17604)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_6);
    var_20 = ((/* implicit */unsigned int) (+(max((((/* implicit */int) var_12)), (((int) -2098331008))))));
}
