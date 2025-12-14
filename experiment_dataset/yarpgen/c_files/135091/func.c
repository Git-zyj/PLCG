/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135091
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
    var_13 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */int) var_4);
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_2 [i_0 + 1]), (((/* implicit */signed char) arr_3 [i_0 - 2]))))) ? (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12023703654461128173ULL))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0 - 3])))))));
                var_15 = ((/* implicit */_Bool) (unsigned short)0);
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((var_11) | (((/* implicit */unsigned long long int) var_3))))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_8)))) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_12))));
    var_17 = ((/* implicit */unsigned int) var_9);
}
