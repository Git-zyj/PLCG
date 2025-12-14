/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113801
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_3 [(unsigned short)7] [i_1] [i_0]), (arr_3 [i_2] [i_1] [i_0])))) ? (arr_1 [i_0]) : (((arr_5 [(unsigned short)0] [i_1]) - (arr_4 [i_0] [i_0] [i_0])))))) ? (arr_2 [i_2] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_0])) : (arr_5 [i_0] [10U]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_0 [i_0])))))))))));
                    arr_7 [i_2] [i_0] [i_0] [(short)9] = ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_2]);
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(var_9)));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_13))));
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_0))));
}
