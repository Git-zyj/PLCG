/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142434
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (int i_4 = 3; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_16 |= ((/* implicit */unsigned short) (-(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (var_15))))));
                                var_17 = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)37247)), (((((/* implicit */int) max((arr_9 [i_4 - 1] [i_4] [i_4 - 2] [i_4]), (((/* implicit */short) var_8))))) ^ (((/* implicit */int) ((unsigned short) var_4)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (_Bool)0))));
                                arr_21 [4U] [i_1 + 1] [i_1 + 1] [i_1] [(unsigned short)8] [i_1 - 1] [(signed char)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)51113))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [(unsigned short)1] [i_5]))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_16 [(signed char)6] [2] [(short)3] [i_1])) : ((-9223372036854775807LL - 1LL))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) > (((/* implicit */int) (_Bool)1)))))) : (((var_0) ? (arr_17 [i_1] [i_5] [7U] [i_1] [i_1]) : (((/* implicit */long long int) ((int) (unsigned char)206)))))));
                                var_20 = ((/* implicit */unsigned char) (unsigned short)24032);
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)0)), (arr_17 [i_1] [i_1] [10] [(unsigned char)9] [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3887606306U)) && (((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-124)), (-2619735173614707053LL))))))) : (((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */int) ((short) var_13))) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */int) (signed char)-34);
                                var_23 = min((((int) var_3)), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) (_Bool)1)))))));
                                var_24 = ((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_7]);
                                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (signed char)24))));
                                var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((unsigned int) max((((/* implicit */short) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)46)))), ((short)-9173)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_9 = 0; i_9 < 11; i_9 += 2) 
    {
        for (unsigned char i_10 = 3; i_10 < 10; i_10 += 3) 
        {
            for (short i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 11; i_12 += 2) 
                    {
                        for (signed char i_13 = 1; i_13 < 9; i_13 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) var_4))));
                                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_25 [i_10 - 2] [(_Bool)1] [i_11] [i_12])) : (((((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) arr_12 [i_9] [i_10] [i_11] [i_11]))))) ? (((/* implicit */int) ((signed char) -339017265))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (640415073))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_14 = 0; i_14 < 11; i_14 += 4) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 11; i_15 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) (-2147483647 - 1)))));
                                arr_48 [(short)1] [2U] [i_11] [i_14] [i_10] = ((/* implicit */signed char) (((_Bool)1) && (((-2619735173614707031LL) < (((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_13)))))));
                                var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */int) (unsigned char)41)) | (-1))))));
                                var_31 = ((/* implicit */unsigned short) var_9);
                                var_32 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) max((((/* implicit */int) arr_3 [i_9] [i_11] [4])), (-1)))))) - (max((var_13), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35508))) >= (3935676197U))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_16 = 1; i_16 < 9; i_16 += 1) 
                    {
                        for (int i_17 = 0; i_17 < 11; i_17 += 4) 
                        {
                            {
                                var_33 -= ((/* implicit */int) max(((unsigned short)3072), (((/* implicit */unsigned short) (unsigned char)88))));
                                var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) max((((var_12) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-16384)) || (((/* implicit */_Bool) arr_7 [i_9] [i_9] [i_9] [i_9]))))))), (((((/* implicit */_Bool) arr_22 [i_17] [i_17] [(signed char)2] [i_16 - 1] [i_10 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))))))));
                                var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)9628)) ? (((/* implicit */int) (short)17640)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) ? (arr_23 [i_9] [i_10 - 3] [i_9]) : (((var_2) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) var_15)))))) : (((((/* implicit */int) (_Bool)0)) / (((arr_36 [i_9] [i_9] [i_11] [i_16 + 2]) ? (((/* implicit */int) (short)26751)) : (((/* implicit */int) (signed char)95)))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 1; i_18 < 10; i_18 += 2) 
                    {
                        for (unsigned char i_19 = 0; i_19 < 11; i_19 += 1) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) arr_10 [i_9] [i_9] [i_9] [i_9] [i_10])) : (((/* implicit */int) (unsigned char)137)))), (((/* implicit */int) (signed char)(-127 - 1)))));
                                arr_60 [i_9] [i_11] [i_10] [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) -6)) ? (((/* implicit */int) ((short) ((((/* implicit */int) var_3)) | (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) max((max((((/* implicit */signed char) (_Bool)1)), ((signed char)96))), (((/* implicit */signed char) arr_33 [i_10 + 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
