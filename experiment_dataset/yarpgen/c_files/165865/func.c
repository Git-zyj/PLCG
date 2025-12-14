/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165865
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 8; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) 3651177590U);
                                arr_13 [i_2] [i_3] [9] [i_1 + 1] [i_2] = ((/* implicit */short) (-(((/* implicit */int) ((arr_9 [i_1 - 1] [i_2] [i_1 + 1] [i_1 + 1] [i_1 - 1]) >= (((/* implicit */unsigned long long int) var_16)))))));
                            }
                        } 
                    } 
                    var_20 ^= ((/* implicit */short) min((4294967275U), (((/* implicit */unsigned int) (unsigned char)234))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) var_11);
    /* LoopSeq 4 */
    for (unsigned int i_5 = 2; i_5 < 9; i_5 += 3) /* same iter space */
    {
        var_22 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21807))) * (12398716883184676840ULL)))) ? ((-(arr_15 [i_5]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) var_5)) : (var_12))))))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 2; i_6 < 8; i_6 += 4) 
        {
            for (unsigned char i_7 = 3; i_7 < 9; i_7 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-((~(((/* implicit */int) (_Bool)1))))))) * (((((/* implicit */_Bool) ((((/* implicit */int) (short)11)) << (((4294967295U) - (4294967283U)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)234))) : (((long long int) arr_15 [i_5]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        for (short i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((arr_7 [i_5] [i_5 - 2] [(short)1] [i_6 - 1]) - (((/* implicit */int) (unsigned char)0)))) : ((+(((/* implicit */int) arr_20 [i_5] [i_5]))))));
                                var_25 = ((/* implicit */unsigned int) var_4);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((var_5), (((/* implicit */int) arr_20 [i_5] [(_Bool)0])))), (((/* implicit */int) ((var_5) >= (((/* implicit */int) (unsigned char)250)))))))) ? (((/* implicit */long long int) (-(43714958U)))) : (((((/* implicit */_Bool) (short)21807)) ? ((~(var_3))) : (((/* implicit */long long int) 845608386U)))))))));
        arr_27 [i_5] = ((/* implicit */short) max(((~(var_8))), (((/* implicit */int) max((((/* implicit */short) arr_22 [i_5 - 2] [i_5 - 1] [i_5] [i_5] [i_5 + 1])), (var_15))))));
        var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) max((var_17), (((/* implicit */short) ((((/* implicit */int) var_6)) <= (((/* implicit */int) arr_19 [i_5] [i_5] [i_5]))))))))));
    }
    for (unsigned int i_10 = 2; i_10 < 9; i_10 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 1; i_11 < 9; i_11 += 2) 
        {
            for (short i_12 = 4; i_12 < 6; i_12 += 1) 
            {
                for (int i_13 = 2; i_13 < 9; i_13 += 3) 
                {
                    {
                        var_28 = ((/* implicit */int) max((-1LL), (((/* implicit */long long int) (short)-38))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_14 = 0; i_14 < 10; i_14 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(4251252338U)))) ? (((/* implicit */int) (short)0)) : (var_16)));
                            var_30 = ((/* implicit */_Bool) arr_18 [i_10 - 2] [9U] [(unsigned char)8]);
                        }
                        /* vectorizable */
                        for (unsigned int i_15 = 0; i_15 < 10; i_15 += 4) 
                        {
                            arr_47 [i_10] [i_11] [i_12 + 3] [i_11] [i_15] = arr_42 [i_10] [i_11 - 1] [i_12] [i_10] [i_15];
                            var_31 = ((/* implicit */unsigned int) max((var_31), ((~(1834855364U)))));
                            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_13] [i_13 + 1] [i_15] [i_13] [i_13 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_24 [i_11] [i_13 + 1] [1U] [i_11] [i_13 + 1] [(unsigned char)9] [i_13 - 1]))));
                            var_33 = ((/* implicit */unsigned int) (signed char)65);
                            var_34 = ((/* implicit */long long int) ((arr_15 [i_11]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_10 - 2] [i_11] [0ULL] [i_11 + 1])))));
                        }
                        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_10] [i_10 - 1] [i_10 - 2] [i_10 - 2] [(unsigned char)9] [i_10 - 2]))))) ? (((((/* implicit */_Bool) arr_12 [i_10] [i_10 - 2] [i_10] [i_10 + 1] [i_10] [i_10 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_12 [i_10] [i_10 - 2] [i_10] [(unsigned char)7] [i_10] [i_10])))) : (((/* implicit */int) arr_12 [i_10 - 2] [i_10 - 2] [i_10 + 1] [i_10] [i_10] [i_10 - 2]))));
                        /* LoopSeq 3 */
                        for (unsigned int i_16 = 1; i_16 < 9; i_16 += 4) 
                        {
                            var_36 = ((/* implicit */_Bool) arr_50 [i_16] [i_11] [i_13 - 2] [(short)2] [i_11] [i_11] [(short)2]);
                            arr_52 [i_12] [i_11] [i_12 + 4] [5U] [7ULL] = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 2460111932U))))), (max(((~(5277282729741606615LL))), (((/* implicit */long long int) max((var_17), (var_17))))))));
                            var_37 = ((/* implicit */int) var_11);
                            var_38 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1U)) + (arr_33 [i_16 - 1] [i_10] [i_10])))) ? (max((((/* implicit */unsigned int) arr_34 [i_10 - 1] [i_10 - 1] [i_11] [(short)4])), (var_11))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_40 [i_11]))))))), (((((/* implicit */unsigned int) max((((/* implicit */int) (short)9749)), (1869207691)))) - (min((2U), (((/* implicit */unsigned int) -1924336910))))))));
                            var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) arr_11 [i_10] [i_10] [(short)4] [i_10] [i_10] [i_10 + 1])) ? (var_1) : (560704608U))))), (((/* implicit */unsigned int) var_5)))))));
                        }
                        for (unsigned int i_17 = 1; i_17 < 9; i_17 += 3) 
                        {
                            var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) (unsigned char)2))));
                            arr_56 [i_11] [i_11] [i_11] [i_13 - 2] [i_17] = var_11;
                            var_41 += ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)194))));
                            var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((((/* implicit */unsigned long long int) var_5)) - (var_0))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))))))))));
                            var_43 = ((/* implicit */short) (-(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_15))))), (var_1)))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_44 *= ((/* implicit */signed char) var_17);
                            var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) (((+(max((var_0), (((/* implicit */unsigned long long int) arr_14 [i_10 - 1] [i_10 - 1])))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_50 [i_10] [4U] [0ULL] [i_10] [i_10] [i_10 + 1] [i_10 - 2]) > (var_14))))))))));
                            var_46 = ((/* implicit */unsigned long long int) arr_40 [i_10 - 1]);
                            var_47 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) var_18)), (var_10)))) / (((/* implicit */int) arr_49 [i_12 + 1] [i_11] [i_11 - 1] [1] [i_10 - 2] [i_11 + 1] [i_10 - 2]))))) ? (((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_39 [i_18] [(signed char)6] [(short)5] [2ULL])))), (((/* implicit */int) arr_12 [i_10 + 1] [(signed char)0] [(signed char)6] [i_13] [i_18] [i_18]))))) : (((2403105993U) >> (((var_0) - (17891375393365780873ULL)))))));
                        }
                    }
                } 
            } 
        } 
        var_48 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_8 [i_10] [i_10 + 1] [i_10 + 1] [i_10] [i_10])) ? (((/* implicit */long long int) var_9)) : (arr_8 [i_10] [i_10 - 1] [(short)8] [6ULL] [i_10 - 1])))));
    }
    for (long long int i_19 = 3; i_19 < 20; i_19 += 3) 
    {
        var_49 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)178))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned char)22)))))) ^ (arr_61 [i_19 + 2] [i_19 - 3])))));
        /* LoopNest 3 */
        for (unsigned int i_20 = 2; i_20 < 21; i_20 += 2) 
        {
            for (long long int i_21 = 2; i_21 < 19; i_21 += 2) 
            {
                for (short i_22 = 0; i_22 < 22; i_22 += 1) 
                {
                    {
                        var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(min((var_14), (((/* implicit */unsigned long long int) (signed char)-93))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_68 [i_19 - 3]))))) : (-6095053297519027819LL)));
                        var_51 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(12378214091592917874ULL))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_23 = 2; i_23 < 20; i_23 += 4) 
        {
            for (signed char i_24 = 2; i_24 < 20; i_24 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_25 = 0; i_25 < 22; i_25 += 1) 
                    {
                        var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) ((((arr_73 [20]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_12))) & (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)230)))))))));
                        var_53 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_67 [i_19 + 1] [i_23] [i_19 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (_Bool)1)) & (var_13)))));
                    }
                    for (short i_26 = 1; i_26 < 21; i_26 += 4) 
                    {
                        var_54 = ((/* implicit */int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_72 [i_23] [i_19] [i_19]))))) ? (24576ULL) : (((/* implicit */unsigned long long int) arr_67 [(short)19] [i_23 + 2] [i_19]))))));
                        var_55 -= ((/* implicit */unsigned char) (((-(((/* implicit */int) var_18)))) * (((/* implicit */int) min((arr_81 [i_19 - 3] [i_19 - 1] [i_23] [0U]), (arr_81 [12U] [i_19 - 1] [i_24] [i_26 - 1]))))));
                        arr_82 [i_26] [11U] [i_24] [i_23 - 2] [i_26] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_60 [i_23 - 1]), ((unsigned char)150))))));
                        var_56 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_77 [i_19 - 3] [i_24 + 1] [i_26 + 1])))) ? (max((((((var_3) + (9223372036854775807LL))) << (((/* implicit */int) arr_73 [i_19])))), (((/* implicit */long long int) ((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)150)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_64 [i_24])))) ? (((/* implicit */int) arr_66 [i_19] [i_23] [i_23] [i_26])) : (((((/* implicit */_Bool) arr_77 [21ULL] [i_23 - 1] [i_19 + 1])) ? (var_16) : (((/* implicit */int) (unsigned char)156)))))))));
                    }
                    arr_83 [i_19] [i_23] [i_23] = (-(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_71 [i_19] [i_23] [18U]), (((/* implicit */unsigned int) arr_70 [i_19] [i_23 + 2] [i_23] [i_24])))))))));
                    var_57 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)32))))) ? (min((var_14), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((var_11) << (((arr_65 [i_19] [i_24 - 1] [3LL] [i_24 - 1]) - (1248679616))))))));
                    var_58 = ((/* implicit */long long int) (-(((6068529982116633742ULL) | ((~(18446744073709527040ULL)))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_27 = 0; i_27 < 12; i_27 += 2) 
    {
        var_59 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)106)) + (((/* implicit */int) arr_69 [i_27] [i_27] [i_27] [i_27]))))), (min((((/* implicit */unsigned long long int) (unsigned char)91)), (18446744073709527040ULL)))));
        arr_87 [i_27] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) arr_78 [i_27] [i_27] [i_27] [i_27])) ? (12ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) << (((((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */int) (signed char)-39)))) - (288440341))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3003066944U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_70 [i_27] [i_27] [(signed char)17] [(signed char)17]))) : (var_3)))) ? (max((-8144395612527221665LL), (var_3))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) var_16)), (arr_80 [i_27] [i_27])))))))));
        arr_88 [i_27] [i_27] = ((max((max((((/* implicit */unsigned long long int) arr_77 [i_27] [i_27] [i_27])), (var_14))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_15)), (var_9)))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 236465764U)) && (((/* implicit */_Bool) arr_74 [i_27] [i_27]))))) | (((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_28 = 1; i_28 < 11; i_28 += 4) 
        {
            var_60 = ((/* implicit */signed char) ((arr_80 [i_27] [i_28 - 1]) + (arr_80 [i_27] [i_27])));
            arr_92 [i_28] [(short)9] [(short)9] = ((/* implicit */int) ((((/* implicit */long long int) arr_71 [i_27] [i_27] [i_28 - 1])) != (var_3)));
        }
        for (signed char i_29 = 0; i_29 < 12; i_29 += 4) /* same iter space */
        {
            arr_95 [i_27] [i_29] [i_29] = ((/* implicit */int) 1291900362U);
            var_61 = ((/* implicit */unsigned int) min((var_9), ((~(((int) (unsigned char)150))))));
        }
        for (signed char i_30 = 0; i_30 < 12; i_30 += 4) /* same iter space */
        {
            var_62 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_4))) && (((/* implicit */_Bool) ((unsigned char) ((unsigned int) 12378214091592917875ULL))))));
            var_63 += var_15;
            arr_99 [i_30] [i_30] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_85 [i_27])) ? ((+(((((/* implicit */_Bool) arr_78 [i_27] [i_30] [i_30] [(short)17])) ? (215813147) : (var_13))))) : (((/* implicit */int) (unsigned char)150))));
        }
    }
}
