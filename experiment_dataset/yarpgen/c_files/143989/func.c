/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143989
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) min((arr_4 [i_0] [i_1] [i_1]), (arr_4 [i_0] [(_Bool)1] [i_1]))))) || (((/* implicit */_Bool) ((max((var_13), (((/* implicit */unsigned long long int) arr_6 [i_0])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0]))))))));
                /* LoopSeq 3 */
                for (int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */int) max((((/* implicit */unsigned int) ((arr_2 [i_0] [i_3]) != (((/* implicit */unsigned long long int) arr_9 [i_1] [i_3 - 1]))))), (((unsigned int) arr_10 [i_3 + 2] [i_0]))));
                        var_21 = ((/* implicit */short) arr_6 [11LL]);
                    }
                    for (signed char i_4 = 1; i_4 < 9; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */long long int) arr_13 [i_0] [i_1] [i_0] [i_1]);
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) arr_0 [i_4 - 1]))) & (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_4 + 3])) || (((/* implicit */_Bool) arr_0 [i_0]))))))))));
                        arr_14 [i_0] [i_1] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_17)) != (((/* implicit */int) arr_12 [i_4 + 3] [i_4 + 3] [i_4 + 2] [i_4 - 1] [i_4 + 1])))))) % (((((/* implicit */unsigned int) arr_5 [i_4 + 3] [i_4 + 1] [i_4 + 1])) ^ (((unsigned int) var_7))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (int i_6 = 3; i_6 < 8; i_6 += 4) 
                        {
                            arr_20 [i_6] [i_1] [i_2] [i_6] [(unsigned short)3] = arr_12 [i_5] [i_6 - 2] [i_6 - 1] [i_6] [i_6 + 3];
                            arr_21 [i_2] [i_6] [i_2] [i_5] [i_0] [i_1] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned short) arr_9 [i_0] [i_1])));
                        }
                        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            arr_25 [10] [i_1] [i_1] [i_1] [i_7] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_5] [i_7]))) | (((arr_23 [i_7]) ^ (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0]))))));
                            arr_26 [i_7] [(_Bool)1] [i_7] [i_0] = ((/* implicit */int) ((unsigned short) var_9));
                            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((arr_5 [11LL] [i_1] [2]) < (((/* implicit */int) arr_13 [i_0] [(signed char)6] [i_2] [i_7])))))));
                            arr_27 [i_7] [i_5] [i_2] [(_Bool)1] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_17 [3LL] [(_Bool)1] [i_2] [i_5]))));
                            arr_28 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_7] [i_5] [i_2] [i_1] [4])) % (((/* implicit */int) arr_10 [i_5] [i_1]))));
                        }
                        /* LoopSeq 1 */
                        for (short i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            var_25 = ((/* implicit */signed char) ((arr_24 [i_8] [i_5] [i_5] [i_2] [i_1] [i_0]) - (arr_24 [i_0] [i_1] [i_2] [i_5] [i_8] [(signed char)5])));
                            arr_31 [i_0] [i_1] [i_2] [i_5] [i_8] = ((/* implicit */unsigned char) ((((arr_18 [i_0] [i_1]) + (9223372036854775807LL))) << (((((/* implicit */int) (signed char)115)) ^ (((/* implicit */int) (signed char)115))))));
                            var_26 *= ((/* implicit */short) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_8] [i_5] [i_2] [i_0] [i_0]))) & (arr_23 [i_2]))));
                            arr_32 [i_0] [i_0] [4] [i_2] [(_Bool)1] [(unsigned short)5] = ((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_0] [i_2] [i_5] [i_8])) < (arr_0 [i_0])));
                            var_27 = ((((/* implicit */int) (short)22)) <= (((/* implicit */int) (signed char)0)));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                        {
                            var_28 += ((/* implicit */int) ((unsigned int) (signed char)104));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-108)) - (((/* implicit */int) (_Bool)1))));
                            arr_39 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((_Bool) var_9));
                            arr_40 [2] [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned int) arr_9 [i_9] [(short)4])) | (arr_35 [i_0] [0U]))));
                        }
                        for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((var_7) % (((/* implicit */int) var_8)))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (signed char)-43))))))))));
                            arr_45 [i_0] [(signed char)5] [0ULL] = ((/* implicit */_Bool) arr_34 [i_0] [i_1] [i_2] [i_9]);
                            var_31 = ((/* implicit */unsigned char) ((int) arr_37 [6U] [7] [i_1] [10] [i_2] [i_9] [9U]));
                            arr_46 [i_0] [i_1] [(signed char)10] [i_9] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_9] [i_11] [i_2] [i_9] [6LL]))) & (arr_2 [i_0] [i_0])));
                            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-8)) && (((/* implicit */_Bool) (unsigned short)17)))))));
                        }
                        var_33 = ((/* implicit */int) arr_18 [i_9] [i_9]);
                        var_34 = ((/* implicit */signed char) var_4);
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 10; i_12 += 4) 
                    {
                        for (unsigned int i_13 = 4; i_13 < 11; i_13 += 4) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned short) arr_15 [i_0] [i_0] [i_0] [i_0] [7U]);
                                var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (signed char)123)) % (-871932332)))))));
                            }
                        } 
                    } 
                    var_37 -= ((/* implicit */unsigned short) max((((/* implicit */int) ((short) arr_36 [i_0] [i_1] [i_2]))), (max((((int) arr_49 [(signed char)2] [i_0] [i_0] [(short)8] [i_2] [i_2])), (((/* implicit */int) ((var_9) != (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_1] [i_1] [i_2] [(unsigned short)3] [(unsigned short)3] [8LL]))))))))));
                    /* LoopSeq 1 */
                    for (int i_14 = 1; i_14 < 8; i_14 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 3) 
                        {
                            arr_60 [i_15] [i_15] [i_2] [(short)11] = ((/* implicit */signed char) max((max((arr_35 [i_14 + 3] [i_14 - 1]), (arr_35 [i_14 - 1] [i_14 + 3]))), (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [6LL]))) + (var_10))), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_12)))))))));
                            arr_61 [(_Bool)0] [i_15] [i_2] [i_15] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((short) arr_2 [i_0] [i_14 + 1])));
                        }
                        arr_62 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) arr_44 [i_0] [i_0] [i_2] [i_2] [i_0] [1]);
                        arr_63 [11] [(short)8] [i_2] [i_14] = arr_50 [i_14] [i_0] [i_0];
                        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) var_13))));
                        var_39 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) max((((/* implicit */int) arr_29 [i_0] [i_1] [i_1] [4U] [i_2] [i_14])), (var_15)))), (max((((/* implicit */long long int) arr_9 [i_0] [i_0])), (arr_18 [i_0] [i_0]))))) * (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_52 [8LL] [7U] [i_2] [i_2] [i_14])))) * (arr_35 [i_0] [i_0]))))));
                    }
                }
                for (short i_16 = 0; i_16 < 12; i_16 += 3) 
                {
                    var_40 = ((/* implicit */_Bool) ((unsigned char) (signed char)13));
                    arr_68 [i_0] [i_16] = (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_16)) < (arr_15 [(signed char)9] [i_0] [i_1] [i_16] [i_16]))))) | (min((((/* implicit */long long int) var_7)), (arr_67 [i_0] [i_16] [i_1] [(_Bool)1])))))));
                }
                for (unsigned int i_17 = 0; i_17 < 12; i_17 += 4) 
                {
                    arr_72 [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_41 [i_0] [i_1] [i_1] [i_1] [i_17])) & (arr_59 [i_1] [i_17])))));
                    var_41 += ((/* implicit */int) arr_13 [i_17] [i_1] [i_1] [(short)0]);
                    arr_73 [i_17] [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */int) (signed char)0)) >= (((/* implicit */int) (signed char)-104)))), (((arr_11 [i_0] [i_0]) < (arr_11 [i_0] [i_0])))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_18 = 0; i_18 < 25; i_18 += 4) 
    {
        for (unsigned short i_19 = 0; i_19 < 25; i_19 += 2) 
        {
            for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_21 = 1; i_21 < 23; i_21 += 4) 
                    {
                        for (unsigned short i_22 = 1; i_22 < 22; i_22 += 4) 
                        {
                            {
                                var_42 = ((/* implicit */_Bool) (-(((/* implicit */int) ((var_9) >= (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_79 [1ULL] [i_19] [i_20] [i_22]))) % (arr_76 [i_18])))))))));
                                var_43 = ((/* implicit */int) ((((((((/* implicit */_Bool) arr_81 [i_18] [(unsigned short)19] [(short)10] [i_22])) || (((/* implicit */_Bool) arr_74 [15])))) || (((((/* implicit */_Bool) arr_83 [i_22] [i_21] [1ULL] [i_20 + 1] [i_19] [i_18])) && (((/* implicit */_Bool) arr_83 [i_18] [i_19] [i_20] [i_21] [(_Bool)1] [i_22])))))) || (((((/* implicit */_Bool) arr_85 [i_18] [i_18] [i_21 + 2] [i_20 + 1] [i_22 + 2])) && (((/* implicit */_Bool) arr_77 [i_19] [i_21]))))));
                            }
                        } 
                    } 
                    var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) var_13))));
                    /* LoopNest 2 */
                    for (short i_23 = 0; i_23 < 25; i_23 += 4) 
                    {
                        for (unsigned long long int i_24 = 1; i_24 < 24; i_24 += 4) 
                        {
                            {
                                var_45 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) arr_87 [i_24 - 1] [i_24 + 1] [i_24 - 1] [i_24])) % (((/* implicit */int) arr_87 [i_24 - 1] [i_24] [i_24 - 1] [i_24 + 1])))));
                                arr_90 [i_18] [i_24] [i_18] [i_18] [15] [i_18] [(short)14] = ((/* implicit */_Bool) ((int) ((unsigned long long int) var_5)));
                                var_46 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */int) (signed char)18)) + (((/* implicit */int) (signed char)-113)))) < (((/* implicit */int) var_2))))) % (((/* implicit */int) ((short) arr_79 [i_24] [i_24 + 1] [i_24 + 1] [i_20 + 1])))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned short i_25 = 0; i_25 < 25; i_25 += 3) /* same iter space */
                    {
                        var_47 &= ((/* implicit */unsigned int) min((((((/* implicit */int) ((unsigned char) 131071))) * (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) < (arr_92 [i_19])))))), (((/* implicit */int) max((arr_83 [i_18] [i_18] [i_18] [i_20] [i_25] [i_25]), (((/* implicit */unsigned short) arr_85 [i_25] [i_20] [i_19] [i_19] [i_18])))))));
                        arr_94 [i_25] [i_20] [16U] [i_25] = ((/* implicit */long long int) var_19);
                    }
                    for (unsigned short i_26 = 0; i_26 < 25; i_26 += 3) /* same iter space */
                    {
                        arr_97 [i_18] [i_19] [i_20] [i_26] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_83 [(_Bool)1] [i_19] [(unsigned short)8] [i_20] [i_20 + 1] [i_26])) <= (((/* implicit */int) arr_83 [i_18] [(unsigned short)12] [i_19] [i_19] [i_18] [i_18]))))) < (((/* implicit */int) ((short) arr_78 [i_26] [i_20 + 1] [i_20 + 1] [i_20 + 1])))));
                        var_48 ^= ((/* implicit */unsigned long long int) ((unsigned short) min((arr_89 [(signed char)16] [i_19] [i_20] [i_19] [i_19] [i_19] [i_20 + 1]), (((/* implicit */int) var_4)))));
                        var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) ((((/* implicit */int) arr_87 [i_18] [i_19] [i_20] [(_Bool)1])) >= (((/* implicit */int) var_12))))) % (((/* implicit */int) arr_86 [i_26] [i_20 + 1] [i_20 + 1] [(signed char)5]))))))));
                    }
                }
            } 
        } 
    } 
}
