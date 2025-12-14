/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138448
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
    var_20 ^= ((/* implicit */short) min((((/* implicit */int) var_11)), (min(((-(((/* implicit */int) var_12)))), (max((((/* implicit */int) var_4)), (var_9)))))));
    var_21 = ((/* implicit */long long int) ((max((min((var_7), (((/* implicit */long long int) var_5)))), (-1LL))) >= ((~((-(var_1)))))));
    var_22 = ((/* implicit */unsigned int) var_18);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_23 ^= ((/* implicit */short) (-(arr_3 [i_0] [(signed char)20])));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */_Bool) -4201668986110309719LL)) || (var_10))))));
                    arr_8 [i_0] = var_12;
                    arr_9 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((_Bool) arr_0 [i_2]));
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)27456)) ? (arr_7 [i_0 + 3] [i_0] [i_0 + 1] [i_0 - 1]) : (arr_7 [i_2] [i_2] [i_1] [8])));
                }
            } 
        } 
    }
    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (short i_5 = 3; i_5 < 9; i_5 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    var_26 = ((/* implicit */_Bool) (unsigned short)24610);
                    arr_20 [i_6] [i_6] [i_4] = ((/* implicit */unsigned char) (((_Bool)0) ? (-1134137387) : (1097811418)));
                    var_27 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_5 - 3])) ? (((/* implicit */unsigned long long int) arr_18 [i_3] [i_5 - 3] [i_5] [i_5 - 2])) : (18446744073709551615ULL)));
                    var_28 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4095))));
                }
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    var_29 = 4264460829453940553LL;
                    var_30 = ((/* implicit */short) min((var_30), ((short)-27544)));
                }
                for (signed char i_8 = 2; i_8 < 9; i_8 += 3) 
                {
                    var_31 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)122)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 1276987733930016353LL))))));
                    var_32 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_5 - 1] [i_4] [i_5] [i_5])) ? (((/* implicit */long long int) (~(((/* implicit */int) var_15))))) : (arr_4 [(signed char)10])));
                }
                arr_25 [i_3] [i_4] [(signed char)2] = ((/* implicit */signed char) var_18);
            }
            /* vectorizable */
            for (short i_9 = 3; i_9 < 9; i_9 += 1) /* same iter space */
            {
                var_33 ^= ((((/* implicit */_Bool) 3087696158U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)40919)));
                var_34 ^= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)24610)) ? (-1097811408) : (((/* implicit */int) var_3)))));
                arr_30 [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)40893))));
            }
            for (short i_10 = 3; i_10 < 9; i_10 += 1) /* same iter space */
            {
                var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_31 [(unsigned char)8] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24643)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_18)) | (((/* implicit */int) (signed char)3))))) : (arr_31 [i_3] [i_3]))))));
                arr_33 [i_4] = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_4] [i_4])) ? (185064053) : (((/* implicit */int) arr_23 [i_4] [6LL] [i_10] [i_4] [i_10 - 3]))))), (min((var_19), (((/* implicit */long long int) arr_17 [i_10] [i_10] [i_10] [i_3])))))), (min((((long long int) var_15)), (((/* implicit */long long int) min((((/* implicit */int) arr_29 [i_4] [0] [i_10])), (1097811429))))))));
            }
            for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_10 [i_3] [i_3])) : (((/* implicit */int) arr_6 [i_3] [i_3] [i_3] [i_3])))), (((((/* implicit */_Bool) arr_27 [i_4] [i_4] [(unsigned short)7] [i_11])) ? (((/* implicit */int) (short)-25139)) : (((/* implicit */int) (_Bool)1))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) var_2))))))))));
                arr_36 [i_4] [i_4] = ((/* implicit */short) (+(3228138354248047286LL)));
                var_37 = ((/* implicit */unsigned short) min((min((((((/* implicit */_Bool) (short)25073)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)3))) : (-4148549957549863866LL))), (((/* implicit */long long int) (unsigned short)15310)))), (arr_1 [i_11])));
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (unsigned short i_13 = 0; i_13 < 10; i_13 += 3) 
                    {
                        {
                            arr_43 [i_3] [i_3] [3LL] [i_4] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_13] [(signed char)5] [3LL] [i_3])) ? (max((var_14), (((/* implicit */int) min((var_8), (((/* implicit */unsigned char) var_3))))))) : (((/* implicit */int) (!((_Bool)1))))));
                            arr_44 [i_3] [i_4] [i_11] [i_4] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)44))))) ? (min((((/* implicit */unsigned int) arr_11 [i_13] [(signed char)1])), (4294967295U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-17443))))))) >> (((((int) arr_12 [i_3] [i_3])) - (496902992)))));
                            var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) (unsigned short)65535))));
                            arr_45 [i_13] [i_4] [i_11] [i_4] [i_4] [(short)9] = ((/* implicit */unsigned short) var_0);
                        }
                    } 
                } 
            }
            arr_46 [i_3] |= ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) (unsigned char)192)) >> (((((/* implicit */int) (unsigned short)27647)) - (27629))))));
        }
        for (long long int i_14 = 0; i_14 < 10; i_14 += 3) /* same iter space */
        {
            arr_50 [i_3] [0LL] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_12 [i_3] [i_14]))) ? (min((arr_12 [i_3] [i_14]), (((/* implicit */unsigned int) (short)-5109)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_12 [i_14] [i_3]))))));
            var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) arr_42 [i_14]))));
        }
        for (long long int i_15 = 0; i_15 < 10; i_15 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_16 = 0; i_16 < 10; i_16 += 4) /* same iter space */
            {
                var_40 ^= ((/* implicit */short) (((~(arr_48 [i_3] [i_3]))) * (((/* implicit */unsigned int) ((/* implicit */int) (short)8028)))));
                /* LoopSeq 2 */
                for (int i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    arr_58 [i_17] [i_17] [(signed char)7] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_3] [i_3] [i_3] [i_17] [i_3])) ^ (15)));
                    var_41 = arr_34 [(signed char)4] [i_15];
                    arr_59 [(_Bool)1] [(_Bool)1] [(_Bool)1] [4U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)165))))) : (((/* implicit */int) (unsigned char)250))));
                }
                for (signed char i_18 = 0; i_18 < 10; i_18 += 1) 
                {
                    arr_63 [i_3] [(signed char)6] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (+(var_7)));
                    var_42 = ((/* implicit */short) ((arr_24 [i_18] [i_16] [i_16] [4U] [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) (short)-20694))) : (arr_4 [i_15])));
                    var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) ((arr_62 [(unsigned char)2] [i_15] [i_16] [i_18]) - (((/* implicit */int) (signed char)63)))))));
                }
                var_44 = ((/* implicit */int) var_15);
            }
            for (unsigned short i_19 = 0; i_19 < 10; i_19 += 4) /* same iter space */
            {
                var_45 = ((/* implicit */int) max((var_45), (((/* implicit */int) (unsigned char)110))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_20 = 0; i_20 < 10; i_20 += 4) 
                {
                    arr_71 [i_3] [i_3] [i_19] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_3] [i_15])) && (var_10)));
                    var_46 |= ((/* implicit */unsigned int) var_13);
                    arr_72 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (unsigned char)255);
                }
                for (unsigned long long int i_21 = 2; i_21 < 7; i_21 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_22 = 0; i_22 < 10; i_22 += 4) 
                    {
                        arr_77 [i_3] [(unsigned char)0] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) min((max(((unsigned short)65533), ((unsigned short)16713))), (((/* implicit */unsigned short) var_16))))) & (2037162034)));
                        var_47 -= ((/* implicit */short) ((((arr_24 [i_3] [i_3] [i_3] [i_3] [8]) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15471)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58129))) : (arr_75 [i_3] [i_3])))))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -646031871)) ? (var_14) : (((/* implicit */int) (signed char)-46)))))))));
                        var_48 ^= ((/* implicit */unsigned long long int) arr_41 [i_3] [i_3] [(unsigned short)1]);
                        arr_78 [(signed char)8] [(signed char)8] [i_19] [3] [i_19] = ((/* implicit */short) (!(((/* implicit */_Bool) var_16))));
                    }
                    var_49 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_14), (((/* implicit */int) var_12))))) ? (((long long int) var_5)) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) ^ (((/* implicit */int) var_12)))))));
                    var_50 = ((/* implicit */signed char) var_0);
                }
                /* vectorizable */
                for (unsigned long long int i_23 = 2; i_23 < 7; i_23 += 1) /* same iter space */
                {
                    var_51 = ((/* implicit */int) (~(1195993556U)));
                    var_52 = ((/* implicit */unsigned char) ((arr_48 [i_3] [i_19]) == (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)3)) | (((/* implicit */int) var_5)))))));
                    /* LoopSeq 2 */
                    for (long long int i_24 = 2; i_24 < 9; i_24 += 3) 
                    {
                        var_53 = ((/* implicit */short) min((var_53), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9296819382599283095ULL)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)49)))))))));
                        var_54 = ((/* implicit */signed char) var_14);
                        arr_84 [i_3] [i_24] [(signed char)2] [i_15] [i_19] [i_23] [9U] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) arr_69 [i_15] [i_19] [i_23])) : (((/* implicit */int) arr_69 [i_3] [i_19] [i_3]))));
                        var_55 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_15] [i_19] [i_23 + 2] [i_24 - 2] [i_24 + 1])) | (((/* implicit */int) (unsigned short)15))));
                        var_56 -= ((/* implicit */short) (signed char)92);
                    }
                    for (unsigned char i_25 = 0; i_25 < 10; i_25 += 4) 
                    {
                        var_57 = ((/* implicit */unsigned short) min((var_57), (((/* implicit */unsigned short) ((((/* implicit */int) var_4)) & (((/* implicit */int) ((((/* implicit */_Bool) 15608518325060222161ULL)) || (((/* implicit */_Bool) (unsigned char)242))))))))));
                        var_58 *= ((/* implicit */unsigned char) arr_11 [(unsigned char)7] [2]);
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_26 = 2; i_26 < 7; i_26 += 1) /* same iter space */
                {
                    var_59 = ((/* implicit */unsigned short) min((var_59), (((/* implicit */unsigned short) ((((/* implicit */int) (short)8028)) != (((/* implicit */int) (unsigned char)254)))))));
                    var_60 = ((/* implicit */short) max((var_60), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_89 [i_19] [i_19] [i_3] [i_26])) * (((/* implicit */int) var_15))))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) (unsigned short)32720)))))))));
                    var_61 = ((/* implicit */long long int) max((var_61), (((/* implicit */long long int) ((arr_81 [i_26] [i_26 - 1] [i_26 - 1] [i_26 - 1] [(unsigned short)2]) ? (((/* implicit */int) arr_81 [i_26] [i_26 - 1] [i_26 - 1] [i_26] [i_26 - 1])) : (((/* implicit */int) arr_81 [i_15] [i_26 - 1] [i_26 - 1] [i_26 + 3] [i_26 + 3])))))));
                }
                var_62 = ((/* implicit */short) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_16)), (var_17)))) : (((/* implicit */int) var_5))))));
            }
            arr_91 [i_3] [i_15] = ((/* implicit */unsigned char) min(((+(((/* implicit */int) (_Bool)0)))), ((~(((/* implicit */int) var_15))))));
            var_63 ^= ((/* implicit */long long int) (((~(9149924691110268521ULL))) > (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)34440)))))));
        }
        arr_92 [i_3] = ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) arr_69 [i_3] [i_3] [i_3]))) * (((long long int) (unsigned short)9495)))), (((/* implicit */long long int) var_14))));
    }
}
