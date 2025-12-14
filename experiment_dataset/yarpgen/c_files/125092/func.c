/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125092
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
    for (unsigned char i_0 = 4; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_18 |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_1 [i_0 - 1])))) ? (8ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0 + 2]) <= (((/* implicit */int) var_12))))))));
                arr_6 [i_0 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */unsigned int) arr_1 [i_0 - 1])) : (arr_5 [i_1 + 1])))) ? (((/* implicit */int) min(((signed char)-32), (((/* implicit */signed char) var_13))))) : (max((arr_0 [i_0 - 2]), (arr_1 [i_0 - 2])))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (0ULL)))) ? (((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (2423734658U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) > (((long long int) (!(((/* implicit */_Bool) var_14))))))))));
}
