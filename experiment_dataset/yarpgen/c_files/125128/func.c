/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125128
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
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) != (((/* implicit */unsigned long long int) arr_4 [0ULL] [i_1]))))))))));
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((arr_6 [(short)4] [(short)4]) < (((((/* implicit */_Bool) var_1)) ? (arr_4 [(short)6] [i_1]) : (arr_4 [10ULL] [i_1]))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((max((min((((/* implicit */unsigned long long int) var_12)), (var_3))), (max((var_13), (var_18))))) >= (((/* implicit */unsigned long long int) (~(min((((/* implicit */int) var_5)), (var_15)))))))))));
    var_22 = ((/* implicit */unsigned long long int) (~(var_1)));
    var_23 = ((/* implicit */short) var_17);
}
