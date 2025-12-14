/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167754
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_18 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (-585603059)));
        var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            var_20 = ((((/* implicit */_Bool) arr_4 [i_1 + 3])) ? (((/* implicit */unsigned long long int) arr_4 [i_0])) : (var_17));
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_0 [8LL] [8LL])) : (((/* implicit */int) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))) : (((((/* implicit */long long int) -585603048)) / (var_9)))));
            var_22 *= ((/* implicit */signed char) arr_4 [2LL]);
            var_23 = (-(((/* implicit */int) arr_0 [i_1 - 1] [i_1 + 2])));
        }
        for (signed char i_2 = 2; i_2 < 21; i_2 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                /* LoopSeq 4 */
                for (long long int i_4 = 1; i_4 < 23; i_4 += 1) 
                {
                    var_24 &= ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_5 [i_3]))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
                    {
                        var_25 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) -5898310579842312414LL))));
                        var_26 = ((/* implicit */unsigned short) ((unsigned int) ((long long int) var_15)));
                        arr_16 [i_0] [i_2] [(_Bool)1] [i_2] [i_2] [i_0] = arr_9 [i_2] [i_4 + 1] [i_5];
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */int) arr_10 [i_2 + 3] [i_3] [(signed char)20] [i_3])) - (((/* implicit */int) (_Bool)1)))))));
                        var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) var_1))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
                    {
                        var_29 = 5898310579842312414LL;
                        var_30 &= ((/* implicit */int) arr_9 [i_3] [i_2 + 1] [i_2 - 1]);
                        var_31 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 5898310579842312413LL))));
                        var_32 = ((/* implicit */signed char) var_7);
                    }
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        var_33 -= ((/* implicit */unsigned char) (-(((/* implicit */int) ((arr_15 [i_0] [i_4] [i_7]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
                        arr_22 [i_2] [6U] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_2 - 2] [11LL] [i_2 + 2] [i_4 + 1]))));
                        var_34 = ((((/* implicit */int) arr_10 [i_3] [i_2 + 1] [i_2 - 1] [i_3])) * (((/* implicit */int) var_3)));
                        var_35 = ((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_2] [i_2 + 3] [i_4 + 1] [i_4 - 1] [i_2])) | (585603059)));
                    }
                    var_36 = ((/* implicit */short) (!(((/* implicit */_Bool) 3404784446U))));
                }
                for (int i_8 = 4; i_8 < 23; i_8 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((signed char) (unsigned char)116)))));
                        var_38 *= ((unsigned char) arr_28 [i_3] [i_3] [i_3] [i_9]);
                        var_39 |= ((/* implicit */unsigned long long int) arr_25 [2LL] [22] [2LL] [i_8 - 1] [22]);
                    }
                    for (unsigned long long int i_10 = 1; i_10 < 22; i_10 += 1) 
                    {
                        var_40 -= ((/* implicit */long long int) 3404784459U);
                        var_41 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_30 [i_0] [i_0] [i_3] [i_3] [i_8 - 3] [i_8] [i_10 + 2])) / (((/* implicit */int) ((unsigned char) 12192785425113466432ULL)))));
                    }
                    var_42 = ((/* implicit */unsigned char) arr_27 [i_8] [i_8 - 2] [i_2 + 2] [i_2] [i_2 - 1]);
                    var_43 ^= ((((/* implicit */_Bool) arr_13 [i_3] [i_8 - 2] [i_2 + 2] [i_2 + 2] [i_3])) && (((/* implicit */_Bool) arr_13 [i_3] [i_8 - 2] [i_3] [i_3] [i_3])));
                    arr_33 [i_2] [(signed char)5] [i_3] = ((/* implicit */signed char) arr_29 [i_2] [i_2 + 3] [i_2 + 1] [i_2 + 1] [i_2]);
                    var_44 *= ((/* implicit */long long int) arr_14 [(unsigned short)17] [(unsigned char)19] [(signed char)4] [21ULL]);
                }
                for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_12 = 2; i_12 < 22; i_12 += 1) /* same iter space */
                    {
                        var_45 = ((/* implicit */int) min((var_45), (((((/* implicit */_Bool) arr_34 [i_11] [i_11])) ? (((/* implicit */int) arr_34 [i_3] [i_3])) : (((/* implicit */int) arr_34 [i_11] [i_11]))))));
                        var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) (~(((unsigned int) arr_7 [i_11])))))));
                        arr_39 [i_2] [i_2] [i_12 - 2] = ((/* implicit */unsigned char) arr_25 [(short)6] [i_2 + 3] [(short)6] [i_2 + 2] [(short)6]);
                        var_47 = ((/* implicit */long long int) (~(((/* implicit */int) arr_37 [(unsigned short)9] [i_2] [i_12 + 1] [(signed char)10] [i_2 + 3] [i_2] [i_2]))));
                        var_48 = ((/* implicit */unsigned int) (~(((((/* implicit */int) var_3)) + (((/* implicit */int) arr_36 [(signed char)7] [23ULL]))))));
                    }
                    for (long long int i_13 = 2; i_13 < 22; i_13 += 1) /* same iter space */
                    {
                        var_49 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_14))));
                        var_50 = ((/* implicit */int) arr_42 [i_2 + 2] [i_3] [i_3] [i_13] [(unsigned short)17]);
                        var_51 -= ((/* implicit */_Bool) ((arr_18 [i_3] [i_2 - 1] [i_2 - 1] [i_11] [i_13 + 2]) ? (((/* implicit */int) arr_25 [i_13 - 2] [2LL] [i_3] [i_2 + 3] [i_13 - 1])) : (((/* implicit */int) var_12))));
                        var_52 = ((/* implicit */int) min((var_52), (((/* implicit */int) ((((/* implicit */int) arr_13 [i_3] [i_11] [i_3] [i_2 - 1] [i_3])) != (2147483647))))));
                    }
                    var_53 -= ((arr_18 [i_11] [(short)6] [i_3] [i_2 + 1] [i_11]) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)-26880)))) : (((var_9) >> (((((/* implicit */int) arr_0 [i_3] [i_3])) - (145))))));
                    var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_36 [i_2 + 1] [i_2 - 1])) ? (((/* implicit */int) arr_36 [i_2 + 1] [i_2 - 1])) : (((/* implicit */int) arr_36 [i_2 + 1] [i_2 - 1]))));
                    var_55 = ((/* implicit */unsigned long long int) var_13);
                }
                for (int i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    arr_45 [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_28 [i_2] [(short)2] [i_2] [i_2 - 1]))));
                    var_56 = ((/* implicit */int) ((((unsigned int) (short)2)) << (((((/* implicit */int) (short)-26502)) + (26509)))));
                }
                var_57 ^= ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_3] [i_2 + 3] [i_3])) ? (((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_2] [i_3] [i_3])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-99))))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_3] [(_Bool)1] [i_3] [i_0] [i_3]))));
            }
            for (unsigned long long int i_15 = 4; i_15 < 23; i_15 += 1) /* same iter space */
            {
                var_58 = ((/* implicit */signed char) arr_21 [i_0]);
                arr_50 [i_2] [i_2 - 2] [i_2 - 2] = ((/* implicit */long long int) ((short) ((((/* implicit */long long int) arr_6 [i_0] [1] [1])) >= (var_11))));
                var_59 = ((/* implicit */int) min((var_59), (((int) arr_25 [i_15 - 1] [i_15 - 1] [i_15 + 1] [i_15 - 1] [i_15]))));
                var_60 = ((/* implicit */unsigned int) max((var_60), ((+(arr_23 [(signed char)21] [i_0] [i_0] [19U])))));
            }
            for (unsigned long long int i_16 = 4; i_16 < 23; i_16 += 1) /* same iter space */
            {
                var_61 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_29 [i_2] [17LL] [i_2 - 2] [i_2 + 2] [i_2]))));
                var_62 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_0] [i_0] [i_2 + 2] [i_16 - 2] [i_16] [22U])) ? (((/* implicit */long long int) 2714199270U)) : (var_8)));
                var_63 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) << (((-585603041) + (585603055)))));
            }
            /* LoopSeq 2 */
            for (int i_17 = 0; i_17 < 24; i_17 += 1) 
            {
                var_64 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) -4824683131912345436LL)) : (7442867818935373387ULL)));
                arr_58 [i_2] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_42 [0] [0] [i_2] [i_17] [i_17])) || (((/* implicit */_Bool) var_10)))));
                var_65 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_2] [i_0] [i_2] [i_17])) ? (arr_15 [i_0] [i_0] [i_0]) : (arr_15 [i_0] [i_0] [i_0])));
                arr_59 [i_2] [i_17] [i_2] [i_2] = ((/* implicit */short) ((unsigned short) arr_10 [(signed char)12] [i_2] [(signed char)12] [i_2]));
            }
            for (int i_18 = 2; i_18 < 23; i_18 += 4) 
            {
                var_66 = ((/* implicit */unsigned long long int) ((var_17) > (((/* implicit */unsigned long long int) 585603075))));
                /* LoopSeq 3 */
                for (unsigned int i_19 = 1; i_19 < 22; i_19 += 3) 
                {
                    var_67 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_26 [(unsigned char)13] [8U] [8U] [i_18] [i_19 - 1])) ? (((/* implicit */unsigned long long int) arr_28 [i_18] [i_0] [i_2] [i_18])) : (var_17))) * (((24705916052235626ULL) * (((/* implicit */unsigned long long int) 6U))))));
                    var_68 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) 3404784471U)) == (11852737798958550775ULL))) ? ((~(var_1))) : (((/* implicit */long long int) var_5))));
                    /* LoopSeq 1 */
                    for (int i_20 = 0; i_20 < 24; i_20 += 4) 
                    {
                        var_69 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_63 [i_20] [i_2 - 1] [i_20] [(unsigned short)2]))) | (arr_20 [i_18] [i_19 - 1] [i_19 + 1] [i_19] [6ULL] [i_20] [i_19 + 1])));
                        var_70 |= ((/* implicit */signed char) ((arr_28 [i_20] [i_2 - 2] [i_19 - 1] [i_20]) + (arr_28 [i_18] [i_18 - 1] [i_2] [i_18])));
                        var_71 -= ((/* implicit */unsigned long long int) arr_56 [i_2] [i_18] [i_2]);
                        var_72 = ((/* implicit */int) min((var_72), ((-(((((/* implicit */_Bool) var_8)) ? (-585603054) : (((/* implicit */int) var_3))))))));
                        var_73 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_18] [i_18] [i_18 - 1])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                    }
                }
                for (int i_21 = 0; i_21 < 24; i_21 += 3) 
                {
                    var_74 = ((/* implicit */unsigned char) min((var_74), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) arr_4 [8ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-106))) : (arr_54 [i_18] [i_2] [i_18] [i_18])))))));
                    /* LoopSeq 1 */
                    for (short i_22 = 0; i_22 < 24; i_22 += 1) 
                    {
                        var_75 = ((/* implicit */long long int) min((var_75), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_1) >> (((((/* implicit */int) var_6)) - (2650)))))) ? (585603032) : (((/* implicit */int) ((((/* implicit */int) (signed char)98)) >= (2147483622)))))))));
                        arr_73 [i_0] [i_2] = ((/* implicit */int) (+(arr_61 [(unsigned short)11] [i_2] [i_21] [i_22])));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_23 = 1; i_23 < 22; i_23 += 1) 
                    {
                        var_76 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_2] [i_18] [i_21]))) & (var_17))));
                        var_77 = (i_2 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) arr_64 [i_18] [i_2] [i_21] [i_21])) >> (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_54 [i_2] [(short)12] [i_18] [i_18])) : (arr_68 [i_2] [i_2] [(_Bool)1]))) - (1891042443LL)))))) : (((/* implicit */unsigned short) ((((((/* implicit */int) arr_64 [i_18] [i_2] [i_21] [i_21])) + (2147483647))) >> (((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_54 [i_2] [(short)12] [i_18] [i_18])) : (arr_68 [i_2] [i_2] [(_Bool)1]))) - (1891042443LL))) - (1165073411LL))))));
                    }
                }
                for (int i_24 = 0; i_24 < 24; i_24 += 1) 
                {
                    var_78 = var_4;
                    /* LoopSeq 3 */
                    for (unsigned char i_25 = 0; i_25 < 24; i_25 += 3) 
                    {
                        var_79 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_77 [i_2] [i_2 + 1] [i_18 - 2] [i_24] [i_25])) : (((/* implicit */int) arr_77 [i_2] [i_2 + 2] [i_2] [(unsigned short)10] [i_2]))));
                        arr_85 [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_43 [i_0] [i_0] [i_0] [i_24] [i_0] [i_2]);
                    }
                    for (unsigned short i_26 = 1; i_26 < 22; i_26 += 3) 
                    {
                        var_80 = ((/* implicit */unsigned long long int) min((var_80), (((/* implicit */unsigned long long int) var_3))));
                        var_81 = ((/* implicit */unsigned short) min((var_81), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_15))) ? (((((/* implicit */_Bool) arr_47 [i_18] [i_18] [i_26])) ? (((/* implicit */unsigned int) 585603059)) : (451094184U))) : (((/* implicit */unsigned int) 2147483624)))))));
                    }
                    for (unsigned long long int i_27 = 0; i_27 < 24; i_27 += 1) 
                    {
                        var_82 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 451094184U)) ? (((/* implicit */int) (unsigned short)35126)) : (2147483622)));
                        var_83 -= ((/* implicit */long long int) ((arr_61 [(unsigned short)2] [i_2 + 3] [(unsigned short)2] [i_24]) / (((/* implicit */unsigned long long int) var_4))));
                    }
                    var_84 = ((/* implicit */short) min((var_84), (((/* implicit */short) (~(((/* implicit */int) arr_7 [i_18])))))));
                }
                var_85 = ((/* implicit */unsigned short) -865041458);
            }
            var_86 = ((/* implicit */int) (~(451094184U)));
            /* LoopSeq 1 */
            for (unsigned char i_28 = 1; i_28 < 23; i_28 += 3) 
            {
                var_87 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (arr_40 [i_0] [i_0] [15U] [i_0] [i_0]) : (arr_40 [i_0] [i_0] [i_2 + 3] [i_2 + 2] [i_28])));
                var_88 = ((/* implicit */int) var_17);
            }
            var_89 = ((/* implicit */long long int) arr_29 [i_2 + 2] [i_2] [i_2] [i_2 + 2] [22]);
        }
        var_90 = ((/* implicit */long long int) min((var_90), (((/* implicit */long long int) (-(((/* implicit */int) var_3)))))));
    }
    var_91 = ((/* implicit */unsigned long long int) (~(var_4)));
    var_92 = ((/* implicit */short) ((((/* implicit */_Bool) ((((585603024) - (((/* implicit */int) (signed char)-127)))) ^ (((((/* implicit */int) var_3)) + (((/* implicit */int) var_16))))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((min((var_17), (((/* implicit */unsigned long long int) (signed char)27)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_10)))))))))));
    var_93 -= ((/* implicit */unsigned char) (((((+(2299438633235389982LL))) / (((((/* implicit */_Bool) var_6)) ? (70368744177663LL) : (var_9))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (unsigned char)255)))))));
}
