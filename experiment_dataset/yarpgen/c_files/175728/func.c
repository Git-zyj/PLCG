/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175728
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
    var_14 = ((/* implicit */signed char) ((((long long int) min((var_8), (((/* implicit */long long int) (signed char)-1))))) - (((((155205624104161316LL) + (var_5))) - (((/* implicit */long long int) ((/* implicit */int) min((var_6), (var_6)))))))));
    var_15 ^= ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (-155205624104161319LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)7920), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (277297319U))))));
                                var_17 += ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)120)) ? (max((((/* implicit */long long int) max((((/* implicit */unsigned char) arr_9 [i_0] [i_1] [i_0] [(short)18] [(short)18] [i_2] [i_0])), ((unsigned char)255)))), (min((-155205624104161325LL), (-155205624104161323LL))))) : (((/* implicit */long long int) -499039518))));
                                var_18 = ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (14LL) : (((/* implicit */long long int) ((min((((/* implicit */unsigned int) arr_1 [i_0])), (277297319U))) * (((/* implicit */unsigned int) min((((/* implicit */int) (short)-20687)), (var_9))))))));
                                arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((unsigned short) arr_7 [i_1 - 3] [i_2 - 1] [i_2] [i_3 - 1] [i_1]))) ? (min((((((var_5) + (9223372036854775807LL))) << (((/* implicit */int) arr_9 [i_1] [i_3] [i_2] [i_0] [i_0] [i_0] [i_1])))), (min((var_5), (((/* implicit */long long int) (_Bool)1)))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_7 [i_0] [i_1 - 1] [i_2] [(signed char)9] [i_1])), (arr_4 [i_1 + 1] [i_1] [i_0]))))));
                            }
                        } 
                    } 
                    var_19 |= ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) var_12)), (4294967295ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(short)6] [i_0] [i_2 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2 + 2] [i_1] [i_1 + 1]))) : (((2774601633U) << (((var_10) - (1017071532))))))))));
                }
            } 
        } 
    } 
}
