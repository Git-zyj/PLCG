/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142480
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
    var_20 = ((((var_1) ? (max((var_11), (((/* implicit */long long int) var_4)))) : ((~(var_14))))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-24)), (var_4)))) ? (((((/* implicit */_Bool) min((arr_1 [i_0 - 1]), (-3LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((~(arr_0 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                    var_22 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) : (arr_0 [i_0] [i_1])))) ? (var_7) : (((/* implicit */unsigned long long int) ((long long int) arr_7 [i_0] [i_0] [i_0] [i_0])))))));
                    var_23 = ((/* implicit */long long int) var_16);
                }
            } 
        } 
    } 
    var_24 += ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */int) (short)-30719)) : (((/* implicit */int) var_13)))))));
    var_25 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_17)) ? (max((-2382688251940390086LL), (var_14))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))));
}
