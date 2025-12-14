/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163996
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_9), (arr_2 [i_0] [i_1] [i_1])))) ? (((arr_0 [i_0] [i_0]) / (arr_0 [i_0] [3U]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 3119552750U))))))) * (var_15)));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 72057594004373504ULL)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (12081114346084179894ULL)));
                var_20 += ((/* implicit */unsigned int) ((signed char) arr_3 [2U] [0U] [i_1]));
                var_21 = ((/* implicit */unsigned int) ((max((((10081445034933571957ULL) / (((/* implicit */unsigned long long int) 4294967295U)))), (11728344647035343588ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((unsigned long long int) min((648948161U), (480512078U)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_10);
    var_24 += min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */unsigned long long int) (+(8386560U)))) * (var_2))));
}
