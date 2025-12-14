/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187722
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
    var_14 = ((/* implicit */long long int) var_7);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 24; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) max((10964305151446557071ULL), (((/* implicit */unsigned long long int) 3060215810U))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_12 [i_4] [i_2] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) (signed char)-122);
                                arr_13 [i_1] [i_2] = ((/* implicit */long long int) 0ULL);
                            }
                        } 
                    } 
                    arr_14 [i_2] [i_0] [i_2] [11LL] = ((/* implicit */signed char) ((((/* implicit */long long int) 3060215809U)) & (-9223372036854775783LL)));
                }
            } 
        } 
        arr_15 [i_0] [i_0] = min((max((arr_1 [i_0]), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((3060215809U) >= (3371876913U)))));
        /* LoopNest 2 */
        for (long long int i_5 = 2; i_5 < 24; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                {
                    arr_21 [i_5] [i_5 - 1] [i_6] [i_5] = ((/* implicit */signed char) ((((unsigned long long int) var_9)) ^ (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [23LL]))))), (max((-1503625848457075705LL), (((/* implicit */long long int) 268304384U)))))))));
                    arr_22 [i_6] [i_5] [i_0] = ((/* implicit */long long int) arr_2 [i_5 - 2] [i_5 - 2] [i_5]);
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (~(max((arr_1 [i_6]), (3940649673949184ULL))))))));
                }
            } 
        } 
    }
}
