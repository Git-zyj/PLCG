/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117045
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
    var_19 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((arr_0 [i_0] [5]), (((/* implicit */unsigned int) arr_3 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (arr_3 [i_0]) : (((/* implicit */int) var_13))))) : (min((var_10), (((/* implicit */long long int) (short)-899)))))), (((/* implicit */long long int) var_9))));
                arr_5 [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
                var_21 += ((/* implicit */unsigned int) ((unsigned short) min(((+(((/* implicit */int) var_13)))), (((/* implicit */int) var_2)))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) > (((var_2) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))), ((~((+(((/* implicit */int) var_9))))))));
}
