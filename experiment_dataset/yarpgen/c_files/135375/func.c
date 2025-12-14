/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135375
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
    var_16 |= ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_3 [i_1] [i_0 - 1] [i_1]))) ? (((((/* implicit */_Bool) ((arr_0 [i_0]) << (((arr_0 [i_0]) - (2140142830)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_0]))) : (((long long int) arr_3 [i_1] [(signed char)3] [6LL])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1])) ? (((/* implicit */int) arr_2 [i_1 + 3] [i_1])) : (((/* implicit */int) arr_2 [i_1 + 2] [i_1])))))));
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((signed char) arr_0 [(short)0]))) : (((/* implicit */int) arr_1 [i_0 + 1])))))));
                arr_5 [i_1] [8ULL] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) arr_3 [i_1] [i_1 + 3] [i_0 + 1])) : (((/* implicit */int) arr_3 [i_1] [i_1 + 1] [i_0 - 1])))) & (((((/* implicit */int) arr_3 [i_1] [i_1 + 2] [i_0 + 1])) + (((/* implicit */int) var_0))))));
            }
        } 
    } 
}
