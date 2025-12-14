/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168826
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
    var_17 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-5)))))) : (var_3)))));
    var_18 = ((/* implicit */int) (signed char)-77);
    var_19 = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) (~(var_13)))), (var_5))), (((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */unsigned long long int) (_Bool)0)), (var_5)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_4 [i_0] = ((/* implicit */long long int) ((unsigned long long int) var_6));
            var_21 = arr_2 [i_1];
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned int) ((/* implicit */int) (short)30198))) * (((((/* implicit */_Bool) -1616449266)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (3706771666U)))))));
            arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) > (((arr_0 [i_0] [i_0]) % (arr_2 [i_0])))));
        }
        for (unsigned char i_2 = 3; i_2 < 15; i_2 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) (+(min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
            var_23 = ((/* implicit */unsigned int) arr_7 [i_2 - 2] [i_2 - 3]);
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_3 = 3; i_3 < 16; i_3 += 1) 
            {
                var_24 = ((/* implicit */signed char) (-(((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 1]))));
                /* LoopSeq 2 */
                for (short i_4 = 2; i_4 < 15; i_4 += 1) 
                {
                    arr_15 [i_0] [i_0] [i_3 - 1] [i_4 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_2)))) ? (((((/* implicit */_Bool) arr_7 [i_3] [i_0])) ? (((/* implicit */int) (short)-16384)) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-36)))))));
                    /* LoopSeq 2 */
                    for (int i_5 = 2; i_5 < 13; i_5 += 3) 
                    {
                        arr_19 [i_0] = ((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((/* implicit */int) arr_16 [i_2 - 3] [i_3 - 3])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_3] [i_3 - 2] [i_5 - 2])));
                        var_25 = ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */int) ((var_13) < (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) : ((~(((/* implicit */int) arr_18 [i_2 + 1] [i_2] [i_3 - 2] [i_3 - 2] [i_3] [i_0])))));
                        var_26 = ((/* implicit */signed char) (unsigned char)97);
                    }
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_4] [i_6]))))))))));
                        arr_24 [i_0] [i_0] [i_2] [i_3 + 1] [i_3] [i_0] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-73)) > (((/* implicit */int) arr_16 [i_0] [i_0]))));
                        arr_25 [i_0] [i_0] [i_3] [i_4] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (arr_21 [i_0] [i_0] [i_3 - 2] [i_4 + 2] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2675)))));
                    }
                    arr_26 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 0U))));
                }
                for (unsigned int i_7 = 1; i_7 < 16; i_7 += 2) 
                {
                    var_28 = ((/* implicit */signed char) ((arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */int) arr_11 [i_2 - 1] [i_2] [i_2 + 2] [i_3 + 1] [i_7 - 1]))));
                    var_29 = ((/* implicit */unsigned short) var_16);
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_20 [i_7 - 1] [i_0] [i_0] [i_3] [i_0] [i_0] [i_0]))) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11468)))));
                }
                var_31 = ((/* implicit */unsigned short) ((unsigned char) arr_0 [i_0] [i_0]));
                var_32 += ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)61833))));
            }
            for (unsigned int i_8 = 1; i_8 < 16; i_8 += 1) 
            {
                arr_31 [10U] &= ((/* implicit */int) ((((/* implicit */_Bool) ((short) ((int) (unsigned char)0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_7 [i_2 - 1] [i_2 - 1])))) : ((~(((arr_2 [i_0]) << (((((/* implicit */int) var_8)) - (171)))))))));
                var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_9 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 + 2])) ? (((/* implicit */int) arr_9 [i_2 - 2] [i_2] [i_2 - 1] [i_2 - 2])) : (((/* implicit */int) arr_8 [6LL]))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_9 = 0; i_9 < 17; i_9 += 1) 
                {
                    var_34 = arr_14 [i_0] [i_2] [i_8] [i_9];
                    /* LoopSeq 2 */
                    for (short i_10 = 3; i_10 < 16; i_10 += 3) 
                    {
                        arr_38 [i_0] = ((/* implicit */signed char) ((arr_22 [i_2 + 1] [i_2] [i_2 - 3] [i_0] [i_8 - 1]) < (arr_22 [i_2 + 1] [i_2] [i_2 - 3] [i_0] [i_8 - 1])));
                        var_35 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_8 + 1])) ? (arr_10 [i_8 - 1]) : (arr_10 [i_8 - 1])));
                        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_2 - 1] [i_10 - 3])) ? (((/* implicit */int) arr_23 [i_2 - 1] [i_8 + 1] [i_8] [i_10 + 1] [i_10] [i_10 - 1] [i_10])) : (((/* implicit */int) arr_16 [i_2 + 1] [i_10 + 1]))));
                    }
                    for (unsigned int i_11 = 1; i_11 < 14; i_11 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_20 [2ULL] [(signed char)6] [i_2] [i_2 + 1] [i_8] [i_9] [i_11 + 1])))))));
                        var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_8] [14LL] [i_8 - 1] [i_9] [i_8])) ? (arr_21 [i_0] [8ULL] [i_8 + 1] [i_11 + 1] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_2 - 1] [i_9] [i_11]))))))));
                        arr_41 [i_0] [i_11 + 2] [i_11 + 2] [i_0] [i_11] = ((/* implicit */long long int) (-(((/* implicit */int) ((arr_0 [i_2] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [i_11]))))))));
                    }
                }
                arr_42 [i_0] [i_2 - 2] [i_0] [i_8 - 1] = ((/* implicit */unsigned int) var_15);
            }
            for (signed char i_12 = 0; i_12 < 17; i_12 += 3) 
            {
                var_39 ^= (signed char)-35;
                /* LoopSeq 3 */
                for (unsigned char i_13 = 0; i_13 < 17; i_13 += 3) 
                {
                    var_40 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_10)))) ? ((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_35 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_16 [i_0] [i_0])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2656)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (signed char)29))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_0] [i_0]))))) : (((/* implicit */int) max(((signed char)-97), (((/* implicit */signed char) (_Bool)1)))))))));
                    var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) ((unsigned int) (+(-2732900447954586205LL)))))));
                    var_42 += ((/* implicit */unsigned int) -1616449278);
                }
                for (signed char i_14 = 2; i_14 < 16; i_14 += 3) 
                {
                    arr_54 [0U] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(4288969861014485997LL)))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0])))))));
                    arr_55 [(short)0] [i_2] [i_12] [i_12] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_2] [i_2] [(short)0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_3)))) ? (min((((/* implicit */unsigned int) (signed char)-124)), (var_13))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-97)) * (((/* implicit */int) var_12)))))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)23844))))) : (((var_7) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_48 [i_0] [i_0] [(unsigned short)6] [0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) -381235415)) ? (11197575502491668722ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-124)))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 2; i_15 < 15; i_15 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_14] [i_14] [i_14] [i_14 - 1] [i_14] [i_12] [i_12]))))) ? (((int) arr_47 [i_15 + 2] [i_15 - 1] [i_15 + 1] [i_15 - 1])) : (((/* implicit */int) ((short) (unsigned char)183))))))));
                        var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) arr_39 [i_14 + 1] [(unsigned char)6] [i_14 - 2] [(unsigned char)4] [i_14 - 2])) < (((/* implicit */int) arr_39 [i_14] [i_14] [i_14 - 1] [(unsigned char)0] [i_14]))))), ((+(((/* implicit */int) arr_39 [2ULL] [i_12] [i_14 - 1] [(unsigned char)8] [i_14 - 1])))))))));
                    }
                }
                for (unsigned short i_16 = 1; i_16 < 14; i_16 += 1) 
                {
                    arr_60 [(short)1] [(short)1] [i_16] [i_0] [i_16] = ((/* implicit */unsigned char) 2147483646);
                    var_45 = ((/* implicit */signed char) (short)16384);
                    var_46 = ((/* implicit */signed char) 7249168571217882893ULL);
                }
                /* LoopSeq 1 */
                for (unsigned char i_17 = 0; i_17 < 17; i_17 += 3) 
                {
                    var_47 = (unsigned char)164;
                    var_48 &= var_8;
                    /* LoopSeq 1 */
                    for (short i_18 = 0; i_18 < 17; i_18 += 3) 
                    {
                        var_49 *= ((/* implicit */unsigned short) (((~((-(972151824401090333ULL))))) << ((((+(((/* implicit */int) (unsigned short)31806)))) - (31774)))));
                        arr_66 [i_0] [i_0] [i_0] [i_17] [i_17] [i_18] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_3 [i_2 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)24766))))));
                    }
                }
                /* LoopNest 2 */
                for (short i_19 = 0; i_19 < 17; i_19 += 3) 
                {
                    for (short i_20 = 3; i_20 < 14; i_20 += 3) 
                    {
                        {
                            arr_71 [i_0] [i_0] [i_2] [i_0] [i_12] [i_0] [i_20 + 2] = ((/* implicit */unsigned long long int) (short)9957);
                            var_50 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_53 [i_0] [(short)7] [i_12] [i_20 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) min((((/* implicit */int) (unsigned char)82)), (arr_45 [i_0] [i_2] [i_12] [i_19]))))))));
                            var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0])) ? (2732900447954586205LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)43))))) / (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_40 [i_0] [i_0] [i_0] [i_0] [i_0])), (arr_33 [i_0] [i_0]))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_2] [i_2] [i_0]))) != (var_13)))) : (((/* implicit */int) ((unsigned char) (-(var_14)))))));
                            var_52 &= ((/* implicit */signed char) (+(((/* implicit */int) arr_64 [i_0] [14]))));
                            var_53 &= ((/* implicit */short) (-(((unsigned int) -2732900447954586217LL))));
                        }
                    } 
                } 
                var_54 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2251799809490944LL)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)218)))))) : (((((/* implicit */_Bool) -629132075)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_5))))));
            }
        }
        for (unsigned char i_21 = 0; i_21 < 17; i_21 += 1) 
        {
            var_55 *= ((/* implicit */short) arr_49 [i_0] [i_0] [(unsigned short)16]);
            /* LoopSeq 1 */
            for (signed char i_22 = 0; i_22 < 17; i_22 += 1) 
            {
                var_56 &= ((/* implicit */unsigned long long int) (_Bool)1);
                var_57 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) (unsigned char)191)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_33 [i_22] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)11159)))))) ? (((((/* implicit */_Bool) arr_76 [i_0] [i_21] [i_0])) ? (((/* implicit */int) (unsigned short)62299)) : (((/* implicit */int) arr_65 [i_22] [i_0] [(unsigned char)10] [i_21] [i_21] [i_0] [i_0])))) : (max((((/* implicit */int) arr_14 [i_0] [i_0] [7ULL] [i_22])), (arr_45 [i_0] [i_0] [i_22] [i_0]))))))));
                arr_77 [i_0] [i_21] [i_0] [i_21] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)23))));
                var_58 = ((/* implicit */unsigned char) (~((+((~(((/* implicit */int) (unsigned char)255))))))));
            }
            var_59 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)5310)) || (((/* implicit */_Bool) (+(((/* implicit */int) var_12)))))));
            arr_78 [i_0] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (short)-17152)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)59808)) | (((/* implicit */int) (short)-3704))))) : (arr_47 [i_0] [i_0] [i_0] [9U]))));
        }
        var_60 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) (signed char)-97))));
        var_61 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) ((short) (signed char)91)))) ? (((/* implicit */long long int) arr_22 [i_0] [i_0] [i_0] [(unsigned short)6] [i_0])) : (max((((/* implicit */long long int) arr_48 [i_0] [i_0] [i_0] [(unsigned char)16] [(unsigned char)16] [i_0])), ((((_Bool)1) ? (arr_47 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) 1698884965))))))));
        var_62 = ((/* implicit */short) max((var_62), (((/* implicit */short) ((int) ((223436658803024381LL) <= (((/* implicit */long long int) arr_2 [i_0]))))))));
    }
    for (unsigned char i_23 = 0; i_23 < 12; i_23 += 1) 
    {
        arr_81 [i_23] [i_23] = ((/* implicit */unsigned int) arr_37 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]);
        arr_82 [(signed char)4] &= ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) arr_50 [i_23])))));
    }
    var_63 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)9946)) ? (-2604087) : (((/* implicit */int) (short)0))));
}
