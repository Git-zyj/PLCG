/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111814
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
    var_14 = ((/* implicit */long long int) var_4);
    var_15 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(24ULL)))) ? (((/* implicit */unsigned int) ((int) arr_0 [i_2]))) : (((arr_0 [i_2]) << (((var_12) - (3278940252U))))))))));
                    var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((0ULL) - (((/* implicit */unsigned long long int) 1466701117U))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 6ULL)))))) + (arr_5 [i_2] [i_0 - 1] [i_2]))) : (arr_5 [i_2] [i_1] [i_2])));
                }
            } 
        } 
    } 
    var_18 &= ((/* implicit */_Bool) var_9);
}
