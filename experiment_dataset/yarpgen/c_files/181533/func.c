/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181533
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
    var_18 = ((/* implicit */unsigned long long int) var_14);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] [i_0 - 2] = ((/* implicit */unsigned char) var_12);
                var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */long long int) arr_0 [i_1])) : (var_9))) < (((/* implicit */long long int) -1916102438))));
                arr_6 [i_0] [i_1] [(_Bool)1] = ((/* implicit */short) ((int) ((((1837828283U) >> (((((/* implicit */int) arr_4 [i_0] [i_0] [16])) - (27055))))) >= (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1])) - (arr_0 [i_1])))))));
                arr_7 [i_0] = ((/* implicit */unsigned long long int) var_8);
                arr_8 [i_1] [(short)18] [i_0 + 1] = ((/* implicit */unsigned char) ((signed char) max((arr_2 [i_0 + 1] [i_0 - 1]), (((/* implicit */unsigned int) var_6)))));
            }
        } 
    } 
}
