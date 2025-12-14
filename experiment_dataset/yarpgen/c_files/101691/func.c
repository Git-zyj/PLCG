/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101691
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_14 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-17168)) ? (((arr_3 [i_0]) ? (arr_2 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_2 [(signed char)0]))))))) & (((((((/* implicit */long long int) var_7)) != (var_1))) ? (((unsigned long long int) arr_5 [i_1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
                arr_6 [8U] = ((/* implicit */unsigned short) var_12);
                arr_7 [(unsigned short)4] [i_1] [(short)8] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-53)) * (((/* implicit */int) (unsigned char)96))));
            }
        } 
    } 
    var_15 += var_12;
    var_16 *= var_6;
}
