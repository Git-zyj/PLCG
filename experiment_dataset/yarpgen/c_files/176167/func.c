/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176167
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
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)4), (((/* implicit */unsigned char) arr_3 [i_1])))))) - ((-(0U)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((arr_1 [i_0] [i_1]), (arr_3 [i_1])))), (min((var_17), (((/* implicit */unsigned int) arr_0 [i_0]))))))) : (min((((/* implicit */unsigned long long int) var_7)), (((18446744073709551601ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
                var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) : (min((((/* implicit */unsigned long long int) var_8)), (var_13)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((_Bool) (signed char)6)), (arr_2 [i_1]))))) : (((((((/* implicit */int) arr_2 [i_1])) >= (((/* implicit */int) (unsigned char)4)))) ? (((((/* implicit */_Bool) (unsigned char)232)) ? (26U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)115))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_1])))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (var_18)))) ? (((/* implicit */unsigned long long int) var_1)) : (var_18)))));
    var_23 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_16))))), (var_5))) | (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
}
