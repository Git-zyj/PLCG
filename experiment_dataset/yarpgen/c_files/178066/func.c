/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178066
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
    var_12 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */short) min((((((min((((/* implicit */long long int) var_2)), (1880088573037594764LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_3 [i_0 - 2])) - (8254))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_1 - 1] [i_2 + 1])) : (arr_4 [i_1 + 2]))))));
                    var_14 += 15027961883211392292ULL;
                    arr_9 [i_1] [i_1 - 1] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_2] [i_1] [i_0 + 1])) == (((((/* implicit */int) max((arr_5 [i_1 + 2] [i_1] [i_2]), (var_1)))) & (((/* implicit */int) ((((/* implicit */int) arr_6 [i_2 - 2] [i_1] [i_2 - 2] [i_2 - 1])) == (((/* implicit */int) arr_1 [i_0])))))))));
                }
            } 
        } 
    } 
    var_15 += ((/* implicit */unsigned char) var_3);
}
