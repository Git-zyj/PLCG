/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184177
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
    var_18 &= ((/* implicit */unsigned long long int) ((var_12) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 12888458452642930348ULL))) && (var_13)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_5 [i_4]), (((var_15) ? (arr_4 [10] [10] [i_3]) : (((/* implicit */int) arr_6 [i_4] [i_4]))))))) ? (((5929626436019001408ULL) * (((/* implicit */unsigned long long int) 4U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                                var_20 *= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((min((arr_9 [i_2]), (((/* implicit */long long int) 3U)))), (((((arr_0 [i_3]) + (9223372036854775807LL))) << (((1U) - (1U)))))))), (((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_17)))) ^ (((/* implicit */unsigned long long int) ((424304821U) - (((/* implicit */unsigned int) arr_14 [(signed char)12] [(signed char)12] [i_2] [i_3] [i_4])))))))));
                                arr_16 [i_4] [i_1] [i_1] [10LL] [i_1] = ((/* implicit */long long int) 4355830813893190956ULL);
                                arr_17 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */unsigned long long int) arr_2 [(unsigned short)1]);
                            }
                        } 
                    } 
                    arr_18 [7LL] [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) arr_7 [i_1])) ? (-28898616216747773LL) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))) ? (((/* implicit */unsigned long long int) (~(arr_5 [i_1])))) : (((((/* implicit */_Bool) 1854512144)) ? (467488212752743857ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))));
                    arr_19 [i_0] [i_1] [6] [i_0] = ((/* implicit */long long int) 612054235);
                    var_21 = ((/* implicit */short) max((arr_0 [i_0 + 1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_1 - 1])))))));
                }
            } 
        } 
    } 
    var_22 = min((max((((((/* implicit */_Bool) var_16)) ? (12147105304075538785ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_14), (((/* implicit */short) (signed char)-10)))))) > ((-(var_9)))))));
}
