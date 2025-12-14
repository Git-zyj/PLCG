/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17179
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned int) var_10))), (((long long int) var_2)))))));
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) max((4289493155U), (var_1)))) : (var_13)))) ? ((((-(4289493151U))) - (4289493143U))) : (((/* implicit */unsigned int) ((int) var_5))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))))));
                var_19 = ((/* implicit */int) 4289493151U);
                var_20 = ((((/* implicit */_Bool) 5474127U)) ? (max((arr_4 [i_0] [i_0] [i_1]), (arr_1 [i_0] [i_1]))) : ((+(((/* implicit */int) arr_3 [i_0])))));
                var_21 = ((/* implicit */unsigned char) ((int) ((int) arr_3 [i_0])));
                var_22 |= ((/* implicit */long long int) ((int) arr_0 [i_0] [i_1]));
            }
        } 
    } 
    var_23 |= ((/* implicit */int) var_7);
    var_24 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (-(var_12)))) ? (var_12) : (var_10))));
}
