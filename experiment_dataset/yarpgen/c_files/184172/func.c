/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184172
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
    var_11 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
        arr_3 [i_0] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) min((((/* implicit */signed char) (!((_Bool)0)))), (arr_0 [i_0]))))));
    }
    /* LoopSeq 3 */
    for (short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_12 = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_7 [i_1] [i_1])))));
        arr_8 [i_1] = ((/* implicit */unsigned short) (unsigned char)5);
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_1]))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            var_13 = ((/* implicit */short) ((arr_13 [i_2] [i_3]) / (arr_13 [i_3] [i_2])));
            arr_15 [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) ((unsigned short) arr_11 [i_2]));
            var_14 = ((/* implicit */_Bool) 858783880);
            arr_16 [i_2] = ((/* implicit */unsigned int) arr_14 [i_2] [i_2] [i_2]);
        }
        arr_17 [i_2] [i_2] = ((/* implicit */signed char) max(((+(504087807U))), (((/* implicit */unsigned int) ((unsigned char) arr_11 [i_2])))));
        var_15 *= ((/* implicit */signed char) min((((/* implicit */int) (_Bool)1)), (-883616337)));
        arr_18 [(_Bool)0] |= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)127)) ? ((+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)-28659))))))) : (arr_14 [i_2] [i_2] [i_2])));
    }
    for (signed char i_4 = 1; i_4 < 22; i_4 += 2) 
    {
        var_16 |= ((/* implicit */short) min((arr_19 [i_4 + 1]), (max((((/* implicit */unsigned int) ((int) arr_20 [i_4]))), ((~(arr_19 [i_4])))))));
        arr_22 [i_4] = ((/* implicit */long long int) ((short) ((arr_21 [i_4 - 1] [i_4 - 1]) + (((/* implicit */long long int) 3790879475U)))));
        /* LoopNest 3 */
        for (signed char i_5 = 2; i_5 < 20; i_5 += 1) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    {
                        arr_31 [i_4] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) / (((/* implicit */int) arr_30 [i_5 + 2] [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1]))))) * (((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_4 - 1] [i_4 + 1] [i_7] [i_7] [i_7] [i_7]))) / (arr_19 [i_5 - 1])))));
                        /* LoopSeq 3 */
                        for (long long int i_8 = 0; i_8 < 23; i_8 += 2) 
                        {
                            arr_36 [i_4] [1ULL] [i_6] [i_4] [i_4] = ((/* implicit */signed char) 3790879471U);
                            arr_37 [i_4] [i_5] [i_6] [i_4] [i_4] [i_5 + 3] = ((/* implicit */unsigned char) max(((-(((((/* implicit */unsigned long long int) arr_33 [17] [i_5] [i_5])) + (var_2))))), (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (unsigned char)222)))), (((/* implicit */int) (_Bool)1)))))));
                        }
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) 2867421070U);
                            arr_41 [i_4] [i_5] [i_6 - 1] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)41)) != (33554432)));
                        }
                        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 3) 
                        {
                            arr_44 [i_4] [i_6] [i_6] = ((/* implicit */_Bool) max((((/* implicit */long long int) (((+(((/* implicit */int) var_5)))) - (((/* implicit */int) (short)-22720))))), (((long long int) 18446744073709551615ULL))));
                            arr_45 [i_4] [i_4] [i_4] [i_7] [i_7] = ((/* implicit */short) ((min((((/* implicit */int) (short)-13)), (883616352))) ^ (((((/* implicit */int) (short)-22723)) | (((/* implicit */int) arr_29 [i_5 - 1] [i_5] [i_5] [i_5] [i_5] [i_5]))))));
                        }
                        var_18 *= ((/* implicit */signed char) arr_40 [i_4] [i_6 - 1] [i_4 + 1] [i_5 + 3] [i_6 - 1]);
                        var_19 = (i_4 % 2 == 0) ? (((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)2044)) || (((/* implicit */_Bool) -665404988724832944LL)))) || (((/* implicit */_Bool) arr_28 [i_5]))))) >> (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_23 [i_4] [i_4])) : (((/* implicit */int) arr_23 [i_4] [i_4])))) + (94)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)2044)) || (((/* implicit */_Bool) -665404988724832944LL)))) || (((/* implicit */_Bool) arr_28 [i_5]))))) >> (((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_23 [i_4] [i_4])) : (((/* implicit */int) arr_23 [i_4] [i_4])))) + (94))) - (152))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 23; i_11 += 2) 
        {
            for (unsigned long long int i_12 = 2; i_12 < 22; i_12 += 1) 
            {
                for (unsigned int i_13 = 0; i_13 < 23; i_13 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_4] [i_4] [i_11] [i_12] [i_12] [i_13] [i_13])) ? (((max((((/* implicit */long long int) (short)24)), (-1LL))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-15412)) && (((/* implicit */_Bool) 7U)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_20 [i_4 + 1])))))))));
                        arr_56 [i_4] [(signed char)3] = ((/* implicit */long long int) max((((/* implicit */int) ((short) ((long long int) arr_47 [i_11])))), (((((/* implicit */int) ((_Bool) (short)-32759))) - (((/* implicit */int) ((short) arr_43 [i_4])))))));
                        arr_57 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)127)) || (((/* implicit */_Bool) arr_50 [i_4] [i_4]))))) >> (((((/* implicit */int) ((short) arr_28 [i_4 + 1]))) + (29775)))));
                        arr_58 [i_4] [(unsigned char)21] [i_12] [16ULL] [i_4] [i_13] = ((/* implicit */long long int) -33554417);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (short i_14 = 0; i_14 < 23; i_14 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_15 = 3; i_15 < 22; i_15 += 1) 
            {
                arr_64 [i_4] [i_4] = ((/* implicit */signed char) max((((/* implicit */long long int) ((_Bool) max(((short)3), (((/* implicit */short) arr_59 [i_4])))))), (((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */long long int) var_10)) : (((long long int) var_1))))));
                arr_65 [i_4] [i_4] [(short)4] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_20 [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned char) (_Bool)1)))))) : (((((/* implicit */_Bool) (signed char)-32)) ? (3790879471U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) + ((((!(((/* implicit */_Bool) arr_34 [i_4 - 1] [i_4] [i_14] [i_4] [i_14] [i_15 + 1] [i_15])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (min((3219276591U), (((/* implicit */unsigned int) arr_43 [i_14]))))))));
                arr_66 [i_4] [i_14] [i_4] = ((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) / (((131071U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)21072))))))), (((/* implicit */unsigned int) ((int) max((28432182U), (0U)))))));
                /* LoopSeq 2 */
                for (long long int i_16 = 0; i_16 < 23; i_16 += 1) /* same iter space */
                {
                    arr_69 [i_4] [i_14] [i_15] [i_16] = ((/* implicit */unsigned short) max((((3790879469U) - (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) max(((_Bool)1), (arr_53 [i_4] [i_4 + 1] [i_14] [i_15 - 3]))))));
                    var_21 = ((/* implicit */unsigned char) ((max((arr_52 [i_4]), (arr_52 [i_4 + 1]))) + (((/* implicit */long long int) ((arr_43 [i_16]) ? (((/* implicit */int) arr_23 [i_4] [i_4])) : (((/* implicit */int) arr_23 [i_4] [i_4])))))));
                    arr_70 [i_16] [i_14] [i_4] [(unsigned char)19] = min((((((/* implicit */unsigned long long int) ((unsigned int) (short)-512))) + (((unsigned long long int) (short)21)))), (max((((/* implicit */unsigned long long int) arr_46 [i_4] [i_4] [i_4 - 1])), (((((/* implicit */_Bool) arr_28 [19ULL])) ? (var_2) : (14510021964813749273ULL))))));
                    arr_71 [(unsigned char)12] [i_14] [(unsigned char)12] [i_4] = ((/* implicit */int) arr_42 [i_4 - 1] [i_14]);
                }
                for (long long int i_17 = 0; i_17 < 23; i_17 += 1) /* same iter space */
                {
                    arr_74 [i_4] = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)131)) ? (3790879484U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)131))))))))));
                    arr_75 [i_4] [i_15] [i_15] [i_14] [i_4] [i_4] = (~(((/* implicit */int) (short)518)));
                }
            }
            for (signed char i_18 = 0; i_18 < 23; i_18 += 1) 
            {
                /* LoopNest 2 */
                for (short i_19 = 0; i_19 < 23; i_19 += 2) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            var_22 = ((_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_86 [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [i_18] [(unsigned char)8] [(unsigned char)6]))));
                            arr_87 [i_19] [i_4] [i_18] [i_18] = ((/* implicit */unsigned short) ((unsigned long long int) ((((((/* implicit */int) (short)-22726)) - (((/* implicit */int) (signed char)-95)))) + ((+(((/* implicit */int) (unsigned char)255)))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) ((18446744073709551615ULL) >> (((max((max((var_2), (((/* implicit */unsigned long long int) (_Bool)1)))), (var_2))) - (16936916083072668398ULL)))));
            }
            /* vectorizable */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_22 = 0; i_22 < 23; i_22 += 2) 
                {
                    var_24 = ((/* implicit */unsigned int) arr_42 [i_4 + 1] [i_4 - 1]);
                    var_25 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                    arr_94 [i_4] [i_14] [i_4] [(signed char)19] [i_22] = ((/* implicit */unsigned long long int) ((arr_50 [i_4 + 1] [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))));
                }
                for (unsigned char i_23 = 0; i_23 < 23; i_23 += 1) 
                {
                    arr_97 [16] [i_4] [i_21] [16] [i_14] [(short)16] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (signed char)0)))) << (((arr_52 [i_4 - 1]) + (7344353626124164090LL)))));
                    arr_98 [i_4] [i_21] [i_4] [i_14] [i_4] = ((/* implicit */unsigned int) var_2);
                    var_26 = ((/* implicit */int) (!(arr_67 [i_4] [i_4 - 1] [i_4 - 1] [i_23])));
                }
                for (signed char i_24 = 3; i_24 < 19; i_24 += 1) 
                {
                    arr_103 [9ULL] [9ULL] [9ULL] [i_4] [i_24] = ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (arr_46 [i_14] [i_14] [i_4]) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))));
                    arr_104 [i_4] [i_21] [i_24] [i_24] [i_4] = ((/* implicit */long long int) arr_29 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 1] [i_24 + 3] [i_24 + 2]);
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((unsigned char) var_2)))));
                }
                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) arr_20 [i_4 + 1]))));
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) var_7))) | (((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */int) (unsigned short)61687)) : (((/* implicit */int) (unsigned char)34))))));
                var_30 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -607461314)) == (arr_84 [i_4] [i_14] [i_14] [i_4 - 1] [i_4] [i_4] [i_4 - 1])));
            }
            arr_105 [i_4 + 1] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)1))));
        }
    }
    var_31 = ((/* implicit */unsigned char) var_7);
    var_32 = ((/* implicit */unsigned long long int) ((((((int) var_8)) ^ ((+(((/* implicit */int) var_0)))))) >> (((((min((var_10), (((/* implicit */unsigned int) (_Bool)0)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_9))))))) - (127U)))));
}
