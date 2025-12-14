/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185604
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
    for (short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 1])) <= (((/* implicit */int) arr_1 [i_0 - 2] [i_0 + 1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((int) arr_3 [i_0] [i_0])) : (1696578868)))))))));
                arr_7 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31049)) ? (2147483647) : (((/* implicit */int) (short)31049))))) ? (((/* implicit */unsigned long long int) (+(arr_6 [i_0] [i_0])))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (short)31060))))), (arr_3 [i_0] [i_1]))));
            }
        } 
    } 
    var_11 += ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */unsigned int) ((var_6) ? (var_8) : (((/* implicit */int) var_9))))), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_8))))));
}
