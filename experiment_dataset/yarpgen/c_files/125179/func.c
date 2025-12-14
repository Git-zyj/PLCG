/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125179
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
    var_11 = ((/* implicit */unsigned short) var_3);
    var_12 = ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_2 [i_0 + 1] [i_1 + 1]) ^ (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0 + 2])) + (((/* implicit */int) arr_0 [i_0 + 1])))))))) ? (((((/* implicit */_Bool) ((arr_4 [i_0] [i_1]) * (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))) ? (arr_4 [i_1 - 1] [i_0 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_1 - 2] [i_1 - 2] [i_1 - 2]), (arr_3 [i_0] [i_1] [i_0 + 3]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) && (((/* implicit */_Bool) arr_0 [i_1 - 2])))))))))));
                var_14 &= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL)));
            }
        } 
    } 
}
