/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157745
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_2), (var_2)))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (((long long int) var_16))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 -= ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1048568U)) || (((/* implicit */_Bool) arr_8 [i_2] [i_1] [i_2] [i_0])))) ? (((4293918708U) / (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_2])))))))) ? (((((/* implicit */_Bool) max((33554431U), (((/* implicit */unsigned int) arr_6 [i_0]))))) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1])) : (((((/* implicit */int) arr_2 [i_1])) | (((/* implicit */int) (signed char)127)))))) : (((arr_2 [i_1]) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) var_13)))));
                    var_20 -= ((/* implicit */int) arr_3 [i_0] [i_2]);
                }
            } 
        } 
    } 
}
