/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155110
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
    var_16 = ((/* implicit */signed char) ((((long long int) ((((/* implicit */_Bool) -862816880)) ? (-1133786170) : (((/* implicit */int) (unsigned char)58))))) > (((/* implicit */long long int) var_10))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) var_3))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned char) 114688);
            arr_5 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 862816885))));
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)0)) : (862816891)));
            var_19 = (+(((/* implicit */int) (short)-3666)));
        }
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_20 += ((/* implicit */unsigned short) ((unsigned int) arr_1 [i_2]));
            var_21 |= ((/* implicit */unsigned short) (unsigned char)11);
        }
        for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            arr_13 [i_0] [i_0] = (~(((/* implicit */int) arr_10 [i_0] [7ULL])));
            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0])))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 4; i_5 < 13; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                {
                    var_23 *= ((/* implicit */signed char) ((long long int) (unsigned char)245));
                    var_24 += ((/* implicit */signed char) arr_19 [i_5] [i_4]);
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 14; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) ((_Bool) (unsigned char)128));
                                arr_27 [i_4] [i_4] [i_5 - 4] [i_6] [i_8] [i_5 - 4] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                                arr_28 [12] [12] [i_6] [i_6] [i_4] = ((/* implicit */unsigned short) 0ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */_Bool) ((arr_24 [i_4] [i_4] [i_4] [i_4] [i_4]) - (arr_24 [i_4] [i_4] [i_4] [i_4] [i_4])));
        arr_29 [i_4] = ((/* implicit */long long int) arr_22 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]);
        var_27 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_17 [i_4] [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [i_4] [i_4] [6LL]))))));
    }
    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 2) 
    {
        arr_32 [i_9] = ((/* implicit */_Bool) arr_30 [i_9]);
        /* LoopNest 2 */
        for (signed char i_10 = 4; i_10 < 14; i_10 += 2) 
        {
            for (int i_11 = 0; i_11 < 15; i_11 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_12 = 1; i_12 < 14; i_12 += 3) 
                    {
                        var_28 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)44)) + (-862816853)));
                        var_29 = ((/* implicit */unsigned char) ((((((max((((/* implicit */long long int) arr_30 [i_10])), (arr_41 [i_10] [i_10] [i_10] [i_10]))) + (9223372036854775807LL))) << (((((arr_41 [i_12 - 1] [i_12 + 1] [i_12] [i_12 - 1]) + (6829617991643263259LL))) - (37LL))))) % (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                        arr_42 [i_9] [i_10 - 4] [i_10] [i_11] [i_9] [i_12 + 1] = ((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */int) arr_33 [i_12 + 1] [i_10 + 1])), (min((1381442347), (((/* implicit */int) var_14))))))), ((+(arr_34 [i_9] [i_10])))));
                    }
                    for (long long int i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        arr_46 [i_9] [i_10 + 1] [i_11] [i_13] [i_10 + 1] = var_7;
                        arr_47 [i_9] [i_10] [i_10] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) (signed char)116)) & (((/* implicit */int) max((arr_44 [i_10] [5ULL]), (arr_45 [i_13]))))))), (((long long int) max((var_13), (((/* implicit */unsigned char) var_12)))))));
                    }
                    for (int i_14 = 0; i_14 < 15; i_14 += 2) 
                    {
                        var_30 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -416329051174609385LL)) ? (arr_41 [i_9] [(signed char)13] [i_11] [(unsigned char)12]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-50)))))) ? (((/* implicit */unsigned int) arr_43 [i_14] [i_14] [i_11] [i_10 - 3] [i_9])) : (var_10)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)74)) | (-862816892)))) * (2891636265U)))) : (max((arr_41 [i_10] [i_10] [i_10] [i_10 + 1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_41 [i_9] [i_9] [i_9] [i_9]))))))));
                        /* LoopSeq 1 */
                        for (long long int i_15 = 0; i_15 < 15; i_15 += 2) 
                        {
                            arr_55 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_39 [i_9] [i_10 + 1] [i_11] [i_14])) / (((/* implicit */int) var_13)))))) ? (((((/* implicit */_Bool) arr_49 [i_14] [i_14])) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) arr_49 [i_14] [i_15])))) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)24)), ((unsigned short)65504))))));
                            var_31 = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)140)), (134991958U)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_44 [i_14] [i_10]))) | (arr_41 [i_9] [i_10] [i_11] [i_9]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)34))))), (((/* implicit */long long int) min(((+(((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-3666)) : (((/* implicit */int) (unsigned char)241)))))))));
                        }
                    }
                    for (int i_16 = 0; i_16 < 15; i_16 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned char) max((arr_43 [i_16] [i_16] [i_16] [(signed char)9] [i_16]), (((/* implicit */int) min(((short)14565), (((/* implicit */short) arr_45 [i_10 - 1])))))));
                        arr_58 [i_10 - 2] [i_10 - 2] [i_11] [i_10 - 2] [i_9] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)193))));
                    }
                    var_33 = ((/* implicit */signed char) (_Bool)1);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 3) 
                    {
                        arr_61 [i_10] [i_17] = var_10;
                        arr_62 [i_9] [i_9] [i_9] [3U] = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) arr_40 [i_10 - 4])))));
                    }
                    arr_63 [(signed char)1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((int) arr_54 [i_10 - 4] [i_10 - 2] [i_10 - 4] [i_10 - 3] [2U] [i_10 - 1]))) ^ (((((/* implicit */_Bool) arr_57 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_9] [i_9] [i_10 - 2] [i_9] [i_10 - 4]))) : (((arr_34 [i_10] [i_10]) + (((/* implicit */long long int) var_9))))))));
                    arr_64 [i_9] [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_49 [i_9] [i_10 - 3]), (((/* implicit */unsigned char) ((signed char) arr_59 [i_9] [i_9] [i_10] [(signed char)14])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */long long int) var_5)), (arr_51 [i_9] [i_9] [i_9] [i_10] [i_11]))) < (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (signed char)35)), ((short)-3666))))))))) : (max((833954561U), (((/* implicit */unsigned int) arr_44 [i_10 - 4] [i_10 - 1]))))));
                }
            } 
        } 
        var_34 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_45 [i_9]))))) ? (max((max((((/* implicit */unsigned int) (short)-21792)), (var_10))), (((/* implicit */unsigned int) (short)-21792)))) : (((/* implicit */unsigned int) ((max((((/* implicit */int) (signed char)124)), (arr_50 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))) | (((((/* implicit */_Bool) 276492122)) ? (((/* implicit */int) (signed char)73)) : (-315050208))))))));
        var_35 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) / (1238195885)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_14)), ((short)-4030))))) : (min((arr_41 [i_9] [i_9] [i_9] [i_9]), (((/* implicit */long long int) arr_48 [i_9] [i_9] [i_9] [i_9])))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), ((unsigned char)176))))) >= (15574659328561113612ULL)))))));
    }
    var_36 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1238195892)) ? (var_9) : (var_9)))) ? (max((((/* implicit */int) var_8)), (-1238195863))) : (((/* implicit */int) var_8)))));
}
