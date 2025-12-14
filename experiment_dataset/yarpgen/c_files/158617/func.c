/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158617
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
    for (short i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) max((arr_1 [i_0]), (((/* implicit */short) ((_Bool) max((arr_1 [i_0]), (var_9)))))));
        arr_3 [i_0] = arr_0 [i_0];
        arr_4 [(unsigned short)10] = ((/* implicit */int) (unsigned short)14731);
        var_18 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_2)));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        arr_15 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned short) ((5884136544607432308LL) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4])))));
                        var_19 = ((/* implicit */unsigned short) ((int) arr_8 [i_2] [i_1]));
                    }
                    for (unsigned short i_5 = 2; i_5 < 8; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */short) var_3);
                        arr_18 [(_Bool)1] [i_2] [i_3] [(unsigned char)10] [i_3] |= ((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [i_1] [i_5 + 3] [i_1]);
                        var_21 = ((/* implicit */long long int) (unsigned short)50803);
                    }
                    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */int) var_7)) - (((/* implicit */int) var_7)))))));
                    var_23 = ((/* implicit */unsigned char) max((var_23), (var_1)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 1; i_8 < 8; i_8 += 1) 
                    {
                        arr_26 [i_1] [i_1] [i_1] [(short)7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)60218)) : (((/* implicit */int) var_2))))) ? (((((long long int) var_10)) - (((/* implicit */long long int) arr_9 [i_6])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned char)144), (((/* implicit */unsigned char) (signed char)31))))) ? (((/* implicit */int) max((arr_13 [(unsigned char)10] [i_6] [i_7] [(unsigned char)10] [i_1]), (((/* implicit */unsigned short) arr_11 [(unsigned short)6] [(unsigned short)6] [i_7]))))) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                        var_24 = ((/* implicit */unsigned short) ((short) arr_21 [i_1] [i_6] [i_8 + 1] [i_1]));
                    }
                    var_25 = ((/* implicit */short) arr_21 [i_1] [i_1] [(_Bool)1] [i_6]);
                }
            } 
        } 
    }
    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
    {
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 11; i_10 += 4) 
        {
            for (unsigned short i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)14748)) ^ (((/* implicit */int) (signed char)-61))));
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (unsigned short)23869))));
                    var_28 = ((/* implicit */unsigned short) ((unsigned char) var_2));
                    var_29 = ((/* implicit */_Bool) arr_27 [i_9] [7]);
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_14 [i_9] [i_11])))) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 11; i_12 += 4) 
        {
            for (long long int i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_14 = 1; i_14 < 10; i_14 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned short) (unsigned char)140);
                        arr_45 [i_13] [i_13] [i_13] [i_14] [i_14 - 1] = ((/* implicit */int) ((short) (unsigned short)51215));
                        var_32 = var_16;
                    }
                    for (long long int i_15 = 0; i_15 < 11; i_15 += 2) 
                    {
                        arr_48 [i_15] [(short)2] [(signed char)5] [(signed char)5] = ((/* implicit */unsigned short) arr_31 [i_9] [i_15]);
                        var_33 = ((/* implicit */signed char) (unsigned short)17788);
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_9] [i_9] [i_9] [7])) ? (arr_23 [i_12] [i_12] [i_12] [i_12]) : (arr_23 [i_9] [i_13] [i_12] [i_9])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)8))))) : (((/* implicit */int) (unsigned char)4))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_16 = 0; i_16 < 11; i_16 += 2) 
                        {
                            var_35 *= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -8497609816942345458LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2081528068U)))));
                            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_16] [i_12] [i_9])) >> (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_13 [i_9] [i_12] [i_9] [i_15] [i_16])) : (((/* implicit */int) arr_50 [i_9] [i_12] [i_9])))) - (63611))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (short i_17 = 0; i_17 < 11; i_17 += 2) 
                    {
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_44 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) >> (((((/* implicit */int) ((short) var_6))) + (7474)))))) ? (((/* implicit */int) ((unsigned short) (signed char)51))) : ((~(((/* implicit */int) (_Bool)1))))));
                                arr_56 [i_9] [i_9] [i_9] [(_Bool)1] [i_18] = ((/* implicit */long long int) (~(((/* implicit */int) (short)20623))));
                                var_38 *= ((/* implicit */signed char) var_5);
                                var_39 = ((/* implicit */unsigned int) arr_1 [i_9]);
                                var_40 = ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)3575)) ? (((/* implicit */int) arr_22 [i_12] [5LL] [5LL])) : (((/* implicit */int) (_Bool)1))))) % (((((/* implicit */_Bool) -9157981055712971772LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50822))) : (9223372036854775807LL))));
                            }
                        } 
                    } 
                    arr_57 [i_9] [i_9] [i_12] [i_13] = ((/* implicit */unsigned char) ((((unsigned int) ((((/* implicit */int) (unsigned short)7043)) | (((/* implicit */int) arr_37 [i_9] [i_9] [i_9]))))) << (((arr_23 [i_12] [i_12] [(short)0] [i_12]) - (4450304302504168698LL)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_19 = 0; i_19 < 11; i_19 += 4) 
        {
            for (int i_20 = 0; i_20 < 11; i_20 += 4) 
            {
                {
                    var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) var_10))));
                    arr_64 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((int) min((((/* implicit */long long int) var_7)), (9038234253469507241LL))));
                    var_42 = arr_13 [i_20] [i_19] [i_19] [i_19] [i_9];
                }
            } 
        } 
        arr_65 [i_9] [i_9] = 2111473420;
    }
    /* LoopNest 2 */
    for (unsigned char i_21 = 0; i_21 < 16; i_21 += 2) 
    {
        for (long long int i_22 = 0; i_22 < 16; i_22 += 1) 
        {
            {
                var_43 = ((/* implicit */signed char) (short)17009);
                /* LoopSeq 1 */
                for (signed char i_23 = 4; i_23 < 15; i_23 += 3) 
                {
                    arr_73 [i_22] [i_23 - 2] = ((/* implicit */int) var_5);
                    var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)64)) ? ((((((+(arr_66 [i_21]))) + (2147483647))) >> (((((/* implicit */int) (signed char)122)) - (99))))) : (((/* implicit */int) (unsigned short)14))));
                }
                arr_74 [i_22] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)2042), (((/* implicit */short) (signed char)42))))) ? (-2130796547163602002LL) : (((/* implicit */long long int) ((((/* implicit */int) (short)-20619)) + (((/* implicit */int) var_4))))))))));
            }
        } 
    } 
    var_45 = ((/* implicit */unsigned char) var_8);
    var_46 = ((/* implicit */_Bool) ((((-1051211416) + (2147483647))) << (((((/* implicit */int) ((unsigned short) max((var_10), (((/* implicit */unsigned long long int) (short)-6393)))))) - (59143)))));
    /* LoopNest 2 */
    for (unsigned char i_24 = 1; i_24 < 22; i_24 += 2) 
    {
        for (long long int i_25 = 0; i_25 < 24; i_25 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_26 = 0; i_26 < 24; i_26 += 4) 
                {
                    for (signed char i_27 = 0; i_27 < 24; i_27 += 4) 
                    {
                        {
                            arr_85 [(short)4] [i_25] [i_27] [i_27] [i_25] = ((/* implicit */long long int) (unsigned short)21957);
                            var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) var_9))));
                            arr_86 [i_24] [i_25] [i_25] [i_24] [i_27] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_84 [i_24 + 2] [i_24 + 1] [i_24 + 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))) - (((((/* implicit */_Bool) (short)-6392)) ? (((/* implicit */int) arr_84 [23] [i_25] [23])) : (((/* implicit */int) var_9))))));
                        }
                    } 
                } 
                arr_87 [i_24] = ((/* implicit */short) arr_82 [0LL] [i_25] [i_25] [i_25]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_28 = 0; i_28 < 24; i_28 += 1) 
                {
                    var_48 = ((/* implicit */signed char) arr_88 [i_24 - 1] [i_24 - 1] [i_24 - 1]);
                    arr_92 [i_24] [i_24] [i_28] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-799)) && (((/* implicit */_Bool) 2495973887303481520LL))));
                }
                /* vectorizable */
                for (unsigned char i_29 = 2; i_29 < 23; i_29 += 4) 
                {
                    var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) 2147483647))));
                    /* LoopNest 2 */
                    for (short i_30 = 0; i_30 < 24; i_30 += 4) 
                    {
                        for (signed char i_31 = 0; i_31 < 24; i_31 += 2) 
                        {
                            {
                                arr_102 [(unsigned short)14] [(unsigned short)14] [(unsigned short)14] = ((/* implicit */unsigned char) var_9);
                                arr_103 [i_25] [i_30] [i_29] [i_25] [i_25] [i_24] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) -5581910907306604180LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10378))) : (var_13))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned char i_32 = 1; i_32 < 22; i_32 += 4) 
                {
                    for (unsigned int i_33 = 0; i_33 < 24; i_33 += 3) 
                    {
                        {
                            arr_111 [i_25] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */int) ((short) (_Bool)1)))));
                            arr_112 [i_24] [i_24] [i_24] [i_24] [i_24] = ((/* implicit */unsigned char) -2130796547163602001LL);
                            var_50 = ((((/* implicit */_Bool) -2490979032416342197LL)) ? (((((/* implicit */_Bool) (unsigned char)99)) ? (((/* implicit */int) ((unsigned char) 5643390926630684513LL))) : (var_6))) : (((int) var_17)));
                            /* LoopSeq 1 */
                            for (unsigned char i_34 = 0; i_34 < 24; i_34 += 4) 
                            {
                                arr_115 [i_34] [i_33] [(short)23] [i_25] [i_24] = ((/* implicit */_Bool) (unsigned short)65510);
                                arr_116 [i_24] [i_24 + 1] [i_24 + 1] [i_24 + 1] [i_24 - 1] [i_24 + 1] [i_24 + 1] = ((/* implicit */long long int) var_7);
                                var_51 = ((/* implicit */short) ((signed char) var_8));
                            }
                            var_52 &= ((/* implicit */long long int) (short)27992);
                        }
                    } 
                } 
            }
        } 
    } 
}
