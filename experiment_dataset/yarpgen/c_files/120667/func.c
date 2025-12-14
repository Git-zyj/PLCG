/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120667
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_11)), (var_4))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            {
                arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? ((-(max((((/* implicit */int) arr_7 [i_0] [i_0])), (var_9))))) : (((/* implicit */int) (((-(-1040153895))) <= (((/* implicit */int) (unsigned short)34643)))))));
                var_14 = ((/* implicit */int) (signed char)(-127 - 1));
                var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned int) var_11))))) > ((+(var_10))))))) != (max((max((var_8), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) min(((unsigned char)87), ((unsigned char)143))))))));
                arr_9 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (+(min((((/* implicit */unsigned int) (short)1023)), (((var_8) ^ (var_8)))))));
            }
        } 
    } 
    var_16 |= ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) var_2)), (var_10))) / (((/* implicit */unsigned long long int) var_1))));
}
