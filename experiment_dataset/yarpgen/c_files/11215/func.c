/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11215
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
    for (int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */int) var_3)) | (((((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_14))))) * (min((((/* implicit */int) var_6)), (-2147483630)))))))));
                var_16 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)8167)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8149))))), (((/* implicit */unsigned long long int) ((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))) ? (max((-770965196), (((/* implicit */int) arr_2 [i_0])))) : (((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) arr_4 [i_0 + 1])) : ((-(2147483631))))));
                var_17 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) && (((/* implicit */_Bool) arr_4 [i_0 + 1])))))));
                var_18 = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) -2147483618)) ? (-2147483631) : (((/* implicit */int) var_3)))))) + (-2147483628)));
            }
        } 
    } 
    var_19 = ((((/* implicit */_Bool) max((2147483615), (2147483630)))) ? (((((/* implicit */_Bool) -2147483618)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3024425039U))) : (1969393387U));
}
