/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104727
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
    var_15 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (min((var_3), (((/* implicit */unsigned long long int) var_5)))))), (var_3)));
    var_16 = ((/* implicit */short) var_6);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_17 = max((arr_0 [i_0]), (min(((+(arr_0 [i_0]))), (arr_5 [i_1] [i_0] [i_0]))));
                var_18 = ((/* implicit */unsigned int) (+(((arr_2 [i_0]) % (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */unsigned int) arr_3 [i_0] [i_0])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            {
                arr_10 [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        for (long long int i_6 = 1; i_6 < 21; i_6 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) max((min((arr_16 [i_2] [i_2 + 1] [i_4]), (max((((/* implicit */long long int) arr_9 [i_2] [i_2])), (arr_11 [i_2] [i_4] [(signed char)21] [i_2]))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) min((arr_8 [(signed char)6]), (arr_9 [21ULL] [i_2])))), (max((arr_12 [(unsigned char)8] [i_2] [i_6 + 2]), (((/* implicit */unsigned int) arr_6 [i_5] [i_3])))))))));
                                var_20 = ((/* implicit */unsigned long long int) arr_12 [3LL] [i_2] [i_3]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) arr_11 [i_3] [(short)20] [i_3] [i_3])), (arr_7 [17ULL]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_4] [i_3] [i_4] [i_3] [i_2])))))))))))));
                }
                arr_17 [i_2] = ((/* implicit */short) min((((((18446744073709551615ULL) == (9ULL))) ? (((/* implicit */unsigned long long int) arr_16 [i_2] [i_2 + 1] [i_2 - 1])) : (max((arr_14 [i_2] [i_2] [i_2] [(signed char)12] [i_3]), (((/* implicit */unsigned long long int) arr_15 [i_2])))))), (max((arr_7 [i_2]), (((/* implicit */unsigned long long int) arr_16 [i_2] [i_3] [i_2]))))));
                arr_18 [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((((/* implicit */int) arr_6 [i_2] [i_3])) + (((/* implicit */int) arr_8 [i_3])))) : (((((/* implicit */int) arr_6 [2ULL] [i_3])) & (((/* implicit */int) arr_6 [i_2] [i_2]))))))) ? (((/* implicit */int) ((arr_12 [i_2 - 1] [i_2] [i_2 - 1]) > (arr_12 [i_2 + 1] [i_2] [i_2 + 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_2])) || ((!(((/* implicit */_Bool) arr_12 [i_3] [i_2] [i_3])))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) min((max((min((18446744073709551606ULL), (((/* implicit */unsigned long long int) (signed char)44)))), (((/* implicit */unsigned long long int) (_Bool)1)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_14)), (var_9))))) : (((var_3) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
}
