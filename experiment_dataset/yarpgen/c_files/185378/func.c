/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185378
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
    var_16 |= ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 21; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_17 |= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_8 [(unsigned short)11] [i_2 + 1] [i_3]) : (((/* implicit */unsigned long long int) var_3))))));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                            {
                                var_18 = ((/* implicit */long long int) (((!((_Bool)1))) && (((/* implicit */_Bool) arr_12 [i_0] [i_0]))));
                                arr_14 [i_4] [i_4] [i_1] [0ULL] [i_1] [i_0] = ((/* implicit */short) (unsigned short)54158);
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min(((-(arr_8 [i_0 - 1] [i_0 - 1] [i_2 + 2]))), (((/* implicit */unsigned long long int) var_13)))))));
                            }
                            for (long long int i_5 = 3; i_5 < 24; i_5 += 2) 
                            {
                                var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)77)))))));
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) 3361787279U))) ? (min((arr_8 [i_0 + 2] [i_2 + 2] [i_5 - 3]), (((/* implicit */unsigned long long int) arr_2 [i_0 - 2])))) : (((/* implicit */unsigned long long int) (+(arr_2 [i_0 - 1]))))));
                            }
                            arr_17 [i_1] [i_2] [i_3] = ((/* implicit */short) (-((+(((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1] [(unsigned short)18]))))));
                            var_22 = ((/* implicit */signed char) arr_13 [i_3] [i_2] [i_1] [i_1] [i_0]);
                        }
                    } 
                } 
                arr_18 [i_0 - 3] [(signed char)22] = ((/* implicit */unsigned short) ((unsigned long long int) ((short) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) 933180016U))))));
            }
        } 
    } 
}
