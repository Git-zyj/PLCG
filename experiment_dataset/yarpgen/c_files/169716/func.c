/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169716
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
    for (long long int i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */short) (signed char)-83)))))))) ? (max((((/* implicit */int) (unsigned short)18373)), ((+(((/* implicit */int) (signed char)1)))))) : (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0]))))) : (((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) arr_3 [9])))))))))));
                var_21 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_5 [(unsigned short)0]), (((/* implicit */long long int) var_8))))) ? (((/* implicit */int) ((var_16) && (((/* implicit */_Bool) arr_2 [(_Bool)1]))))) : ((-(((/* implicit */int) var_4))))))), (min((min((((/* implicit */long long int) arr_6 [i_1])), (var_13))), (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0] [i_1])))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) (-(max((arr_6 [i_0]), (((/* implicit */int) arr_2 [i_2 + 1]))))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_8 [(signed char)8] [i_1] [i_2])), (var_5)))), (10277410524339923317ULL)))))))));
                            var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)47176)) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-22)), (-1699101740303078697LL)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_2 - 1])), ((unsigned short)11)))) : ((~(arr_6 [i_0]))))) : (((/* implicit */int) arr_8 [i_2] [(unsigned char)11] [i_0]))));
                            var_24 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (+(arr_1 [i_2])))) ? (((/* implicit */int) max((((/* implicit */short) var_18)), (arr_2 [i_0])))) : (((/* implicit */int) var_4))))));
                        }
                    } 
                } 
                var_25 += ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (var_2) : (((/* implicit */int) arr_0 [(unsigned short)9] [i_1]))))) >= (((arr_12 [i_0] [i_1] [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18383)))))))), (min((((/* implicit */unsigned int) ((((/* implicit */int) var_15)) ^ (var_2)))), (arr_1 [i_0])))));
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_8 [16U] [i_1] [i_0])), (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [(unsigned char)5]))))))) : (((((/* implicit */_Bool) ((-2478483436099235463LL) / (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_0])))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_0] [i_0] [(short)3]))))) : (min((var_7), (arr_7 [i_0 + 2] [10] [i_1])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 9; i_4 += 4) 
    {
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_11 [i_8] [i_4] [i_6] [i_5] [i_4])) ? (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */long long int) var_2))))) : (max((arr_12 [(signed char)10] [(_Bool)1] [18LL] [i_7]), (((/* implicit */unsigned long long int) var_2)))))), (((/* implicit */unsigned long long int) arr_22 [i_4] [i_4] [i_6] [i_7] [i_4] [(unsigned short)3] [i_8]))));
                                var_28 += ((/* implicit */unsigned long long int) arr_9 [i_4 - 1] [i_6]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 8; i_9 += 1) 
                    {
                        for (signed char i_10 = 2; i_10 < 10; i_10 += 4) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [i_4] [i_4] [i_5] [(unsigned char)6] [i_10] [i_9 - 2] [i_9]))))) ? (max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)34176)) : (((/* implicit */int) (unsigned short)47153))))), (var_7))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_19)))))));
                                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (short)4095))) + (-2055858466693481383LL))), (((/* implicit */long long int) (((-9223372036854775807LL - 1LL)) != (var_6))))))) ? (((/* implicit */int) (unsigned short)60870)) : (((/* implicit */int) (unsigned short)18379))));
                                var_31 = ((/* implicit */_Bool) (~(((/* implicit */int) var_5))));
                                arr_30 [i_4] [i_4] [i_6] [(unsigned char)7] = ((/* implicit */unsigned long long int) var_12);
                                var_32 = ((/* implicit */unsigned short) arr_24 [i_4] [i_5] [i_6] [i_9 + 1] [8]);
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_19))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_8 [i_6] [i_5] [i_6]))));
                }
            } 
        } 
    } 
    var_34 += ((/* implicit */unsigned short) var_16);
    var_35 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) - ((-(max((var_7), (((/* implicit */unsigned long long int) var_2))))))));
}
