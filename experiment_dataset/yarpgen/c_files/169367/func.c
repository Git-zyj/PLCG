/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169367
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) max((((max((((/* implicit */unsigned long long int) var_1)), (arr_1 [i_0]))) >> (((arr_2 [i_0 - 2]) - (4024473394616853328LL))))), (max((((/* implicit */unsigned long long int) 405444764U)), (arr_1 [i_0 + 1])))));
        var_20 = ((/* implicit */long long int) min((var_20), ((-(((((/* implicit */_Bool) ((16655899556024731692ULL) << (((2110616213) - (2110616154)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_15))) / ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)17987)))))))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_1 [i_0 - 2]))) <= (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned long long int) arr_0 [i_0])))))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47562))) != (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */unsigned long long int) arr_0 [i_0 - 1])) : (arr_1 [i_0 - 2])))));
    }
    for (signed char i_1 = 4; i_1 < 20; i_1 += 4) 
    {
        var_23 = ((/* implicit */unsigned int) arr_3 [i_1 - 4] [i_1]);
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            for (int i_3 = 2; i_3 < 18; i_3 += 3) 
            {
                for (int i_4 = 4; i_4 < 18; i_4 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_5 = 3; i_5 < 20; i_5 += 3) 
                        {
                            arr_14 [i_5] [i_2] [(short)13] [i_5 - 1] [i_5 - 3] [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) max((var_13), (((/* implicit */unsigned short) arr_8 [i_1 - 1] [i_1 - 1] [i_4]))))))) & ((~(((var_16) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [i_3] [i_2]))))))));
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)-21234)))));
                            var_25 = ((/* implicit */signed char) var_4);
                        }
                        var_26 = ((/* implicit */signed char) (!(((((((/* implicit */int) (short)21238)) / (((/* implicit */int) var_12)))) > (((/* implicit */int) arr_5 [i_1] [14] [i_1]))))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) arr_7 [i_1 - 4]))));
        /* LoopSeq 1 */
        for (unsigned short i_6 = 2; i_6 < 20; i_6 += 3) 
        {
            var_28 = ((/* implicit */short) var_8);
            /* LoopNest 3 */
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                for (signed char i_8 = 1; i_8 < 17; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) (_Bool)1);
                            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) 9223372036854775807LL))));
                            arr_24 [i_8 + 2] [i_6] [i_6] [i_8] [9] = ((/* implicit */int) max((min((((unsigned long long int) arr_3 [i_8 + 4] [(unsigned short)10])), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) % (3100528962U)))))), (((/* implicit */unsigned long long int) var_17))));
                            var_31 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) arr_3 [i_1] [(unsigned short)6]))))) >> (((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [i_7] [i_7] [i_8] [(signed char)17])) : (var_18))) - (1876355319ULL)))))), (max((var_3), (((/* implicit */long long int) arr_13 [i_1] [i_6] [i_6] [i_8 - 1] [i_9] [18LL]))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 4) /* same iter space */
    {
        arr_27 [i_10] = ((((/* implicit */_Bool) arr_6 [(signed char)6] [i_10])) && (((((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)52))) : (9223372036854775807LL))) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
        var_32 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((unsigned char) (~(((/* implicit */int) var_9)))))), (arr_18 [i_10] [i_10] [i_10])));
        /* LoopSeq 1 */
        for (unsigned short i_11 = 2; i_11 < 17; i_11 += 3) 
        {
            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_10])) ? ((((~(((/* implicit */int) var_6)))) & ((~(((/* implicit */int) arr_5 [i_10] [i_10] [i_10])))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)52051))))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) min((((/* implicit */short) arr_8 [i_10] [i_11] [(unsigned char)2])), (var_12))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 4) 
            {
                var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_20 [i_10] [i_11] [i_12] [i_12]) : (arr_20 [i_12] [i_12] [(signed char)8] [i_10])))) ? (arr_33 [i_10] [i_10] [i_10] [(short)18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_10] [i_11 - 1] [i_11 + 2])))))) ? (((arr_9 [i_10] [i_10] [6U] [i_10] [i_11 + 2] [i_10]) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)17974))))))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_21 [i_10])), (((((/* implicit */_Bool) arr_31 [i_10] [i_10] [(short)19])) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) var_5))))))))))));
                var_35 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_12])) ? (((/* implicit */int) arr_15 [i_10])) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) 9700479222267008556ULL)) ? (((/* implicit */int) arr_15 [i_12])) : (((/* implicit */int) arr_7 [11])))) : (((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (arr_7 [i_10]))))));
                /* LoopSeq 3 */
                for (unsigned char i_13 = 2; i_13 < 17; i_13 += 3) 
                {
                    var_36 = ((/* implicit */unsigned char) (!(max(((_Bool)1), ((!(arr_28 [i_10] [i_10])))))));
                    var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1283471758586094266ULL)) ? (((/* implicit */int) arr_19 [i_10] [i_11] [i_12] [(unsigned char)17])) : (((((/* implicit */_Bool) arr_36 [i_10] [(unsigned short)12] [i_11 - 2] [i_12] [i_13 - 2])) ? (((/* implicit */int) arr_29 [i_10])) : (((/* implicit */int) arr_28 [i_11 + 2] [i_11])))))))));
                    arr_37 [i_10] [(short)5] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_11 + 3] [i_13 - 1]))) == ((~(arr_18 [i_10] [i_12] [i_10]))))))) == (9700479222267008562ULL)));
                }
                for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 3) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_15 = 0; i_15 < 20; i_15 += 3) /* same iter space */
                    {
                        arr_45 [i_10] [i_10] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_17 [i_11 + 3] [i_11 + 1] [i_11 + 2] [i_11 + 2]))) || ((!(((/* implicit */_Bool) arr_17 [i_11 - 2] [i_11 - 1] [i_11 - 1] [i_11 - 2]))))));
                        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (arr_17 [(unsigned short)20] [i_11] [i_12] [i_14])))), ((+(((/* implicit */int) arr_17 [i_10] [i_10] [i_10] [i_10]))))))) || (((/* implicit */_Bool) ((max((arr_42 [12] [i_12] [i_10] [i_10]), (((/* implicit */unsigned long long int) arr_25 [i_10] [i_10])))) << (((max((arr_20 [i_11 + 2] [i_11 - 2] [i_11 + 1] [i_11]), (((/* implicit */unsigned long long int) arr_40 [i_10] [i_11 + 2] [i_11 + 2] [i_10])))) - (7452009890781674996ULL))))))));
                        var_39 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_6), (((/* implicit */unsigned short) arr_39 [i_10] [i_11] [i_12] [4U] [i_15] [i_15]))))) * (((/* implicit */int) ((((/* implicit */int) arr_3 [i_10] [i_14])) < (((/* implicit */int) arr_11 [i_12])))))))), (((unsigned long long int) ((((/* implicit */_Bool) (short)-6452)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [(short)18] [i_12] [i_11] [(signed char)4]))) : (13267424004787616691ULL)))));
                    }
                    /* vectorizable */
                    for (signed char i_16 = 0; i_16 < 20; i_16 += 3) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) ((((/* implicit */int) arr_30 [i_16] [i_10] [i_10])) * (((/* implicit */int) arr_10 [i_11] [i_12] [i_12])))))));
                        var_41 = ((/* implicit */unsigned char) ((-1073032826) <= (((/* implicit */int) var_5))));
                        var_42 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                    }
                    for (signed char i_17 = 0; i_17 < 20; i_17 += 3) /* same iter space */
                    {
                        var_43 = ((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */unsigned short) arr_21 [i_12])), (max((((/* implicit */unsigned short) var_9)), (var_6))))));
                        arr_52 [i_14] = ((/* implicit */int) ((((-2147483643) < (((((/* implicit */_Bool) 2441070876U)) ? (arr_4 [i_10]) : (((/* implicit */int) var_15)))))) ? (((/* implicit */long long int) -1073032826)) : (min((((((/* implicit */_Bool) arr_39 [i_10] [i_10] [i_10] [i_10] [i_17] [i_12])) ? (arr_16 [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_17] [i_11 - 1] [i_10]))))), (((/* implicit */long long int) (unsigned char)194))))));
                    }
                    for (unsigned int i_18 = 0; i_18 < 20; i_18 += 4) 
                    {
                        var_44 = ((/* implicit */unsigned long long int) -5201505911395729170LL);
                        var_45 = ((/* implicit */signed char) arr_17 [i_10] [i_10] [i_10] [i_10]);
                    }
                    var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_11 + 2] [i_11 - 1] [8])) && (((/* implicit */_Bool) (~(var_10))))));
                    arr_55 [i_12] [i_12] [i_11 + 3] [i_12] &= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_31 [i_11 + 2] [i_11 + 1] [i_12])), (2097088ULL)))) ? (((/* implicit */int) min((arr_43 [i_10] [i_11 - 2] [i_12]), (arr_31 [i_11 + 3] [i_11 + 3] [i_12])))) : ((~(((/* implicit */int) var_1))))));
                }
                for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                {
                    var_47 = ((/* implicit */unsigned long long int) (-((-(4294967295U)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_20 = 3; i_20 < 16; i_20 += 4) 
                    {
                        arr_61 [i_10] [i_11] [i_12] = ((/* implicit */_Bool) (-(((/* implicit */int) ((arr_26 [i_20 + 1]) <= (((/* implicit */unsigned long long int) (~(arr_4 [13ULL])))))))));
                        var_48 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned long long int) 21U)) >= (((/* implicit */unsigned long long int) arr_23 [i_20] [i_20] [i_20 + 4] [i_20] [i_12] [i_20 + 3] [i_20])))))) == (arr_35 [13] [i_10] [i_20 - 1] [i_20] [i_10] [i_20])));
                        var_49 ^= ((/* implicit */unsigned long long int) var_2);
                    }
                }
            }
            /* LoopNest 3 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                for (unsigned char i_22 = 0; i_22 < 20; i_22 += 3) 
                {
                    for (unsigned int i_23 = 0; i_23 < 20; i_23 += 3) 
                    {
                        {
                            arr_70 [i_10] [i_10] [i_22] [i_22] [i_23] = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) var_17)), (arr_33 [8ULL] [i_11 - 2] [i_11] [i_11 - 2]))) % (((arr_33 [i_11 + 1] [i_11 - 2] [i_11] [i_11 - 1]) & (arr_33 [i_11] [i_11 - 2] [i_11] [i_11 + 3])))));
                            arr_71 [11] [i_11] [i_11 - 1] [i_11 - 1] [i_22] [i_11] = ((/* implicit */signed char) var_1);
                        }
                    } 
                } 
            } 
        }
        arr_72 [i_10] = ((/* implicit */_Bool) var_18);
    }
    for (unsigned short i_24 = 0; i_24 < 20; i_24 += 4) /* same iter space */
    {
        arr_75 [i_24] = ((/* implicit */unsigned short) max((((/* implicit */int) var_15)), (((((/* implicit */_Bool) arr_64 [i_24] [i_24] [i_24] [i_24])) ? (((/* implicit */int) arr_11 [i_24])) : (((/* implicit */int) arr_11 [i_24]))))));
        arr_76 [i_24] = ((/* implicit */unsigned char) 1425052401480450079ULL);
        var_50 |= ((/* implicit */int) arr_40 [i_24] [i_24] [i_24] [i_24]);
        /* LoopNest 2 */
        for (unsigned long long int i_25 = 0; i_25 < 20; i_25 += 4) 
        {
            for (unsigned long long int i_26 = 0; i_26 < 20; i_26 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_27 = 4; i_27 < 18; i_27 += 3) 
                    {
                        var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (arr_44 [i_27] [(unsigned char)4] [i_27 - 2] [i_27])))) ? (((((/* implicit */int) var_13)) / (((/* implicit */int) arr_63 [i_27 + 2] [i_27 + 2] [i_27 - 2] [i_27])))) : (((((/* implicit */_Bool) (unsigned short)17987)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_28 = 0; i_28 < 20; i_28 += 1) 
                        {
                            var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (short)-21234))) ? ((~(((/* implicit */int) (signed char)41)))) : (((/* implicit */int) var_17)))))));
                            var_53 = ((/* implicit */int) arr_5 [i_24] [i_24] [i_24]);
                            var_54 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_26]))));
                            var_55 ^= ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)39545))));
                        }
                        var_56 = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    for (int i_29 = 0; i_29 < 20; i_29 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_30 = 0; i_30 < 20; i_30 += 4) 
                        {
                            var_57 = ((/* implicit */signed char) (+(((/* implicit */int) (short)11080))));
                            var_58 = ((/* implicit */int) (~(((arr_67 [i_25] [i_26] [i_29] [i_25]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [(signed char)17])))))));
                            var_59 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-32746))))) ? (-7582784909235708418LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47568)))))), (9861603593868097579ULL));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_31 = 0; i_31 < 20; i_31 += 3) 
                        {
                            var_60 = ((/* implicit */signed char) max((var_60), (((/* implicit */signed char) (short)32747))));
                            arr_95 [i_26] [i_26] = ((/* implicit */_Bool) arr_81 [i_29] [i_25] [i_26]);
                            arr_96 [i_24] [i_24] [11ULL] [i_24] [i_24] [(unsigned short)0] [i_26] = ((/* implicit */unsigned char) var_10);
                        }
                        for (signed char i_32 = 3; i_32 < 19; i_32 += 3) 
                        {
                            arr_101 [i_25] [i_26] [i_26] [i_32] = ((/* implicit */unsigned int) var_9);
                            var_61 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_89 [i_32] [i_32 - 1] [i_32 - 3] [i_32] [i_32 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)177))) : (arr_89 [i_24] [i_32 - 3] [i_32 - 2] [i_32 - 2] [i_32 - 2]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                            var_62 = ((/* implicit */_Bool) min((var_62), (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((_Bool) var_7)) ? (((((/* implicit */_Bool) var_10)) ? (0) : (((/* implicit */int) arr_8 [i_25] [i_26] [i_29])))) : (((/* implicit */int) ((_Bool) arr_6 [i_24] [i_24])))))), (max((max((((/* implicit */unsigned int) arr_94 [i_26] [i_29] [i_26] [i_26] [15ULL] [(unsigned char)1] [(unsigned char)1])), (2U))), (((/* implicit */unsigned int) arr_21 [i_32 - 1])))))))));
                            arr_102 [i_24] [i_25] [i_25] [i_26] [i_29] [i_29] [i_26] = ((/* implicit */unsigned char) var_2);
                        }
                        arr_103 [i_26] = ((/* implicit */unsigned long long int) arr_16 [i_25] [i_24]);
                        var_63 = ((/* implicit */int) min(((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) << (((/* implicit */int) (short)0))))))), (arr_91 [0] [i_26] [0] [i_29])));
                    }
                    arr_104 [i_26] [i_25] [i_25] = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */long long int) arr_83 [i_24] [i_25] [i_24] [i_26] [i_24])), (((((/* implicit */_Bool) (short)-1851)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_3))))));
                }
            } 
        } 
    }
    var_64 = ((/* implicit */unsigned long long int) var_5);
    var_65 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_13)))) : (min((var_3), (((/* implicit */long long int) var_8)))))), (((/* implicit */long long int) (-(((/* implicit */int) var_1)))))));
}
