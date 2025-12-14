/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184530
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) ((unsigned short) var_12));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_2] [i_3] = (+(((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0 - 1]))) : (67307913543584695ULL))));
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_2] = ((short) (-(arr_3 [i_0 + 1])));
                                arr_17 [i_0] [i_0] = ((/* implicit */int) arr_9 [i_0]);
                            }
                        } 
                    } 
                    arr_18 [i_0] = ((/* implicit */short) ((unsigned long long int) min((((/* implicit */unsigned long long int) (unsigned char)53)), (arr_5 [i_0]))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                arr_24 [i_0] [i_5] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_1] [i_1] [i_5] [i_6])) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) var_10))))) ? (max((arr_13 [i_0 - 1] [i_6] [i_1] [i_0] [i_6]), (-19LL))) : ((+(arr_13 [i_0 + 1] [i_1] [i_1] [i_5] [i_6]))));
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max((max((arr_7 [i_6] [i_2] [i_5]), (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) arr_2 [i_6] [i_1])) ? (arr_7 [i_6] [i_0] [i_2]) : (((/* implicit */int) arr_2 [i_5] [i_1])))))))));
                                var_20 = ((/* implicit */int) (-(((((/* implicit */unsigned long long int) arr_3 [i_5])) * (max((arr_5 [i_2]), (((/* implicit */unsigned long long int) arr_21 [i_0] [i_1] [i_6] [i_5]))))))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_22 [i_0 - 1] [i_0 - 1] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (var_4))))) : (((unsigned int) arr_1 [i_0 - 1] [i_0 - 1]))));
                                arr_25 [i_0] [i_1] = ((/* implicit */unsigned char) arr_10 [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((var_2) + (9223372036854775807LL))) << (((((((/* implicit */int) var_0)) + (27880))) - (28)))));
}
