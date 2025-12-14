/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186720
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
    var_13 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) min((((/* implicit */signed char) var_0)), (var_2)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) var_10);
                arr_6 [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [15ULL])) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1]))))) : (arr_5 [3LL])));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */short) (-(arr_0 [(_Bool)1])));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */long long int) var_9);
            }
        } 
    } 
}
