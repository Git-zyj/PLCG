/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149587
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
    var_19 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) min((((9340829245340405804ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120))))), (((/* implicit */unsigned long long int) ((signed char) var_2))))))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) min((min((1023LL), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) var_3)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) 4294967295U);
        arr_7 [i_1] = ((/* implicit */short) var_17);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_3 [(unsigned char)5]))));
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1571809515)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)7))))) ? (var_8) : (18446744073709551615ULL)));
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2811145375U)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
            arr_12 [i_1] [i_2] [i_2] = ((/* implicit */short) (unsigned short)19351);
        }
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_4))));
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                arr_18 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_4)) : (min((((/* implicit */int) (short)-6490)), (214431486)))));
                var_26 = ((/* implicit */long long int) ((short) (-(((/* implicit */int) (short)-3909)))));
                var_27 = ((/* implicit */short) (unsigned char)246);
                arr_19 [i_1] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((514681659), (((/* implicit */int) (short)5419))))) ? (var_14) : (((/* implicit */int) (unsigned char)14))))), (((((/* implicit */_Bool) min(((unsigned short)65511), (((/* implicit */unsigned short) arr_10 [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_17 [1U] [i_3] [1U])), ((unsigned char)62))))) : (min((var_8), (((/* implicit */unsigned long long int) -4563398159980036783LL))))))));
                var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) ^ (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)43329)) : (((/* implicit */int) (unsigned char)71)))), (((/* implicit */int) (unsigned short)37164)))))))));
            }
            for (unsigned short i_5 = 3; i_5 < 9; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (short i_6 = 3; i_6 < 8; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((unsigned long long int) (signed char)-91)))));
                            var_30 = 9223372036854775794LL;
                            arr_28 [i_3] [i_1] [i_5] [i_1] [i_3] = ((/* implicit */int) var_2);
                            arr_29 [i_1] [(short)6] [i_5] [i_3] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (max((5317387689637157283LL), (((/* implicit */long long int) (signed char)-12))))))) ? (((((/* implicit */_Bool) max((var_2), (var_16)))) ? (((((/* implicit */int) (_Bool)1)) * (arr_21 [(short)1] [i_3] [9] [i_3]))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)19963))) <= (arr_24 [(short)1] [i_3] [i_1] [i_6] [i_7] [i_3])))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)138)), (var_15)))))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */_Bool) min((var_31), ((!(((/* implicit */_Bool) ((signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_22 [(unsigned short)0] [(unsigned short)0])))))))));
            }
            var_32 = ((/* implicit */unsigned long long int) min((var_32), ((-(((((/* implicit */_Bool) (short)63)) ? (min((((/* implicit */unsigned long long int) 2181850966713240759LL)), (var_17))) : (((unsigned long long int) (signed char)-61))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_8 = 1; i_8 < 9; i_8 += 4) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_9 = 1; i_9 < 9; i_9 += 2) 
                {
                    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) 7896973382737793095LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_32 [i_9 + 1] [i_9 - 1] [i_3] [i_3] [i_9 + 1] [i_8 - 1])));
                    var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) (unsigned short)8374))));
                    arr_35 [1LL] [i_1] [3ULL] [i_3] [i_8 + 1] [i_3] = var_1;
                    var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) var_0))));
                }
                for (unsigned char i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)48))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 2207445497030001724LL)) : (18446744073709551608ULL))))))));
                    /* LoopSeq 3 */
                    for (short i_11 = 0; i_11 < 10; i_11 += 1) 
                    {
                        arr_42 [i_8] [i_3] [i_3] [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
                        var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_30 [i_10])) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        arr_45 [i_1] [i_3] [i_8] [i_3] [i_12] [i_10] [i_3] = ((/* implicit */signed char) var_18);
                        arr_46 [i_1] [6ULL] [i_8 - 1] [i_10] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (var_15) : (((/* implicit */long long int) var_14))));
                        var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) -2207445497030001724LL))));
                        arr_47 [i_3] [i_1] [i_3] [i_1] [8ULL] = ((/* implicit */long long int) (~(((/* implicit */int) var_11))));
                    }
                    for (short i_13 = 1; i_13 < 9; i_13 += 4) 
                    {
                        arr_52 [i_3] = ((/* implicit */unsigned char) 7405746589250104997ULL);
                        arr_53 [i_1] [i_1] [0ULL] [i_3] = ((/* implicit */unsigned int) -1571809515);
                    }
                }
                for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) arr_40 [(signed char)4] [8LL] [i_14] [i_14] [i_14] [i_14]))));
                    arr_56 [i_1] [i_3] [i_3] [(unsigned char)6] [(unsigned char)6] = ((/* implicit */unsigned short) var_13);
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 0; i_15 < 10; i_15 += 3) 
                    {
                        arr_61 [i_1] [i_3] [i_1] [i_3] [(unsigned char)6] [i_14] [i_1] = ((/* implicit */unsigned int) var_1);
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)238))))) ? (var_0) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)3)) ? (((/* implicit */int) arr_44 [i_1] [i_15] [i_1] [i_14] [i_15] [i_1])) : (((/* implicit */int) (signed char)-37)))))));
                        var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) ((arr_11 [i_3] [i_3] [i_3]) << (((var_9) - (268018654U))))))));
                        arr_62 [i_1] [(signed char)5] [i_8 + 1] [i_3] [i_3] = ((/* implicit */int) 6557736192512610716LL);
                    }
                    var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((unsigned int) -1LL))) != (35184372088831ULL))))));
                    var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_8 - 1] [i_14])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))) : (((((/* implicit */long long int) ((/* implicit */int) var_7))) & (6557736192512610710LL))))))));
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) -1))));
                    var_45 = ((/* implicit */short) max((var_45), (((/* implicit */short) (+(((/* implicit */int) var_10)))))));
                    var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) var_1))));
                    var_47 = ((/* implicit */unsigned long long int) max((var_47), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_8 + 1])) ? (((/* implicit */int) (short)-5570)) : (1621364593))))));
                }
                var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) (unsigned short)7218))));
                /* LoopSeq 4 */
                for (long long int i_17 = 0; i_17 < 10; i_17 += 3) 
                {
                    var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) (unsigned char)255))));
                    /* LoopSeq 1 */
                    for (int i_18 = 0; i_18 < 10; i_18 += 2) 
                    {
                        arr_69 [i_3] = 4027239336607325813LL;
                        arr_70 [i_1] [7ULL] [i_1] [i_3] [i_18] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-1)) | (67108864)));
                        var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) (~(var_9))))));
                    }
                    var_51 = ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_3])) && (((/* implicit */_Bool) var_9))));
                }
                for (long long int i_19 = 0; i_19 < 10; i_19 += 2) 
                {
                    var_52 = ((/* implicit */long long int) (((!((_Bool)1))) ? (((((/* implicit */_Bool) (short)30084)) ? (((/* implicit */int) (short)-27411)) : (((/* implicit */int) (unsigned char)239)))) : (((/* implicit */int) ((unsigned char) var_9)))));
                    var_53 = ((/* implicit */short) max((var_53), (((/* implicit */short) var_0))));
                    arr_73 [i_3] [i_19] [i_19] [i_3] = ((/* implicit */unsigned long long int) var_11);
                    var_54 = ((/* implicit */unsigned short) min((var_54), (((/* implicit */unsigned short) 15205597883650271107ULL))));
                }
                for (long long int i_20 = 0; i_20 < 10; i_20 += 3) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_21 = 0; i_21 < 10; i_21 += 1) 
                    {
                        arr_78 [i_1] [i_3] [(unsigned char)4] [i_20] [i_3] [i_8 - 1] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-6154))));
                        var_55 = ((/* implicit */_Bool) min((var_55), (((/* implicit */_Bool) (+(((/* implicit */int) arr_36 [i_21] [(_Bool)1] [i_8 - 1] [i_3] [i_1] [i_1])))))));
                    }
                    for (short i_22 = 0; i_22 < 10; i_22 += 2) /* same iter space */
                    {
                        arr_81 [i_1] [i_3] [i_3] [i_20] [i_3] = ((/* implicit */long long int) (-((~(((/* implicit */int) (short)16376))))));
                        arr_82 [i_3] [i_3] [i_8] [i_20] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-32212)) ? (582780578665306814LL) : (((/* implicit */long long int) var_18)))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)8267)))))));
                        var_56 = ((/* implicit */int) min((var_56), (((((/* implicit */_Bool) arr_4 [i_22] [i_20])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) < (856547807818423907ULL))))))));
                    }
                    for (short i_23 = 0; i_23 < 10; i_23 += 2) /* same iter space */
                    {
                        var_57 = ((/* implicit */unsigned char) min((var_57), (((/* implicit */unsigned char) ((short) (!(var_5)))))));
                        var_58 = ((/* implicit */short) min((var_58), (((/* implicit */short) ((((/* implicit */_Bool) 1456470461890915421LL)) ? (3241146190059280491ULL) : (3683395227968629762ULL))))));
                        var_59 = ((/* implicit */unsigned char) max((var_59), (((/* implicit */unsigned char) (short)25593))));
                        var_60 = ((/* implicit */int) min((var_60), (((/* implicit */int) (unsigned short)32860))));
                    }
                    for (unsigned long long int i_24 = 0; i_24 < 10; i_24 += 2) 
                    {
                        var_61 = ((/* implicit */short) var_2);
                        var_62 = ((/* implicit */unsigned short) min((var_62), (((/* implicit */unsigned short) -2207445497030001725LL))));
                        var_63 = ((/* implicit */short) max((var_63), (((/* implicit */short) var_1))));
                        var_64 = ((/* implicit */unsigned int) min((var_64), (((/* implicit */unsigned int) ((unsigned long long int) 2147483647)))));
                        arr_88 [i_3] [(unsigned short)1] [i_8 - 1] [i_8] [(unsigned short)1] = ((/* implicit */unsigned long long int) arr_83 [i_3] [i_20] [i_8] [i_3]);
                    }
                    var_65 = ((/* implicit */short) arr_1 [i_1] [i_1]);
                }
                for (unsigned char i_25 = 0; i_25 < 10; i_25 += 2) 
                {
                    arr_91 [i_3] [i_8] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (short)-1)))) << (((-8457598065493972560LL) + (8457598065493972583LL)))));
                    arr_92 [i_3] [i_8] [i_3] = ((/* implicit */unsigned long long int) ((short) (unsigned char)7));
                }
                arr_93 [i_1] [i_3] [i_3] = ((/* implicit */int) ((long long int) (_Bool)1));
            }
            var_66 = ((/* implicit */unsigned int) min((var_66), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1898))) : (7009091896737542628ULL))), (((/* implicit */unsigned long long int) (unsigned char)13)))))));
        }
    }
}
