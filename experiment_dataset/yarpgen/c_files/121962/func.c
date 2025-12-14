/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121962
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) (_Bool)1))));
        var_11 |= ((/* implicit */_Bool) -352042381);
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) min((((((/* implicit */_Bool) 4803253792133783746LL)) ? (4294967295U) : (((/* implicit */unsigned int) (-(352042380)))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1] [i_1 + 1])) > (((/* implicit */int) arr_3 [i_1] [i_1 + 1]))))))))));
        arr_4 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((max((((/* implicit */unsigned int) 1287447818)), (var_8))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [i_2] [i_4] [i_4] [i_1 + 1] [i_5]))))) >> (((((var_0) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))) - (15090))))))));
                            arr_15 [i_5] [i_4] [i_5] [i_3] [i_5] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (((!(((/* implicit */_Bool) arr_2 [i_1])))) || (((/* implicit */_Bool) arr_12 [i_1] [i_1 + 1] [i_1] [i_1])))))) == ((-(min((((/* implicit */long long int) var_9)), (var_1)))))));
                            arr_16 [i_1] [i_2] [i_4] [i_5] [i_5] [i_2] [i_5] = ((/* implicit */unsigned long long int) var_8);
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_5] = ((/* implicit */short) 1248354242);
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned short) arr_13 [i_1] [i_4] [i_3] [i_4] [i_6]);
                            arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) 4294967281U);
                        }
                        arr_22 [i_1] = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) (_Bool)1)), (-4803253792133783747LL))), (((((/* implicit */_Bool) min((-4803253792133783727LL), (((/* implicit */long long int) var_0))))) ? (((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */long long int) var_7)) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1])))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (short i_7 = 2; i_7 < 22; i_7 += 4) 
        {
            arr_25 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_8 [i_1] [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_1]))) : (var_3))), (((/* implicit */long long int) max(((short)-20), (((/* implicit */short) (signed char)-32)))))));
            arr_26 [i_1] = ((/* implicit */unsigned short) arr_8 [i_1] [i_1] [i_1]);
            var_15 -= ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) (_Bool)1)))));
        }
    }
    /* LoopSeq 3 */
    for (signed char i_8 = 1; i_8 < 16; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_9 = 1; i_9 < 18; i_9 += 2) 
        {
            for (signed char i_10 = 1; i_10 < 16; i_10 += 2) 
            {
                {
                    arr_35 [i_8] [i_8] [i_10] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */long long int) arr_19 [i_8 - 1])) == (var_3)))), (((((/* implicit */_Bool) var_5)) ? (((arr_13 [i_10] [i_8] [i_10] [i_10] [i_10]) & (((/* implicit */long long int) arr_14 [i_8] [i_8] [i_9] [i_10] [i_10])))) : (-7071725549010255016LL)))));
                    arr_36 [i_10] [i_8] [i_10] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_9] [i_9] [i_10] [i_9])) > (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))), (((((/* implicit */_Bool) arr_8 [i_8] [i_9 + 1] [i_10 + 3])) ? (var_1) : (((/* implicit */long long int) arr_8 [i_9] [i_9 + 1] [i_10 + 3]))))));
                    /* LoopSeq 3 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        arr_39 [i_8] [i_8] [i_10] [i_11] [i_11] [i_8] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_19 [i_8 + 3])) ? (((/* implicit */unsigned int) -352042372)) : (var_8))), (((/* implicit */unsigned int) arr_19 [i_11]))));
                        arr_40 [i_8] [i_10] [i_10] [i_11] [i_8] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)60)) % ((~(1248354261)))));
                        arr_41 [i_8] [i_8] [i_8] [i_8] [(signed char)2] [i_8] |= ((/* implicit */unsigned char) arr_37 [i_8] [(signed char)4] [i_8]);
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_44 [i_8] [i_9] [i_10] [i_12] = ((/* implicit */signed char) (-(((int) (unsigned short)64313))));
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) ((short) var_4))), (arr_18 [i_12] [i_10 + 2] [i_10] [i_10] [i_9 + 1] [i_9] [i_8]))))))));
                        arr_45 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) (((+(((/* implicit */int) ((short) 4294967295U))))) == ((+(((/* implicit */int) (unsigned char)107))))));
                        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_37 [i_12] [i_8] [i_8])) ? (4294967286U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) ((417129512) % (((/* implicit */int) var_6))))))))));
                    }
                    for (long long int i_13 = 0; i_13 < 19; i_13 += 2) 
                    {
                        arr_49 [i_8] [i_10] [i_10] [i_10] [i_8] [i_10] = ((/* implicit */unsigned short) min((-417129510), ((~(min((1248354242), (((/* implicit */int) (signed char)(-127 - 1)))))))));
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_20 [i_9 + 1] [i_9] [i_8 + 1] [i_13] [i_13] [i_10 + 2]))) == (((/* implicit */int) ((((/* implicit */int) arr_43 [i_9] [i_9 - 1] [i_9] [i_9] [i_9])) == (arr_47 [i_9] [i_9] [i_9 + 1] [i_9])))))))));
                    }
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (arr_42 [i_8] [i_8] [i_9] [i_10]))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)42)), (-1589064852)))) == (((17630318626686851137ULL) ^ (((/* implicit */unsigned long long int) -5791492075003822032LL))))))), (2326771019932177960ULL))))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        arr_54 [i_14] = ((/* implicit */_Bool) ((unsigned int) -417129508));
        /* LoopNest 2 */
        for (signed char i_15 = 0; i_15 < 17; i_15 += 1) 
        {
            for (int i_16 = 0; i_16 < 17; i_16 += 4) 
            {
                {
                    arr_61 [i_14] [i_15] [i_16] [i_16] = min((((-5791492075003822028LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) var_6)) ? (arr_13 [i_14] [i_16] [i_15] [i_15] [i_16]) : (7071725549010255015LL))));
                    arr_62 [i_14] = ((/* implicit */unsigned int) (signed char)14);
                }
            } 
        } 
        arr_63 [i_14] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_43 [i_14] [i_14] [i_14] [i_14] [i_14])))) ^ (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_18 = 0; i_18 < 17; i_18 += 3) 
            {
                arr_72 [i_18] [i_14] [i_18] [i_14] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) == (((((/* implicit */_Bool) ((short) arr_70 [i_14] [i_17] [i_18]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_34 [i_18]) : (((/* implicit */int) arr_6 [i_18]))))) : (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) var_4)) : (var_1)))))));
                arr_73 [i_14] [i_14] [i_18] [i_14] = (-((~((~(5791492075003822031LL))))));
                arr_74 [i_14] [i_18] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((1287447810) & (((/* implicit */int) (signed char)-1))))) ? (((((arr_12 [i_17] [i_17] [i_18] [i_18]) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-61))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_18 [i_14] [i_14] [i_14] [i_17] [i_18] [i_18] [i_18]))) : (((/* implicit */unsigned long long int) 0LL))));
                var_21 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_14] [i_17] [i_18])))))) ? (((((/* implicit */_Bool) arr_34 [i_17])) ? (max((((/* implicit */unsigned int) arr_70 [i_14] [i_14] [i_14])), (var_8))) : ((~(var_8))))) : (((((/* implicit */_Bool) (short)2549)) ? (arr_64 [i_14] [i_14] [i_14]) : (arr_64 [i_17] [i_17] [i_17])))));
                arr_75 [i_18] [i_18] [i_17] [i_18] = ((var_4) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_42 [i_14] [i_14] [i_17] [i_18])) ? (((((/* implicit */int) (short)0)) % (969529768))) : (((/* implicit */int) (signed char)-47))))));
            }
            for (short i_19 = 0; i_19 < 17; i_19 += 3) 
            {
                arr_80 [i_14] = ((/* implicit */short) (+(((((/* implicit */unsigned int) arr_47 [i_19] [i_17] [i_14] [i_14])) + (3986812653U)))));
                /* LoopNest 2 */
                for (unsigned short i_20 = 0; i_20 < 17; i_20 += 1) 
                {
                    for (signed char i_21 = 0; i_21 < 17; i_21 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) ((((((/* implicit */int) arr_67 [i_14] [i_17] [i_20])) ^ (((/* implicit */int) arr_55 [i_14] [i_14] [i_20])))) >> (((min((((((/* implicit */_Bool) (short)8072)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)0)))), (((/* implicit */int) (short)0)))) + (41)))));
                            arr_87 [i_21] [i_21] [i_21] [i_20] [i_21] [i_21] [i_21] = ((/* implicit */long long int) arr_33 [i_21] [i_20]);
                            arr_88 [i_20] [i_20] [i_19] [i_17] [i_20] = ((/* implicit */unsigned long long int) var_2);
                        }
                    } 
                } 
                arr_89 [i_14] [i_14] [i_14] = ((/* implicit */long long int) (+(4294967287U)));
                arr_90 [i_14] [i_19] = ((/* implicit */unsigned short) arr_24 [i_14] [i_17]);
            }
            /* LoopNest 2 */
            for (unsigned short i_22 = 0; i_22 < 17; i_22 += 3) 
            {
                for (short i_23 = 0; i_23 < 17; i_23 += 2) 
                {
                    {
                        arr_96 [i_14] [i_17] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((arr_28 [i_14]), (((/* implicit */int) var_5))))) & (((max((arr_82 [i_17]), (var_1))) & (((((/* implicit */_Bool) 7071725549010255010LL)) ? (4803253792133783759LL) : (((/* implicit */long long int) var_7))))))));
                        arr_97 [i_17] [i_17] [i_22] [i_23] = var_9;
                    }
                } 
            } 
        }
    }
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            for (unsigned long long int i_26 = 0; i_26 < 17; i_26 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_27 = 0; i_27 < 17; i_27 += 1) 
                    {
                        for (long long int i_28 = 0; i_28 < 17; i_28 += 3) 
                        {
                            {
                                arr_112 [i_24] [i_24] [i_24] [i_24] [i_24] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)57))))) ? (((/* implicit */unsigned int) ((arr_38 [i_24]) ? (((/* implicit */int) ((unsigned char) 1571982017))) : ((+(((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_111 [i_28] [i_27] [i_26] [i_25] [i_24]))) : (var_7)))));
                                arr_113 [i_24] [i_27] [i_26] [i_25] [i_24] = ((/* implicit */_Bool) 1287447818);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_29 = 1; i_29 < 16; i_29 += 3) 
                    {
                        for (signed char i_30 = 0; i_30 < 17; i_30 += 2) 
                        {
                            {
                                arr_120 [i_30] [i_29] [i_24] [i_24] [i_25] [i_24] = ((/* implicit */unsigned char) 19LL);
                                arr_121 [i_24] [i_24] [i_24] [i_24] [i_24] = ((/* implicit */unsigned char) var_0);
                                var_23 -= ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((1973690150153288098LL) == (((/* implicit */long long int) ((/* implicit */int) var_6))))), ((!(((/* implicit */_Bool) arr_14 [i_24] [i_25] [i_26] [i_29] [i_30]))))))), ((~(var_1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_122 [i_24] = ((/* implicit */_Bool) arr_114 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24]);
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min((var_1), (var_3)))) ? (((-25LL) / (((/* implicit */long long int) ((/* implicit */int) arr_91 [i_24] [i_24]))))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2520572312U)) ? (((/* implicit */int) arr_6 [i_24])) : (((/* implicit */int) arr_29 [16U]))))) ? (arr_48 [10ULL] [i_24] [i_24]) : (var_7)))))))));
        arr_123 [i_24] [i_24] = ((/* implicit */signed char) arr_5 [i_24] [i_24] [i_24]);
        arr_124 [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 712458575159583929LL)) == (arr_105 [i_24] [i_24] [i_24]))) ? (((1843921265U) % (((/* implicit */unsigned int) -1571982005)))) : ((~(802361264U)))))) || (((/* implicit */_Bool) arr_28 [i_24]))));
    }
}
