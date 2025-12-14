/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131749
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
    var_17 += ((/* implicit */unsigned char) -2147483647);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [0U] |= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (arr_0 [i_1 - 2]) : (arr_0 [i_1 - 2]))));
                arr_7 [i_0] [i_1] = ((var_6) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) var_13)) : (arr_2 [i_1] [i_0])))) ? (min((var_14), (((/* implicit */unsigned long long int) var_6)))) : (((((/* implicit */unsigned long long int) arr_0 [i_0])) / (var_1))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) var_14);
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))) ? (var_0) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_0)))))))))));
}
