/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10785
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */int) ((signed char) (short)20452))) : (((/* implicit */int) var_1))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (~(((/* implicit */int) arr_2 [i_0 + 2])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((short) arr_0 [i_0]));
        var_13 = ((/* implicit */unsigned short) arr_3 [i_0 + 2]);
    }
    var_14 *= var_3;
    /* LoopSeq 1 */
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_5 [i_1]) & (((/* implicit */unsigned long long int) -17)))))));
        arr_9 [i_1] = max((((((/* implicit */_Bool) -9)) ? (arr_5 [i_1]) : ((~(2ULL))))), (((/* implicit */unsigned long long int) arr_6 [i_1])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_3 = 1; i_3 < 20; i_3 += 1) 
            {
                /* LoopSeq 4 */
                for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    arr_17 [i_3] [(short)8] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((2160799521394411101ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? ((-(((/* implicit */int) arr_12 [i_1] [i_1] [i_4])))) : (var_9)));
                    var_15 = ((/* implicit */int) 2160799521394411101ULL);
                }
                for (short i_5 = 1; i_5 < 21; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) (-(((2147483646U) << (((-2136113235) + (2136113248)))))));
                        arr_22 [i_5] [i_6] [i_1] [(unsigned char)17] [i_6] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [10])) && (((/* implicit */_Bool) var_10))))) != (((/* implicit */int) var_6))));
                    }
                    /* LoopSeq 2 */
                    for (int i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        arr_26 [(unsigned char)20] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((9906174388415390272ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [(signed char)20])))))) ? (((/* implicit */unsigned long long int) 435002447U)) : (var_4)));
                        arr_27 [12ULL] [i_1] [i_2] [i_1] [19ULL] [i_5] [i_7] = ((/* implicit */unsigned long long int) arr_7 [i_3 + 2]);
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)57)) * (((/* implicit */int) (short)11885))));
                    }
                    for (int i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        arr_31 [i_1] [i_2] [i_1] [i_5 + 1] [i_5 + 1] = ((((/* implicit */_Bool) (short)16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-24453))) : (2147483649U));
                        var_18 = ((/* implicit */short) (-(((/* implicit */int) arr_15 [i_2] [i_1]))));
                    }
                    var_19 *= ((/* implicit */signed char) ((int) (short)13220));
                    arr_32 [i_1] = ((/* implicit */short) (+(arr_21 [i_1] [i_2] [i_1] [i_2] [(short)1] [i_5] [i_5 + 1])));
                }
                for (unsigned char i_9 = 1; i_9 < 22; i_9 += 3) 
                {
                    var_20 = ((/* implicit */unsigned char) arr_6 [i_1]);
                    arr_35 [(signed char)8] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) ((2147483649U) > (((/* implicit */unsigned int) -1393096997))));
                }
                for (int i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    arr_38 [i_1] [(unsigned short)1] [16U] [i_3] [i_1] = ((/* implicit */unsigned int) var_7);
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)70)) ? (3076772866U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_1] [i_2] [i_2] [i_2] [i_3] [i_10])))));
                    arr_39 [15ULL] [i_1] [i_3] [i_10] = ((/* implicit */short) ((unsigned int) arr_30 [i_1] [i_1]));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_11 = 2; i_11 < 21; i_11 += 3) 
                {
                    arr_42 [i_1] [i_11] [i_1] [(signed char)12] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (2134654971) : (((/* implicit */int) arr_19 [i_1] [i_1] [(short)16]))))) ? (((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_2] [(signed char)18] [(short)20])) ? (arr_40 [(signed char)6] [i_1] [i_3]) : (((/* implicit */unsigned int) arr_21 [i_1] [i_2] [i_1] [i_3] [i_1] [21ULL] [i_3 + 3])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    arr_43 [i_1] [i_2] [i_3] [i_11 - 1] = ((/* implicit */int) ((short) (signed char)52));
                    var_22 = ((/* implicit */signed char) (-(0ULL)));
                }
            }
            for (signed char i_12 = 0; i_12 < 23; i_12 += 3) 
            {
                arr_47 [i_1] [i_2] [i_1] = ((/* implicit */short) ((signed char) (+(var_5))));
                /* LoopSeq 3 */
                for (signed char i_13 = 0; i_13 < 23; i_13 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_14 = 0; i_14 < 23; i_14 += 2) /* same iter space */
                    {
                        arr_53 [i_14] [i_2] [i_12] [i_1] [i_14] [(unsigned short)15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_14 [(signed char)6] [i_1])))) ? (arr_16 [i_2] [i_12] [i_2] [i_14]) : (arr_46 [i_1] [i_13])));
                        arr_54 [i_1] [12] [i_12] [i_13] [(unsigned char)20] [i_14] [i_13] = ((/* implicit */unsigned long long int) var_9);
                    }
                    for (short i_15 = 0; i_15 < 23; i_15 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */signed char) arr_41 [i_1] [i_1] [i_15] [(unsigned short)3] [i_15] [i_2]);
                        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) var_9))));
                    }
                    arr_58 [4ULL] [i_1] = ((/* implicit */signed char) arr_14 [16] [i_1]);
                    arr_59 [i_1] [3U] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_36 [i_1] [i_2] [i_12] [i_13])) * (((((/* implicit */_Bool) 19ULL)) ? (((/* implicit */int) arr_11 [i_1] [i_12])) : (((/* implicit */int) (signed char)-65))))));
                    arr_60 [i_1] = ((/* implicit */unsigned long long int) arr_25 [i_1] [i_1] [i_1] [(unsigned short)1] [i_12] [10ULL] [i_13]);
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) 2147483647)) > (0ULL))) ? (((((/* implicit */_Bool) arr_24 [i_1] [(signed char)22] [(unsigned short)22] [14] [i_13])) ? (arr_41 [i_1] [18ULL] [i_2] [i_12] [i_12] [18ULL]) : (((/* implicit */unsigned long long int) 2147483642U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) (signed char)-71))))))))));
                }
                for (unsigned char i_16 = 0; i_16 < 23; i_16 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_17 = 1; i_17 < 20; i_17 += 3) 
                    {
                        arr_65 [i_1] [(short)8] [i_2] [i_1] [(short)8] [i_17] [(unsigned char)21] = ((/* implicit */unsigned long long int) arr_14 [i_1] [i_1]);
                        var_26 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))));
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1] [10U] [i_2] [i_12] [(unsigned short)10] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_64 [i_1] [i_2] [(short)19] [(short)19] [i_16] [i_16] [i_17 + 1])))) ? (var_2) : (((/* implicit */int) var_7)))))));
                    }
                    for (unsigned char i_18 = 0; i_18 < 23; i_18 += 2) 
                    {
                        var_28 = ((/* implicit */int) (short)11871);
                        arr_70 [i_1] [i_16] [(short)9] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_18] [i_1] [i_12] [i_2])) ? (arr_14 [i_12] [i_1]) : (arr_29 [i_1] [i_1])));
                        arr_71 [i_1] [7] [i_2] [i_12] [i_16] [i_16] [i_18] = arr_45 [4U] [i_18];
                        var_29 = ((/* implicit */signed char) ((unsigned long long int) arr_64 [i_1] [i_2] [4U] [i_12] [i_16] [i_18] [i_18]));
                    }
                    for (int i_19 = 1; i_19 < 21; i_19 += 3) 
                    {
                        var_30 = ((/* implicit */int) ((((unsigned long long int) (short)(-32767 - 1))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-59)))))));
                        var_31 = ((/* implicit */int) (-(arr_63 [7ULL] [i_1] [i_12] [i_19 + 1])));
                        arr_74 [i_1] [5U] [i_2] [i_1] [(signed char)6] [i_19] = ((/* implicit */signed char) arr_45 [i_19 - 1] [i_19 - 1]);
                        arr_75 [i_1] [i_2] [i_2] [(unsigned short)0] [i_16] [i_1] [i_19] = ((/* implicit */unsigned char) arr_44 [i_1] [(unsigned char)22] [i_19 + 2]);
                        var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_1] [(signed char)21] [(unsigned char)16])))))));
                    }
                    /* LoopSeq 4 */
                    for (unsigned char i_20 = 1; i_20 < 19; i_20 += 3) 
                    {
                        arr_78 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_73 [17] [i_20 + 2] [4ULL] [i_16] [i_20])) ? (((/* implicit */int) ((2U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)30655)))))) : (((/* implicit */int) var_0))));
                        var_33 *= ((/* implicit */signed char) (((+(((/* implicit */int) arr_61 [(unsigned char)14])))) / (((((/* implicit */_Bool) arr_30 [(unsigned short)12] [18])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))));
                        var_34 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned int) arr_21 [i_1] [i_1] [i_2] [20ULL] [20ULL] [i_16] [10ULL])) : (4294967280U))) < (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))));
                    }
                    for (signed char i_21 = 0; i_21 < 23; i_21 += 3) /* same iter space */
                    {
                        arr_81 [i_1] = (-(arr_5 [i_1]));
                        var_35 = ((/* implicit */int) arr_6 [(unsigned char)16]);
                        var_36 = ((/* implicit */int) ((((/* implicit */unsigned int) 25165824)) > (2147483661U)));
                        var_37 = ((unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_16] [i_16])) ? (arr_48 [i_1] [i_2] [i_16] [i_1]) : (((/* implicit */unsigned long long int) arr_46 [i_1] [16ULL]))));
                        var_38 = ((/* implicit */unsigned long long int) 2147483642U);
                    }
                    for (signed char i_22 = 0; i_22 < 23; i_22 += 3) /* same iter space */
                    {
                        arr_85 [i_1] [21] = ((/* implicit */unsigned long long int) var_7);
                        arr_86 [i_1] [i_22] = ((/* implicit */signed char) arr_66 [i_1] [i_2] [11U] [i_12] [i_12] [i_16] [i_22]);
                        arr_87 [i_1] = ((/* implicit */short) var_10);
                    }
                    for (signed char i_23 = 0; i_23 < 23; i_23 += 3) /* same iter space */
                    {
                        arr_90 [i_1] [i_1] [(unsigned char)11] [i_12] [8] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [0ULL] [i_1] [i_12] [(unsigned short)13])) != (((/* implicit */int) arr_72 [i_1] [i_12] [i_1]))));
                        arr_91 [i_1] [i_2] [i_12] [i_1] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_16] [i_16]))) ? (((/* implicit */int) arr_12 [i_1] [i_2] [(signed char)2])) : (((/* implicit */int) (unsigned short)6233))));
                        var_39 = ((/* implicit */int) min((var_39), ((((!(((/* implicit */_Bool) 2147483642U)))) ? (((/* implicit */int) arr_11 [19U] [i_2])) : (((/* implicit */int) arr_88 [i_1] [i_2] [12ULL]))))));
                        var_40 = ((/* implicit */int) arr_45 [i_1] [i_2]);
                    }
                    arr_92 [i_1] [i_1] [i_12] [14ULL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) arr_46 [i_1] [21ULL])) : (1754540034U))))));
                    var_41 = var_9;
                }
                for (unsigned long long int i_24 = 4; i_24 < 22; i_24 += 3) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_25 = 2; i_25 < 21; i_25 += 1) 
                    {
                        arr_99 [i_1] [i_1] [i_12] [21ULL] [i_25] = ((/* implicit */int) ((unsigned char) var_7));
                        var_42 = ((var_5) - (((/* implicit */unsigned long long int) 2147483649U)));
                    }
                    for (unsigned short i_26 = 0; i_26 < 23; i_26 += 3) 
                    {
                        var_43 = ((/* implicit */int) var_4);
                        arr_102 [i_1] [i_1] [i_1] [i_12] [13ULL] [i_24] [i_26] = ((/* implicit */unsigned long long int) var_6);
                        var_44 *= ((/* implicit */signed char) (+(2147483649U)));
                    }
                    for (unsigned short i_27 = 2; i_27 < 22; i_27 += 3) 
                    {
                        arr_106 [i_1] [i_2] [(unsigned short)0] [(unsigned char)21] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 13183405228495186507ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71))) : (2147483625U)));
                        arr_107 [i_1] [i_2] [i_2] [i_12] [(unsigned char)16] [i_27] = ((/* implicit */signed char) ((arr_51 [i_1] [2U] [13ULL] [i_27 - 2] [i_27 + 1] [i_27]) + (((/* implicit */unsigned long long int) 4294967280U))));
                    }
                    for (unsigned char i_28 = 3; i_28 < 22; i_28 += 3) 
                    {
                        var_45 *= ((/* implicit */unsigned int) (short)11912);
                        var_46 *= (signed char)-88;
                    }
                    var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)17610))) | (2147483654U)));
                    arr_111 [i_1] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) -761591854)) ? (((/* implicit */int) var_0)) : (arr_105 [i_12])))));
                    var_48 *= ((/* implicit */unsigned long long int) arr_11 [i_1] [i_2]);
                    /* LoopSeq 1 */
                    for (unsigned short i_29 = 0; i_29 < 23; i_29 += 2) 
                    {
                        var_49 = ((974319972) << (((((/* implicit */_Bool) arr_55 [i_1] [i_2] [(unsigned char)6] [i_24] [i_29])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_66 [i_1] [(short)15] [i_12] [i_12] [10] [i_29] [18ULL]))) : (arr_108 [i_1] [i_2] [0U] [i_24] [i_29]))));
                        arr_114 [i_1] [i_1] [(unsigned short)5] [(unsigned char)18] [i_24] [i_1] = ((/* implicit */unsigned char) arr_21 [i_1] [14ULL] [i_2] [i_24 - 2] [i_24] [i_24] [i_24 + 1]);
                    }
                }
                var_50 *= var_3;
                var_51 = ((/* implicit */int) arr_50 [14U] [14U] [i_1] [i_2] [18] [i_12]);
                /* LoopSeq 2 */
                for (unsigned char i_30 = 0; i_30 < 23; i_30 += 3) 
                {
                    /* LoopSeq 4 */
                    for (int i_31 = 2; i_31 < 21; i_31 += 2) 
                    {
                        arr_122 [i_1] [i_2] [i_1] [i_1] [i_31 - 2] = ((/* implicit */signed char) ((25165824) <= (((/* implicit */int) (short)11896))));
                        var_52 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-122))));
                    }
                    for (unsigned short i_32 = 0; i_32 < 23; i_32 += 3) 
                    {
                        var_53 *= (short)11885;
                        var_54 = ((/* implicit */unsigned long long int) arr_94 [i_1] [i_2] [i_30] [i_32]);
                        var_55 = ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) (unsigned short)1877)))));
                        var_56 *= ((/* implicit */unsigned long long int) (unsigned char)213);
                    }
                    for (int i_33 = 0; i_33 < 23; i_33 += 2) 
                    {
                        arr_127 [(signed char)4] [i_2] [i_12] [i_1] [12] = ((/* implicit */unsigned long long int) var_3);
                        arr_128 [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19778))) & (arr_100 [i_1] [i_1] [i_2] [i_12] [i_12] [i_30] [i_1]));
                        var_57 = arr_21 [i_1] [i_1] [i_2] [15] [i_12] [i_30] [(signed char)5];
                    }
                    for (unsigned short i_34 = 0; i_34 < 23; i_34 += 3) 
                    {
                        var_58 *= ((/* implicit */unsigned int) arr_104 [i_1] [i_2] [20U] [i_30] [(signed char)4]);
                        var_59 = ((/* implicit */unsigned long long int) ((short) -1585703535));
                        var_60 = ((/* implicit */short) (+(144216540)));
                        arr_131 [i_1] [(unsigned short)12] [i_12] [i_30] [21U] = ((1504573438) << (((10ULL) - (10ULL))));
                    }
                    /* LoopSeq 3 */
                    for (signed char i_35 = 0; i_35 < 23; i_35 += 1) 
                    {
                        arr_135 [i_1] [i_1] [i_12] [14] [11ULL] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_9)) & (arr_79 [i_1] [i_1] [i_12] [19])));
                        var_61 = ((((/* implicit */int) (unsigned char)81)) >> (((4069024771U) - (4069024758U))));
                    }
                    for (unsigned long long int i_36 = 2; i_36 < 21; i_36 += 3) 
                    {
                        var_62 = ((/* implicit */short) arr_94 [i_1] [i_2] [i_12] [17]);
                        var_63 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_126 [(unsigned char)12] [i_12] [i_12] [i_36 + 2] [i_36 + 1] [12ULL])) ? (((((/* implicit */_Bool) (short)2082)) ? (412351251) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_6))));
                    }
                    for (int i_37 = 0; i_37 < 23; i_37 += 3) 
                    {
                        var_64 = -1;
                        var_65 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (signed char)122))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (signed char)-36)))) : (((/* implicit */int) (signed char)-34))));
                    }
                }
                for (unsigned short i_38 = 0; i_38 < 23; i_38 += 3) 
                {
                    arr_142 [(signed char)0] [21ULL] [i_1] [i_38] = ((/* implicit */signed char) var_9);
                    var_66 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1]))));
                }
            }
            arr_143 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483627)) && (((/* implicit */_Bool) (unsigned char)30))));
            /* LoopSeq 1 */
            for (unsigned long long int i_39 = 1; i_39 < 19; i_39 += 3) 
            {
                var_67 = ((/* implicit */unsigned short) min((var_67), (((/* implicit */unsigned short) ((int) arr_24 [(unsigned char)6] [i_39 + 1] [(signed char)6] [i_39 + 1] [i_39])))));
                arr_146 [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) 2603431691U));
            }
            /* LoopSeq 1 */
            for (signed char i_40 = 0; i_40 < 23; i_40 += 2) 
            {
                arr_149 [i_1] [i_2] [i_40] = ((/* implicit */unsigned long long int) (-2147483647 - 1));
                var_68 = ((/* implicit */unsigned long long int) min((var_68), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_134 [i_40])) + (((/* implicit */int) arr_134 [i_40])))))));
            }
            var_69 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) (short)28560)) << (((((/* implicit */int) (short)30478)) - (30469))))));
        }
    }
}
