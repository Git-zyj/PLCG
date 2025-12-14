/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122980
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
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(var_14)));
                                var_16 = ((/* implicit */long long int) (~(14427626914397345578ULL)));
                                var_17 ^= min((((((/* implicit */_Bool) 2997380582U)) ? (arr_9 [i_2 + 2] [i_4] [7U]) : (14427626914397345577ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_2 + 1] [i_3] [(unsigned short)6] [i_3] [(short)10])) ? (((/* implicit */long long int) arr_12 [i_2 + 3] [(short)9] [(short)9] [i_2] [i_3])) : (var_15)))));
                                arr_14 [i_0] [i_1] [i_2] [1ULL] [i_3] = ((/* implicit */long long int) arr_4 [i_0]);
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */short) arr_8 [i_0]);
            }
        } 
    } 
    var_18 &= ((/* implicit */long long int) (~(((/* implicit */int) (short)21183))));
    var_19 += ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)174))));
}
