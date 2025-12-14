/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174910
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) ((var_7) > (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) < (arr_2 [i_1 - 1] [i_0]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 2] [i_1])))))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1 + 1])) : (arr_3 [i_0])))));
                var_17 *= ((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (2934337871U)))));
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) min(((+(arr_1 [i_1 + 1]))), (((/* implicit */unsigned long long int) ((((unsigned int) arr_0 [i_0] [i_1])) == (((/* implicit */unsigned int) ((/* implicit */int) ((var_12) <= (var_11)))))))))))));
                arr_6 [i_0] |= ((/* implicit */unsigned int) var_10);
            }
        } 
    } 
    var_19 |= ((/* implicit */unsigned short) var_4);
}
