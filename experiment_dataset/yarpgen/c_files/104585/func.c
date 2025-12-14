/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104585
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 *= ((/* implicit */short) (~(((/* implicit */int) (short)3388))));
                                arr_12 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) (short)7690)) > (((/* implicit */int) ((((((/* implicit */_Bool) 1916342183)) ? (arr_10 [i_0] [i_1] [i_1] [i_3] [i_3] [14] [i_4]) : (((/* implicit */int) arr_8 [(unsigned char)4] [i_3] [i_2] [i_3])))) != (((/* implicit */int) (short)-32750)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        arr_15 [0] [4ULL] [i_2 + 4] [i_1] [(_Bool)1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)112)) : (-2147483632))))));
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (short)8257))));
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7677)) ? (1017322721) : (((/* implicit */int) var_5))))) ? (arr_0 [i_2 + 2] [i_2 + 2]) : (((/* implicit */int) (short)913))));
                    }
                    for (int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        var_21 = (-2147483647 - 1);
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (-(max((((((/* implicit */_Bool) (short)32759)) ? (((/* implicit */unsigned long long int) arr_10 [i_1] [6] [i_6] [i_2 + 4] [i_1] [i_1] [i_0])) : (arr_16 [i_0] [i_0] [i_2] [i_6]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))))))))));
                    }
                    for (int i_7 = 2; i_7 < 13; i_7 += 4) 
                    {
                        arr_21 [i_0] [i_1] [(_Bool)1] [i_2] [i_7 - 2] [i_7] = (short)15733;
                        var_23 = ((/* implicit */unsigned char) (short)-25746);
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 13; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6528)) ? (-552633235) : (min((546133579), (arr_13 [i_0] [i_0] [i_0] [i_0])))))) ? (min((((/* implicit */unsigned long long int) max((arr_5 [i_0] [i_8] [i_9] [i_9]), (arr_19 [i_0] [i_0] [i_8 + 1] [i_8 + 1] [i_9] [i_9])))), (((((/* implicit */_Bool) arr_9 [i_9] [i_9] [(_Bool)1] [i_0])) ? (arr_11 [5] [i_0] [5] [5] [i_9]) : (((/* implicit */unsigned long long int) arr_14 [i_8 - 1])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */int) arr_6 [i_0] [i_0] [i_8] [i_9])), (1610612736))) <= ((+(arr_13 [i_0] [(short)8] [i_9] [i_9])))))))));
                    var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)37956))));
                    var_26 = ((/* implicit */short) min(((-(((((/* implicit */_Bool) 20ULL)) ? (((/* implicit */int) (short)-8258)) : (((/* implicit */int) (short)-8239)))))), (min((min((arr_24 [i_8]), (2147483647))), (((/* implicit */int) arr_6 [i_8 - 1] [i_9] [i_9] [(short)1]))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                for (unsigned short i_12 = 3; i_12 < 14; i_12 += 3) 
                {
                    for (short i_13 = 0; i_13 < 15; i_13 += 1) 
                    {
                        {
                            arr_39 [i_12] [10] [10] [(short)14] |= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)10585))));
                            arr_40 [i_10] [i_10] [i_11 - 1] [(short)14] [i_10] [i_11] [(short)14] = ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) (short)-14554)))));
                            var_27 ^= ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)0)));
                            var_28 = ((((((/* implicit */_Bool) arr_17 [i_10] [i_11] [i_11 - 1] [i_11 - 1] [i_12 - 2])) && (((/* implicit */_Bool) arr_20 [i_11 - 1] [i_12 + 1] [i_12 - 3] [i_12 - 3])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)62187)) ? (-1141854377) : (((/* implicit */int) (unsigned char)93))))) ? (arr_37 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_12 - 3] [i_12 - 3] [i_12 - 2]) : (((/* implicit */int) ((short) (unsigned short)7))))) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)149)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_14 = 0; i_14 < 15; i_14 += 1) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_16 = 0; i_16 < 15; i_16 += 1) 
                        {
                            arr_50 [i_16] [i_15] [i_10] [i_10] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(arr_29 [i_10]))))));
                            arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] [i_15] |= ((/* implicit */short) min((min((((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32760))) : (3764769605782771225ULL))), (((/* implicit */unsigned long long int) 1273230193)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1618123073)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [(unsigned short)12])) && (((/* implicit */_Bool) (short)-16686))))))))));
                            var_29 *= ((/* implicit */unsigned char) (+(arr_47 [i_15] [(_Bool)1] [(_Bool)1] [i_0])));
                        }
                        for (unsigned short i_17 = 0; i_17 < 15; i_17 += 4) 
                        {
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) (short)-16686)) : (((/* implicit */int) (short)-1))));
                            arr_54 [i_17] [i_10] [i_10] [i_10] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned long long int) arr_49 [1] [i_0] [i_14] [i_0] [i_0])), (14681974467926780403ULL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_17])) - (arr_24 [i_17])))) : (max((min((((/* implicit */unsigned long long int) (unsigned char)233)), (9148819198464864666ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)2161)))))))));
                            var_31 = ((/* implicit */int) min((arr_4 [6] [i_15] [i_14]), (((/* implicit */unsigned short) ((short) arr_45 [i_10])))));
                            var_32 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), (min((((/* implicit */int) (_Bool)1)), (2147483647)))))) ? (max(((+(arr_7 [i_15] [i_14]))), (min((((/* implicit */int) (unsigned short)65535)), (0))))) : (((int) min((((/* implicit */unsigned long long int) (unsigned short)58557)), (3764769605782771195ULL))))));
                            var_33 = ((/* implicit */unsigned short) arr_22 [i_15] [i_15]);
                        }
                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 15; i_18 += 4) 
                        {
                            arr_58 [i_0] [i_10] [(unsigned short)12] [i_14] [i_15] [i_10] [i_15] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [(_Bool)1] [i_10] [8] [i_0])))))));
                            var_34 = ((/* implicit */unsigned long long int) arr_42 [6] [i_18]);
                            arr_59 [i_18] [i_10] [i_0] [i_10] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) arr_10 [(_Bool)1] [(_Bool)1] [i_10] [i_10] [i_10] [i_15] [(_Bool)1]));
                        }
                        var_35 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_14] [i_14]))) - (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) (unsigned short)3447)) ? (((/* implicit */unsigned long long int) -1916342183)) : (arr_16 [i_0] [i_0] [i_14] [i_15]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 4 */
                        for (int i_19 = 0; i_19 < 15; i_19 += 4) 
                        {
                            var_36 += ((/* implicit */short) min((max((((/* implicit */int) max((((/* implicit */short) (unsigned char)162)), ((short)-1154)))), (min((767408240), (((/* implicit */int) (unsigned char)15)))))), (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1))))));
                            var_37 = (+((+(((/* implicit */int) ((short) arr_11 [i_0] [i_10] [i_10] [i_0] [13]))))));
                            var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_7 [i_0] [i_10])) ? (arr_7 [i_15] [i_15]) : (((/* implicit */int) (short)4874)))), (((/* implicit */int) min((((/* implicit */short) (unsigned char)126)), ((short)15490)))))))));
                        }
                        for (int i_20 = 1; i_20 < 13; i_20 += 4) 
                        {
                            var_39 = ((/* implicit */int) ((((/* implicit */int) arr_8 [i_0] [i_10] [i_15] [i_20])) > (((/* implicit */int) ((unsigned char) ((short) (unsigned char)31))))));
                            var_40 &= ((/* implicit */short) max((max((((((/* implicit */_Bool) (unsigned char)16)) ? (-2) : (((/* implicit */int) (unsigned short)25740)))), (((((/* implicit */int) arr_25 [i_14] [i_20] [i_14])) % (((/* implicit */int) (short)-24)))))), (max((((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_42 [(unsigned short)6] [i_15])))), (arr_48 [i_15] [0] [i_14] [i_14] [i_14] [2] [i_15])))));
                            var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-(var_16)))) ? (arr_56 [i_20 + 1] [i_14]) : (max((-51020597), (arr_48 [i_0] [12] [i_14] [12] [12] [i_0] [i_15]))))))))));
                        }
                        for (unsigned short i_21 = 0; i_21 < 15; i_21 += 4) /* same iter space */
                        {
                            var_42 = ((/* implicit */unsigned short) min(((~((~(((/* implicit */int) (unsigned short)65529)))))), (((/* implicit */int) (unsigned char)72))));
                            var_43 = (((((+(2147483647))) == ((+(arr_28 [i_15] [i_14] [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_62 [i_21] [i_15] [i_0] [i_10] [i_0])) : (arr_48 [i_10] [i_15] [i_15] [i_14] [i_0] [i_0] [i_10])))) ? (((/* implicit */int) ((9554632138360631068ULL) < (((/* implicit */unsigned long long int) arr_3 [i_10]))))) : ((~(((/* implicit */int) (short)-23789)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) (unsigned short)14))))) ? (((((/* implicit */_Bool) (unsigned short)65533)) ? (-1) : (arr_47 [i_10] [i_14] [i_15] [i_21]))) : (min((var_9), (-1738265343))))));
                            arr_68 [i_10] [i_10] [i_10] [i_0] = ((/* implicit */unsigned long long int) (short)17498);
                        }
                        for (unsigned short i_22 = 0; i_22 < 15; i_22 += 4) /* same iter space */
                        {
                            var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_49 [i_0] [i_0] [i_14] [i_15] [i_22])), (arr_33 [i_10] [i_22] [i_22])))))))))));
                            var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) arr_67 [i_22] [i_15] [i_22] [i_14] [i_22] [i_10]))));
                        }
                        var_46 = ((/* implicit */int) max((var_46), (min(((~(((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_45 [i_10])))))), (((min((((/* implicit */int) (short)1023)), (1973280450))) % (((((/* implicit */_Bool) arr_44 [0] [(short)3] [(short)0])) ? (2031616) : (arr_13 [i_0] [i_10] [i_14] [i_15])))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned long long int i_23 = 0; i_23 < 15; i_23 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_24 = 0; i_24 < 15; i_24 += 4) 
                {
                    var_47 += (!(((_Bool) ((unsigned long long int) arr_14 [i_0]))));
                    arr_76 [i_10] [(_Bool)1] [i_10] [i_24] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_17 [i_0] [i_10] [i_23] [i_24] [i_0])) ? (((/* implicit */unsigned long long int) min((arr_55 [(short)8] [(unsigned char)11] [(unsigned char)11] [i_23] [i_24]), (((/* implicit */int) (short)10240))))) : (((((/* implicit */_Bool) (short)-1023)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13888))) : (arr_16 [i_0] [i_10] [i_23] [i_24]))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)0)), (1482021722))))));
                }
                arr_77 [6] |= ((/* implicit */int) ((short) (+(((/* implicit */int) ((unsigned short) arr_46 [(short)6]))))));
            }
            var_48 *= ((/* implicit */short) (!(((/* implicit */_Bool) ((int) (-2147483647 - 1))))));
        }
    }
    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
    {
        var_49 += ((/* implicit */short) arr_64 [(short)2] [i_25] [i_25] [i_25] [(unsigned char)2] [i_25] [i_25]);
        var_50 = (+(max((((/* implicit */int) arr_35 [(short)13] [i_25] [i_25] [i_25])), (min((((/* implicit */int) (unsigned short)22998)), (-162392349))))));
        var_51 |= ((/* implicit */unsigned short) (+(arr_64 [i_25] [i_25] [i_25] [i_25] [6] [(unsigned char)10] [i_25])));
    }
    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
    {
        var_52 += (+(((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)249))))), ((unsigned char)64)))));
        arr_84 [i_26] = ((/* implicit */_Bool) -984266161);
        arr_85 [(short)2] [(short)2] |= (+((-2147483647 - 1)));
    }
    var_53 = var_12;
}
