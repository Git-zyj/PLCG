/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136823
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [(signed char)16] [(signed char)16] = ((/* implicit */_Bool) (+(((unsigned int) arr_0 [i_1 - 1] [i_1 - 1]))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_0 [i_1 - 2] [i_1 - 1])))));
            }
        } 
    } 
    var_11 = ((/* implicit */short) min((((/* implicit */long long int) (signed char)7)), (-6410245973760851455LL)));
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */short) var_8)), (min((var_9), (((/* implicit */short) var_1))))))) > (((/* implicit */int) var_8))));
}
