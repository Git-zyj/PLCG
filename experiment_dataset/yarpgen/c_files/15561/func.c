/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15561
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
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) var_10)) : (min((((/* implicit */int) var_10)), (max((((/* implicit */int) var_5)), (var_8)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */short) (~((~(arr_6 [i_1])))));
                arr_7 [i_0] [i_1] = ((/* implicit */short) max((((/* implicit */long long int) var_7)), (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)7))) : (arr_4 [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0])) % (((/* implicit */int) var_2)))))))));
                arr_8 [i_0] [i_0] = max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_1])) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)53973)))) : (((/* implicit */int) max(((signed char)-103), (((/* implicit */signed char) arr_5 [i_0] [i_0] [i_0])))))))), (max((((arr_6 [i_0]) - (var_3))), (((/* implicit */long long int) var_7)))));
            }
        } 
    } 
    var_13 = var_1;
    var_14 = ((/* implicit */long long int) max((((/* implicit */short) var_5)), (var_1)));
    var_15 = ((/* implicit */short) max((((/* implicit */int) var_1)), (var_8)));
}
