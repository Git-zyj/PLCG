/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124795
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
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_1), (arr_2 [0LL])))) ? (arr_3 [i_1]) : (((/* implicit */unsigned long long int) (-(var_12))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (((!((!(((/* implicit */_Bool) arr_5 [i_1 - 2] [i_0 - 1])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_3])) && (((/* implicit */_Bool) -2001818372)))))) : (((unsigned long long int) arr_1 [12LL] [12LL]))))))))));
                            arr_12 [i_0] [i_0] [i_2] [(short)8] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(arr_3 [i_0 + 1]))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                            {
                                arr_15 [i_2] |= arr_11 [i_1 - 1] [i_3];
                                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_2] [i_3])) + (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_8 [i_0 + 1] [i_1 - 2] [i_1] [i_0] [i_0 + 2] [i_0 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_3] [i_0 + 2] [i_0 + 2] [7U] [i_2] [i_1 - 2]))) <= ((~(var_0)))))))))));
                                var_18 += ((/* implicit */long long int) (+(max((((/* implicit */int) arr_14 [i_0] [i_4] [i_3] [i_0] [i_2] [i_1] [i_0])), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_14 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_3] [i_4] [i_3] [i_1 - 1]))))))));
                                var_19 += ((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_1 - 2]))));
                            }
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(11561488033519500955ULL)))) ? (((/* implicit */int) ((short) arr_0 [i_0] [i_0 + 2]))) : (((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_0 + 1])) ? (((/* implicit */int) arr_9 [i_1 + 1] [i_0 + 1])) : (((/* implicit */int) arr_7 [i_1 - 1] [i_0 + 1]))))));
                            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) arr_8 [i_3] [i_2] [i_1 - 2] [i_1 - 2] [i_1] [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_4) : (var_11)))) ? (var_9) : (((/* implicit */int) ((max((var_6), (((/* implicit */unsigned long long int) var_3)))) == (((/* implicit */unsigned long long int) 4503599627370495LL))))))))));
}
