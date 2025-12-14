/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14025
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)7425))));
                var_12 = ((/* implicit */unsigned short) ((((min((var_9), (var_6))) != (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 + 3] [i_0 + 1])) ? (var_0) : (arr_3 [i_0 + 2] [i_0 - 1] [i_0 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_2))))));
                var_13 = ((/* implicit */unsigned short) arr_2 [i_0 - 1]);
                var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((arr_1 [i_0]), (arr_1 [i_0])))) != (arr_3 [i_0] [(unsigned short)4] [(short)10])));
                var_15 = ((/* implicit */unsigned short) var_2);
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_11);
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */unsigned long long int) 4268676626U)) < (var_7)))), (min((var_2), (((/* implicit */short) var_1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) (short)7427)) <= (((/* implicit */int) var_2)))) && (((/* implicit */_Bool) ((465033199U) | (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))))) : ((~(((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
}
