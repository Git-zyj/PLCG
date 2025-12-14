/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10843
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)31315);
                                arr_16 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) min(((~(-649265540))), (((/* implicit */int) ((unsigned char) var_1)))));
                                var_14 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_14 [i_3 + 1] [i_1] [i_2] [i_1] [(unsigned short)10] [i_2] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3 + 1] [i_3 + 1] [i_2 + 1] [i_3] [i_4] [i_2] [i_2 - 1]))) : (var_6))), (min((((/* implicit */long long int) (short)16502)), (((-101640363727431633LL) - (var_6)))))));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 17845746266016584723ULL)) ? (((((/* implicit */_Bool) (unsigned short)36732)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)16496)) ? (((/* implicit */int) (short)26774)) : (((/* implicit */int) (unsigned short)49152))))) : (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((arr_6 [i_2] [i_2] [i_2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2])))))), (var_9)))))));
                                var_16 += ((/* implicit */short) 1674668154894634278LL);
                            }
                        } 
                    } 
                } 
                arr_17 [i_1] = ((/* implicit */unsigned long long int) var_7);
                var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) -7LL)) || (((/* implicit */_Bool) 540431955284459520ULL))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((-7LL) + (9223372036854775807LL))) << (((((unsigned int) var_4)) - (795662380U)))));
}
