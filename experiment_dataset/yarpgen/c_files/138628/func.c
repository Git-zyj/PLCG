/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138628
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
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        arr_12 [i_1] [i_0] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_3 + 2])) ? (max((arr_5 [i_0] [i_1] [i_3 - 2]), (((/* implicit */int) arr_9 [i_0] [i_2] [i_3])))) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_3]))))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) arr_5 [i_1 + 1] [i_2] [i_3]);
                        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) var_4))));
                        arr_14 [i_2] &= ((/* implicit */_Bool) ((((/* implicit */int) max((arr_3 [i_2] [i_3] [i_3 - 1]), (arr_3 [i_2] [i_3] [i_3 + 2])))) - (((((/* implicit */int) arr_3 [i_3] [i_3] [i_3 + 1])) & (((/* implicit */int) arr_3 [i_1] [i_1] [i_3 + 2]))))));
                        arr_15 [i_0] [i_2] [i_2] [i_1 - 1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) >= (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_0]))))), (arr_0 [i_3 + 1] [i_2])))));
                    }
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_13 |= (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_1] [i_2]))))) ? (arr_0 [i_2] [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_1 + 3] [i_4])) - (((/* implicit */int) var_3))))))));
                        var_14 = ((/* implicit */short) min((((unsigned int) (unsigned char)6)), (((/* implicit */unsigned int) max((((/* implicit */short) arr_10 [i_2])), (arr_4 [i_0] [i_1 - 2] [i_2]))))));
                    }
                    for (signed char i_5 = 2; i_5 < 10; i_5 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) || ((!(((arr_3 [i_5] [i_2] [i_0]) || (((/* implicit */_Bool) var_2)))))))))));
                        arr_21 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_9 [i_1] [i_2] [i_5])), (((((/* implicit */_Bool) arr_18 [i_1] [i_0])) ? (((/* implicit */int) max((arr_2 [i_2] [i_1]), (((/* implicit */short) (_Bool)1))))) : (max((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_5] [i_1] [i_5]))))))));
                        var_16 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_5] [i_2] [i_1])), (arr_0 [i_0] [i_1 - 1]))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            {
                                arr_27 [i_2] [i_6] [i_0] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_0] [i_2])) ? (arr_5 [i_1 + 2] [i_1] [i_2]) : (arr_5 [i_1 - 1] [i_1] [i_2]))));
                                arr_28 [i_0] [i_1] [i_0] [i_6] [i_7] [i_7] = var_1;
                                var_17 = ((/* implicit */short) (_Bool)1);
                                arr_29 [i_0] [i_1 - 1] [i_1] [i_1 + 1] [i_1] [i_6] [i_7] |= ((/* implicit */int) arr_22 [i_1] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_30 [i_0] = ((/* implicit */signed char) (+(var_8)));
    }
    for (int i_8 = 0; i_8 < 22; i_8 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_9 = 0; i_9 < 22; i_9 += 3) 
        {
            arr_35 [i_8] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(1065099508)))) && ((_Bool)1)));
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned short)25), (((/* implicit */unsigned short) (_Bool)1)))))))) ? (max((((/* implicit */int) var_1)), (arr_31 [i_9]))) : (((((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_8] [i_9]))))) - (((-1) & (((/* implicit */int) (unsigned char)255))))))));
            arr_36 [i_8] = (!(((/* implicit */_Bool) arr_31 [i_8])));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((int) arr_34 [i_8] [i_8] [i_9])))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (arr_34 [i_8] [i_8] [i_8]) : (((/* implicit */unsigned long long int) var_0)))) >= (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))) : (max(((~(((/* implicit */int) arr_33 [i_8] [i_9] [i_9])))), (((((/* implicit */int) (unsigned char)250)) & (((/* implicit */int) (unsigned char)22))))))));
        }
        for (unsigned char i_10 = 1; i_10 < 21; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (int i_11 = 2; i_11 < 21; i_11 += 3) 
            {
                for (short i_12 = 3; i_12 < 20; i_12 += 3) 
                {
                    {
                        var_20 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_39 [i_12])) : (((/* implicit */int) (short)1984))))) ? (((/* implicit */int) ((unsigned char) arr_38 [i_10] [i_12]))) : ((-(((/* implicit */int) var_2)))))), ((+(((arr_31 [i_8]) / (((/* implicit */int) var_3))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) 
                        {
                            arr_47 [i_10] = ((/* implicit */unsigned long long int) arr_31 [i_13]);
                            var_21 = ((/* implicit */int) arr_37 [i_13]);
                        }
                        arr_48 [i_10] [i_10] [i_12] = ((/* implicit */unsigned char) (((((_Bool)0) || (((/* implicit */_Bool) 7657573216240764512ULL)))) || (((((/* implicit */_Bool) -1065099512)) && ((_Bool)1)))));
                    }
                } 
            } 
            arr_49 [i_8] [i_10] [i_10] = ((/* implicit */_Bool) var_5);
            var_22 = ((/* implicit */unsigned short) ((unsigned char) (unsigned char)5));
            arr_50 [i_10] [i_10 - 1] [i_10] = ((/* implicit */short) ((-1065099512) == (((/* implicit */int) (_Bool)1))));
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_11))))) / ((((_Bool)1) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (unsigned char)250))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_31 [i_8]) ^ (arr_31 [i_8])))) ? (((((/* implicit */_Bool) (unsigned short)12288)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (unsigned char)26)))) : (((/* implicit */int) ((signed char) arr_32 [i_8] [i_10])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_8] [i_8] [i_8] [i_10])))))) - (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_8] [i_8] [i_10]))) : (arr_43 [i_8] [i_10] [i_10] [i_8])))))));
        }
        arr_51 [i_8] = ((/* implicit */long long int) (-(((arr_32 [i_8] [i_8]) % (((/* implicit */int) max(((unsigned short)12288), (var_11))))))));
    }
    var_24 = ((/* implicit */unsigned long long int) var_1);
    /* LoopNest 2 */
    for (signed char i_14 = 0; i_14 < 24; i_14 += 3) 
    {
        for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_16 = 0; i_16 < 24; i_16 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_17 = 4; i_17 < 20; i_17 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_18 = 3; i_18 < 23; i_18 += 3) 
                        {
                            var_25 |= ((/* implicit */unsigned char) var_2);
                            arr_65 [i_14] [i_14] [i_16] [i_17] [i_18] = ((((/* implicit */_Bool) max((((signed char) var_2)), (((/* implicit */signed char) ((_Bool) (unsigned short)28438)))))) ? (arr_56 [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_61 [i_18 - 2] [i_18 - 3] [i_18] [i_18 + 1] [i_18 - 1])))));
                            arr_66 [i_14] [i_15] [i_14] [i_17] [i_18] = (((!((_Bool)1))) && (((/* implicit */_Bool) min((arr_61 [i_14] [i_18 - 2] [i_14] [i_17 + 3] [i_18]), (arr_61 [i_18 + 1] [i_18 - 1] [i_16] [i_17 - 3] [i_18])))));
                            arr_67 [i_14] [i_14] [i_15] [(unsigned short)20] [i_17] [i_18] [i_18] |= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)250)))) >= (((/* implicit */int) (unsigned char)29)))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                        {
                            arr_71 [i_14] [i_15] [i_16] [i_17] [i_19] [i_15] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-13396)), (arr_63 [i_16] [i_16] [i_17] [i_17] [i_19 - 1])))) && (((/* implicit */_Bool) (-(arr_56 [i_17 - 4]))))))) >= (min((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_53 [i_15] [i_19]))))), (((((/* implicit */int) (unsigned char)5)) - (((/* implicit */int) (unsigned char)6))))))));
                            arr_72 [i_14] [i_15] [i_14] [i_17] = ((/* implicit */_Bool) arr_64 [i_16] [i_14]);
                            arr_73 [i_14] [i_15] [i_14] [i_17] [i_19 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) <= (1065099505)));
                        }
                        var_26 += ((/* implicit */signed char) arr_70 [i_14] [i_15] [i_17 + 1] [i_17] [i_15] [i_16] [i_14]);
                    }
                    arr_74 [i_14] [i_14] [i_14] = ((/* implicit */_Bool) arr_57 [i_14]);
                    /* LoopSeq 1 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) arr_61 [i_14] [i_14] [i_15] [i_16] [i_20]))));
                        arr_77 [i_14] [i_15] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_75 [i_14]) | (arr_61 [i_20] [i_20] [i_16] [i_15] [i_14])))) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))) / (7657573216240764523ULL))))) : (((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_9)))) / (((((/* implicit */int) (unsigned char)6)) | (((/* implicit */int) (unsigned char)250)))))))));
                        arr_78 [i_14] [i_15] [i_14] [i_20] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) (short)-11299)) ? (arr_60 [i_20] [i_16]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_76 [i_14] [i_16] [i_20]))))))))));
                        var_28 = ((/* implicit */signed char) min((((min((((/* implicit */unsigned long long int) (unsigned short)65535)), (7657573216240764526ULL))) + (((/* implicit */unsigned long long int) (-(arr_75 [i_14])))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_57 [i_14])))))));
                    }
                    /* LoopSeq 1 */
                    for (short i_21 = 0; i_21 < 24; i_21 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_54 [i_15]), (arr_54 [i_16])))) - (min((((((/* implicit */int) arr_69 [i_14] [i_15] [i_16] [i_21] [i_14] [i_21])) * (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_64 [i_15] [i_21]))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_22 = 0; i_22 < 24; i_22 += 4) 
                        {
                            arr_85 [i_14] [i_21] [i_16] [i_15] [i_14] = ((/* implicit */long long int) arr_81 [i_16] [i_16] [i_16] [i_14] [i_16] [i_16] [i_16]);
                            arr_86 [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_56 [i_14])) || (((/* implicit */_Bool) arr_54 [i_14]))))) != (min((arr_61 [i_14] [i_14] [i_14] [i_14] [i_14]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_68 [i_14] [i_15] [i_16] [i_22])))))))));
                        }
                        for (unsigned short i_23 = 2; i_23 < 21; i_23 += 2) 
                        {
                            var_30 = ((/* implicit */signed char) ((unsigned short) arr_81 [i_14] [i_15] [i_16] [i_14] [i_21] [i_21] [i_23]));
                            arr_89 [i_14] [i_21] [i_16] [i_15] [i_15] [i_14] = var_9;
                            var_31 = ((/* implicit */_Bool) 2078154745);
                            arr_90 [i_16] [i_16] [i_16] [i_14] [i_16] [i_16] [i_16] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (-(arr_80 [i_14] [i_16])))), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7657573216240764523ULL)))));
                        }
                        for (int i_24 = 0; i_24 < 24; i_24 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned short) var_1);
                            arr_94 [i_14] [i_14] [i_24] = ((/* implicit */unsigned int) max((min((arr_58 [i_14] [i_15]), (((/* implicit */unsigned short) (unsigned char)30)))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)119)))))));
                            arr_95 [i_14] [i_15] [i_16] [i_21] [i_24] [i_14] = ((/* implicit */int) (-(arr_87 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])));
                            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_69 [i_14] [i_15] [i_15] [i_16] [i_21] [i_24])), (arr_87 [i_16] [i_15] [i_16] [i_14] [i_24] [i_24] [i_15]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_10)))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_56 [i_24])) || (((((/* implicit */_Bool) arr_83 [i_24] [i_21] [i_16] [i_16] [i_16] [i_15] [i_14])) || (((/* implicit */_Bool) arr_69 [i_14] [i_14] [i_16] [i_16] [i_24] [i_14])))))))));
                            arr_96 [i_14] [i_15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */short) arr_91 [i_14] [i_15] [i_16] [i_21] [i_24])), (arr_55 [i_14])))))))));
                        }
                        for (int i_25 = 1; i_25 < 23; i_25 += 2) 
                        {
                            var_34 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)226)), (10789170857468787096ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_92 [i_14] [i_14] [i_14] [i_14] [i_14]))) : (arr_52 [i_14])));
                            arr_101 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */long long int) (-(min((arr_79 [i_14] [i_14] [i_14] [i_14]), (arr_79 [i_14] [i_15] [i_21] [i_25 - 1])))));
                            arr_102 [i_14] [i_15] [i_16] [i_14] [i_25] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)22)) - (((/* implicit */int) (signed char)-105))));
                        }
                        arr_103 [i_14] [i_14] [i_16] [i_16] [i_21] = ((/* implicit */_Bool) arr_75 [i_15]);
                    }
                }
                arr_104 [i_14] = ((/* implicit */signed char) min(((unsigned char)64), ((unsigned char)250)));
                arr_105 [i_14] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_88 [i_14] [i_14] [i_15] [i_15])) <= ((-(arr_87 [i_14] [i_15] [i_15] [i_14] [i_15] [i_15] [i_14])))));
            }
        } 
    } 
    var_35 = ((/* implicit */unsigned char) ((short) max((((/* implicit */short) (!(((/* implicit */_Bool) -1051052903))))), (var_3))));
}
