/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126124
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */int) arr_3 [i_0])), (arr_2 [i_0] [i_0])))) <= (min((((/* implicit */long long int) arr_3 [i_0])), (arr_1 [16U] [i_1])))))))));
            var_17 = ((/* implicit */long long int) var_9);
        }
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
            {
                var_18 -= ((/* implicit */short) min((((/* implicit */int) max((arr_3 [i_3]), (max((arr_9 [i_0] [i_2] [i_3]), (((/* implicit */unsigned short) arr_4 [19]))))))), (min((arr_2 [i_0] [i_2]), (((/* implicit */int) arr_9 [i_2] [11LL] [i_2]))))));
                arr_12 [14ULL] [(signed char)13] [i_0] = ((/* implicit */signed char) min((min((arr_10 [i_3] [i_2] [i_0]), (arr_10 [i_0] [i_2] [i_3]))), (min((arr_10 [i_0] [i_2] [i_3]), (arr_10 [i_3] [i_2] [i_0])))));
            }
            /* vectorizable */
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned short i_5 = 3; i_5 < 22; i_5 += 2) 
                {
                    arr_18 [i_0] [i_0] [(short)18] [i_4] [i_0] [i_5] |= ((/* implicit */signed char) ((unsigned int) ((unsigned int) arr_10 [i_0] [i_0] [i_4])));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_5 - 1] [i_5 + 1]))));
                        arr_21 [i_0] [i_2] [i_4] [(signed char)15] [i_6] = ((/* implicit */unsigned char) ((short) arr_3 [8ULL]));
                    }
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((signed char) (-(var_8)))))));
                }
                arr_22 [7ULL] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_2 [i_0] [i_4])) / (((arr_0 [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [(unsigned char)20] [i_4])))))));
                arr_23 [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3720466592880608416ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_4] [i_4]))) : (var_8)));
                var_21 += ((/* implicit */unsigned short) arr_2 [(_Bool)1] [i_2]);
                var_22 = ((/* implicit */unsigned char) arr_14 [i_0]);
            }
            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((unsigned long long int) (-(min((14625176308276490260ULL), (arr_0 [i_0])))))))));
            arr_24 [i_0] [0U] = ((/* implicit */_Bool) min((((/* implicit */int) arr_20 [10U] [i_0] [i_0] [i_2] [i_2] [i_2])), (((((/* implicit */int) arr_3 [i_0])) | (((/* implicit */int) arr_3 [i_0]))))));
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (min((14726277480828943206ULL), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))))));
            var_25 = ((/* implicit */unsigned long long int) var_11);
        }
        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            arr_28 [i_0] [i_7] = ((/* implicit */long long int) arr_3 [i_7]);
            var_26 = ((/* implicit */long long int) (((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) > (arr_19 [i_0] [i_0] [i_0] [i_7] [i_7] [i_7])))))) + (((/* implicit */int) var_2))));
            arr_29 [(short)8] [i_7] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_17 [i_0])) ? (3720466592880608416ULL) : (var_14))), (((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_7]))) : (3720466592880608419ULL)))))) ? (max((max((14726277480828943200ULL), (14726277480828943189ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0] [i_0])), (arr_10 [i_0] [(unsigned short)0] [i_7])))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [(signed char)19] [i_7] [i_7] [i_7])) == (((/* implicit */int) arr_4 [i_0]))))), ((+(var_8)))))));
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) min((min((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_7]), (((/* implicit */unsigned short) arr_6 [18] [11] [i_7])))), (arr_17 [i_0])))) == (((/* implicit */int) arr_25 [i_0]))));
        }
        arr_30 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((((/* implicit */_Bool) 0LL)) ? (arr_19 [i_0] [i_0] [13] [(signed char)21] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_13 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) arr_17 [i_0]))));
        var_28 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0])) ? (((long long int) 3720466592880608415ULL)) : (((/* implicit */long long int) max((min((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (234896099U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0]))) < (arr_0 [i_0])))))))));
    }
    var_29 -= ((/* implicit */signed char) var_14);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
            {
                var_30 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(var_11))))));
                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) arr_11 [i_8] [i_9]))))));
            }
            for (long long int i_11 = 3; i_11 < 19; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 1; i_12 < 19; i_12 += 2) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */signed char) arr_39 [i_11 - 1] [i_12 - 1] [i_12]);
                            var_33 = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_12 - 1] [i_13])) < (((/* implicit */int) arr_9 [i_11 - 2] [i_11] [i_8]))));
                            var_34 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_34 [i_11 + 1] [i_12 - 1]))));
                            arr_47 [i_9] [i_11] = arr_19 [i_11 - 1] [i_11 - 3] [i_11 - 1] [i_12 - 1] [i_12 + 1] [i_12 - 1];
                        }
                    } 
                } 
                arr_48 [i_8] [i_11] = (+(((((/* implicit */_Bool) 9848458686318531176ULL)) ? (((/* implicit */int) (unsigned char)97)) : (((/* implicit */int) (unsigned char)97)))));
                var_35 = ((/* implicit */unsigned short) max((var_35), (var_0)));
            }
            for (unsigned char i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) (unsigned char)0))));
                arr_51 [i_9] = ((/* implicit */int) ((((/* implicit */int) arr_9 [i_8] [i_9] [i_14])) > (((/* implicit */int) arr_9 [i_14] [9U] [(unsigned char)17]))));
                arr_52 [i_9] = ((((/* implicit */int) arr_25 [i_8])) + (((/* implicit */int) arr_25 [i_9])));
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 2) 
            {
                arr_55 [i_8] [i_9] [i_9] [i_8] = ((/* implicit */long long int) (~(arr_0 [i_8])));
                var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)-64)))) : (var_7)));
                arr_56 [i_15] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_11 [(_Bool)1] [i_8]))) ? (((/* implicit */unsigned long long int) var_11)) : (4223402101187749200ULL)));
                var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_8] [i_15])) ? (((/* implicit */int) arr_36 [(signed char)9] [(signed char)16] [i_8] [13ULL])) : (((/* implicit */int) arr_44 [i_8] [i_15])))))));
                var_39 = ((/* implicit */unsigned short) arr_16 [i_8] [i_9] [(unsigned short)12] [i_15]);
            }
            for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 2) 
            {
                arr_61 [i_8] [i_9] [i_16] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_49 [i_8] [i_8] [i_8]))));
                arr_62 [i_8] [i_8] = ((/* implicit */unsigned char) ((unsigned int) ((14726277480828943176ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(short)6]))))));
                /* LoopSeq 2 */
                for (short i_17 = 0; i_17 < 20; i_17 += 2) 
                {
                    var_40 += ((/* implicit */short) ((((/* implicit */_Bool) arr_46 [1ULL] [i_17] [i_16] [i_9] [i_8])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_60 [(signed char)3] [i_9] [i_8])) ? (((/* implicit */int) arr_36 [0U] [i_9] [i_16] [(unsigned short)17])) : (((/* implicit */int) arr_25 [i_8]))))) : (((((/* implicit */_Bool) arr_8 [i_9])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_8] [(signed char)4] [i_16])))))));
                    arr_65 [i_17] [i_16] [i_9] [i_8] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_7 [i_8] [i_8])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_17] [i_16] [i_9] [i_8]))) : (arr_63 [i_8] [i_9] [i_17])));
                    var_41 = ((/* implicit */unsigned long long int) arr_25 [i_17]);
                }
                for (unsigned char i_18 = 0; i_18 < 20; i_18 += 2) 
                {
                    var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) ((int) arr_15 [i_8] [(short)18] [i_16] [(short)18])))));
                    /* LoopSeq 1 */
                    for (int i_19 = 0; i_19 < 20; i_19 += 2) 
                    {
                        var_43 = ((/* implicit */long long int) arr_54 [i_8] [i_16] [i_18] [i_19]);
                        arr_73 [(unsigned char)12] [i_9] [i_16] [18ULL] [i_19] = ((/* implicit */unsigned char) 2627206978222070662LL);
                    }
                }
            }
            var_44 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) arr_64 [i_8] [i_8] [i_9] [i_8])) > (arr_1 [(unsigned short)2] [(unsigned short)2])))) <= (((/* implicit */int) arr_44 [i_8] [i_9]))));
            var_45 = ((/* implicit */signed char) arr_57 [i_8] [i_8] [i_8] [(short)6]);
        }
        /* LoopNest 2 */
        for (unsigned short i_20 = 3; i_20 < 19; i_20 += 2) 
        {
            for (short i_21 = 0; i_21 < 20; i_21 += 2) 
            {
                {
                    arr_80 [i_20] [14U] [i_21] [i_8] |= ((unsigned int) ((signed char) var_9));
                    /* LoopNest 2 */
                    for (signed char i_22 = 0; i_22 < 20; i_22 += 2) 
                    {
                        for (unsigned short i_23 = 0; i_23 < 20; i_23 += 2) 
                        {
                            {
                                arr_86 [i_8] [i_8] [i_21] [i_22] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_83 [(unsigned short)17] [i_20] [i_21] [(short)3] [i_23] [i_23])) ? (((/* implicit */int) arr_3 [i_20 - 2])) : (arr_2 [i_8] [i_8])));
                                arr_87 [i_22] [i_21] = ((/* implicit */unsigned char) (-(1083283061411913121ULL)));
                            }
                        } 
                    } 
                    var_46 = (~(((((/* implicit */_Bool) arr_42 [i_8] [i_20] [i_20] [i_21])) ? (1292876737492522064ULL) : (((/* implicit */unsigned long long int) arr_43 [i_8] [i_21] [i_21] [i_21] [i_8] [i_20 - 1])))));
                }
            } 
        } 
        var_47 = ((/* implicit */int) var_1);
        /* LoopNest 3 */
        for (short i_24 = 0; i_24 < 20; i_24 += 2) 
        {
            for (int i_25 = 3; i_25 < 18; i_25 += 2) 
            {
                for (unsigned short i_26 = 1; i_26 < 18; i_26 += 2) 
                {
                    {
                        var_48 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_33 [7ULL] [i_24] [i_25 + 1])) ? (((/* implicit */unsigned long long int) arr_2 [i_24] [i_25])) : (var_8))) == (((/* implicit */unsigned long long int) arr_15 [i_8] [(signed char)1] [(signed char)1] [(unsigned short)14]))));
                        var_49 = ((((/* implicit */_Bool) arr_20 [i_26 + 1] [i_24] [i_25 - 1] [i_26] [14LL] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127)))))) : (var_14));
                    }
                } 
            } 
        } 
    }
    for (short i_27 = 0; i_27 < 25; i_27 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_28 = 1; i_28 < 23; i_28 += 2) 
        {
            for (int i_29 = 2; i_29 < 23; i_29 += 2) 
            {
                {
                    var_50 = ((/* implicit */unsigned char) arr_101 [i_28 + 1] [i_28 - 1] [i_28]);
                    var_51 += ((/* implicit */short) arr_96 [i_27] [i_28]);
                }
            } 
        } 
        var_52 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (17153867336217029551ULL) : (17153867336217029552ULL)))) ? (((/* implicit */int) max((arr_96 [i_27] [13LL]), (max((arr_101 [i_27] [i_27] [i_27]), (arr_96 [i_27] [i_27])))))) : ((~(min((arr_99 [i_27] [i_27] [i_27]), (((/* implicit */int) (unsigned char)97))))))));
    }
    for (short i_30 = 0; i_30 < 25; i_30 += 2) /* same iter space */
    {
        arr_107 [(signed char)20] [i_30] = ((/* implicit */short) (unsigned char)79);
        arr_108 [i_30] [i_30] = ((/* implicit */unsigned char) ((unsigned int) 18000161420313358773ULL));
        var_53 = ((/* implicit */long long int) arr_101 [i_30] [i_30] [i_30]);
    }
    var_54 = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((min((((/* implicit */unsigned short) (unsigned char)159)), (var_0))), (var_10)))), (var_7)));
}
