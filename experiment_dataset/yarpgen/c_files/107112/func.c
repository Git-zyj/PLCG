/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107112
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
    var_15 = ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-125))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (_Bool)1))));
                            var_18 &= ((/* implicit */signed char) ((((/* implicit */int) (short)3)) % (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)179)) && (((/* implicit */_Bool) max((1520050254798756413ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))))));
                            var_19 = ((/* implicit */int) min(((+(arr_5 [i_1 + 1] [i_1 - 1] [i_2]))), (((/* implicit */unsigned long long int) arr_8 [i_2] [i_3] [i_2]))));
                            var_20 ^= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 + 1] [0ULL] [i_1 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_1 - 1] [i_1 + 1] [0U] [i_1 + 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 *= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((var_10) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))) : ((+(((/* implicit */int) (signed char)127)))))));
}
