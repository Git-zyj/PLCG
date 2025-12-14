/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101793
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) max((((/* implicit */long long int) arr_2 [9U] [i_0] [i_1])), (arr_0 [i_0]))))) ? (8207370165227490428ULL) : (((/* implicit */unsigned long long int) ((long long int) (~(0U)))))));
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */long long int) var_6)) >= ((-(arr_0 [i_0]))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_4 = 1; i_4 < 8; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        {
                            var_16 -= ((/* implicit */unsigned short) ((max(((-(338704144U))), (0U))) + (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [7U])))))))))));
                            arr_19 [i_6] [i_6] [i_2] [i_6] [i_2] |= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned int) 4294967293U))) ? (1306918253U) : (((/* implicit */unsigned int) ((int) arr_14 [i_6] [i_3 + 1] [i_3] [i_3 - 1]))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(signed char)8] [i_6] [i_4] [i_5] [i_6] [i_4])))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_7 = 2; i_7 < 8; i_7 += 2) 
                {
                    var_17 = ((/* implicit */int) (_Bool)0);
                    var_18 = ((_Bool) arr_13 [i_7 + 2] [i_2] [1] [i_7 + 2] [i_7 + 1] [i_7]);
                }
                var_19 *= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_17 [i_2 - 1] [(unsigned char)6] [i_4 + 2] [i_3 + 1] [i_2 - 1] [i_2 - 1])) > (((/* implicit */int) arr_17 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2])))))));
                /* LoopSeq 2 */
                for (int i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)249))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))) : ((+(3444543040322195148ULL)))));
                    arr_26 [i_8] [i_2] [i_8] [i_8] [i_8] [i_8] = (~(max(((-(var_3))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_8] [(unsigned short)8] [i_3])) ? (((/* implicit */int) arr_16 [i_3 + 1] [i_4 + 2] [i_4] [i_3] [i_3 + 1] [i_2 - 1])) : (var_0)))))));
                    var_21 = ((/* implicit */short) var_9);
                }
                for (int i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        var_22 = ((/* implicit */long long int) (+(max((((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2])), (var_1)))));
                        var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) >= (arr_15 [i_3 - 1] [i_4] [i_3 - 1]))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        var_24 = (unsigned char)224;
                        var_25 = ((/* implicit */unsigned int) var_7);
                    }
                    /* LoopSeq 3 */
                    for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) max((3386805829U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 0U)), (-4671294736023835223LL)))) ? (((/* implicit */int) (unsigned short)49514)) : (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)31)), ((unsigned short)65535))))))))))));
                        arr_38 [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_2]))));
                        var_27 *= ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (-(0U)))), (arr_28 [i_2 - 1] [i_3 + 1] [i_4 - 1] [i_9]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_30 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]), (arr_30 [i_2] [i_3 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1])))))));
                        arr_39 [i_12] [i_2] [i_9] [i_4 + 1] [i_2] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
                    {
                        arr_42 [i_2 - 1] [i_2 - 1] [i_13] [i_13] [i_2 - 1] [i_2 - 1] &= ((/* implicit */unsigned short) 3120288482U);
                        var_28 = ((/* implicit */int) ((unsigned long long int) (unsigned char)84));
                        arr_43 [i_9] |= ((/* implicit */long long int) max((max((arr_11 [i_2 - 1] [i_3 - 1]), (((/* implicit */unsigned int) (unsigned short)64818)))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_14 [i_9] [i_4 - 1] [i_9] [i_9])))))));
                    }
                    for (unsigned char i_14 = 0; i_14 < 10; i_14 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */_Bool) (((~((+(((/* implicit */int) (unsigned short)17649)))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 262077426U)))))));
                        var_30 -= (_Bool)1;
                        var_31 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_44 [i_14] [i_9] [i_4 + 2] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1])) & (arr_33 [i_2] [i_14] [i_3 - 1] [i_2 - 1] [i_2]))) >= (((/* implicit */int) ((_Bool) arr_17 [i_14] [i_2 - 1] [i_4] [i_3] [i_2 - 1] [i_2 - 1])))));
                        arr_47 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [(_Bool)1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2988049043U))));
                    }
                    var_32 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (signed char)23)), (7905253155414628515LL)));
                    var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) var_8))));
                }
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 10; i_15 += 3) 
                {
                    for (long long int i_16 = 3; i_16 < 9; i_16 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */signed char) (~(arr_45 [i_2 - 1] [i_3 - 1] [i_4 + 1] [i_3 - 1] [2LL])));
                            arr_54 [i_2] [i_3 + 1] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_41 [i_2 - 1] [i_2 - 1] [i_4] [i_2 - 1] [i_2 - 1])))), (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) ((((/* implicit */int) arr_41 [(_Bool)1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_2])) == (arr_33 [i_2] [i_3] [i_3] [i_15] [i_15])))))))));
                            var_35 = ((/* implicit */long long int) arr_52 [i_3 - 1] [i_3] [i_3] [i_15]);
                            var_36 |= ((/* implicit */signed char) arr_28 [i_3 - 1] [i_3 - 1] [i_15] [i_3 - 1]);
                        }
                    } 
                } 
            }
            for (unsigned int i_17 = 3; i_17 < 7; i_17 += 3) 
            {
                var_37 = ((/* implicit */unsigned int) (unsigned short)63488);
                arr_59 [i_2] [i_3 - 1] [i_17 - 3] = max((((/* implicit */long long int) (+(((((/* implicit */_Bool) -1135120257)) ? (((/* implicit */int) arr_29 [i_2] [5U] [i_17] [i_3 + 1])) : (var_10)))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (arr_49 [i_2] [i_17]))));
            }
            /* LoopNest 2 */
            for (unsigned short i_18 = 3; i_18 < 8; i_18 += 2) 
            {
                for (unsigned int i_19 = 0; i_19 < 10; i_19 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_20 = 0; i_20 < 10; i_20 += 4) /* same iter space */
                        {
                            var_38 *= ((/* implicit */unsigned int) arr_61 [i_18 - 2] [i_18]);
                            var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) max((((((/* implicit */int) arr_3 [i_3 + 1] [i_2 - 1])) ^ (((/* implicit */int) arr_3 [i_3 + 1] [i_2 - 1])))), (((/* implicit */int) (signed char)56)))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_21 = 0; i_21 < 10; i_21 += 4) /* same iter space */
                        {
                            var_40 |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_36 [i_18 + 1] [i_18 - 2] [i_3 - 1] [i_2 - 1])) * (((/* implicit */int) (_Bool)1))));
                            arr_72 [i_2] [i_2 - 1] [i_3 + 1] [i_2 - 1] [i_2] [9ULL] [i_21] = ((/* implicit */_Bool) (-(var_0)));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_22 = 0; i_22 < 10; i_22 += 2) 
                        {
                            arr_75 [i_22] [i_2] [i_22] [i_22] [i_22] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 908161467U))))), (max((((/* implicit */unsigned long long int) arr_46 [i_18 - 3] [i_2] [i_3 - 1] [i_2] [i_2 - 1])), (arr_15 [i_2] [i_2] [i_18 - 1])))));
                            var_41 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_62 [i_3] [i_19] [i_2])) == (((/* implicit */int) (unsigned short)0)))))) > ((((+(0U))) * (((4294967290U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)34)))))))));
                            var_42 = max((((/* implicit */unsigned int) arr_3 [i_18] [(unsigned short)7])), (max((4294967290U), (((/* implicit */unsigned int) (-(var_0)))))));
                            var_43 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_37 [i_22] [i_19] [i_18 - 3] [i_3] [i_2] [i_2 - 1] [i_2]))));
                        }
                        /* vectorizable */
                        for (unsigned int i_23 = 0; i_23 < 10; i_23 += 3) 
                        {
                            var_44 = ((_Bool) arr_15 [i_18 - 3] [i_2 - 1] [i_3 + 1]);
                            var_45 = ((((/* implicit */_Bool) 1306918227U)) ? (((/* implicit */int) arr_51 [i_2 - 1] [i_2 - 1] [i_2] [i_2])) : (((/* implicit */int) arr_27 [i_2] [i_2])));
                            var_46 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-2865)) ? (((/* implicit */int) arr_1 [i_2 - 1])) : (((/* implicit */int) (unsigned short)57914))));
                        }
                        arr_80 [i_2] [i_19] [i_18 - 2] [(unsigned short)7] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) max((var_13), (((/* implicit */unsigned short) (signed char)45)))))));
                    }
                } 
            } 
            arr_81 [(_Bool)1] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */unsigned int) (signed char)-46)), (((((/* implicit */_Bool) arr_12 [i_2] [i_2 - 1] [i_2 - 1] [i_3 - 1])) ? (((/* implicit */unsigned int) arr_33 [i_2] [i_2 - 1] [i_2] [i_3 + 1] [i_2 - 1])) : (arr_45 [i_2] [i_2] [i_2] [i_2] [i_3]))))));
        }
        var_47 -= ((/* implicit */_Bool) (-(max((2988049035U), (3035917936U)))));
        var_48 += ((/* implicit */_Bool) max((((/* implicit */int) arr_60 [i_2 - 1] [i_2] [8U])), (((((/* implicit */int) arr_73 [i_2 - 1] [i_2] [i_2 - 1] [(unsigned char)6] [(unsigned char)6] [(unsigned char)6])) - (((/* implicit */int) arr_73 [i_2 - 1] [i_2 - 1] [i_2 - 1] [(unsigned short)2] [(unsigned short)2] [i_2 - 1]))))));
        /* LoopNest 3 */
        for (signed char i_24 = 1; i_24 < 8; i_24 += 2) 
        {
            for (unsigned int i_25 = 0; i_25 < 10; i_25 += 3) 
            {
                for (unsigned short i_26 = 1; i_26 < 6; i_26 += 2) 
                {
                    {
                        var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)98)) ? ((~(arr_33 [i_2] [i_24 - 1] [i_25] [i_26] [i_2 - 1]))) : (234881024)));
                        arr_89 [i_2 - 1] [i_24 - 1] [i_2] [7LL] = ((/* implicit */long long int) (-(((unsigned int) max((((/* implicit */unsigned int) (unsigned short)31)), (4074531013U))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_27 = 1; i_27 < 9; i_27 += 3) 
    {
        arr_94 [i_27] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-31))))) ? (((/* implicit */int) (_Bool)1)) : ((+(((/* implicit */int) arr_91 [(unsigned char)8]))))))));
        /* LoopNest 3 */
        for (signed char i_28 = 1; i_28 < 10; i_28 += 4) 
        {
            for (long long int i_29 = 2; i_29 < 10; i_29 += 2) 
            {
                for (unsigned int i_30 = 2; i_30 < 10; i_30 += 3) 
                {
                    {
                        var_50 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_10)), (arr_98 [i_27 - 1] [i_28 - 1] [i_27] [i_30 - 1]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (max((((/* implicit */signed char) (_Bool)0)), ((signed char)31)))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_31 = 1; i_31 < 1; i_31 += 1) 
                        {
                            var_51 = ((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) arr_102 [i_27] [i_27 + 1])))));
                            var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */unsigned long long int) (+(var_6)))) : (((unsigned long long int) (_Bool)1)))))));
                            var_53 *= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_102 [i_29] [i_29]))) + (-2123541558091785905LL))));
                            var_54 = ((((/* implicit */_Bool) max((arr_98 [i_29 - 1] [i_27] [i_27] [i_29 - 1]), (((/* implicit */unsigned int) arr_99 [i_27] [i_30 + 1] [i_27]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_11), (908161450U)))) ? (((((/* implicit */_Bool) var_12)) ? (513139481U) : (1549993695U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18582))))))))) : (((((/* implicit */_Bool) arr_103 [i_27 + 2] [i_28 - 1] [i_29 - 2] [i_29 + 1] [i_30 - 1])) ? (((/* implicit */unsigned long long int) (~(2147483647)))) : (max((arr_106 [i_27]), (((/* implicit */unsigned long long int) (unsigned short)2063)))))));
                        }
                        for (unsigned int i_32 = 0; i_32 < 11; i_32 += 2) 
                        {
                            var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) arr_90 [i_32]))));
                            arr_110 [i_27 - 1] [i_28] [i_28] [i_28] [i_27] = ((/* implicit */unsigned short) 908161466U);
                        }
                    }
                } 
            } 
        } 
        var_56 = ((/* implicit */long long int) max((max(((_Bool)1), ((_Bool)1))), ((!((_Bool)1)))));
        arr_111 [0U] |= (~(max((((/* implicit */unsigned int) arr_1 [1U])), (((unsigned int) (unsigned short)65535)))));
    }
    var_57 = ((/* implicit */unsigned char) ((908161451U) != (((/* implicit */unsigned int) 2147483647))));
    var_58 = (-(((((/* implicit */_Bool) (+(var_12)))) ? (908161468U) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_11))))));
}
