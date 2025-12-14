/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122918
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((10636146573284154435ULL), (((/* implicit */unsigned long long int) (short)992)))))));
                    arr_8 [i_0] [(unsigned short)8] [i_2] = (+((~(max((((/* implicit */long long int) var_10)), (var_17))))));
                    arr_9 [0LL] [i_1] [i_1] &= ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) 131115952)))));
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32768)) ? (arr_6 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) min((var_10), (((/* implicit */short) arr_5 [3]))))))))) ? (min((((/* implicit */long long int) arr_0 [i_0])), (var_12))) : (((/* implicit */long long int) var_14))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((signed char) var_9));
}
