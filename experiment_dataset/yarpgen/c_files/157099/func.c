/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157099
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
    var_11 = ((/* implicit */long long int) max((var_11), (var_9)));
    var_12 = (~(((/* implicit */int) var_4)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (-(arr_3 [i_1]))))));
            var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */int) (_Bool)1)) & (15872))) : (((/* implicit */int) arr_0 [i_0]))));
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_1]))));
            var_15 = ((/* implicit */_Bool) arr_4 [i_0] [i_0]);
        }
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (short i_3 = 2; i_3 < 23; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (int i_5 = 1; i_5 < 24; i_5 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (unsigned char)96)))) ^ (arr_14 [i_2] [i_5 + 1] [i_2] [i_2] [i_5 + 1])));
                            arr_16 [i_0] [i_3] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_3 - 1] [i_5 - 1]))));
                        }
                    } 
                } 
                arr_17 [i_0] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_3] [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((-3123362281920115930LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) : (var_9)));
            }
            for (unsigned char i_6 = 2; i_6 < 23; i_6 += 4) 
            {
                arr_20 [i_0] [i_0] [i_0] [i_0] = (+(((/* implicit */int) arr_2 [i_2] [i_2] [i_2])));
                var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3307626276U))));
            }
            for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                arr_24 [i_7] = (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) * (arr_13 [i_2] [i_2] [i_2] [i_2]))));
                var_18 = ((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_7] [i_0] [i_0]);
                /* LoopSeq 2 */
                for (unsigned short i_8 = 2; i_8 < 21; i_8 += 1) 
                {
                    arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) 1740485274U));
                    arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) ((-8746865444731503789LL) == (((/* implicit */long long int) 585235941U)))));
                    var_19 = ((/* implicit */unsigned char) (-(arr_18 [i_2] [i_2] [i_8 + 2])));
                    arr_29 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_8 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_8 + 3] [i_8 + 3] [i_8 + 3] [i_8 + 3]))) : (arr_25 [i_0] [i_0] [i_7])));
                    var_20 = ((((/* implicit */unsigned long long int) ((var_6) ? (arr_6 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_7])))))) % (((((/* implicit */unsigned long long int) var_10)) & (var_5))));
                }
                for (unsigned short i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_11 [i_7] [i_0] [i_7] [i_0] [i_0]);
                    var_21 = var_2;
                }
                arr_35 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) 132231659U);
                arr_36 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0])) ? (1803067283U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0])))));
            }
            /* LoopSeq 1 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 25; i_11 += 2) 
                {
                    for (long long int i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) (~(arr_3 [i_12])));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned int) -1476719840)) + (3160085661U)));
                            var_24 = (-(((/* implicit */int) arr_2 [i_10] [i_2] [i_10])));
                            arr_45 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) ((arr_9 [i_2] [i_10] [i_12]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_0] [i_0] [i_0])))));
                        }
                    } 
                } 
                arr_46 [i_2] [i_10] [i_2] = ((arr_38 [i_10] [i_10]) / (arr_38 [i_2] [i_10]));
                arr_47 [i_0] [i_0] [i_10] [i_0] = ((/* implicit */long long int) ((unsigned char) (~(((/* implicit */int) (_Bool)1)))));
                /* LoopSeq 1 */
                for (long long int i_13 = 3; i_13 < 22; i_13 += 3) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_14 = 1; i_14 < 23; i_14 += 1) 
                    {
                        var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_0] [i_0] [i_14 - 1] [i_0])) ? (arr_41 [i_10] [i_10] [i_10] [i_10] [i_14 + 2] [i_10]) : (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_14 - 1]))));
                        arr_53 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0] = ((/* implicit */long long int) ((signed char) arr_14 [i_10] [i_10] [i_10] [i_13 - 3] [i_13 + 3]));
                    }
                    for (unsigned short i_15 = 4; i_15 < 21; i_15 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (_Bool)1))));
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_10])) ? (arr_12 [i_10]) : (arr_12 [i_10])));
                    }
                    for (unsigned short i_16 = 4; i_16 < 21; i_16 += 2) /* same iter space */
                    {
                        arr_61 [i_10] [i_10] = ((/* implicit */_Bool) (-(arr_11 [i_16 + 4] [i_16 + 4] [i_13 - 3] [i_16 + 4] [i_16 + 4])));
                        var_28 |= ((/* implicit */unsigned long long int) ((arr_43 [i_10] [i_10] [i_10] [i_13 - 3] [i_13 - 3] [i_13 - 3] [i_13 - 3]) < (arr_43 [i_10] [i_10] [i_10] [i_13 - 2] [i_10] [i_10] [i_10])));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (3512682944U)));
                        arr_62 [i_0] [i_0] [i_10] [i_0] = ((/* implicit */short) arr_12 [i_10]);
                    }
                    /* LoopSeq 1 */
                    for (signed char i_17 = 3; i_17 < 23; i_17 += 4) 
                    {
                        arr_66 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */long long int) (+(((/* implicit */int) arr_40 [i_10] [i_10] [i_13] [i_10] [i_13]))));
                        arr_67 [i_0] [i_10] [i_10] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(arr_14 [i_10] [i_10] [i_10] [i_10] [i_10])));
                        arr_68 [i_17] [i_17] [i_10] [i_17] [i_17] = ((/* implicit */short) (-(arr_60 [i_10] [i_10] [i_13 + 1])));
                        arr_69 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */long long int) ((var_0) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) % (var_2)));
                        arr_70 [i_2] |= ((((((/* implicit */_Bool) 72057559678189568LL)) || (((/* implicit */_Bool) var_5)))) ? (var_9) : (((/* implicit */long long int) arr_64 [i_2] [i_2] [i_17 - 1] [i_2] [i_17 - 1])));
                    }
                    var_30 = ((/* implicit */unsigned short) ((arr_60 [i_10] [i_10] [i_10]) - (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0]))));
                    arr_71 [i_0] [i_0] [i_0] [i_0] [i_10] [i_10] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)14360))));
                }
            }
            var_31 |= ((/* implicit */long long int) ((arr_8 [i_0] [i_0] [i_0]) > (((/* implicit */int) var_6))));
            var_32 = ((/* implicit */signed char) arr_8 [i_0] [i_2] [i_2]);
        }
        arr_72 [i_0] = ((((/* implicit */_Bool) (unsigned short)35057)) ? (5362065098744895724LL) : (((/* implicit */long long int) 754601263U)));
        var_33 = ((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0])) <= (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0]))));
        /* LoopNest 3 */
        for (unsigned int i_18 = 0; i_18 < 25; i_18 += 1) 
        {
            for (int i_19 = 0; i_19 < 25; i_19 += 3) 
            {
                for (signed char i_20 = 3; i_20 < 24; i_20 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_21 = 0; i_21 < 25; i_21 += 2) /* same iter space */
                        {
                            arr_82 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */long long int) var_3);
                            var_34 = ((/* implicit */unsigned int) ((arr_60 [i_19] [i_20 + 1] [i_19]) < (arr_60 [i_19] [i_20 - 3] [i_19])));
                        }
                        for (unsigned long long int i_22 = 0; i_22 < 25; i_22 += 2) /* same iter space */
                        {
                            arr_85 [i_22] [i_22] [i_19] = (-(arr_43 [i_20 - 2] [i_20 - 2] [i_20 - 2] [i_20 - 2] [i_20 - 2] [i_20 - 2] [i_20 - 2]));
                            arr_86 [i_0] [i_0] [i_19] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -1LL)) ? (arr_31 [i_20] [i_20] [i_20] [i_20 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_35 |= ((/* implicit */long long int) arr_55 [i_20] [i_20] [i_20 + 1] [i_20 + 1] [i_20]);
                            arr_87 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */short) arr_25 [i_0] [i_0] [i_0]);
                        }
                        arr_88 [i_0] [i_19] [i_19] [i_0] = ((/* implicit */unsigned int) 3691357809973662473ULL);
                        arr_89 [i_19] [i_19] [i_19] [i_19] = ((/* implicit */int) ((arr_41 [i_0] [i_0] [i_0] [i_0] [i_20 - 2] [i_0]) <= (((/* implicit */long long int) arr_83 [i_0] [i_0] [i_0] [i_0] [i_20 - 3]))));
                        var_36 = ((/* implicit */unsigned char) ((unsigned short) arr_42 [i_0] [i_0] [i_0] [i_0] [i_19] [i_0]));
                    }
                } 
            } 
        } 
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0]))));
    }
    for (long long int i_23 = 0; i_23 < 25; i_23 += 1) /* same iter space */
    {
        var_38 = ((/* implicit */long long int) (+(((arr_9 [i_23] [i_23] [i_23]) / (arr_9 [i_23] [i_23] [i_23])))));
        var_39 = ((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) (short)-22675))) ^ (-1LL))), ((+(arr_31 [i_23] [i_23] [i_23] [i_23])))));
    }
    for (long long int i_24 = 0; i_24 < 25; i_24 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_25 = 0; i_25 < 25; i_25 += 3) 
        {
            var_40 = ((/* implicit */long long int) arr_3 [i_24]);
            var_41 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) ((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_24] [24LL])))))) ? (((long long int) var_5)) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_77 [i_24] [i_24])))))));
            var_42 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_37 [i_24] [i_24] [2U] [i_24])) & (((/* implicit */int) arr_40 [i_24] [(short)8] [i_24] [i_24] [i_24]))))) - (max((((/* implicit */unsigned long long int) 524287U)), (7635896219706302589ULL))))));
        }
        var_43 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)28)) ? (max((((/* implicit */unsigned long long int) 4863275866255780164LL)), (562949953421311ULL))) : (13044189654977550723ULL))) > (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_84 [i_24] [i_24] [i_24]))))), (((((/* implicit */_Bool) arr_73 [i_24] [i_24])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_24] [(_Bool)1]))))))))));
    }
    /* vectorizable */
    for (unsigned int i_26 = 1; i_26 < 10; i_26 += 1) 
    {
        var_44 = ((/* implicit */long long int) arr_15 [i_26 + 4] [i_26 + 4] [i_26 + 4] [i_26 + 4] [i_26 + 4] [i_26 + 4] [i_26 + 4]);
        arr_101 [i_26] [i_26] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((1971419172) - (1971419152)))));
    }
    /* LoopSeq 4 */
    for (unsigned int i_27 = 0; i_27 < 13; i_27 += 3) 
    {
        arr_104 [i_27] [i_27] = ((/* implicit */unsigned long long int) var_4);
        /* LoopNest 2 */
        for (unsigned int i_28 = 0; i_28 < 13; i_28 += 1) 
        {
            for (int i_29 = 0; i_29 < 13; i_29 += 3) 
            {
                {
                    var_45 = ((_Bool) arr_92 [i_29]);
                    arr_111 [i_28] [i_28] [i_27] [i_28] = ((/* implicit */unsigned long long int) var_2);
                    var_46 = ((/* implicit */unsigned int) ((short) min((arr_25 [i_27] [i_27] [i_27]), (arr_60 [i_27] [i_28] [i_29]))));
                    arr_112 [i_27] [i_27] [i_27] = ((/* implicit */_Bool) max((((long long int) (short)633)), (((/* implicit */long long int) arr_64 [i_27] [i_27] [i_27] [i_27] [i_27]))));
                    var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_27] [i_27] [i_27] [i_27]))) * (arr_55 [i_27] [i_27] [i_27] [i_27] [i_27]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_7)))))))) ? (arr_106 [i_27] [i_27]) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_44 [i_27] [i_27] [i_27]) || (arr_44 [i_27] [i_28] [i_27])))))));
                }
            } 
        } 
        var_48 = ((/* implicit */signed char) (+(1693730147U)));
    }
    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
    {
        arr_116 [i_30] = ((/* implicit */short) ((((/* implicit */_Bool) ((max((arr_26 [i_30] [i_30] [i_30] [i_30]), (var_9))) + ((-(var_9)))))) ? (((((/* implicit */int) arr_79 [i_30] [i_30] [i_30] [i_30] [i_30] [i_30])) * (((/* implicit */int) arr_79 [i_30] [i_30] [i_30] [i_30] [i_30] [i_30])))) : ((((-(((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_3))))))));
        var_49 = ((/* implicit */unsigned long long int) (~(var_9)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_31 = 0; i_31 < 24; i_31 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_32 = 0; i_32 < 24; i_32 += 3) 
            {
                for (long long int i_33 = 0; i_33 < 24; i_33 += 2) 
                {
                    {
                        var_50 = ((/* implicit */int) var_3);
                        var_51 &= ((/* implicit */signed char) arr_51 [i_30] [i_33] [i_33] [i_33] [i_30] [i_30]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_34 = 2; i_34 < 23; i_34 += 2) 
            {
                for (long long int i_35 = 0; i_35 < 24; i_35 += 4) 
                {
                    {
                        var_52 = ((/* implicit */unsigned char) max((var_52), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_30] [i_30] [i_30] [i_34 - 2] [i_34 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_30] [i_34] [i_30] [i_34] [i_30]))) : (arr_125 [i_34 - 2] [i_34 + 1] [i_34 - 2]))))));
                        var_53 = ((/* implicit */unsigned char) 23U);
                    }
                } 
            } 
            var_54 += ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65535))));
        }
        for (long long int i_36 = 0; i_36 < 24; i_36 += 3) 
        {
            arr_134 [i_30] [i_30] = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) arr_33 [i_30] [i_36]))), ((~((~(((/* implicit */int) var_7))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_37 = 0; i_37 < 24; i_37 += 2) 
            {
                var_55 = ((/* implicit */long long int) max((var_55), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_54 [i_37])) ? (arr_54 [i_37]) : (arr_54 [i_37]))))));
                var_56 &= ((/* implicit */unsigned char) ((arr_65 [i_37]) / (var_2)));
                var_57 = ((/* implicit */unsigned int) max((var_57), (((/* implicit */unsigned int) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_37] [i_37] [i_37]))))))));
            }
        }
        arr_138 [i_30] [i_30] = (-(arr_132 [i_30] [i_30] [i_30]));
        arr_139 [i_30] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_19 [i_30] [i_30] [i_30] [i_30]), (arr_19 [i_30] [i_30] [i_30] [i_30])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_30] [i_30] [i_30] [i_30])) && (((/* implicit */_Bool) arr_19 [i_30] [i_30] [i_30] [i_30]))))) : ((~(((/* implicit */int) arr_19 [i_30] [i_30] [i_30] [i_30]))))));
    }
    /* vectorizable */
    for (int i_38 = 0; i_38 < 13; i_38 += 3) 
    {
        var_58 = ((/* implicit */long long int) ((arr_106 [i_38] [i_38]) <= (((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [i_38]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_38] [i_38] [i_38])))))))));
        arr_142 [i_38] = ((/* implicit */long long int) ((((/* implicit */int) arr_57 [i_38] [i_38])) - (((/* implicit */int) var_3))));
    }
    for (unsigned char i_39 = 1; i_39 < 20; i_39 += 3) 
    {
        arr_146 [i_39] = ((/* implicit */unsigned int) arr_96 [i_39 + 1] [i_39 + 1]);
        arr_147 [i_39] = ((/* implicit */unsigned int) (-((+(var_9)))));
    }
}
