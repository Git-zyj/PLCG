/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176454
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2 - 1] = min((min((((/* implicit */long long int) arr_0 [i_2] [i_2 - 1])), (((((/* implicit */_Bool) var_8)) ? (7205371142059292556LL) : (var_8))))), (max((5656346505485176704LL), (((/* implicit */long long int) min((((/* implicit */int) (short)-1)), (1594702856)))))));
                    var_10 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */long long int) min((0U), (((/* implicit */unsigned int) arr_7 [(signed char)9] [i_2] [i_2 + 1] [i_2]))))) != (min((((/* implicit */long long int) var_9)), (5656346505485176704LL)))))), (min((-5656346505485176705LL), (-5656346505485176705LL)))));
                    arr_9 [i_0] = ((/* implicit */short) ((4200651712U) << (((3100524825U) - (3100524811U)))));
                }
            } 
        } 
    } 
    var_11 = 5656346505485176711LL;
    var_12 = ((/* implicit */unsigned short) var_6);
    var_13 = ((/* implicit */unsigned long long int) (unsigned short)65535);
}
