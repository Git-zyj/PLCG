/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171819
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
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (((_Bool)0) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 18446744073709551615ULL)))) : (((var_7) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_0)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) var_8))))) : (((((/* implicit */_Bool) (unsigned char)94)) ? (-1853389036) : (((/* implicit */int) arr_5 [i_1] [i_1] [i_0])))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_1]))))) % (((arr_4 [i_0] [i_1]) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1])))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_16))));
}
