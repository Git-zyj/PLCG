/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100125
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) min((min((min((((/* implicit */long long int) arr_2 [(short)6])), (arr_5 [i_0]))), (((/* implicit */long long int) arr_4 [i_1] [i_1])))), (((/* implicit */long long int) var_7))));
                var_20 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned char)9] [i_1]))) > (16102088641992307351ULL)))), (((arr_0 [(_Bool)1] [(_Bool)1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_1])))))));
            }
        } 
    } 
    var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) max((((/* implicit */int) (_Bool)1)), (var_5)))))) : (var_1)));
}
