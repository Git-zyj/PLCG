/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186595
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_16 -= min((min((arr_9 [i_0 + 1] [i_4] [i_2] [(short)8] [6]), (((((/* implicit */_Bool) 1748259562)) ? (arr_9 [i_0] [i_1] [i_2] [i_3] [(short)2]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))), (((((/* implicit */_Bool) -1065801869)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_13)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4] [i_1] [i_2] [i_1]))) : (arr_6 [i_0] [i_0] [i_1] [i_3]))))));
                                var_17 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1])) ? (var_2) : (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2] [i_0 + 2])))) <= (min((((/* implicit */unsigned int) 2147483647)), (arr_13 [i_0 + 1] [i_0] [i_0 - 1] [(signed char)9] [i_0 - 1] [i_4])))));
                                var_18 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((arr_0 [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (1625350795U))))))));
                                var_19 ^= ((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_2] [i_2] [i_4] [i_2]);
                                var_20 = ((/* implicit */signed char) min((((/* implicit */int) var_11)), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1]))))));
                            }
                        } 
                    } 
                    arr_14 [i_1] [i_2] [i_2] |= min((((long long int) 3047400498U)), (max((arr_6 [i_0 - 1] [i_0 - 1] [6U] [i_0 - 1]), (arr_6 [i_0] [i_0] [i_2] [i_0 + 1]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 17; i_8 += 2) 
                        {
                            {
                                arr_27 [i_0] = ((/* implicit */unsigned short) arr_20 [i_0] [i_6] [i_0] [i_8]);
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (signed char)-71))));
                            }
                        } 
                    } 
                    var_22 ^= ((/* implicit */short) var_1);
                }
            } 
        } 
    }
    for (signed char i_9 = 1; i_9 < 14; i_9 += 4) /* same iter space */
    {
        var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) (short)21115)) ? (3881381308U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-62)))));
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 1; i_10 < 13; i_10 += 2) 
        {
            for (unsigned short i_11 = 0; i_11 < 17; i_11 += 3) 
            {
                {
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_12 [i_9] [i_10 + 1] [i_9] [i_11])), (max((arr_11 [i_9 + 3] [i_10 + 3] [i_11] [i_11] [i_11] [(_Bool)1]), (((/* implicit */unsigned int) 1472033911)))))))));
                    var_25 ^= min((((/* implicit */unsigned int) arr_7 [i_9] [i_11] [i_11] [i_10])), ((+(arr_11 [i_9 + 3] [i_9 + 3] [i_9 + 1] [i_9 + 3] [i_10 + 3] [(short)9]))));
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 3) 
                    {
                        for (short i_13 = 1; i_13 < 14; i_13 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_10])) ? (((/* implicit */unsigned long long int) ((long long int) var_2))) : (max((var_8), (((/* implicit */unsigned long long int) arr_19 [i_9 - 1] [i_10])))))))));
                                arr_41 [i_9] [i_11] [4] [i_12] [(_Bool)1] &= ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) 7576692254961246643LL))))))));
                                var_27 ^= ((/* implicit */long long int) (unsigned char)105);
                                var_28 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_40 [i_9 + 3] [i_10] [i_9] [(unsigned short)8])) % (((/* implicit */int) (signed char)7))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) & (((/* implicit */int) arr_39 [i_13] [i_10] [i_11] [(unsigned char)7] [i_13] [(unsigned char)7]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */int) arr_8 [i_11] [i_10])))))))) : (((/* implicit */int) ((unsigned short) 1535525144U)))));
                                var_29 -= ((/* implicit */signed char) max((((/* implicit */long long int) ((arr_3 [i_9 - 1] [i_9 - 1]) ? (((((/* implicit */_Bool) 2005470881)) ? (365186833U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-45))))) : (var_2)))), (((((/* implicit */_Bool) arr_13 [i_9 + 1] [i_9 + 1] [i_11] [12LL] [i_12] [i_13])) ? (max((((/* implicit */long long int) arr_25 [i_12] [i_10] [i_11] [i_10] [i_10] [i_11] [i_11])), (6177608267938552607LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_9] [i_10] [8ULL] [i_13]))) : (arr_15 [i_12] [i_12] [i_11]))))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */long long int) max((((((var_8) << (((var_6) - (1238423559))))) * (((/* implicit */unsigned long long int) arr_16 [i_10])))), (((/* implicit */unsigned long long int) (!((_Bool)1))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_38 [i_11] [i_14] [i_11] [i_14])) : (((/* implicit */int) (signed char)48))))));
                        var_32 = ((/* implicit */long long int) (~(arr_16 [i_10 - 1])));
                        /* LoopSeq 3 */
                        for (unsigned int i_15 = 0; i_15 < 17; i_15 += 2) 
                        {
                            var_33 = ((/* implicit */_Bool) var_9);
                            arr_49 [i_9] [i_9] [i_9] [i_9] [i_10] [i_9] = ((/* implicit */int) ((arr_23 [i_9] [i_9 + 1] [i_10 + 4] [i_9 + 1] [i_9]) << (((arr_23 [i_9] [i_9 + 3] [i_10 + 2] [i_14] [13U]) - (2695140819U)))));
                            arr_50 [i_15] [i_11] [i_15] [i_14] [i_15] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_30 [i_10 - 1]))));
                            arr_51 [i_9] [i_9] [i_11] [i_10] [i_15] = ((/* implicit */short) ((long long int) arr_30 [i_9 + 2]));
                        }
                        for (signed char i_16 = 0; i_16 < 17; i_16 += 3) /* same iter space */
                        {
                            arr_56 [i_10] = ((/* implicit */_Bool) arr_9 [i_9] [i_9] [i_11] [i_14] [i_16]);
                            var_34 *= ((/* implicit */unsigned char) ((arr_48 [i_9] [i_10 + 1] [i_11] [i_14] [i_16]) - (var_1)));
                        }
                        for (signed char i_17 = 0; i_17 < 17; i_17 += 3) /* same iter space */
                        {
                            var_35 &= ((/* implicit */signed char) (~(1516636352629584547ULL)));
                            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [(short)8])) ? ((~(var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_11] [i_10 + 4] [i_10] [i_14] [i_17] [i_14] [i_10])))));
                        }
                        var_37 = ((/* implicit */long long int) ((unsigned short) arr_10 [i_14] [i_10 + 4]));
                    }
                }
            } 
        } 
        arr_59 [i_9 - 1] = ((/* implicit */unsigned int) ((332757721) != (1376273316)));
        arr_60 [i_9] = ((/* implicit */unsigned short) min((((arr_12 [i_9 + 3] [(signed char)11] [i_9] [i_9 + 3]) ? (((/* implicit */int) arr_12 [i_9 + 1] [i_9 + 1] [i_9 + 2] [i_9 + 2])) : (((/* implicit */int) arr_12 [i_9 + 1] [i_9] [i_9] [i_9 + 1])))), (((((/* implicit */int) arr_12 [i_9 + 3] [i_9] [i_9] [i_9 - 1])) | (((/* implicit */int) arr_12 [i_9 + 3] [4ULL] [4ULL] [4ULL]))))));
    }
    var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) (-((((~(((/* implicit */int) (signed char)-6)))) / (((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-86)))))))))));
    var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_6)) : (1143914305352105984ULL)));
    var_40 |= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (var_13)))) ? (((/* implicit */long long int) var_2)) : (max((141354453249203119LL), (((/* implicit */long long int) var_1)))))));
}
