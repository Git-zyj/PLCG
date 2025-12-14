/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182635
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
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) var_4))));
    var_17 ^= ((unsigned long long int) ((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 1825450736U))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0 - 1]))))) - (14300458231289744704ULL)))));
                var_19 += ((/* implicit */short) ((arr_3 [i_1 + 2] [i_0]) != (arr_3 [i_0] [i_0])));
                var_20 = ((((/* implicit */_Bool) max((arr_2 [i_0 - 2] [i_1 - 1]), (arr_2 [i_0] [15LL])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 3] [i_1])) || (((/* implicit */_Bool) arr_2 [i_0 - 1] [(unsigned char)15])))))) : (((unsigned int) arr_2 [i_0 + 3] [i_1 - 1])));
            }
        } 
    } 
}
