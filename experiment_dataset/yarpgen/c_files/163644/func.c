/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163644
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
    for (short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) min((((/* implicit */unsigned int) arr_1 [6])), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [2U]))))), (min((((/* implicit */unsigned int) arr_1 [18])), (2763320269U))))))))));
        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-119)) ? (max((((/* implicit */long long int) -1301905312)), (-3360271251545629917LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (min((((/* implicit */unsigned int) arr_0 [i_0])), (2376404521U))));
        var_16 ^= ((/* implicit */unsigned long long int) (signed char)22);
    }
    for (short i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_17 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 258057006U)) ? (((/* implicit */int) (short)-32758)) : (-24))), (((/* implicit */int) (unsigned short)65535))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_18 = ((/* implicit */_Bool) arr_4 [i_1] [i_1]);
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                /* LoopSeq 3 */
                for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    arr_11 [i_2] = arr_2 [i_1] [i_2];
                    arr_12 [i_3] [i_2] [i_2] [i_4] |= ((/* implicit */unsigned int) -695714608);
                    arr_13 [i_1] [i_2] [i_2] [i_4] = arr_9 [(_Bool)1] [i_2] [i_2];
                    var_19 -= arr_3 [i_1];
                }
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    var_20 *= ((arr_5 [i_1] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (arr_2 [i_5] [i_5]));
                    arr_16 [i_2] [i_2] [i_3] [i_5] [i_2] [i_3] = ((/* implicit */int) arr_15 [i_5] [i_5] [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1]);
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 4; i_6 < 14; i_6 += 1) 
                    {
                        arr_19 [i_2] [10U] [i_2] = ((/* implicit */_Bool) (short)31952);
                        var_21 *= ((/* implicit */unsigned char) arr_17 [i_1] [i_1] [i_3] [(_Bool)1]);
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_7 = 4; i_7 < 14; i_7 += 3) 
                    {
                        arr_24 [i_1] [i_2] [i_2] [i_1] [i_5 + 1] [i_7 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -983978355)) ? (0ULL) : (((/* implicit */unsigned long long int) -983978328))))) ? (((/* implicit */unsigned long long int) 983978357)) : (((((/* implicit */_Bool) arr_6 [i_2])) ? (arr_15 [i_1] [i_2] [i_3] [i_5] [i_7] [i_7 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))))));
                        var_22 = (short)-22450;
                        var_23 -= ((/* implicit */int) arr_5 [i_1] [i_1]);
                        var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_3] [i_5 + 1] [i_7 + 2] [i_7] [i_7 + 1] [6ULL])) ? (arr_15 [(unsigned short)6] [i_5 + 1] [i_5] [i_5 + 1] [i_7 + 1] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [0U] [i_5 + 1] [(short)7] [i_7 - 3] [i_7 + 1] [i_7 + 2] [(unsigned short)9])))));
                    }
                    for (short i_8 = 3; i_8 < 13; i_8 += 3) 
                    {
                        arr_27 [i_1] [i_2] [2LL] = ((/* implicit */int) (_Bool)1);
                        var_25 = ((/* implicit */unsigned int) (unsigned char)28);
                        var_26 *= ((/* implicit */_Bool) arr_2 [8LL] [i_1]);
                    }
                    for (int i_9 = 1; i_9 < 13; i_9 += 1) 
                    {
                        var_27 -= ((/* implicit */int) arr_22 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_3] [i_5 + 1]);
                        var_28 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)56224)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)30881))))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1])))) : (((((/* implicit */_Bool) (unsigned short)47964)) ? (((/* implicit */int) (unsigned short)27695)) : (((/* implicit */int) (unsigned short)17571))))));
                    }
                }
                for (unsigned int i_10 = 0; i_10 < 16; i_10 += 1) 
                {
                    arr_33 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) arr_31 [i_1] [i_2] [i_1]);
                    var_29 -= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) -695714589)) : (2918508283U)));
                }
                arr_34 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) arr_25 [i_1] [i_1] [i_2] [i_2] [i_3] [i_3]);
            }
            for (signed char i_11 = 1; i_11 < 15; i_11 += 1) 
            {
                arr_37 [i_2] [i_2] [i_11 - 1] = ((/* implicit */unsigned long long int) arr_35 [14]);
                arr_38 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) arr_9 [i_1] [i_1] [i_2]);
            }
            for (unsigned int i_12 = 0; i_12 < 16; i_12 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_13 = 0; i_13 < 16; i_13 += 4) 
                {
                    var_30 ^= ((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_1]);
                    /* LoopSeq 4 */
                    for (short i_14 = 0; i_14 < 16; i_14 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) arr_46 [i_1] [i_2]);
                        arr_48 [i_2] [i_2] = ((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) arr_42 [(short)10] [i_12] [i_13] [(short)5])) : (((arr_35 [i_12]) ? (min((arr_15 [i_1] [i_2] [i_2] [i_12] [i_1] [i_14]), (arr_32 [i_1] [(short)13] [i_12] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_1] [i_1]))))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_32 *= ((/* implicit */signed char) max((min((((/* implicit */unsigned int) arr_9 [i_1] [i_2] [i_13])), (2493905092U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10710)) ? (arr_9 [i_1] [i_1] [i_12]) : (((/* implicit */int) arr_25 [i_1] [i_1] [i_2] [i_12] [i_2] [i_2]))))) ? (((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) (short)30889))))) : (((/* implicit */int) arr_46 [i_1] [13U])))))));
                        var_33 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((min((arr_21 [i_1] [2U] [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned char) arr_23 [i_1] [i_2] [i_1] [i_1] [i_15] [i_12] [(unsigned short)3])))), (arr_0 [i_15])))), (arr_2 [i_1] [0U])));
                    }
                    for (int i_16 = 0; i_16 < 16; i_16 += 4) 
                    {
                        var_34 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [(unsigned char)15] [i_2] [i_12] [i_13] [i_16])) ? (((((/* implicit */_Bool) 1029720002868503961LL)) ? (arr_14 [i_1] [i_2] [i_12] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-15175))))) : (0U)))), (arr_43 [i_1] [i_2] [i_12] [i_2])));
                        var_35 = ((/* implicit */short) 3758096384LL);
                    }
                    /* vectorizable */
                    for (unsigned char i_17 = 0; i_17 < 16; i_17 += 3) 
                    {
                        var_36 = ((/* implicit */unsigned int) arr_54 [i_2] [i_2] [i_12]);
                        var_37 = ((((/* implicit */_Bool) (short)30907)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_1] [i_1] [i_12] [i_1] [i_17] [i_13] [i_13]))) : (((((/* implicit */_Bool) arr_2 [i_12] [(unsigned char)4])) ? (((/* implicit */unsigned long long int) arr_6 [i_1])) : (arr_54 [i_2] [i_2] [i_2]))));
                        var_38 = ((/* implicit */unsigned int) ((arr_35 [i_13]) ? (((arr_23 [i_2] [8] [i_2] [i_2] [i_2] [i_2] [(short)8]) ? (((/* implicit */int) (unsigned short)235)) : (1167938697))) : (arr_51 [i_1] [i_2] [i_2] [0] [i_17])));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_18 = 0; i_18 < 16; i_18 += 2) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) min((arr_61 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned char) arr_41 [i_1] [i_2] [i_2] [i_1]))))), (min(((short)-15432), ((short)28439)))))) ? (((((/* implicit */_Bool) ((arr_35 [i_18]) ? (((/* implicit */int) (unsigned short)21806)) : (((/* implicit */int) arr_4 [i_13] [(unsigned short)2]))))) ? (arr_43 [i_1] [i_1] [i_1] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)38478))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_2] [i_2])) ? (((/* implicit */int) arr_26 [i_2] [i_12])) : (((/* implicit */int) arr_26 [i_12] [i_13]))))))))));
                        var_40 = ((/* implicit */signed char) arr_29 [i_13] [i_13] [i_2] [i_13] [i_18]);
                    }
                    for (unsigned char i_19 = 0; i_19 < 16; i_19 += 2) /* same iter space */
                    {
                        var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) min((((/* implicit */int) arr_22 [i_1] [i_1] [i_1] [i_12] [i_1])), (-695714584))))));
                        var_42 = ((/* implicit */unsigned short) 14256768390929831225ULL);
                        var_43 -= ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) arr_1 [i_19])), (arr_10 [8U] [i_1] [i_19]))), (arr_53 [i_1] [(unsigned short)1] [i_12] [i_13] [i_19])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18669))) : (min((arr_53 [i_19] [i_13] [i_12] [i_2] [i_1]), (arr_14 [i_1] [(_Bool)1] [15U] [i_1]))));
                    }
                    arr_65 [i_12] [i_12] [i_12] [i_12] [i_12] [i_2] = ((/* implicit */unsigned int) (unsigned char)185);
                    arr_66 [i_12] [i_2] [i_12] [(unsigned char)5] = ((/* implicit */int) 33554431U);
                }
                /* LoopSeq 1 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_21 = 0; i_21 < 16; i_21 += 1) 
                    {
                        arr_74 [i_1] [i_2] [i_12] [i_1] [i_2] = ((/* implicit */long long int) 8941517952123977925ULL);
                        var_44 = ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_70 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])), (((arr_36 [i_12] [i_20]) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_29 [i_1] [i_1] [i_1] [i_1] [i_1])), (arr_30 [(signed char)9] [(signed char)9] [i_12]))))) : (arr_14 [i_1] [9ULL] [9ULL] [i_1])))));
                        var_45 = ((/* implicit */int) min((var_45), (-1914299260)));
                        var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1] [i_12])) ? (min((((/* implicit */int) (_Bool)1)), (min((-1), (((/* implicit */int) (short)-8366)))))) : (((((/* implicit */_Bool) arr_69 [i_2] [i_12] [i_2] [i_21])) ? (arr_69 [(_Bool)1] [i_2] [i_2] [(_Bool)1]) : (arr_69 [i_1] [i_2] [i_2] [i_21])))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 2) 
                    {
                        var_47 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_1] [i_20] [i_1])) ? (((/* implicit */int) (short)18690)) : (((/* implicit */int) arr_56 [i_2] [i_2] [3U] [i_12] [i_20] [i_12]))));
                        var_48 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_72 [i_1] [i_1] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_77 [i_1] [i_1] [i_1] [14U] [i_12] [i_12] [i_12]))) : (((((/* implicit */_Bool) 1432631837)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (arr_43 [i_1] [(short)11] [(short)11] [i_20])))));
                        arr_78 [i_1] [i_2] [4ULL] [i_20] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)35)) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_2])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_12] [i_2] [(unsigned short)2])) ? (((/* implicit */int) arr_68 [(unsigned short)8] [i_2] [i_12] [i_20])) : (((/* implicit */int) arr_61 [(unsigned char)6] [i_2] [i_12] [i_12] [i_20] [i_22] [i_22]))))) : (arr_32 [i_2] [i_1] [i_2] [i_2])));
                        var_49 = ((((/* implicit */_Bool) arr_7 [i_2] [i_20] [i_22])) ? (((((/* implicit */_Bool) arr_21 [i_22] [i_2] [i_12] [i_20] [i_22] [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_1] [i_22]))) : (arr_72 [i_1] [(unsigned short)2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_23 = 2; i_23 < 14; i_23 += 1) 
                    {
                        arr_82 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (1531647001U) : (4294967278U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_12] [i_2] [i_12] [i_2]))) : (1531647001U)));
                        var_50 *= ((/* implicit */unsigned int) arr_57 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                    }
                    arr_83 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_10 [i_20] [i_2] [i_1])), (arr_32 [i_1] [i_1] [i_12] [i_2])))) ? (((/* implicit */int) arr_49 [(_Bool)1] [i_2])) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_80 [i_2]))))));
                    var_51 = ((/* implicit */long long int) arr_79 [i_1] [i_2] [i_20] [i_20] [i_20]);
                }
                arr_84 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) arr_17 [2] [12U] [i_12] [2]);
            }
            for (unsigned char i_24 = 4; i_24 < 15; i_24 += 4) 
            {
                arr_87 [i_2] [i_2] = ((/* implicit */unsigned short) min((1531647017U), (1451462191U)));
                var_52 -= ((/* implicit */int) min((min((min((18446744073709551611ULL), (((/* implicit */unsigned long long int) arr_39 [i_1] [i_1] [i_1])))), (min((arr_32 [i_2] [i_2] [i_2] [i_1]), (((/* implicit */unsigned long long int) arr_31 [i_24] [i_24] [i_1])))))), (((/* implicit */unsigned long long int) arr_77 [i_1] [(unsigned char)6] [(unsigned char)6] [i_2] [i_1] [i_24] [i_1]))));
            }
            var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_67 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (arr_53 [i_1] [i_1] [i_1] [13] [(_Bool)1]))), (((/* implicit */unsigned int) arr_62 [i_1] [(_Bool)1] [i_2] [i_1] [i_2]))))) ? (((/* implicit */int) arr_30 [i_1] [i_2] [i_2])) : (((/* implicit */int) arr_63 [i_2] [i_1] [i_1] [i_1] [i_1]))));
            var_54 = ((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_2]);
        }
    }
    for (unsigned short i_25 = 2; i_25 < 8; i_25 += 1) 
    {
        var_55 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) arr_4 [i_25 + 2] [i_25 - 2])), (arr_70 [i_25 - 2] [12U] [i_25 + 1] [i_25 - 2] [i_25 + 2] [i_25])))) ? (min((arr_43 [i_25 - 2] [i_25 - 2] [i_25] [i_25]), (arr_43 [i_25] [i_25 + 2] [i_25 + 1] [i_25 + 2]))) : (((((/* implicit */_Bool) min((arr_51 [i_25 + 1] [(signed char)8] [(_Bool)1] [i_25] [i_25]), (arr_42 [i_25 - 2] [i_25 - 2] [i_25 - 2] [3LL])))) ? (((/* implicit */unsigned long long int) -4426383610316219804LL)) : (((((/* implicit */_Bool) 65536U)) ? (((/* implicit */unsigned long long int) 67553994410557440LL)) : (12672290533082526615ULL)))))));
        var_56 = ((/* implicit */int) ((((/* implicit */_Bool) arr_50 [i_25] [i_25] [i_25] [i_25 - 2] [i_25] [i_25] [i_25 - 1])) ? (((((/* implicit */_Bool) arr_80 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40403))) : (((((/* implicit */_Bool) arr_49 [i_25] [i_25])) ? (arr_75 [i_25] [i_25] [i_25] [i_25] [i_25 - 1] [i_25 - 2] [i_25]) : (12895553559666711861ULL))))) : (((/* implicit */unsigned long long int) min((arr_42 [i_25 - 2] [i_25 + 1] [i_25] [i_25]), (arr_42 [12] [i_25 + 2] [i_25 - 1] [i_25 + 1]))))));
        var_57 = ((/* implicit */short) min((536870910U), (min((((/* implicit */unsigned int) arr_70 [i_25] [(_Bool)1] [i_25] [i_25] [i_25 - 1] [i_25])), (min((1287776271U), (((/* implicit */unsigned int) arr_62 [i_25 - 2] [i_25 - 2] [i_25 - 2] [i_25 - 2] [(short)3]))))))));
        var_58 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_32 [i_25] [i_25] [14ULL] [0])) ? (arr_32 [i_25 + 1] [i_25] [i_25 + 1] [4ULL]) : (arr_32 [i_25] [i_25] [i_25] [12U]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25 - 1] [i_25 - 1])) ? (((/* implicit */int) arr_57 [(_Bool)1] [(_Bool)1] [i_25 + 1] [i_25 - 1] [(_Bool)1] [i_25 + 1] [i_25 - 1])) : (((/* implicit */int) arr_57 [i_25] [i_25] [i_25] [i_25] [i_25] [i_25 + 2] [i_25 + 2])))))));
        var_59 = ((/* implicit */unsigned int) max((var_59), (((/* implicit */unsigned int) arr_67 [i_25] [i_25] [i_25 - 1] [i_25]))));
    }
    var_60 = ((/* implicit */short) var_3);
    var_61 = var_5;
    var_62 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (min((((/* implicit */long long int) min((((/* implicit */unsigned short) (short)(-32767 - 1))), (var_9)))), (max((var_0), (((/* implicit */long long int) var_11)))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
}
