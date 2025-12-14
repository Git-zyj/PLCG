/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143656
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)51681)) ? (2147483647) : (((/* implicit */int) (short)-24415))))) ? ((((+(((/* implicit */int) arr_0 [i_0] [(signed char)9])))) | (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_0 [i_0] [i_0])) + (9074))))))) : (((/* implicit */int) ((_Bool) (short)20712)))));
        arr_2 [i_0] [0ULL] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20714)) ? (((/* implicit */int) (unsigned short)3135)) : (((/* implicit */int) arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */short) (-(((((/* implicit */int) (unsigned char)157)) / (((/* implicit */int) (short)24414))))));
                    var_12 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)35757)) | (((/* implicit */int) (signed char)-1))))) ? (((/* implicit */int) arr_6 [i_0])) : (((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_4 [i_0] [i_0]))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [(signed char)9] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)35764)) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (short)14845))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 3; i_4 < 10; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)157)) ? (2856660891U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))), (arr_15 [i_2] [i_4 + 1] [5] [i_4] [i_4] [i_4]))) < (((((/* implicit */_Bool) 72057594037927935ULL)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (18374686479671623681ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (signed char)-1)))))))));
                            arr_16 [(short)7] [i_1] [i_4] [i_3] [2ULL] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_8 [i_0] [i_4 - 2] [i_2] [i_3])) - (arr_13 [i_4 + 1] [i_4 - 2] [i_4 - 1]))), (((/* implicit */int) (unsigned char)0))));
                            arr_17 [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)64151)) * (((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */int) min(((unsigned short)496), (((/* implicit */unsigned short) (unsigned char)113))))) : (((((/* implicit */_Bool) (short)14845)) ? (((/* implicit */int) (short)32752)) : (((/* implicit */int) (unsigned char)168))))))));
                        }
                        for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            var_14 = ((/* implicit */unsigned long long int) arr_18 [i_3]);
                            var_15 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((short)-24415), (((/* implicit */short) arr_8 [i_0] [(unsigned short)0] [i_0] [i_0])))))))), (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29779))) : (1099377410048ULL))), (arr_15 [i_0] [i_1] [i_2] [i_1] [i_3] [i_5])))));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((((/* implicit */_Bool) -3614693368770202851LL)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (arr_4 [i_0] [i_0])))) : (((((/* implicit */_Bool) 2966461215U)) ? (((/* implicit */int) (unsigned short)3172)) : (((/* implicit */int) (unsigned char)113))))))));
                            var_16 = ((/* implicit */unsigned char) ((((unsigned int) (_Bool)0)) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)24415)) == (((/* implicit */int) (signed char)-1))))))));
                            var_17 ^= ((((/* implicit */_Bool) ((2367204990U) << (((-1381911238) + (1381911266)))))) ? (((/* implicit */int) max((max(((unsigned short)50133), (((/* implicit */unsigned short) (signed char)127)))), (((/* implicit */unsigned short) (_Bool)0))))) : ((+((+(315698868))))));
                        }
                        arr_23 [10U] [i_2] [(_Bool)1] [i_1] [i_0] = ((/* implicit */_Bool) arr_13 [8LL] [i_1] [i_2]);
                        arr_24 [5] = ((/* implicit */short) ((min((var_8), (arr_21 [i_0] [(unsigned short)7] [i_2] [i_3]))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_3] [(unsigned char)4] [(short)8]))))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [(unsigned short)4] [i_1] [(unsigned short)4] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) (signed char)-125))))))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [(unsigned short)1])) ? (((/* implicit */int) (unsigned short)1528)) : (((/* implicit */int) arr_0 [i_0] [i_1]))))) || (((var_8) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6] [i_2])))))));
                            arr_32 [i_0] [i_1] [(_Bool)1] [(signed char)3] [i_7] |= ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_1])) : (((/* implicit */int) arr_10 [(unsigned char)0] [i_1] [i_2] [i_6]))))), (3914272587710151976LL)));
                            var_19 = ((/* implicit */unsigned int) var_5);
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (short)24415)))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)11690)) || (((/* implicit */_Bool) (signed char)125)))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)152))))))) : (((/* implicit */int) ((arr_25 [i_0]) && (((/* implicit */_Bool) min((var_9), ((unsigned short)0)))))))));
                            arr_33 [(signed char)4] [i_1] [i_2] [i_6] [i_7] = ((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_2] [i_6] [(short)6] [i_2]);
                        }
                        for (int i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            arr_36 [(unsigned short)5] [i_0] [7U] [i_6] [8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (min((68719476735ULL), (((/* implicit */unsigned long long int) 2939164851U)))) : (((/* implicit */unsigned long long int) min(((+(-165461930497855923LL))), (((/* implicit */long long int) (_Bool)0)))))));
                            var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */int) (short)-16232)) | (((/* implicit */int) (_Bool)0))))));
                        }
                        arr_37 [i_0] [i_1] [i_2] [i_2] [i_6] = ((/* implicit */long long int) ((unsigned char) min((((((/* implicit */int) arr_0 [i_1] [i_1])) + (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min(((unsigned short)50133), (((/* implicit */unsigned short) (short)25671))))))));
                        var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1)))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_10 = 1; i_10 < 7; i_10 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)52741)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (arr_40 [i_10] [(unsigned short)6] [1LL] [i_10 + 1] [i_10] [i_10 + 3] [i_10 + 1]))))) : (var_8))))));
                            var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)0))));
                            var_25 = ((/* implicit */short) ((18446744073709551615ULL) == (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                            var_26 = ((/* implicit */unsigned short) min(((short)255), ((short)-20713)));
                        }
                        /* LoopSeq 3 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_44 [i_1] [i_9] [i_11] = ((/* implicit */unsigned char) ((((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_20 [i_11] [10] [i_2] [i_1] [i_0])))) != ((+(((((/* implicit */int) (signed char)125)) + (((/* implicit */int) var_2))))))));
                            arr_45 [i_11] = ((/* implicit */short) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (short)-30602))))) ? (((/* implicit */int) arr_43 [i_11] [i_11] [i_9] [i_9] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_40 [(short)6] [i_1] [i_1] [0] [i_9] [i_9] [(short)3]))))));
                        }
                        for (signed char i_12 = 0; i_12 < 11; i_12 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) arr_38 [(unsigned char)5] [(_Bool)1] [i_0])))) ^ (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) ((1231901332092768154LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((((/* implicit */_Bool) (unsigned short)62341)) ? (1231901332092768161LL) : (-8699957583043264239LL))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)31056))))))))));
                            arr_48 [i_12] [i_1] [i_2] [i_9] [(unsigned short)1] = ((/* implicit */unsigned long long int) (short)32767);
                            arr_49 [i_12] [i_9] [i_9] [i_12] [i_2] [i_1] [i_0] = ((/* implicit */signed char) max((((((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_9] [i_12])) % (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_9] [i_12])))), (((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_9] [i_12])) < (((/* implicit */int) (unsigned short)47964)))))));
                        }
                        for (short i_13 = 1; i_13 < 10; i_13 += 4) 
                        {
                            arr_54 [i_0] [(unsigned short)4] [i_9] = ((/* implicit */unsigned int) min(((+(1099377410048ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-23786)) < (-1259075908))))));
                            var_28 = ((/* implicit */unsigned int) var_5);
                            var_29 ^= ((/* implicit */short) (~(((/* implicit */int) min((((/* implicit */unsigned short) (short)32767)), (min(((unsigned short)18113), (((/* implicit */unsigned short) var_2)))))))));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (1589508774U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_53 [i_1] [i_13 - 1] [i_13] [4LL] [i_13 + 1])))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned short) arr_7 [i_13 - 1] [i_2] [i_1] [i_0])))));
                            var_31 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_2] [i_1] [i_9] [i_13 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)254)))) + (((/* implicit */int) (_Bool)0))));
                        }
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_14 = 2; i_14 < 10; i_14 += 4) 
        {
            for (signed char i_15 = 0; i_15 < 11; i_15 += 1) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        arr_61 [i_0] [i_14 + 1] [i_15] [i_14] [i_15] [i_16] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) 5023114657558767237ULL)) ? (((/* implicit */int) arr_25 [i_16])) : (((/* implicit */int) arr_5 [i_0] [i_14] [6ULL]))))))), (((1231901332092768151LL) & (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)30243)) | (var_1))))))));
                        arr_62 [i_15] [(unsigned char)9] [i_15] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (0ULL)));
                        var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_20 [(unsigned short)5] [10U] [i_14 + 1] [i_14 + 1] [i_14 + 1])), ((((_Bool)0) ? (66195012785394729ULL) : (((/* implicit */unsigned long long int) 1231901332092768151LL)))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_17 = 2; i_17 < 9; i_17 += 1) /* same iter space */
    {
        arr_65 [i_17] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)51703)) ? (((/* implicit */int) arr_64 [i_17 - 2])) : (((/* implicit */int) var_0)))) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_64 [i_17 + 1]))) != (-3914272587710151977LL))))));
        arr_66 [i_17] [i_17] = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)-6)) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_63 [i_17 + 2]))))))) ? (((((/* implicit */_Bool) ((3914272587710151983LL) - (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_17])))))) ? (((/* implicit */int) arr_63 [i_17 + 4])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_9))));
    }
    for (unsigned short i_18 = 2; i_18 < 9; i_18 += 1) /* same iter space */
    {
        var_33 = ((/* implicit */_Bool) min(((short)12308), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (max((((/* implicit */unsigned long long int) var_7)), (arr_67 [i_18 + 3] [1]))))))));
        arr_69 [6] = ((/* implicit */int) max((((((((/* implicit */_Bool) var_2)) ? (-2759631586482458624LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) + (((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) + (2147483647)))))), (((/* implicit */long long int) ((max((2705458521U), (((/* implicit */unsigned int) (signed char)48)))) + (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-85))))))))));
        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) (signed char)19)) <= (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || ((_Bool)1))))))), (((((/* implicit */_Bool) 1589508774U)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) arr_68 [(short)6])) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))))));
        var_35 = ((/* implicit */_Bool) ((max((((/* implicit */long long int) (-(((/* implicit */int) arr_63 [i_18 + 2]))))), (((((/* implicit */_Bool) var_2)) ? (3914272587710151976LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
    }
    /* LoopNest 3 */
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        for (int i_20 = 0; i_20 < 14; i_20 += 1) 
        {
            for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
            {
                {
                    var_36 = ((/* implicit */unsigned short) var_2);
                    arr_78 [i_19] [i_20] [i_19] [i_21] = ((/* implicit */unsigned char) ((max(((~(arr_70 [i_19]))), (((/* implicit */long long int) ((((/* implicit */int) var_2)) > (((/* implicit */int) (signed char)-6))))))) < (((/* implicit */long long int) (-2147483647 - 1)))));
                    /* LoopNest 2 */
                    for (unsigned short i_22 = 0; i_22 < 14; i_22 += 1) 
                    {
                        for (unsigned short i_23 = 0; i_23 < 14; i_23 += 2) 
                        {
                            {
                                var_37 = ((/* implicit */signed char) ((((/* implicit */int) var_9)) + (((/* implicit */int) ((((/* implicit */int) arr_81 [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21])) > (((((/* implicit */_Bool) 1589508778U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)249)))))))));
                                var_38 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((0ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [i_19])))))) ? (min((((/* implicit */long long int) (signed char)-6)), (arr_70 [i_23]))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (min((((/* implicit */int) (unsigned char)7)), (((((/* implicit */int) var_4)) + (((/* implicit */int) var_6)))))) : (((/* implicit */int) (_Bool)1))));
                                var_39 = ((/* implicit */signed char) var_1);
                                var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((long long int) (~(((((/* implicit */int) arr_74 [3LL] [(unsigned short)7])) << (((/* implicit */int) var_6))))))))));
                                var_41 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))), (((var_8) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24749))))))) % (((/* implicit */unsigned long long int) min((3914272587710151976LL), (-5787430451223825221LL))))));
                            }
                        } 
                    } 
                    arr_84 [i_19] [i_20] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_2)) : (1636951632)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (18446744073709551615ULL))))) : (((((/* implicit */_Bool) arr_73 [i_19] [3] [i_21 - 1])) ? (7464124251688666427ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_82 [(unsigned short)2] [i_21 - 1] [i_20] [i_20] [i_19])))))));
                }
            } 
        } 
    } 
}
