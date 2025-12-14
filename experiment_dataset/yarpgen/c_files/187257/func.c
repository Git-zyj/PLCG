/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187257
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_8)))), (((var_0) ? (arr_0 [i_0]) : (((/* implicit */int) var_11))))))) - (min((((/* implicit */unsigned int) var_2)), (max((((/* implicit */unsigned int) var_4)), (var_12)))))));
                    var_17 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_1 [i_0])) & (min((var_9), (((/* implicit */unsigned long long int) (-(var_10))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (1303306976U))))))) + (((/* implicit */int) var_4))));
}
