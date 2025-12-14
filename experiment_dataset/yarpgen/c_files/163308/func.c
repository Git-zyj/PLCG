/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163308
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
    var_20 = ((/* implicit */unsigned int) ((var_12) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)57))) * (var_4)))));
    var_21 = ((/* implicit */long long int) var_1);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (+(((unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 15; i_3 += 4) 
                {
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            arr_15 [i_0] [(short)10] [i_0] [i_3 - 2] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_11))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_1 + 1])) || (((/* implicit */_Bool) arr_11 [i_1] [i_1 + 1] [i_1]))));
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65525))))) ^ (((((/* implicit */long long int) ((/* implicit */int) var_6))) - (var_17))))))));
                            arr_16 [i_0] [(unsigned char)8] [i_2] [i_3 + 2] [i_4] = ((/* implicit */_Bool) (unsigned short)65525);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] = ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_0 [i_1 + 2] [i_0])))) <= (((/* implicit */int) arr_11 [i_0] [i_0] [i_0])));
                            var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)53858)) ? (((/* implicit */int) (unsigned short)14263)) : (((/* implicit */int) (unsigned char)1)))) + (((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */int) (signed char)26)) : (((/* implicit */int) arr_5 [i_0] [i_0]))))));
                            var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_0] [i_2])), (arr_6 [i_0] [i_0] [10ULL] [i_0]))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            var_26 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) (signed char)0)) || (var_6))) ? (((((/* implicit */long long int) ((/* implicit */int) var_11))) * (var_14))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 928162900U)))))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (short)0)) != (((/* implicit */int) arr_19 [i_0] [i_1] [6] [i_3] [i_6]))))) << (((/* implicit */int) ((short) (signed char)12))))))));
                            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) max((((/* implicit */int) (unsigned short)11)), ((+(arr_6 [i_0] [i_2] [(short)0] [(short)0]))))))));
                            arr_23 [i_0] [i_1] [i_2] [i_3 - 1] [i_0] = ((unsigned long long int) (+(((/* implicit */int) (short)0))));
                            arr_24 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65530)) << (((((/* implicit */int) arr_11 [i_0] [i_2] [(unsigned char)5])) - (55)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_11))) << (((((/* implicit */int) max(((unsigned char)108), (((/* implicit */unsigned char) (signed char)0))))) - (82)))))) : ((~(arr_18 [i_0] [i_3 - 1] [i_3] [i_3] [i_3] [i_3 + 1] [i_3])))));
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            var_28 += ((/* implicit */unsigned short) ((unsigned char) arr_10 [12ULL] [i_7] [i_0] [i_3 - 2] [i_3 - 2] [i_3 - 2]));
                            var_29 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(unsigned char)4] [i_7] [i_3 + 1] [10U] [i_3] [8])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) < (3858953443U))))));
                        }
                        arr_27 [i_0] [11ULL] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((_Bool) arr_7 [i_1 - 2]))), (min((((/* implicit */unsigned long long int) var_1)), (max((((/* implicit */unsigned long long int) (unsigned char)214)), (5078596506709384815ULL)))))));
                    }
                } 
            } 
        } 
    }
    for (int i_8 = 1; i_8 < 23; i_8 += 2) 
    {
        var_30 |= ((/* implicit */signed char) min((((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned short)65528)))), (((((/* implicit */int) arr_29 [i_8 - 1])) % (((/* implicit */int) var_7))))));
        arr_30 [i_8] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_28 [i_8 + 1]))));
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            /* LoopSeq 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_38 [20LL] [20LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)91))));
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_31 = ((/* implicit */_Bool) min((var_31), (((_Bool) ((signed char) (signed char)114)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_12 = 1; i_12 < 21; i_12 += 4) 
                    {
                        var_32 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)30)) < (((/* implicit */int) (unsigned char)165))));
                        var_33 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) ((signed char) (unsigned char)137)))));
                    }
                }
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_34 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (281440616972288ULL)));
                arr_46 [i_8] [i_8] = (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)6304)) : (((/* implicit */int) (unsigned short)65525))))));
            }
            /* vectorizable */
            for (unsigned short i_14 = 2; i_14 < 22; i_14 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_15 = 0; i_15 < 24; i_15 += 2) 
                {
                    var_35 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_8 - 1])))))));
                    arr_52 [i_9] [i_15] = ((/* implicit */_Bool) ((var_4) * (((/* implicit */unsigned long long int) arr_50 [i_8] [i_14 + 2] [i_8 - 1]))));
                    arr_53 [i_8 + 1] [i_9] [i_9] [i_9] [i_14] [i_8 + 1] = ((/* implicit */unsigned char) (+(arr_41 [i_8] [i_8 - 1] [i_8 + 1] [i_8])));
                }
                for (int i_16 = 0; i_16 < 24; i_16 += 4) 
                {
                    var_36 = ((/* implicit */unsigned short) ((arr_35 [i_14] [i_14 + 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_54 [i_8] [17ULL] [i_14 + 1] [i_16]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7)))))))));
                    arr_56 [i_16] [i_14] [9ULL] [i_9] [15ULL] [i_8 + 1] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)22))));
                    var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (arr_42 [(unsigned char)15] [(unsigned char)15] [(unsigned char)15]))))));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    arr_60 [i_8] [i_14] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_8] [i_8] [i_8 - 1])) ? (((/* implicit */int) arr_33 [i_8] [i_8] [i_8 + 1])) : (((/* implicit */int) arr_34 [i_8 + 1] [i_8 + 1] [i_8 + 1]))));
                    arr_61 [i_8 - 1] [13] [i_17] [i_17] = ((/* implicit */unsigned short) (+(arr_45 [i_8 - 1])));
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 4; i_18 < 23; i_18 += 1) 
                    {
                        arr_64 [i_18] [(_Bool)1] [i_14] [i_9] [i_9] [(short)1] = ((/* implicit */unsigned int) (_Bool)0);
                        var_38 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_59 [i_8 + 1] [11ULL] [i_8 + 1] [11ULL]))));
                        arr_65 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */int) ((unsigned char) (signed char)-14));
                        var_39 = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164))) : (4294967295U)));
                        arr_66 [(_Bool)1] [i_14] [i_14 + 1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2142237788U)) ? (arr_62 [i_8] [1] [i_8] [1] [i_8 - 1] [i_18 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_14 + 2])))));
                    }
                    var_40 = (~(((/* implicit */int) var_18)));
                    var_41 -= ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-50))));
                }
                /* LoopSeq 3 */
                for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                {
                    var_42 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_8 + 1])) ? (2142237788U) : (arr_31 [i_8 + 1])));
                    arr_70 [i_19] [3] [(unsigned char)1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)22))));
                    var_43 ^= ((/* implicit */unsigned int) var_8);
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    var_44 = ((unsigned char) ((unsigned int) (short)-31267));
                    arr_74 [i_8] [7U] [i_14] [i_20] = ((/* implicit */_Bool) (+(((unsigned long long int) arr_33 [i_8 + 1] [i_9] [i_9]))));
                    arr_75 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20] = ((unsigned char) arr_43 [(unsigned short)14] [i_8 + 1] [i_8] [i_8 + 1] [(unsigned short)14]);
                }
                for (int i_21 = 0; i_21 < 24; i_21 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_45 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_18))) >> (((((/* implicit */int) (signed char)121)) - (115)))));
                        var_46 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_58 [i_8 - 1] [i_9] [i_14 - 1] [(_Bool)1] [i_14] [i_14 - 1]))));
                        arr_80 [i_8 - 1] [i_8 - 1] [i_8] [i_8 + 1] [i_8 + 1] = ((/* implicit */unsigned long long int) (!(arr_29 [i_8 + 1])));
                    }
                    var_47 = ((((/* implicit */_Bool) arr_73 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_14 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_9]))) <= (0ULL))))) : (arr_31 [i_8 - 1]));
                    /* LoopSeq 1 */
                    for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                    {
                        var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_8 - 1] [i_8 - 1]))) <= (534579576U)))) : (((/* implicit */int) (signed char)0)))))));
                        arr_83 [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_67 [i_14 - 1] [i_23 - 1] [(_Bool)1] [i_14 - 1])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) : (arr_36 [i_8 + 1] [i_9])));
                        var_49 = (unsigned char)21;
                    }
                }
            }
            arr_84 [i_8] [i_8] = ((/* implicit */unsigned int) max((((/* implicit */int) max(((unsigned short)35101), (((/* implicit */unsigned short) arr_48 [i_8 - 1]))))), (((((/* implicit */int) arr_48 [i_8 + 1])) + (((/* implicit */int) (signed char)-116))))));
        }
    }
    var_50 = ((/* implicit */unsigned char) var_16);
    var_51 -= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((((/* implicit */int) var_11)) & (((/* implicit */int) var_8)))) > ((+(((/* implicit */int) (short)32767)))))))));
}
