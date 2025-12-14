/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13135
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) * (min((max((var_7), (((/* implicit */int) var_10)))), (((/* implicit */int) min((var_10), (((/* implicit */unsigned char) var_0)))))))));
    var_16 = ((/* implicit */int) ((((var_13) - (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))))) + (((((_Bool) 145329354U)) ? (((145329344U) / (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_6))))))))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */unsigned int) var_0)), (max((((/* implicit */unsigned int) var_0)), (var_13))))) : (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (var_0)))), (((var_1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_18 = -4346945396087595647LL;
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 2; i_2 < 19; i_2 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [i_3] [i_3] [i_3] [12U] [i_0] = ((/* implicit */signed char) arr_13 [i_0] [i_1] [(unsigned char)18] [13] [10ULL]);
                                var_19 = ((/* implicit */unsigned long long int) ((((unsigned long long int) var_9)) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_3 - 1] [i_3] [i_3] [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-69)))))));
                                var_20 = ((/* implicit */signed char) arr_2 [i_2]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) var_7);
                }
                for (int i_5 = 2; i_5 < 19; i_5 += 4) /* same iter space */
                {
                    arr_17 [i_0] [i_0] [i_1] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_13 [8ULL] [i_5 - 2] [i_1] [i_1] [i_1]), (arr_13 [i_5] [i_5 - 1] [i_5] [i_5] [i_5]))))) / (((((/* implicit */_Bool) -1825953758)) ? (((/* implicit */unsigned int) var_8)) : (arr_16 [i_1] [3ULL] [i_5 + 1] [i_0])))));
                    arr_18 [i_5] = 145329357U;
                    arr_19 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) (!(var_0)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5] [(_Bool)1] [i_5] [i_5] [i_5 - 1]))) : (4149637948U)))));
                }
                for (int i_6 = 2; i_6 < 19; i_6 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 3; i_7 < 19; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_29 [i_7] [i_7 - 2] [i_6] [i_7] = ((/* implicit */unsigned short) var_3);
                                arr_30 [i_0] &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_1] [i_6 - 2] [i_6] [11LL] [12ULL]))) : (arr_16 [i_0] [i_1] [6LL] [i_8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)87))) : (var_13)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 20; i_9 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 145329344U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_22 [(signed char)14] [(signed char)14] [i_6 + 1])) > (var_14)))) : (((/* implicit */int) var_9))))) : (arr_20 [i_1])));
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_6] [i_9] [i_0] [i_6])) + (min((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) % (4149637965U))), (((4149637996U) | (arr_25 [i_0] [i_1] [i_6] [i_9])))))));
                    }
                    /* vectorizable */
                    for (signed char i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((signed char) var_5)))));
                        arr_38 [i_10] [i_6] [i_1] [i_10] = ((arr_12 [i_1] [i_1] [i_6 + 1] [i_10] [i_0] [i_10]) ^ (arr_12 [i_0] [i_1] [i_1] [i_10] [i_10] [i_10]));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 2; i_11 < 19; i_11 += 1) 
                        {
                            var_25 ^= ((/* implicit */int) (((~(((/* implicit */int) var_5)))) < (((/* implicit */int) arr_33 [i_11 - 2] [(_Bool)0] [8] [i_6] [6]))));
                            var_26 = ((/* implicit */_Bool) ((unsigned long long int) arr_6 [i_0] [i_0] [i_6] [i_10]));
                            arr_43 [6ULL] [i_10] = ((/* implicit */unsigned char) ((var_14) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)150)))));
                        }
                    }
                    var_27 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_31 [7LL] [i_0] [i_0] [i_1] [i_6 + 1])) ? (arr_12 [14ULL] [i_0] [8U] [i_6] [i_6] [14ULL]) : (-1369098696))) | (((/* implicit */int) var_4)))) << (((max((arr_39 [i_1]), (((/* implicit */long long int) ((((/* implicit */_Bool) 1369098683)) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) arr_36 [(unsigned char)18] [i_6] [14ULL] [i_6] [14ULL]))))))) - (4383067108075058209LL)))));
                    var_28 = ((/* implicit */unsigned char) arr_24 [i_6] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (((/* implicit */signed char) var_5))))) ? (((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) var_6)) : (1111783072))) : (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-10)) == (((/* implicit */int) var_12)))))) : (2325329067U)));
                                var_30 = ((/* implicit */unsigned long long int) min((arr_41 [i_0] [i_1] [i_6] [i_12] [13ULL] [i_13]), (((/* implicit */unsigned int) ((((((/* implicit */int) var_6)) | (((/* implicit */int) var_9)))) >= (((/* implicit */int) arr_0 [i_6 + 1] [i_13])))))));
                                var_31 = ((/* implicit */unsigned char) arr_4 [i_12]);
                                arr_50 [i_12] [i_12] [i_6] [i_1] [i_12] = ((/* implicit */unsigned long long int) var_7);
                                var_32 -= ((/* implicit */unsigned long long int) (-(var_13)));
                            }
                        } 
                    } 
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_14 = 0; i_14 < 20; i_14 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 4) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 20; i_16 += 4) 
                        {
                            {
                                arr_58 [i_0] [i_0] [i_14] [(unsigned char)16] [i_14] [i_0] [13] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_0] [i_1] [i_16] [i_16] [i_16] [i_0])) ? (arr_57 [i_0] [i_0] [i_14] [i_14] [i_14] [i_16]) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_16] [i_15] [6ULL] [i_0] [i_0])) && (((/* implicit */_Bool) arr_49 [i_0] [i_1] [i_14] [i_15] [i_16])))))) : (arr_34 [i_1] [i_16])));
                                var_33 = ((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_0]));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */unsigned long long int) arr_33 [i_0] [i_0] [i_0] [i_14] [i_0]);
                    arr_59 [i_14] [i_14] [i_14] [4] = ((/* implicit */long long int) 4149637942U);
                }
            }
        } 
    } 
    var_35 -= ((((/* implicit */int) var_3)) % (((/* implicit */int) var_2)));
}
