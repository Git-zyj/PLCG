/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158475
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
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_11 = ((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0]))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */short) (unsigned char)63)), (var_2))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 4) /* same iter space */
                    {
                        var_13 = ((/* implicit */_Bool) min((((/* implicit */int) max((arr_7 [i_0] [i_0]), (arr_7 [i_2] [i_3])))), ((-(((/* implicit */int) arr_1 [i_1]))))));
                        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1]))));
                        var_15 = ((/* implicit */long long int) (unsigned char)122);
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
                    {
                        arr_12 [i_0] [(unsigned short)2] [i_2] [i_4] [i_1] [i_2] = ((/* implicit */unsigned char) ((((_Bool) arr_1 [(_Bool)1])) ? (((((/* implicit */_Bool) (unsigned short)33856)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(_Bool)1] [i_1]))) : (3133074794U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)45329)) >> (((((/* implicit */int) (unsigned short)39282)) - (39278))))))));
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -4872912162232614912LL)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)114))))) : (arr_11 [i_1] [i_1] [(short)6])));
                        var_17 = ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_4]);
                        arr_13 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */short) ((int) arr_8 [i_0] [i_2]));
                    }
                }
            } 
        } 
        var_18 = ((/* implicit */int) ((min((((/* implicit */long long int) (+(((/* implicit */int) arr_7 [3] [i_0]))))), ((+(4872912162232614901LL))))) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
        var_19 = ((/* implicit */long long int) 1161892502U);
        arr_14 [i_0] = ((/* implicit */_Bool) var_5);
    }
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_20 = ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) (!(arr_10 [i_6] [i_6] [i_6] [i_6] [i_5] [i_5]))))) + (max((arr_17 [i_6] [i_5] [(_Bool)1]), (((/* implicit */long long int) var_8))))))));
            arr_21 [i_5] = ((/* implicit */_Bool) min((((var_3) ? (arr_16 [i_5]) : (arr_16 [i_6]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))));
            var_21 = (_Bool)1;
        }
        for (long long int i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (arr_11 [i_5] [i_5] [i_7])))) ? (arr_11 [i_5] [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_5] [5LL])))))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_19 [i_5] [i_7] [i_7])) >= (((/* implicit */int) arr_10 [i_5] [i_7] [i_7] [i_7] [i_7] [i_7]))))))));
            var_23 = ((/* implicit */short) max((var_23), (max((min((arr_4 [i_7]), (var_0))), (arr_4 [i_7])))));
            arr_26 [i_5] [i_7] [3LL] = ((/* implicit */int) (_Bool)1);
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_4), (max((((/* implicit */short) (_Bool)1)), ((short)14014)))))) ? (((/* implicit */long long int) max((112987014U), (min((arr_8 [i_5] [i_7]), (((/* implicit */unsigned int) (unsigned char)142))))))) : (((((/* implicit */_Bool) (unsigned short)31680)) ? (-4872912162232614912LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            var_25 = ((/* implicit */unsigned short) min(((~((~(((/* implicit */int) arr_9 [i_5] [i_5] [2U] [2U])))))), (((/* implicit */int) arr_6 [6] [i_7] [15U]))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_8 = 1; i_8 < 8; i_8 += 4) 
        {
            var_26 = ((-121667256) - (((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) var_8)))));
            arr_29 [i_5] [i_5] = ((/* implicit */_Bool) (+(2970152559U)));
            /* LoopSeq 1 */
            for (long long int i_9 = 2; i_9 < 8; i_9 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    var_27 = ((/* implicit */long long int) ((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                    /* LoopSeq 2 */
                    for (long long int i_11 = 3; i_11 < 9; i_11 += 3) 
                    {
                        arr_38 [i_5] [i_5] [i_9 - 1] [i_10] [i_11] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_11 + 2] [i_11 - 3] [i_11]))))));
                        arr_39 [i_5] [i_5] [(_Bool)1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_9 - 1] [i_9 - 2]))));
                        var_28 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [i_11 - 2] [i_9 + 1]))));
                        var_29 = ((/* implicit */_Bool) ((((var_10) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)20200)) - (20196)))));
                    }
                    for (long long int i_12 = 2; i_12 < 8; i_12 += 3) 
                    {
                        var_30 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_36 [8LL] [i_8] [i_9])) ? (((/* implicit */int) arr_35 [i_5] [i_8] [i_9 + 3])) : (((/* implicit */int) (unsigned char)110)))) | (var_7)));
                        var_31 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_32 [i_9 - 1] [i_10] [i_12 + 2] [i_12]))));
                    }
                }
                var_32 = ((((/* implicit */long long int) ((/* implicit */int) var_5))) == (-926133000277270604LL));
                /* LoopSeq 1 */
                for (unsigned int i_13 = 0; i_13 < 11; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        var_33 = ((/* implicit */long long int) (+(((/* implicit */int) arr_45 [i_8 + 3] [i_8 + 3] [i_14] [i_5]))));
                        var_34 = ((/* implicit */short) ((int) ((var_3) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))));
                        var_35 += (!(((/* implicit */_Bool) 3568257575U)));
                    }
                    var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (-7718329060896591149LL))))));
                }
            }
        }
        for (unsigned int i_15 = 0; i_15 < 11; i_15 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_37 = ((/* implicit */unsigned short) var_8);
                arr_56 [i_15] [i_5] = (((!(((/* implicit */_Bool) -4641469147293009112LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_34 [i_5] [i_16] [i_16] [i_5] [i_16]));
                /* LoopNest 2 */
                for (short i_17 = 2; i_17 < 9; i_17 += 1) 
                {
                    for (long long int i_18 = 3; i_18 < 10; i_18 += 1) 
                    {
                        {
                            arr_62 [i_5] [i_15] [i_16] [i_17] [(_Bool)1] [i_5] = ((/* implicit */short) max((arr_36 [i_5] [(short)9] [i_17 - 2]), (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((((/* implicit */_Bool) arr_59 [i_5] [i_5])) ? (((/* implicit */int) arr_49 [i_5] [i_15] [i_16] [i_17 + 1] [i_18])) : (((/* implicit */int) (unsigned short)43022)))) : ((-(((/* implicit */int) var_0)))))))));
                            arr_63 [i_5] [i_15] [i_5] [i_16] [i_5] [i_5] [i_18] = ((/* implicit */_Bool) max((min((var_9), (((/* implicit */long long int) arr_32 [i_5] [i_5] [i_17 - 2] [i_17])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_43 [i_5] [i_17 + 2] [i_18] [i_18 + 1])))))));
                            var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_17 + 2] [i_17 - 1] [i_17] [i_17 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) + (arr_11 [i_5] [i_15] [i_16])))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)15203))) : (((/* implicit */int) ((unsigned short) arr_53 [i_5] [i_15] [i_16] [i_17 - 1]))))))));
                            arr_64 [i_5] [i_5] [i_16] [i_17 + 2] [(_Bool)1] [i_18 - 3] = ((/* implicit */int) ((((((/* implicit */long long int) 4294967295U)) ^ (arr_36 [(unsigned short)10] [i_15] [(unsigned short)10]))) % ((-(arr_36 [i_5] [i_15] [i_16])))));
                        }
                    } 
                } 
            }
            var_39 = ((/* implicit */short) max((var_39), (var_2)));
        }
        arr_65 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_5] [(unsigned short)9])) || (((/* implicit */_Bool) arr_18 [i_5] [i_5]))))), (max((((/* implicit */long long int) var_0)), (var_9)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_1 [i_5]) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5] [i_5]))) : (arr_44 [i_5] [i_5]))))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_5] [i_5] [i_5] [i_5])))))))));
    }
    var_40 = ((/* implicit */long long int) (-(0U)));
    var_41 &= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 1U)) ? ((+(var_9))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) min((((((/* implicit */int) var_5)) < (((/* implicit */int) var_8)))), ((!(((/* implicit */_Bool) -4641469147293009086LL))))))))));
    var_42 = ((/* implicit */long long int) (_Bool)1);
    var_43 = var_2;
}
