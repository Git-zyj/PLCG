/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14448
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
    var_15 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_5)) ? (2807210636849957472ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_12)), (var_2))))))));
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-9135)), (0LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-1LL) : (var_1)))))) ? (((/* implicit */unsigned long long int) max((max((4317464683329212448LL), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) ((var_4) > (var_5))))))) : (var_0))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                var_17 = ((unsigned short) arr_7 [i_0] [i_1] [i_0]);
                /* LoopSeq 2 */
                for (long long int i_2 = 2; i_2 < 23; i_2 += 1) 
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_4 [2U] [i_0]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (arr_11 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_11 [i_0] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))))))) : (var_11)));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) (short)(-32767 - 1))))))));
                                arr_19 [i_0] [i_1] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */long long int) max((((/* implicit */unsigned short) min((arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]), (arr_13 [i_0] [i_1 - 1] [i_1] [i_1] [i_1])))), (arr_9 [i_0 + 2] [(_Bool)1])));
                                arr_20 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 + 4] = ((/* implicit */signed char) var_0);
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_10 [i_1] [i_3] [i_1] [i_0]), (arr_10 [i_0] [i_2] [i_2] [i_4])))) ? (((/* implicit */int) arr_10 [i_0 + 4] [i_0 + 4] [i_3] [i_4])) : (((((/* implicit */_Bool) arr_10 [i_4] [i_3] [i_2] [i_0 + 3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_10 [i_0] [(_Bool)1] [0LL] [i_4]))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) max((126976U), (((/* implicit */unsigned int) (unsigned char)2))))) ? (((/* implicit */unsigned long long int) 126976U)) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) arr_0 [8U])))))), (((/* implicit */unsigned long long int) min((arr_11 [i_0] [i_0]), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_9 [i_0] [i_1])) : (arr_0 [i_1])))))))));
                }
                for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    var_22 += ((/* implicit */unsigned int) ((arr_15 [i_0] [i_5] [i_5] [(unsigned char)16]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_5] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 + 3] [i_0 + 3] [(unsigned short)17] [i_0]))) == (var_5))))) : (((unsigned int) arr_7 [i_5] [i_1] [i_5])))))));
                    var_23 += ((/* implicit */unsigned long long int) ((((arr_0 [i_0 + 3]) - (arr_0 [i_0 + 2]))) * (((/* implicit */int) ((_Bool) arr_0 [i_0 + 4])))));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_12)), (var_6)))) ? (var_10) : (min((var_6), (((/* implicit */unsigned int) var_14)))))));
}
