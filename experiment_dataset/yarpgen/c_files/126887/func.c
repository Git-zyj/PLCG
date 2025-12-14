/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126887
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_1 [i_0])))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                arr_11 [i_3] [(unsigned short)7] = ((/* implicit */signed char) arr_9 [i_0] [i_1] [i_2] [(signed char)14] [(_Bool)1] [i_2] [12LL]);
                                var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)166)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))));
                                arr_12 [i_0] [i_1] [i_3] [i_3] [i_4] [i_4] [i_1] = min((((/* implicit */unsigned long long int) ((short) min(((unsigned short)65522), (((/* implicit */unsigned short) arr_0 [i_2])))))), (var_7));
                                arr_13 [9U] [i_1] [i_2] [9U] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] [(unsigned char)3])))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                    {
                        var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_2] [11ULL])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4200104439U)) ? (((/* implicit */int) arr_15 [i_0] [i_0])) : (min((((/* implicit */int) (signed char)-43)), (arr_8 [i_0] [i_5] [i_2] [i_0] [(unsigned char)3] [i_0])))))) : (((((/* implicit */_Bool) (unsigned char)166)) ? (1388736406807954342ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [i_2])))))));
                        var_13 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]);
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
                    {
                        var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [(short)14] [i_1] [i_2] [i_6] [i_2] [i_0])), (arr_17 [i_1] [(unsigned char)14] [i_6]))))));
                        var_15 = ((/* implicit */short) (+(((((/* implicit */_Bool) (~(arr_3 [i_2] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8038380202671728679ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_15 [i_6] [i_6]))))) : ((~(18446744073709551589ULL)))))));
                    }
                    var_16 = ((/* implicit */_Bool) 3054985879U);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_8 = 0; i_8 < 15; i_8 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_10 = 0; i_10 < 15; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 2; i_11 < 12; i_11 += 4) 
                    {
                        arr_33 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) var_10);
                        var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_8 [i_7] [i_8] [i_7] [i_10] [i_11 - 2] [i_8])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_3 [5LL] [10LL])));
                        var_18 = ((/* implicit */long long int) arr_17 [i_7] [i_7] [i_9]);
                    }
                    arr_34 [i_7] [i_7] [i_8] [i_8] [i_9] [i_10] = ((/* implicit */long long int) var_0);
                    var_19 *= (!(((/* implicit */_Bool) (-(arr_28 [(short)8] [(unsigned short)5] [1LL] [i_7])))));
                    var_20 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)79))))) * ((-(((/* implicit */int) arr_10 [i_7] [i_8] [i_8] [i_9] [i_9] [i_10] [i_10]))))));
                    arr_35 [i_10] [i_9] [i_7] [i_7] |= ((/* implicit */long long int) arr_0 [(short)16]);
                }
                for (long long int i_12 = 0; i_12 < 15; i_12 += 4) 
                {
                    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)156)) != (((/* implicit */int) (unsigned short)65522))))), (var_9)));
                    var_22 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) arr_15 [i_7] [i_7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_7]))) : (min((((/* implicit */unsigned long long int) arr_8 [(short)11] [i_12] [i_7] [(_Bool)1] [i_8] [i_7])), (6056777464920980119ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_25 [(_Bool)1] [i_8] [5] [i_12])))))));
                }
                var_23 = ((/* implicit */unsigned short) (~((~(arr_7 [i_8] [i_8] [(signed char)0] [(signed char)0] [i_8] [i_7])))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (signed char i_15 = 0; i_15 < 15; i_15 += 1) 
                    {
                        {
                            var_24 = (((~(arr_28 [i_7] [i_7] [i_14] [i_15]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [(signed char)16])), (arr_10 [i_7] [i_8] [i_13] [i_13] [i_14] [i_15] [i_15]))))));
                            arr_45 [i_7] [(signed char)5] [i_13] [i_14] [i_15] [i_14] [(short)7] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (-(4174653693540698289LL)))) ? (((/* implicit */int) arr_37 [i_15] [i_8] [i_13] [i_8])) : (((/* implicit */int) min(((short)-14821), ((short)24817))))))));
                        }
                    } 
                } 
                arr_46 [i_13] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) arr_40 [i_7] [i_7] [(signed char)11] [(signed char)7] [(signed char)7])) > (((/* implicit */int) (signed char)-37))))), ((~(((/* implicit */int) (unsigned short)1792))))));
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_25 = ((/* implicit */signed char) arr_5 [i_7] [i_7] [i_7]);
                var_26 += ((/* implicit */long long int) arr_42 [i_7] [i_7] [(short)0] [i_8] [i_16]);
            }
            var_27 = ((/* implicit */long long int) (~(max((((/* implicit */int) max(((unsigned short)65522), (((/* implicit */unsigned short) arr_20 [i_7]))))), (((((/* implicit */_Bool) arr_26 [i_7])) ? (((/* implicit */int) (short)9)) : (arr_5 [i_7] [i_8] [i_8])))))));
        }
        for (long long int i_17 = 0; i_17 < 15; i_17 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned long long int) max((var_28), (max(((-(max((((/* implicit */unsigned long long int) var_8)), (var_7))))), (((/* implicit */unsigned long long int) ((unsigned short) ((arr_47 [i_7] [i_7] [i_7]) - (((/* implicit */long long int) ((/* implicit */int) var_0)))))))))));
            var_29 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_18 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))) ? (((/* implicit */unsigned long long int) (~(((((arr_27 [i_7] [i_7] [i_7] [(unsigned char)14]) + (9223372036854775807LL))) >> (((arr_4 [i_7] [i_7] [(_Bool)1]) + (5413522710810592968LL)))))))) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_49 [i_17] [i_17] [i_7]))))), (max((10408363871037822940ULL), (((/* implicit */unsigned long long int) arr_7 [i_7] [i_7] [i_7] [i_7] [(unsigned short)12] [i_17]))))))));
            arr_51 [i_17] [i_17] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_2))) - ((-((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)24819))) : (4174653693540698289LL)))))));
            var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4ULL)) ? (arr_31 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (arr_38 [i_7] [i_7])))))))))))));
        }
        /* LoopNest 2 */
        for (signed char i_18 = 0; i_18 < 15; i_18 += 4) 
        {
            for (unsigned char i_19 = 0; i_19 < 15; i_19 += 1) 
            {
                {
                    var_31 = (((((+(var_7))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_7] [i_7] [11ULL] [i_7])) ? (arr_47 [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_7] [i_18] [i_19])))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1785))));
                    var_32 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (arr_36 [i_7] [i_7] [i_18] [i_19]) : (arr_36 [i_19] [i_18] [i_7] [i_7]))));
                    var_33 ^= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + ((+((+(0U)))))));
                }
            } 
        } 
        arr_58 [i_7] [(unsigned short)7] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_14 [i_7] [i_7] [i_7] [16LL] [i_7])), (max((((/* implicit */unsigned int) arr_41 [i_7])), (arr_16 [i_7] [i_7] [i_7])))));
    }
    for (unsigned char i_20 = 1; i_20 < 22; i_20 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_21 = 0; i_21 < 25; i_21 += 1) 
        {
            for (signed char i_22 = 0; i_22 < 25; i_22 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_23 = 2; i_23 < 24; i_23 += 2) 
                    {
                        for (unsigned short i_24 = 0; i_24 < 25; i_24 += 1) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_67 [(unsigned short)4] [(unsigned short)4] [i_22] [i_22] [(unsigned short)4])))))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((arr_59 [12ULL]), (((/* implicit */unsigned char) arr_68 [(short)0] [(short)0] [i_22] [(signed char)2] [i_22]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_0)))))))))));
                                arr_70 [i_24] [i_24] [i_22] [(short)9] [i_24] [i_20] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_3)), ((~((-(var_7)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_25 = 1; i_25 < 23; i_25 += 4) 
                    {
                        for (int i_26 = 0; i_26 < 25; i_26 += 4) 
                        {
                            {
                                arr_75 [i_20 + 1] [i_25] [i_25] [i_22] [i_22] [i_25 + 1] [i_26] = ((/* implicit */short) var_0);
                                var_35 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) arr_60 [(unsigned char)22] [i_21])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_26]))) : (arr_71 [i_22] [(short)14]))), (((/* implicit */unsigned int) arr_65 [(short)7] [i_25 + 1] [i_26])))) != (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 4787629069983143076LL))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_27 = 0; i_27 < 25; i_27 += 1) 
                    {
                        for (short i_28 = 0; i_28 < 25; i_28 += 2) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned long long int) ((signed char) var_0));
                                var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */short) (signed char)127)), ((short)24826))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)31)) ? (((/* implicit */int) (unsigned short)42353)) : (((/* implicit */int) (signed char)-43)))))) : (((/* implicit */int) (signed char)32)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_38 = ((/* implicit */short) arr_64 [i_20]);
        /* LoopNest 2 */
        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
        {
            for (signed char i_30 = 0; i_30 < 25; i_30 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_31 = 0; i_31 < 25; i_31 += 4) 
                    {
                        for (signed char i_32 = 0; i_32 < 25; i_32 += 2) 
                        {
                            {
                                var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_8))))))) ? ((((-(((/* implicit */int) var_3)))) + (((/* implicit */int) arr_63 [i_20 + 2] [(short)4] [i_30])))) : (((/* implicit */int) var_2)))))));
                                var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) var_4))));
                                var_41 = ((/* implicit */_Bool) arr_63 [(signed char)16] [i_30] [i_29]);
                                var_42 = ((/* implicit */_Bool) max((var_42), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_90 [i_20] [i_20] [i_20] [21ULL] [i_20]))) % (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_63 [i_20] [i_20] [i_20 + 1])) ? (var_1) : (((/* implicit */long long int) arr_91 [i_20]))))) & (max((arr_82 [i_29]), (((/* implicit */unsigned long long int) (unsigned short)1792)))))))))));
                                var_43 = ((/* implicit */signed char) (((+(arr_60 [i_20 + 2] [i_20 + 1]))) != (((((/* implicit */_Bool) arr_60 [i_20 + 2] [i_20 + 1])) ? (arr_60 [i_20 + 2] [i_20 + 1]) : (arr_60 [i_20 + 2] [i_20 + 1])))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_33 = 0; i_33 < 25; i_33 += 2) 
                    {
                        var_44 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_92 [i_20 + 2] [i_20] [i_29] [i_20 + 2] [i_33] [i_33] [i_33])), ((-(((((/* implicit */_Bool) arr_90 [i_33] [i_29] [i_29] [i_29] [i_20])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) : (1753810606U)))))));
                        arr_95 [(signed char)23] [i_33] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_88 [i_20] [i_20 + 3] [i_20] [i_20 - 1]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (arr_82 [i_20])))))))));
                        arr_96 [(unsigned char)24] [4LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)58))))) ? (((/* implicit */int) ((_Bool) -4787629069983143076LL))) : (((/* implicit */int) arr_93 [(unsigned char)14] [(unsigned char)14] [21LL] [(_Bool)1]))));
                    }
                    for (int i_34 = 0; i_34 < 25; i_34 += 4) 
                    {
                        var_45 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */int) (short)1380)) / (((/* implicit */int) arr_93 [(signed char)3] [i_29] [5LL] [i_29])))), ((~(((/* implicit */int) (signed char)-16))))))) ? (((((/* implicit */long long int) (-(((/* implicit */int) arr_94 [i_34] [i_29]))))) / (((var_1) - (((/* implicit */long long int) ((/* implicit */int) arr_94 [i_20 + 2] [i_29]))))))) : (((/* implicit */long long int) min((((/* implicit */int) arr_76 [i_20] [i_20 + 1] [i_20 + 1] [i_20 + 2] [i_20 + 2] [i_29])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))))))));
                        var_46 = ((((/* implicit */_Bool) max((min((arr_78 [i_20] [17ULL] [i_30] [i_34]), (((/* implicit */long long int) arr_71 [(unsigned char)17] [i_29])))), (((/* implicit */long long int) ((((/* implicit */int) arr_66 [i_20] [i_29] [i_20] [i_34] [i_20] [i_29])) ^ (((/* implicit */int) (unsigned short)65535)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (min((min((arr_87 [i_20] [i_29] [i_30]), (((/* implicit */long long int) (signed char)127)))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) ? (arr_61 [i_30]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_29] [i_30] [(unsigned short)14])))))))));
                    }
                }
            } 
        } 
    }
}
