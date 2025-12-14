/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111423
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */int) min(((signed char)119), (((/* implicit */signed char) (!(((/* implicit */_Bool) 7255271992768588958LL)))))));
                    var_21 = ((/* implicit */unsigned int) arr_2 [i_0 + 1] [i_1]);
                    arr_7 [i_0] [i_0 - 1] [i_0] &= ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) ^ (((/* implicit */int) ((arr_1 [i_0 + 2]) <= (arr_1 [i_1])))));
                    arr_8 [i_0 + 1] [i_1] [i_2] = ((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_0]);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) var_18);
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (2884271689025054110ULL)))) ? (((/* implicit */unsigned long long int) (~(var_14)))) : (min((var_19), (((/* implicit */unsigned long long int) var_1))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_17))));
    var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)2511)));
    var_25 = ((/* implicit */int) 422042161038028508ULL);
}
