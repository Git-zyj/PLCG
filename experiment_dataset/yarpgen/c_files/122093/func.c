/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122093
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
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_1 + 1] [i_0]), (arr_3 [i_0] [i_1 - 1] [i_0])))) ? (arr_3 [i_0] [i_1 - 1] [i_1]) : (min((arr_3 [i_1] [i_1 + 2] [i_1]), (arr_3 [i_0] [i_1 - 1] [i_1])))));
                arr_6 [24] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -4591975129715076898LL)))) / (((arr_1 [14]) << (((arr_2 [i_0]) - (2078885618886690789ULL)))))))) && (((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1] [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (+((+(((352342108) >> (((((/* implicit */int) (signed char)-53)) + (73))))))))))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                            {
                                var_12 = max((((/* implicit */unsigned long long int) arr_15 [i_1 - 1] [i_1 - 1] [i_4] [i_4] [i_0])), (((unsigned long long int) (unsigned char)56)));
                                arr_17 [i_0] [(unsigned char)21] [i_3] [i_0] [i_4] = ((/* implicit */int) 12560736204959075988ULL);
                                arr_18 [4ULL] [4ULL] [i_2] [i_2] [4ULL] [i_3] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((5886007868750475628ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3])))))) && (((/* implicit */_Bool) 18446744073709551615ULL)))))));
                            }
                            for (int i_5 = 0; i_5 < 25; i_5 += 1) 
                            {
                                arr_21 [i_5] [i_0] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_7 [i_5] [(signed char)10] [(signed char)10]);
                                var_13 = ((/* implicit */unsigned long long int) var_3);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (signed char)-28);
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */long long int) var_0)))))));
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) var_0))))) ? (((((/* implicit */unsigned long long int) var_3)) - (var_7))) : (((var_1) / (((/* implicit */unsigned long long int) var_4))))))))));
    var_17 = ((/* implicit */unsigned int) var_6);
}
