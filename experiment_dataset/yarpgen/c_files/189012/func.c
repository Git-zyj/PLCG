/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189012
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
    var_13 = ((/* implicit */int) ((unsigned int) var_0));
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((var_2) & (((/* implicit */unsigned int) -149639014))))) : (((((/* implicit */long long int) var_12)) | (9223372036854775807LL)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */_Bool) ((int) 149639014));
                            arr_13 [i_0] [i_2] [i_2] = ((/* implicit */int) ((arr_2 [i_0] [i_3]) && (((/* implicit */_Bool) ((short) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) arr_2 [i_0] [i_1]))))))));
                            var_15 = ((/* implicit */short) (-(14661395194405329703ULL)));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned long long int) var_5);
                /* LoopSeq 4 */
                for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (var_7)));
                        var_18 = var_12;
                        arr_18 [i_0] [(short)10] [i_1] [i_4] [(short)10] = ((/* implicit */short) ((arr_14 [i_0] [i_1] [(short)18] [i_5 - 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_4] [i_5 + 1]))))));
                        arr_19 [i_1] [i_4] [i_5] = ((/* implicit */int) (-(((((/* implicit */_Bool) 149639010)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_4] [i_0]))) : (14661395194405329701ULL)))));
                    }
                    for (int i_6 = 0; i_6 < 22; i_6 += 2) 
                    {
                        var_19 |= ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_4]))))) ? ((~(((/* implicit */int) arr_2 [i_0] [i_6])))) : (((arr_2 [i_0] [i_6]) ? (((/* implicit */int) arr_2 [i_4] [i_6])) : (((/* implicit */int) arr_2 [i_0] [i_1])))));
                        var_20 |= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_10 [i_0] [i_1] [i_4] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) ((15502892423738730074ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) != (((/* implicit */int) arr_8 [i_4]))));
                        arr_24 [i_0] [i_1] [i_4] [i_6] = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_4] [i_6])) ? (arr_14 [i_4] [i_4] [i_4] [i_4]) : (arr_14 [i_0] [i_1] [i_4] [i_6])))));
                        arr_25 [i_6] [i_4] [19U] [i_0] = ((/* implicit */unsigned int) -149639014);
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            var_21 ^= ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_0]))));
                            arr_28 [i_7] = ((/* implicit */signed char) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                            var_22 = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_3 [i_0] [i_0] [i_4]))))));
                            arr_29 [i_0] [i_1] [i_1] [i_4] [i_4] [i_6] [i_0] |= ((/* implicit */short) max((((/* implicit */int) ((short) ((149638996) & (((/* implicit */int) arr_3 [i_0] [i_1] [i_4])))))), (((int) arr_2 [i_4] [i_4]))));
                            var_23 = ((/* implicit */long long int) max((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_11 [i_7] [i_1] [i_1] [i_6] [i_1] [i_1])))), (((/* implicit */int) arr_11 [i_1] [i_1] [i_4] [i_6] [i_0] [i_1]))));
                        }
                    }
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_24 *= ((/* implicit */unsigned int) arr_27 [i_0] [i_1] [2U] [i_0]);
                        var_25 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_8 - 1])) && (((/* implicit */_Bool) arr_4 [i_8 - 1]))))) / (((((/* implicit */_Bool) arr_4 [i_8 - 1])) ? (((/* implicit */int) arr_4 [i_8 - 1])) : (((/* implicit */int) arr_4 [i_8 - 1]))))));
                        var_26 -= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((var_9), (((/* implicit */int) arr_32 [i_0] [i_1] [i_1] [i_4] [i_4] [i_8 - 1]))))))))));
                    }
                    var_27 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_1] [i_1] [i_0]) != (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_7 [i_0] [i_1] [i_4])), (arr_0 [i_0] [i_1]))))))), (((unsigned long long int) 286735434))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_28 = ((max((arr_10 [i_0] [(unsigned char)21] [i_1] [i_9]), (arr_10 [i_1] [i_1] [i_9] [i_9]))) > (((arr_10 [i_9] [i_1] [i_9] [i_0]) << (((arr_10 [i_0] [(unsigned char)4] [i_1] [i_9]) - (9028930116809814756ULL))))));
                    arr_36 [i_0] [i_0] = ((/* implicit */_Bool) (((~(arr_27 [i_0] [i_1] [(unsigned short)0] [i_9]))) ^ ((~(((/* implicit */int) arr_6 [i_1] [i_9]))))));
                    var_29 *= ((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) arr_2 [i_0] [i_9])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 22; i_11 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_21 [i_11] [i_10] [i_0] [i_0] [i_1] [i_0])) : (149639013))))), (((arr_16 [i_0]) ^ (max((((/* implicit */int) var_6)), (149639003)))))));
                                var_31 ^= (_Bool)1;
                                var_32 ^= max(((((_Bool)1) ? (((/* implicit */int) arr_32 [i_9] [i_1] [i_10] [i_10] [i_9] [13])) : (((/* implicit */int) arr_7 [i_1] [i_10] [i_11])))), (((((/* implicit */int) arr_35 [i_0] [i_1] [i_9] [i_11])) / (((/* implicit */int) arr_35 [i_1] [i_9] [i_10] [i_11])))));
                                var_33 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((~(arr_0 [i_0] [i_9]))) ^ (((/* implicit */int) min((arr_8 [i_0]), (((/* implicit */short) var_1))))))))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) << (max(((-(((/* implicit */int) arr_11 [i_9] [i_1] [(_Bool)1] [i_0] [i_0] [21])))), (min((var_12), (((/* implicit */int) arr_2 [11] [i_9]))))))));
                }
                for (int i_12 = 1; i_12 < 20; i_12 += 4) /* same iter space */
                {
                    arr_47 [i_12 + 2] [i_12 + 2] [i_12] [i_12] = ((/* implicit */int) (+(((unsigned int) min((arr_0 [i_12] [i_1]), (((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1] [i_0] [i_12 + 1])))))));
                    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_42 [i_0] [i_0] [4U] [i_1] [4ULL] [i_12 + 2])) ? (((/* implicit */int) arr_8 [i_0])) : (((((/* implicit */_Bool) min((682688212), (((/* implicit */int) arr_39 [i_0] [i_0] [18U] [i_0] [(unsigned short)8]))))) ? (((int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1)))))))));
                    var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) arr_33 [i_1] [i_1] [i_1] [i_1] [i_0]))));
                }
                for (int i_13 = 1; i_13 < 20; i_13 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 2; i_14 < 18; i_14 += 4) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 22; i_15 += 1) 
                        {
                            {
                                var_37 += ((/* implicit */short) (~(3898961969968928852ULL)));
                                var_38 = ((/* implicit */unsigned short) min(((+(((((-400879569) + (2147483647))) >> (((((/* implicit */int) (unsigned short)35495)) - (35484))))))), (((/* implicit */int) arr_30 [i_0] [i_1]))));
                                arr_55 [i_0] [i_1] [i_1] [i_13] [i_14] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */int) min((((_Bool) var_7)), (arr_9 [i_13 + 2] [i_14] [i_14] [i_14] [i_14 + 3] [i_14 + 1])))) > (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_30 [i_15] [1ULL]))))));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_1] [i_1] [i_13] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_4))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_13 - 1] [i_1] [i_13 + 1] [i_0])) ^ (((/* implicit */int) arr_5 [i_0] [i_1]))))))), (arr_38 [0LL] [i_1] [i_1] [i_1])));
                    arr_56 [i_0] = ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_39 [i_0] [i_1] [18ULL] [i_13 + 2] [12U]))))) ? (var_8) : (((/* implicit */long long int) ((arr_22 [i_0] [i_0] [i_13] [i_0]) % (((/* implicit */int) (_Bool)1))))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_34 [i_0] [i_1] [(_Bool)1] [i_13]))))) : (min((arr_51 [i_13] [i_13] [(_Bool)1] [i_0]), (((/* implicit */int) arr_49 [i_1]))))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            for (signed char i_18 = 0; i_18 < 20; i_18 += 3) 
            {
                {
                    var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_18] [i_18] [i_18] [i_18])) ? (arr_40 [i_16] [i_16] [i_16] [i_17] [i_18] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_16] [i_17] [(short)6] [(short)6] [4ULL])))))) ? (((arr_49 [i_18]) ? (343695082) : (arr_22 [i_16] [i_16] [(unsigned char)1] [i_16]))) : (149639014)))))))));
                    arr_65 [16U] [i_18] [i_17] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_45 [i_16] [i_16] [i_16] [i_16]))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -149639014)), (arr_50 [i_16] [(signed char)0] [i_16] [i_16])))) : (((unsigned long long int) arr_23 [i_16] [12LL] [i_18] [i_17] [i_17] [i_17])))))));
                }
            } 
        } 
    } 
    var_41 = (!((((-(var_9))) >= (((/* implicit */int) ((var_3) || (((/* implicit */_Bool) (unsigned short)32704))))))));
}
