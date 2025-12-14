/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163016
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
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) 1066165363)) ? (18ULL) : (17828515675043884924ULL))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) 268369920)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65530))));
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_3 [i_0 + 1]))) ? (((long long int) var_3)) : (max((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))) : (var_9))), (((/* implicit */long long int) arr_0 [11])))))))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_3 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0 + 1])) << (((var_0) - (504750047221283263ULL)))))) : (min((((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))), (((/* implicit */unsigned long long int) arr_0 [i_0 + 2])))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) var_2);
}
