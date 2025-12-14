/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170802
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
    var_13 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) != (((/* implicit */int) max((var_12), (var_11))))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) * (119747365978247657ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        arr_3 [(short)10] = ((/* implicit */unsigned long long int) min((min(((~(((/* implicit */int) (unsigned char)67)))), (((((/* implicit */_Bool) 104315993U)) ? (arr_0 [i_0]) : (((/* implicit */int) var_9)))))), (min((((/* implicit */int) (!((_Bool)1)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_2 [i_0 + 2] [i_0])) : (((/* implicit */int) var_3))))));
        arr_5 [i_0] [0LL] = ((/* implicit */unsigned short) (+((((-(((/* implicit */int) (_Bool)1)))) * (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [(short)2]) : (((/* implicit */int) arr_1 [i_0]))))))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) min(((+(((/* implicit */int) var_8)))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)193))))))) : (min((((long long int) arr_6 [i_1])), (((/* implicit */long long int) arr_6 [i_1]))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [i_1]))))) ? (((((/* implicit */int) arr_2 [i_1] [i_1])) & (((/* implicit */int) ((((/* implicit */int) var_0)) < (((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_6 [i_1])), (var_2)))) ? (((((/* implicit */int) var_4)) | (((/* implicit */int) var_9)))) : ((+(arr_0 [i_1])))))));
        /* LoopSeq 3 */
        for (short i_2 = 1; i_2 < 8; i_2 += 2) 
        {
            var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_7))) ? (arr_0 [i_2 - 1]) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)205))))))) ? (arr_8 [i_1] [i_2]) : (((/* implicit */int) ((((/* implicit */int) var_6)) != ((~(4095)))))));
            /* LoopSeq 4 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_17 = ((/* implicit */unsigned char) var_5);
                var_18 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 994815100U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3300152204U))))) : (((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)242)))))));
            }
            for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                var_19 = ((((((((/* implicit */_Bool) arr_0 [1U])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9)))) == ((+(((/* implicit */int) arr_12 [i_1] [i_2 - 1] [i_4])))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (((+(((/* implicit */int) (unsigned short)11870)))) < (((/* implicit */int) arr_12 [i_1] [i_2] [i_1]))))));
                var_20 |= min((((/* implicit */unsigned int) (~(arr_8 [i_2 + 2] [i_4])))), ((+(arr_10 [i_2 + 3] [i_2 + 3] [i_2]))));
                var_21 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (1144345879) : (((/* implicit */int) (signed char)83)))))), (((((/* implicit */_Bool) ((var_10) ? (((/* implicit */long long int) arr_8 [i_4] [i_1])) : (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (min((((/* implicit */unsigned long long int) var_2)), (65535ULL)))))));
                var_22 = ((/* implicit */short) arr_10 [i_1] [i_4] [i_4]);
            }
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned int) (((((~(((((/* implicit */_Bool) (short)-14158)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)67)))))) + (2147483647))) << ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                    /* LoopSeq 1 */
                    for (short i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        arr_21 [i_1] [i_1] [i_1] [i_1] [i_6] [i_1] [i_7] = ((/* implicit */unsigned char) (((~(arr_19 [i_1] [i_5]))) - (((/* implicit */long long int) ((/* implicit */int) (short)16786)))));
                        arr_22 [i_1] [i_2 + 3] [(_Bool)1] [i_5] [i_1] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (unsigned char)201)) : (var_1)));
                        var_24 = ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */unsigned short) arr_16 [i_1] [i_1])), ((unsigned short)11870)))), (min((((/* implicit */long long int) arr_10 [i_1] [i_5] [1ULL])), (var_7))))));
                        var_25 += ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))) < (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_12 [(_Bool)1] [i_2] [i_5])) : (((/* implicit */int) var_12)))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) arr_16 [i_2 + 1] [i_2 + 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1] [i_2 + 2] [i_5]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (var_10))))))));
                    }
                    var_26 = ((/* implicit */unsigned char) var_6);
                }
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
                {
                    arr_27 [i_1] [i_2 - 1] [i_5] = ((/* implicit */_Bool) var_4);
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_2] [i_2] [i_2 + 2] [i_2] [i_1]))));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_5] [i_1] [i_9] [i_1]))))) : (((/* implicit */int) var_4))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (arr_19 [i_1] [i_2 + 3]) : (((/* implicit */long long int) -583924675))));
                    }
                    var_30 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_2 + 2] [i_2 - 1] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_10 [i_2 + 2] [i_2 + 2] [i_2 + 2])));
                    var_31 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)161))) : (18446744073709551593ULL)));
                    var_32 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_2] [i_5] [8LL] [0] [0ULL])) ? (var_5) : (((/* implicit */unsigned long long int) (~(arr_9 [i_1]))))));
                }
                for (unsigned short i_10 = 0; i_10 < 11; i_10 += 3) /* same iter space */
                {
                    var_33 = (((!(((((/* implicit */_Bool) 493363899057340911LL)) || ((_Bool)1))))) ? ((~(((((/* implicit */_Bool) -337213103)) ? (var_1) : (((/* implicit */int) (unsigned char)6)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 0U)) : (arr_20 [i_1] [i_1] [(unsigned char)7] [7] [i_10] [i_10]))) > (((/* implicit */unsigned long long int) ((arr_6 [i_1]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2)))))))));
                    var_34 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */short) arr_28 [i_2] [i_2] [i_5] [(short)2] [i_2]))))) ? (max((((/* implicit */unsigned long long int) arr_28 [i_2] [i_5] [i_5] [i_1] [i_1])), (5078793757454501763ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (arr_28 [i_2] [i_10] [i_5] [i_2] [i_2])))))));
                }
                var_35 &= ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_5])) ? (1283508032) : (((/* implicit */int) arr_26 [i_1] [i_2] [i_5]))))) ? (4282210614U) : (min((arr_31 [i_5] [i_5] [10ULL] [i_5] [i_1]), (((/* implicit */unsigned int) var_12))))))));
                var_36 = max(((~(((((/* implicit */_Bool) arr_11 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_5))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_5))) ? (((((/* implicit */_Bool) var_7)) ? (arr_8 [i_1] [i_2 + 1]) : (((/* implicit */int) var_6)))) : (((/* implicit */int) min(((unsigned short)8), (((/* implicit */unsigned short) var_9)))))))));
                /* LoopSeq 3 */
                for (int i_11 = 0; i_11 < 11; i_11 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_12 = 0; i_12 < 11; i_12 += 4) 
                    {
                        arr_40 [i_1] [i_2] [i_5] [i_11] [i_1] = ((/* implicit */unsigned long long int) var_12);
                        arr_41 [i_1] [i_1] [i_1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) (unsigned short)18850);
                    }
                    /* vectorizable */
                    for (unsigned char i_13 = 1; i_13 < 10; i_13 += 2) 
                    {
                        var_37 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_2 + 2])) && (((/* implicit */_Bool) (unsigned short)14790))));
                        arr_44 [i_1] [(signed char)6] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_18 [i_2 + 3] [i_2] [i_1] [i_2 + 3] [i_13] [i_13])) >> (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1])) != (((/* implicit */int) arr_11 [i_13] [i_2])))))));
                        var_38 = ((/* implicit */unsigned short) ((unsigned long long int) (+(arr_34 [i_11] [7]))));
                        var_39 = ((/* implicit */unsigned short) var_1);
                        arr_45 [i_1] = ((/* implicit */signed char) ((465378651) == (((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 11; i_14 += 3) 
                    {
                        var_40 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_32 [i_1] [i_2] [i_11] [i_14])) : (((/* implicit */int) arr_32 [i_1] [i_1] [i_1] [i_11]))))));
                        var_41 *= ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_33 [i_14] [i_14] [i_11] [i_5] [i_2 + 2] [i_1])) : (((/* implicit */int) arr_26 [(_Bool)1] [i_5] [i_5]))))))));
                        var_42 = ((/* implicit */unsigned int) min((((/* implicit */long long int) 469401503)), ((-(134217727LL)))));
                    }
                    var_43 = ((/* implicit */unsigned short) var_9);
                }
                /* vectorizable */
                for (int i_15 = 0; i_15 < 11; i_15 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (signed char i_16 = 2; i_16 < 8; i_16 += 3) 
                    {
                        var_44 = ((/* implicit */unsigned short) ((_Bool) arr_25 [i_1]));
                        var_45 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) var_1)))));
                        var_46 = ((/* implicit */int) arr_15 [i_16 + 3] [i_15] [i_2 + 1] [i_2 + 3]);
                    }
                    for (unsigned short i_17 = 0; i_17 < 11; i_17 += 1) 
                    {
                        arr_58 [i_1] [4] [i_5] [i_1] [i_15] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_15 [i_1] [i_2] [i_5] [i_15]);
                        var_47 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)255))));
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_48 = ((/* implicit */_Bool) 2912337911025729936LL);
                        var_49 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2 + 1]))) | ((~(arr_15 [i_1] [i_2] [(_Bool)1] [(signed char)1])))));
                        var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1]))));
                    }
                    var_51 = ((/* implicit */signed char) (-(((/* implicit */int) var_0))));
                    var_52 += ((/* implicit */_Bool) (~(((arr_43 [i_1] [i_2] [i_2] [i_1] [i_1] [i_5] [i_5]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                    var_53 = ((/* implicit */short) var_11);
                    var_54 ^= ((/* implicit */unsigned char) arr_51 [(signed char)2] [i_2]);
                }
                for (int i_19 = 0; i_19 < 11; i_19 += 4) /* same iter space */
                {
                    arr_66 [i_1] [i_5] [3U] [i_1] = ((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_54 [i_1] [i_2] [i_5])))), (((((/* implicit */int) arr_54 [i_1] [i_5] [i_5])) / (var_1)))));
                    var_55 -= ((/* implicit */_Bool) var_5);
                }
            }
            for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 2) 
            {
                var_56 = ((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : ((((-(arr_42 [i_1] [(short)1] [i_1] [i_20] [i_20] [i_20]))) - (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))))));
                arr_70 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((int) (~(((/* implicit */int) var_3)))));
                var_57 = min((((/* implicit */int) max((arr_60 [i_2] [i_2 + 3] [i_2 + 3] [i_2] [i_2 - 1] [i_2]), (arr_60 [i_2] [i_2 + 3] [i_2 - 1] [i_2] [i_2] [i_2])))), (((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)85)))));
            }
        }
        for (signed char i_21 = 0; i_21 < 11; i_21 += 4) /* same iter space */
        {
            var_58 = var_10;
            var_59 = ((/* implicit */unsigned short) arr_0 [i_1]);
            var_60 *= ((/* implicit */unsigned long long int) arr_53 [i_21] [i_21] [i_21] [i_1] [i_21] [i_1]);
            var_61 *= ((/* implicit */signed char) (+((-((-(((/* implicit */int) arr_46 [i_1] [4] [4] [i_1] [i_21] [(unsigned char)1]))))))));
        }
        for (signed char i_22 = 0; i_22 < 11; i_22 += 4) /* same iter space */
        {
            arr_75 [i_1] = ((/* implicit */unsigned long long int) max((((arr_6 [i_1]) ? (arr_65 [i_1] [i_22] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) arr_33 [i_1] [(unsigned char)6] [i_1] [(unsigned char)5] [i_1] [i_22]))));
            var_62 = ((/* implicit */unsigned int) (+(var_1)));
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_23 = 1; i_23 < 9; i_23 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (signed char i_24 = 0; i_24 < 11; i_24 += 1) 
                {
                    var_63 = ((/* implicit */unsigned int) ((arr_49 [i_24] [i_1] [i_23 + 2] [i_1] [i_1]) % (arr_49 [i_1] [i_22] [i_22] [i_1] [i_24])));
                    arr_81 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) arr_26 [i_1] [i_23 - 1] [i_1])))));
                }
                for (signed char i_25 = 1; i_25 < 10; i_25 += 2) 
                {
                    var_64 *= ((/* implicit */unsigned long long int) (-(arr_0 [i_25])));
                    var_65 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_15 [i_23 + 2] [i_25 - 1] [i_25 + 1] [i_25 - 1]))));
                }
                var_66 = ((/* implicit */short) (-(2348937001U)));
            }
            /* vectorizable */
            for (int i_26 = 1; i_26 < 9; i_26 += 1) /* same iter space */
            {
                arr_87 [i_1] [i_26 + 2] [i_22] |= ((/* implicit */unsigned char) var_3);
                var_67 = ((/* implicit */unsigned int) (unsigned short)62519);
            }
            for (int i_27 = 1; i_27 < 9; i_27 += 1) /* same iter space */
            {
                arr_91 [i_1] [i_1] [i_27] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3300152226U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))) : (23ULL)));
                arr_92 [i_22] [i_22] [i_22] &= ((/* implicit */_Bool) max((min((min((((/* implicit */unsigned long long int) var_1)), (arr_14 [i_22] [(short)8] [i_22]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) - (-3700470505685157978LL)))))), (((((/* implicit */_Bool) (short)-8824)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32))) : (arr_64 [i_22] [i_22])))));
            }
            var_68 = ((/* implicit */unsigned char) (_Bool)1);
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_28 = 0; i_28 < 11; i_28 += 2) 
        {
            var_69 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 5926396658199851118ULL))) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) (_Bool)0))));
            arr_95 [i_1] [i_28] [i_1] = ((/* implicit */signed char) var_7);
            var_70 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [i_28] [i_28] [i_1])) ? (((/* implicit */int) arr_61 [i_28] [i_1] [i_1])) : (((/* implicit */int) (short)-12409))))))) ? (((int) (~(((/* implicit */int) var_11))))) : (((/* implicit */int) ((min((((/* implicit */long long int) (unsigned char)57)), (var_7))) == ((~(arr_63 [i_1] [i_1] [i_1] [i_28]))))))));
            var_71 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((3700470505685157977LL) >> (((((/* implicit */int) (unsigned char)85)) - (58))))) << (((((/* implicit */_Bool) 3635151592U)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_13 [i_28]) : (((/* implicit */int) arr_72 [i_1] [i_1]))))) ? (min((3635151592U), (((/* implicit */unsigned int) var_1)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_28] [i_1]))) : (arr_31 [i_1] [i_28] [i_1] [i_1] [i_28]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) min((var_12), (((/* implicit */unsigned char) var_3))))))))));
            arr_96 [i_1] = (-(min((arr_35 [i_1] [i_1] [i_1] [i_28] [i_28] [i_28]), (((/* implicit */int) var_4)))));
        }
    }
}
