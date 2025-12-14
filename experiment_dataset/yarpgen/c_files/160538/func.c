/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160538
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((int) arr_4 [i_0] [i_1] [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14629))) : (arr_2 [i_0] [i_1])))) && (((/* implicit */_Bool) -1670564843817453159LL)))))));
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) min(((short)-1), (((/* implicit */short) (signed char)-120))))) ? (arr_2 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4)))))));
                var_21 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))) : (arr_2 [i_0] [i_1]))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) max((var_0), ((signed char)-12)))) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)40))) : (var_16)));
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((((((/* implicit */_Bool) ((var_6) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */unsigned long long int) 3956425384176251495LL)) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1233619015)) && (((/* implicit */_Bool) var_8)))))))), (((/* implicit */unsigned long long int) (signed char)-15)))))));
}
