/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100264
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
    var_15 *= max((var_11), (((/* implicit */short) var_9)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) min((arr_3 [i_0]), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_7)))))))));
                var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_0])) ? (((arr_3 [i_0]) - (((/* implicit */long long int) arr_2 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))))) % (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1])))))));
            }
        } 
    } 
}
