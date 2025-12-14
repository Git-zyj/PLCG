/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127895
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_6 [i_0 - 1] [i_1] [i_1] = ((/* implicit */int) max((max((8673517539611848440ULL), (((/* implicit */unsigned long long int) max((arr_3 [i_1]), (((/* implicit */short) arr_2 [i_0] [i_1]))))))), (((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (var_8)))) : (var_4)))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) max((arr_3 [i_1]), (arr_0 [i_0]))))))));
                arr_8 [i_1] [i_1] = min((min((arr_5 [i_0 - 1] [i_0 - 1]), (arr_5 [i_0 - 1] [i_0 - 1]))), (((((/* implicit */_Bool) var_6)) ? (arr_5 [i_0 - 1] [i_0 - 1]) : (arr_5 [i_0 - 1] [i_0 - 1]))));
            }
        } 
    } 
    var_14 = (_Bool)1;
}
