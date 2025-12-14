/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166978
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_17 = (i_0 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_13))))))) << (((max((var_13), (((/* implicit */int) arr_12 [i_1] [i_1 - 1] [i_1] [i_0] [i_1])))) - (40354)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) (!((!(((/* implicit */_Bool) var_13))))))) << (((((max((var_13), (((/* implicit */int) arr_12 [i_1] [i_1 - 1] [i_1] [i_0] [i_1])))) - (40354))) - (12524))))));
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(2348279617221790082LL)))), (((((/* implicit */_Bool) 35184371564544LL)) ? (((/* implicit */unsigned long long int) var_1)) : (9179442704116097687ULL)))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) <= (((/* implicit */int) arr_3 [i_0]))))) : (((/* implicit */int) ((((/* implicit */int) (short)-7398)) <= (((/* implicit */int) min((var_11), (((/* implicit */unsigned short) var_3))))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_2] [i_1 + 3] |= ((/* implicit */int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_8)))), (((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_2] [i_1])), (arr_7 [i_2]))))))) ? (min((((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)38089)) - (-96950706)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [(signed char)8] [i_2] [i_2] [i_0])) ? (var_15) : (96950705))))));
                    arr_16 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) max((((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_9))) * (((/* implicit */long long int) (+(arr_0 [i_0] [i_0])))))), (((/* implicit */long long int) min((((((/* implicit */int) var_6)) / (((/* implicit */int) arr_1 [i_0] [i_1])))), (((/* implicit */int) var_7)))))));
                    arr_17 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) var_10);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) (+(3848312031778026066ULL)));
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_4)), (var_6))))) : (var_16)))) ? (((/* implicit */int) (signed char)-1)) : (var_1)));
    var_21 = ((/* implicit */int) var_4);
    var_22 = ((/* implicit */signed char) (+(-96950724)));
}
