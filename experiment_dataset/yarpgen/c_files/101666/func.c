/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101666
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((unsigned int) max((arr_4 [(short)12] [i_1] [i_1]), (((/* implicit */unsigned short) (_Bool)0))))))));
                var_20 = ((/* implicit */unsigned short) ((arr_6 [i_0] [i_0] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) : (min((461349548U), (((/* implicit */unsigned int) (_Bool)1))))));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_0 [i_0]))) ? (max((var_13), (((/* implicit */unsigned long long int) ((unsigned short) arr_5 [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) 241308495U)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
    var_23 -= ((/* implicit */long long int) var_15);
    var_24 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_4)), (((long long int) max((((/* implicit */unsigned int) -2147483645)), (var_14))))));
}
