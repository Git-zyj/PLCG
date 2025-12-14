/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14876
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */int) var_8);
                arr_6 [i_0] [i_1] [17LL] = arr_1 [i_1];
            }
        } 
    } 
    var_11 = ((/* implicit */long long int) var_8);
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (var_5))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1595408725)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) ? (var_6) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)89)))))))) : (((((var_3) | (((/* implicit */long long int) ((/* implicit */int) var_9))))) ^ (var_3)))));
    var_13 += ((/* implicit */unsigned int) var_2);
}
