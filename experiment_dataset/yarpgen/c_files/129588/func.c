/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129588
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
    var_13 = ((/* implicit */unsigned int) ((((((-2575037121062215945LL) + (9223372036854775807LL))) << (((((/* implicit */int) var_4)) - (128))))) | (((((/* implicit */_Bool) (unsigned short)6421)) ? ((+(2575037121062215944LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_5))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */int) (unsigned short)11);
                arr_6 [i_0] = (+(min((arr_5 [i_0 - 3] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_7)))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) var_8);
}
