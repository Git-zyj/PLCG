/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158560
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
    var_14 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_3 [i_1])), (((arr_2 [i_0]) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [i_0])))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (-201843788) : (((/* implicit */int) (_Bool)1))))) : (((unsigned long long int) arr_1 [i_0]))))));
                arr_4 [i_1] = ((/* implicit */int) arr_3 [i_1]);
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) max(((-(((((/* implicit */_Bool) 16093394055423575904ULL)) ? (582427148225632052ULL) : (582427148225632052ULL))))), (((/* implicit */unsigned long long int) ((arr_3 [i_0]) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))))));
            }
        } 
    } 
}
