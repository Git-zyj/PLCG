/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186802
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
    var_17 = var_11;
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */int) max((var_6), (((/* implicit */unsigned short) arr_3 [1ULL]))))), (((int) var_3))))), (min((-6539046472415558552LL), (((/* implicit */long long int) var_1))))));
                arr_5 [i_0] [i_1] = ((/* implicit */short) (+(((/* implicit */int) ((short) ((((/* implicit */_Bool) var_14)) ? (arr_2 [i_0 + 1] [i_0] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1])))))))));
                var_19 = ((/* implicit */long long int) (-(min((2731213790U), (((/* implicit */unsigned int) arr_0 [i_0 + 1]))))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_4 [i_0 - 1]))) ? ((~(var_9))) : (((/* implicit */unsigned long long int) ((arr_0 [i_0 + 1]) ? (-5192221578465145947LL) : (((/* implicit */long long int) arr_4 [i_0 + 1])))))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_3 [i_0 + 1]), (arr_3 [i_0 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_0 + 1])))) : (((var_4) << (((((/* implicit */int) var_8)) - (11399)))))));
            }
        } 
    } 
}
