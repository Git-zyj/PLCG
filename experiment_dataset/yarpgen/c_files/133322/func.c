/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133322
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
    var_10 = ((((/* implicit */_Bool) 453644249571438442ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-7))) : (-5677928043024462657LL));
    var_11 = -1828508997;
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [12ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) arr_4 [i_2])) : (var_9)))))))) : (max((((((/* implicit */_Bool) arr_7 [(short)10])) ? (((/* implicit */unsigned int) -1828508997)) : (arr_6 [i_2] [i_1]))), (((/* implicit */unsigned int) var_4)))))))));
                    var_13 = ((/* implicit */unsigned int) arr_2 [i_0 + 1] [8U]);
                }
            } 
        } 
    } 
}
