/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135401
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
    var_20 = ((/* implicit */int) (_Bool)1);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])))), (((/* implicit */int) (short)-24563))));
        var_22 = (!((!(((/* implicit */_Bool) arr_3 [i_0 + 1])))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_23 &= ((/* implicit */int) arr_8 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */int) arr_7 [(unsigned char)7] [(unsigned char)17] [i_2 - 1] [i_1]);
                                arr_16 [i_1] = ((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)127))))), (arr_0 [i_0 - 2]))) << (((arr_4 [i_1]) - (17954963484194107570ULL))));
                                arr_17 [i_4] [(unsigned char)11] [(_Bool)1] [i_4] [i_1] = ((/* implicit */unsigned char) var_19);
                            }
                        } 
                    } 
                    arr_18 [i_1] = ((/* implicit */int) var_6);
                }
            } 
        } 
    }
    for (unsigned int i_5 = 2; i_5 < 18; i_5 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_6 = 2; i_6 < 18; i_6 += 1) 
        {
            var_25 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_15 [i_5] [i_5] [i_6 + 1] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_15 [i_6 - 1] [i_5] [i_6 + 1] [i_6 - 1] [i_6 - 1])))))));
            var_26 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) arr_6 [i_5])))));
        }
        for (unsigned int i_7 = 3; i_7 < 18; i_7 += 1) 
        {
            var_27 = ((/* implicit */unsigned char) arr_6 [i_7]);
            /* LoopNest 3 */
            for (unsigned char i_8 = 2; i_8 < 18; i_8 += 4) 
            {
                for (unsigned int i_9 = 2; i_9 < 18; i_9 += 2) 
                {
                    for (unsigned char i_10 = 2; i_10 < 18; i_10 += 2) 
                    {
                        {
                            var_28 ^= ((/* implicit */_Bool) (unsigned char)120);
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_4 [i_5]))) != (((/* implicit */int) (unsigned char)162))));
                            arr_34 [i_5 + 1] [(_Bool)1] [i_5] [14ULL] [i_7] [i_5 - 2] [i_7] = ((/* implicit */short) (~((-(((/* implicit */int) arr_25 [i_7] [i_7]))))));
                            arr_35 [i_10] |= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_9 [i_10 - 2] [(short)9] [i_8 + 1])) ? (arr_13 [i_10 - 2] [i_10 - 2] [i_8 + 1] [i_8 - 1] [i_8]) : (arr_13 [i_10 - 2] [i_7 - 1] [i_8 - 1] [i_8 - 1] [i_5])))));
                            arr_36 [i_5] [i_7] [i_5] [i_7] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) 3702460458U)) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) arr_28 [i_10 + 1] [i_9] [(_Bool)0] [(_Bool)0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned char) arr_33 [i_5 + 1] [(_Bool)1] [(_Bool)1] [i_7] [i_5 - 1] [9])))))) : (min((arr_4 [i_9 + 1]), (arr_4 [i_9 - 2])))));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_5 - 2] [i_5 + 1])) ? (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (var_6))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_7])))))) : ((-(((/* implicit */int) min((((/* implicit */short) arr_24 [i_5 - 1] [i_5 - 2])), (arr_25 [i_7] [i_7]))))))));
        }
        var_31 = (unsigned char)0;
        /* LoopSeq 1 */
        for (int i_11 = 1; i_11 < 17; i_11 += 4) 
        {
            var_32 = ((/* implicit */short) (-(((/* implicit */int) var_10))));
            arr_41 [i_5 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)155))))) ? (2366694767U) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_28 [i_5 - 2] [i_11 + 2] [i_11 + 2] [(unsigned char)2])))))));
        }
    }
    for (unsigned int i_12 = 2; i_12 < 18; i_12 += 2) /* same iter space */
    {
        var_33 |= max((((((/* implicit */_Bool) arr_21 [i_12 - 2] [i_12 - 2])) ? (((/* implicit */int) arr_21 [i_12 - 2] [i_12 - 2])) : (-457907969))), (((/* implicit */int) arr_21 [i_12 - 2] [i_12])));
        arr_45 [i_12 - 1] [i_12] &= ((/* implicit */short) ((((/* implicit */_Bool) max((arr_20 [i_12 + 1] [i_12 - 1]), (min((17521545842025145884ULL), (((/* implicit */unsigned long long int) (unsigned char)178))))))) ? (((/* implicit */int) (unsigned char)135)) : (max((((/* implicit */int) arr_22 [i_12 - 1] [i_12 + 1])), (((((/* implicit */int) var_1)) * (((/* implicit */int) var_17))))))));
        var_34 = ((/* implicit */unsigned long long int) ((max((arr_42 [i_12 + 1]), (((/* implicit */unsigned int) arr_3 [i_12 - 1])))) != (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)233)) << (((/* implicit */int) arr_33 [i_12] [i_12] [i_12 + 1] [i_12] [i_12 - 2] [i_12 - 1])))))));
        var_35 = (((-(((((/* implicit */_Bool) var_7)) ? (arr_10 [i_12 + 1] [i_12 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_12 - 2]))))))) > (min((max((((/* implicit */unsigned long long int) (short)1)), (var_19))), (((/* implicit */unsigned long long int) arr_7 [11U] [i_12 - 2] [i_12 - 1] [i_12 - 1])))));
        /* LoopSeq 1 */
        for (unsigned char i_13 = 0; i_13 < 19; i_13 += 1) 
        {
            arr_49 [i_12] [i_13] = ((/* implicit */_Bool) var_13);
            arr_50 [i_13] [i_13] [i_13] = ((/* implicit */int) arr_9 [i_12 + 1] [i_12 + 1] [i_13]);
        }
    }
    /* LoopNest 2 */
    for (unsigned int i_14 = 1; i_14 < 11; i_14 += 2) 
    {
        for (unsigned char i_15 = 0; i_15 < 12; i_15 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_16 = 0; i_16 < 12; i_16 += 2) 
                {
                    arr_58 [i_14 - 1] [i_14 - 1] [8ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)78))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)162)) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned char)136))))) : ((-((+(arr_0 [13ULL])))))));
                    var_36 = ((/* implicit */_Bool) 1819336343U);
                    /* LoopSeq 3 */
                    for (unsigned char i_17 = 2; i_17 < 8; i_17 += 4) /* same iter space */
                    {
                        arr_61 [i_14 - 1] [i_15] [i_17] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_14 - 1])) ? (arr_19 [i_14 - 1]) : (arr_19 [i_17 - 2])))) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_19 [i_14]));
                        arr_62 [i_14 + 1] [7ULL] [i_17] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)133))))))), ((-(((/* implicit */int) var_7))))));
                        arr_63 [i_14 - 1] [(unsigned char)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_51 [i_14 + 1] [i_17 + 3]))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) 4396091501470861556ULL)) ? (arr_27 [i_14 - 1] [i_15] [i_16] [i_17 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32758)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [18U] [0]))) : (var_12)))))))) : (arr_27 [i_14 - 1] [i_15] [i_16] [(_Bool)1])));
                        arr_64 [i_14 + 1] [i_14] [i_16] [(_Bool)1] |= ((/* implicit */short) max((((arr_26 [i_14] [i_16] [i_16] [i_17 + 3]) ? ((~(((/* implicit */int) (short)-26354)))) : (((/* implicit */int) max((arr_43 [(_Bool)0] [i_16]), (arr_39 [i_14 - 1])))))), (((((/* implicit */_Bool) var_8)) ? (min((-1038744140), (((/* implicit */int) (short)(-32767 - 1))))) : (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_8 [i_14 + 1]))))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 3) 
                        {
                            var_37 = ((/* implicit */unsigned long long int) arr_22 [(_Bool)1] [i_16]);
                            var_38 |= ((/* implicit */unsigned long long int) arr_42 [i_14 - 1]);
                            var_39 &= ((/* implicit */unsigned char) var_15);
                        }
                        for (short i_19 = 0; i_19 < 12; i_19 += 2) 
                        {
                            arr_72 [i_14 - 1] [i_15] [i_15] [(unsigned char)9] [i_17 - 1] [i_19] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)120)) % (((((/* implicit */_Bool) (unsigned char)136)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_9)))))))));
                            var_40 &= arr_5 [i_14 - 1] [i_14 + 1];
                            var_41 += ((/* implicit */_Bool) max((16741714290438837619ULL), (((/* implicit */unsigned long long int) (unsigned char)182))));
                        }
                        for (int i_20 = 0; i_20 < 12; i_20 += 3) 
                        {
                            arr_76 [i_14] [4] [4] [i_17 + 4] [i_20] = ((/* implicit */short) (+((+(6914597647175838565ULL)))));
                            arr_77 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 - 1] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)768)) | (((/* implicit */int) arr_71 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14]))));
                            arr_78 [i_14 + 1] [i_15] [i_16] [(unsigned char)6] [i_14 + 1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned long long int i_21 = 3; i_21 < 11; i_21 += 3) 
                        {
                            var_42 ^= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)151))))) ? (((/* implicit */int) var_14)) : ((+(((/* implicit */int) (unsigned char)120))))))));
                            var_43 = ((/* implicit */int) min((((((/* implicit */_Bool) (short)-21742)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_21] [i_21 + 1]))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_60 [i_21 - 3] [i_17] [i_16] [i_15] [i_14])) & (((/* implicit */int) ((_Bool) arr_33 [i_14 + 1] [i_14 + 1] [i_15] [i_21] [i_17] [i_21 - 2]))))))));
                            var_44 -= arr_20 [i_17 + 2] [i_14];
                        }
                    }
                    for (unsigned char i_22 = 2; i_22 < 8; i_22 += 4) /* same iter space */
                    {
                        var_45 ^= ((/* implicit */_Bool) arr_54 [i_22 + 3] [i_14 + 1]);
                        arr_85 [(short)5] = var_2;
                        arr_86 [i_14 + 1] [i_14] [i_14 - 1] &= ((/* implicit */unsigned char) (+(((/* implicit */int) max((arr_22 [(unsigned char)11] [i_22 + 2]), (arr_22 [i_14 - 1] [i_22 + 2]))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_23 = 2; i_23 < 8; i_23 += 4) /* same iter space */
                    {
                        var_46 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_23 + 3])) ? (4246729624U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_24 = 0; i_24 < 12; i_24 += 4) 
                        {
                            var_47 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)15))));
                            var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? ((-(arr_0 [i_14]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_69 [(short)5] [i_15] [i_23] [i_23 + 1] [i_24] [i_16]))))))))));
                            var_49 = ((/* implicit */unsigned long long int) max((var_49), (((/* implicit */unsigned long long int) (-(arr_42 [i_23 + 3]))))));
                            var_50 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_80 [i_23 + 2] [i_23 - 1] [i_16] [i_14 + 1] [i_14 - 1] [i_14 - 1])) & (((/* implicit */int) arr_80 [i_23 + 4] [i_23 + 1] [i_23 + 4] [i_15] [i_14 + 1] [i_14 + 1]))));
                        }
                        for (int i_25 = 0; i_25 < 12; i_25 += 3) /* same iter space */
                        {
                            var_51 = ((/* implicit */unsigned long long int) min((var_51), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_23] [i_23])) ? (((/* implicit */int) (short)32750)) : (((/* implicit */int) var_2))))))))));
                            var_52 = ((/* implicit */unsigned char) ((var_4) > (((/* implicit */unsigned int) ((/* implicit */int) arr_80 [i_14 + 1] [i_14 + 1] [i_15] [i_16] [8U] [i_25])))));
                            arr_94 [i_14 + 1] [i_25] [i_25] [6ULL] [i_25] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_18) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_25] [i_23 - 1] [i_16] [i_16] [i_15] [i_14]))) : (0ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_15]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) + (arr_30 [i_25] [i_23] [i_15] [i_14 - 1])))));
                        }
                        for (int i_26 = 0; i_26 < 12; i_26 += 3) /* same iter space */
                        {
                            arr_97 [i_14] [i_14 - 1] [i_14 + 1] [i_14] [i_14 + 1] = arr_71 [i_26] [i_15] [10ULL] [(unsigned char)8] [i_26];
                            arr_98 [(_Bool)1] [i_15] [i_16] [i_23 + 4] [i_26] [i_23 + 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32750))));
                            var_53 = (-(arr_42 [i_14 + 1]));
                            var_54 *= ((/* implicit */short) (((_Bool)1) ? (1111837460) : (1374471700)));
                            var_55 ^= ((/* implicit */short) ((((/* implicit */_Bool) 5093618173993416016ULL)) ? (8836620486243865340ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_14 - 1] [i_23 - 2] [5ULL] [i_23 + 1])))));
                        }
                        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                        {
                            var_56 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) + (arr_65 [i_27])));
                            var_57 = ((/* implicit */int) ((unsigned long long int) ((_Bool) arr_26 [(short)0] [i_27] [i_16] [i_23 + 2])));
                        }
                        arr_102 [i_23 + 1] [i_16] [i_16] [i_14] [i_14] [(unsigned char)10] = var_2;
                    }
                }
                for (int i_28 = 3; i_28 < 10; i_28 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_29 = 0; i_29 < 12; i_29 += 4) 
                    {
                        var_58 &= ((/* implicit */int) arr_22 [i_14] [i_15]);
                        arr_109 [i_28] [i_28] [i_28] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 0U)), (arr_10 [(unsigned char)16] [i_15])));
                        arr_110 [i_14 + 1] [i_28] [i_28 - 1] [(short)0] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_95 [i_29] [i_28] [i_15] [1])))), ((-((+(((/* implicit */int) var_18))))))));
                    }
                    for (int i_30 = 0; i_30 < 12; i_30 += 1) 
                    {
                        var_59 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)248))));
                        var_60 ^= ((/* implicit */short) arr_24 [i_14] [i_15]);
                        var_61 = ((/* implicit */unsigned long long int) var_5);
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_31 = 0; i_31 < 12; i_31 += 2) 
                    {
                        for (unsigned char i_32 = 0; i_32 < 12; i_32 += 4) 
                        {
                            {
                                var_62 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 8579231357116006430ULL)) ? (((/* implicit */int) (unsigned char)25)) : (83525001)));
                                var_63 = ((/* implicit */unsigned char) arr_87 [(unsigned char)2] [i_15] [(short)1] [i_15]);
                            }
                        } 
                    } 
                }
                var_64 = ((/* implicit */unsigned long long int) arr_112 [i_15] [2U] [2U] [(_Bool)1]);
                var_65 = ((/* implicit */short) (+(((/* implicit */int) arr_56 [i_14 - 1]))));
                var_66 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) 83525003)) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) arr_25 [10ULL] [i_15]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-9618)))));
            }
        } 
    } 
    var_67 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) (+(((unsigned long long int) var_11)))))));
}
