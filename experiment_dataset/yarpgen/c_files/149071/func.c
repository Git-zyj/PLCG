/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149071
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_0 [i_0])) ? (var_11) : (((/* implicit */long long int) arr_1 [i_0])))) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-86)))))));
        var_16 -= ((/* implicit */unsigned short) (!(((arr_0 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_2 = 1; i_2 < 9; i_2 += 4) /* same iter space */
        {
            var_17 |= ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (short)9381)) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) (signed char)-40))))));
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_6))));
                var_19 -= ((/* implicit */long long int) (short)13383);
                var_20 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_1 + 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_4 [7LL] [(unsigned char)0]))))) ? (((((/* implicit */_Bool) (unsigned short)36385)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29019))) : (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((unsigned int) var_3)))));
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((long long int) var_1)))));
                        var_23 -= ((/* implicit */unsigned long long int) arr_9 [i_1 + 1] [i_4]);
                        var_24 -= ((unsigned int) ((long long int) var_1));
                        var_25 -= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_11 [9U] [i_2 + 3] [i_2] [i_2] [6LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-83))) : (var_1))));
                    }
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) / ((-(((/* implicit */int) (signed char)85)))))))));
                        var_27 |= ((/* implicit */unsigned short) var_10);
                        var_28 |= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)480)) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)103))))));
                        var_29 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (arr_3 [i_1 + 1]) : (arr_3 [i_1 + 1])));
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1])))))));
                    }
                    var_31 -= ((/* implicit */_Bool) (short)486);
                    arr_17 [(unsigned short)9] [(unsigned short)9] = (!(((/* implicit */_Bool) var_13)));
                }
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [(short)10] [i_7])) <= (((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-61))) == (-21LL))))))))));
                        var_33 -= ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)65521)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_20 [i_1] [i_1] [i_3] [2LL] [i_8] [i_3]) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) -1)))))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) 21LL)))))))));
                        arr_23 [i_7] [i_2] [(unsigned char)8] [i_2] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_7] [i_7] [i_3] [i_7])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (short)-483)) : (((/* implicit */int) var_2)))))))) : (1048575)));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        var_34 -= ((/* implicit */signed char) ((((/* implicit */_Bool) -1048575)) ? (4611986964986538800LL) : (-1LL)));
                        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((562949953290240ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)62))))))));
                    }
                    arr_26 [i_7] [i_2] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((0LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_3] [i_1 + 1] [i_1] [(signed char)5] [(signed char)5])))))) ? (((int) arr_15 [i_1 + 1] [i_2 + 3] [i_2 + 3] [i_2 + 3] [7ULL])) : ((~((~(((/* implicit */int) (signed char)81))))))));
                }
                /* vectorizable */
                for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    var_36 = ((/* implicit */unsigned int) min((var_36), (((unsigned int) arr_27 [7LL] [i_3] [i_2 + 3] [i_1]))));
                    arr_29 [i_1] [i_10] [i_10] [i_10] [i_10] = (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (2U)))));
                }
                /* vectorizable */
                for (short i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    arr_33 [(unsigned short)0] [(unsigned short)0] |= ((/* implicit */unsigned int) (!((_Bool)1)));
                    var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */long long int) ((/* implicit */int) (short)480))) : (var_11))) : (((/* implicit */long long int) (+(((/* implicit */int) var_14)))))));
                    var_38 -= ((/* implicit */long long int) ((unsigned int) var_12));
                    arr_34 [i_11] [(short)5] [i_3] [i_2] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) arr_13 [i_1] [(signed char)8] [i_3]))));
                }
            }
            for (int i_12 = 2; i_12 < 9; i_12 += 2) 
            {
                arr_39 [i_1] [i_1] [i_12] [(unsigned short)6] |= ((/* implicit */unsigned int) (_Bool)1);
                var_39 -= ((/* implicit */unsigned long long int) (!((((+(var_1))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_2 - 1] [i_1]))))))))));
            }
            for (long long int i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                arr_43 [i_13] [i_13] [6] [i_13] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) -8439972679840657251LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (281466386776064LL)))));
                /* LoopNest 2 */
                for (unsigned short i_14 = 3; i_14 < 8; i_14 += 3) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((-1LL) % (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [(short)6] [i_13] [1] [i_15]))))))));
                            arr_49 [i_14 + 2] [(signed char)8] [(unsigned char)1] [i_15] [i_15] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) -16LL)) ? (((((/* implicit */_Bool) arr_11 [i_1] [i_2 + 3] [i_2 + 3] [i_2 + 3] [i_15])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_8)))) : ((-(((/* implicit */int) (unsigned short)0)))))), (((/* implicit */int) (unsigned short)65535))));
                            arr_50 [i_15] [i_15] [i_15] [i_15] [0] |= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3645))) | (((((/* implicit */_Bool) arr_0 [i_13])) ? (((/* implicit */long long int) -1)) : (var_9))))));
                            var_41 = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((int) var_11))), (arr_44 [i_14 + 3] [7LL] [(signed char)11] [i_14 + 3] [i_14] [(signed char)9])))) ? (((/* implicit */int) (short)2032)) : ((-(((/* implicit */int) ((unsigned char) (unsigned short)10257))))));
                            arr_51 [i_1] [i_1] [i_13] [i_15] [i_15] = ((/* implicit */unsigned long long int) min((min((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_15] [11LL]))) : (var_1))), (((/* implicit */unsigned int) ((unsigned short) var_1))))), (((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) (unsigned char)30))))))));
                        }
                    } 
                } 
                arr_52 [8U] [(unsigned char)5] |= ((/* implicit */unsigned int) arr_44 [7] [7] [7] [i_13] [i_13] [i_13]);
                var_42 = ((/* implicit */unsigned int) var_12);
                var_43 -= ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_40 [i_1 + 1])))), ((~(((/* implicit */int) arr_40 [i_1 + 1]))))));
            }
            arr_53 [i_2 + 2] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((arr_4 [i_1] [8U]), (var_13)))) || (arr_40 [i_1]))) && (((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0)))))));
        }
        for (unsigned char i_16 = 1; i_16 < 9; i_16 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_17 = 0; i_17 < 12; i_17 += 1) 
            {
                for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                {
                    for (int i_19 = 4; i_19 < 10; i_19 += 2) 
                    {
                        {
                            arr_64 [i_1] [i_1] [8U] [i_18] [i_18] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)24259)) : (((/* implicit */int) arr_15 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_18] [(_Bool)1]))))) != (((((/* implicit */_Bool) var_1)) ? (1630651761873134047LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))))))))));
                            var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) max((((/* implicit */long long int) (((!(((/* implicit */_Bool) 709631818U)))) ? ((-(((/* implicit */int) (unsigned char)2)))) : (min((((/* implicit */int) (_Bool)1)), (-570952940)))))), (min((((((/* implicit */_Bool) arr_35 [i_1 + 1] [i_18] [i_1 + 1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_16 + 2] [6LL]))))), (((/* implicit */long long int) arr_1 [i_18 - 1])))))))));
                            var_45 -= ((/* implicit */long long int) (-(min((((/* implicit */int) arr_40 [i_19 - 1])), (arr_46 [i_1] [i_16] [i_17] [i_18])))));
                            var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)225))))) / (((((/* implicit */_Bool) 18101243549836627964ULL)) ? (7207927258990724253ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))))));
                            var_47 -= ((/* implicit */short) ((signed char) 4294967295U));
                        }
                    } 
                } 
            } 
            var_48 = ((/* implicit */signed char) max((var_48), (var_14)));
        }
        for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
        {
            arr_67 [i_20] [i_1] [(unsigned char)10] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_60 [i_1 + 1] [i_1] [i_20] [i_20])) ? (max((((/* implicit */unsigned long long int) (~(9223372036854775777LL)))), (((unsigned long long int) (short)7664)))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)32767)), (1899084931U))))));
            var_49 = ((/* implicit */unsigned int) min((var_49), ((~(max((((/* implicit */unsigned int) max(((unsigned char)252), (((/* implicit */unsigned char) var_2))))), (((unsigned int) 504403158265495552LL))))))));
            /* LoopNest 3 */
            for (short i_21 = 0; i_21 < 12; i_21 += 2) 
            {
                for (long long int i_22 = 0; i_22 < 12; i_22 += 3) 
                {
                    for (unsigned int i_23 = 0; i_23 < 12; i_23 += 3) 
                    {
                        {
                            var_50 -= ((/* implicit */unsigned short) ((short) (_Bool)0));
                            arr_77 [i_1] [(unsigned short)8] [i_21] [i_22] [i_23] = ((/* implicit */_Bool) ((unsigned short) (~(((arr_22 [i_1] [i_1] [i_1] [i_22] [6U]) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_20] [i_20]))) : (-5763174754539687093LL))))));
                            var_51 -= ((/* implicit */short) (~((~(((/* implicit */int) ((unsigned char) arr_42 [i_22])))))));
                            var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) ((signed char) ((short) var_12))))));
                        }
                    } 
                } 
            } 
            var_53 = ((/* implicit */unsigned int) min((var_53), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 3296138306U)) ? (((/* implicit */int) ((short) 504403158265495570LL))) : (((((/* implicit */_Bool) arr_14 [5LL] [5LL] [i_1] [i_1 + 1] [i_1 + 1] [i_20 + 1] [i_1 + 1])) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) var_5))))))))));
        }
        for (long long int i_24 = 0; i_24 < 12; i_24 += 2) 
        {
            var_54 = ((/* implicit */int) min((var_54), (((((/* implicit */_Bool) 2395882350U)) ? (((/* implicit */int) (unsigned char)225)) : (((/* implicit */int) (unsigned short)56912))))));
            var_55 |= ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)227)))))) <= (((var_7) ? (arr_35 [(unsigned short)3] [i_24] [i_24]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
        }
        var_56 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)8))));
    }
    var_57 -= ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_5))))))));
    var_58 -= ((/* implicit */unsigned short) ((var_8) ? (((/* implicit */long long int) max((((/* implicit */int) ((var_10) >= (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), ((+(((/* implicit */int) var_4))))))) : (-21LL)));
}
