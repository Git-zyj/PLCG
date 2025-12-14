/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15825
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
    var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((var_12), (((/* implicit */int) var_10)))) | (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((unsigned int) (unsigned char)19))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((((/* implicit */int) var_6)) ^ (var_14)))) : (var_15)))));
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_14))));
    var_21 = ((((253188236) | (((/* implicit */int) (unsigned short)0)))) % (var_14));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
                arr_5 [i_0 + 1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0] [i_0 - 4])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0 - 4]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_0 - 2])) <= (((/* implicit */int) arr_2 [i_0 - 1] [i_0] [i_0 - 2]))))) : (((arr_2 [i_1] [i_0] [i_0 - 3]) ? (((/* implicit */int) arr_2 [i_0 + 2] [i_0] [i_0 - 2])) : (var_5)))));
            }
        } 
    } 
}
