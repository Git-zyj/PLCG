/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188560
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) arr_10 [i_0] [i_2] [i_3])) : (((/* implicit */int) arr_3 [5U] [(unsigned char)0]))))))) + (((((/* implicit */_Bool) ((int) arr_10 [i_0] [0ULL] [i_2]))) ? (((/* implicit */long long int) max((var_8), (var_7)))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (4420928932799568674LL)))))));
                            var_19 = ((/* implicit */_Bool) ((-4420928932799568674LL) / (((/* implicit */long long int) ((min((2610158778U), (((/* implicit */unsigned int) arr_5 [i_0])))) + (var_4))))));
                            arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_11 [0ULL] [i_1] [i_0] [i_2 - 2] [0ULL])))), ((+(arr_5 [i_2 + 1])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                arr_24 [i_0] [(signed char)1] [(signed char)1] [i_0] = arr_3 [i_1] [i_6];
                                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((signed char) ((((long long int) arr_11 [i_0] [1LL] [i_4] [i_5] [i_6])) + (((/* implicit */long long int) ((/* implicit */int) ((var_16) >= (var_1)))))))))));
                                arr_25 [i_0] [i_1] [i_4] [i_0] = ((/* implicit */signed char) (-(4420928932799568674LL)));
                                arr_26 [i_6] [i_1] [i_1] [i_5] [i_4 - 1] [i_1] |= ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (arr_17 [i_0] [i_5] [i_4] [i_6]) : ((-2147483647 - 1))))), (((((/* implicit */_Bool) arr_15 [i_6] [i_1])) ? (((/* implicit */unsigned int) arr_0 [i_4])) : (var_9)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (!(((((/* implicit */int) var_3)) < (arr_6 [i_1])))))), (min(((-(2610158778U))), (((/* implicit */unsigned int) (~(arr_15 [i_0] [i_9]))))))));
                                var_22 = ((18446744073709551614ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((arr_8 [i_0] [i_0] [i_7] [(unsigned short)7]) != (((/* implicit */unsigned long long int) 1684808508U))))) >= (((/* implicit */int) (short)-2828)))))));
                                arr_34 [(signed char)8] [i_0] = 1684808512U;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 |= (~(((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_1)))) ? (((((/* implicit */_Bool) var_2)) ? (2610158774U) : (var_2))) : ((-(2610158767U))))));
}
