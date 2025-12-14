/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141635
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
    var_10 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2400731992U)) ? (var_8) : (((/* implicit */long long int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (short)-25436)))))) : (min((((/* implicit */long long int) (short)-17200)), (var_2))))), (var_9)));
    var_11 = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */long long int) 3737310813U)), (var_8)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)31697)) : (((/* implicit */int) (short)25457))))))) ? (((/* implicit */int) var_4)) : (((((((((/* implicit */_Bool) (unsigned short)12612)) ? (((/* implicit */int) (short)-25416)) : (((/* implicit */int) var_0)))) + (2147483647))) << (((((((/* implicit */_Bool) var_9)) ? (12429434016118076224ULL) : (6017310057591475411ULL))) - (12429434016118076224ULL)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                arr_4 [i_0 - 3] [i_1] [i_1] = ((/* implicit */signed char) max(((((!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned long long int) var_8)) + (3438025081421931265ULL))))), (((/* implicit */unsigned long long int) (-(arr_3 [i_1] [i_1 + 4]))))));
                var_12 = ((/* implicit */short) max((arr_3 [i_1] [i_0 - 2]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 + 2] [i_1 + 3])) && (((/* implicit */_Bool) arr_3 [i_0 + 2] [i_1 + 1])))))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((2111098830U) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)33704)) : (((/* implicit */int) (short)25452))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_2 [i_0])), ((short)-17219))))) : (805306368U)))));
            }
        } 
    } 
}
