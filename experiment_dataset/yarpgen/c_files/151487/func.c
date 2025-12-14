/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151487
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
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1]))))))));
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((8192), (((/* implicit */int) var_2))))) ? (max((arr_1 [i_0]), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) (+(-586049871)))))))));
                var_23 = ((/* implicit */int) max((var_23), ((~((-(8192)))))));
            }
        } 
    } 
}
