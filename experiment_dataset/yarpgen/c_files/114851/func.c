/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114851
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
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) var_2))));
    var_12 = var_3;
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) arr_1 [i_0 - 1])));
                arr_6 [i_0] [7ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-1)) >= (((/* implicit */int) (unsigned short)62728)))))))) ? (max((((/* implicit */unsigned int) arr_4 [i_0 - 1] [i_1] [i_1])), (var_7))) : ((-(32512U)))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) var_8))));
}
