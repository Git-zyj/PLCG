/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187645
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (min((((/* implicit */unsigned long long int) ((-1969559830773872372LL) & (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (max((((/* implicit */unsigned long long int) var_8)), (var_15)))))));
    var_19 += ((/* implicit */unsigned char) 1365305462);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min(((+((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) -912238948))))) ? (((/* implicit */int) min((((/* implicit */short) arr_0 [i_0 + 1] [i_0 + 1])), (arr_1 [(_Bool)1])))) : (((((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2])) >> (((((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])) - (203)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_0 + 2]);
    }
    for (unsigned int i_1 = 1; i_1 < 7; i_1 += 3) 
    {
        var_21 = ((/* implicit */_Bool) max((arr_3 [i_1 + 3] [7ULL]), (((/* implicit */long long int) ((signed char) (+(var_0)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_2 = 1; i_2 < 8; i_2 += 4) 
        {
            arr_9 [i_1] = ((/* implicit */unsigned int) ((arr_6 [i_1 + 3]) < (arr_6 [i_1 - 1])));
            var_22 = ((/* implicit */unsigned char) ((long long int) 9154559807824007303ULL));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */short) (signed char)127);
                            arr_17 [i_1 + 1] [5ULL] [i_3] [(unsigned short)6] = ((/* implicit */short) (-(arr_3 [i_2 - 1] [8LL])));
                        }
                    } 
                } 
                arr_18 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_10)))))) : (((unsigned int) -912238940))));
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1] [i_1 + 2] [i_2 - 1] [(signed char)7] [i_2] [i_2 - 1] [(signed char)7])) ? (arr_7 [i_2] [i_2 + 2] [i_2 + 1]) : (((/* implicit */long long int) arr_5 [i_1 + 2] [i_2 + 1]))));
                /* LoopSeq 3 */
                for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    arr_23 [i_6] [i_2] [i_2] = ((/* implicit */unsigned int) ((long long int) arr_1 [i_1 + 1]));
                    var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */long long int) -912238948)))) >> (((arr_10 [i_6] [i_3] [i_2 + 2] [i_1]) - (4919692223721117039LL)))));
                    arr_24 [i_1] [i_1] [i_1] [i_6] = ((/* implicit */_Bool) ((arr_7 [i_1 + 3] [i_1 + 3] [i_2 - 1]) >> ((((-(((/* implicit */int) var_5)))) - (15421)))));
                }
                for (signed char i_7 = 3; i_7 < 7; i_7 += 4) /* same iter space */
                {
                    arr_27 [i_1 + 1] [i_2 + 1] [i_2 + 1] [i_7 - 2] = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 1])) - (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                    arr_28 [i_1] [i_1 + 3] [i_1] [i_1] [i_1 + 3] [i_1 + 3] = ((/* implicit */unsigned int) 1365305462);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 2; i_8 < 8; i_8 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)125)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) >> (((((((/* implicit */_Bool) arr_26 [i_7 + 2] [i_8 + 2])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-5902))))) - (2453300972U)))));
                        var_27 -= var_14;
                    }
                }
                for (signed char i_9 = 3; i_9 < 7; i_9 += 4) /* same iter space */
                {
                    arr_35 [i_1] [i_2] [i_3] [i_9] = ((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_2] [i_2] [i_2 + 2] [i_2 - 1] [i_2] [i_2 + 2] [i_2 + 2]))));
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_22 [i_3] [i_1] [i_3] [i_9])) : (((/* implicit */int) arr_12 [i_1 - 1] [i_3]))))) ? (((/* implicit */int) var_16)) : (((((/* implicit */int) arr_32 [(_Bool)1] [(_Bool)1] [i_3] [i_2 + 2] [i_2 + 2] [i_1])) & (((/* implicit */int) (short)-1)))))))));
                    arr_36 [i_1] [i_1] [i_1] [i_1 - 1] = ((/* implicit */unsigned char) ((unsigned short) arr_32 [i_9] [i_9 - 2] [i_9 + 2] [i_3] [i_2 - 1] [i_1 + 2]));
                }
            }
            for (unsigned long long int i_10 = 2; i_10 < 7; i_10 += 2) 
            {
                var_29 *= ((/* implicit */_Bool) (+(((/* implicit */int) arr_33 [i_1] [i_2 + 2] [i_2] [i_10 + 1]))));
                arr_39 [i_1 + 2] [i_2] [9U] = ((signed char) ((unsigned int) arr_11 [i_2] [i_10 + 1]));
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967276U)) ? (((/* implicit */int) (unsigned char)71)) : (arr_25 [i_1 - 1] [i_2 + 1] [i_10] [i_2 + 1])));
            }
            arr_40 [i_2 - 1] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_4 [i_1 + 3] [i_1 + 1]))));
        }
        /* LoopNest 3 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned int i_12 = 4; i_12 < 8; i_12 += 4) 
            {
                for (unsigned int i_13 = 1; i_13 < 9; i_13 += 4) 
                {
                    {
                        var_31 = ((/* implicit */unsigned short) min((arr_25 [i_1 + 3] [i_1 + 3] [i_12] [i_13]), (((((/* implicit */int) var_6)) >> (((arr_31 [i_1] [i_11] [i_11] [i_11] [i_12 - 4] [i_13] [i_11]) - (2237398289U)))))));
                        var_32 ^= ((/* implicit */unsigned short) arr_38 [i_1 - 1]);
                        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_1 + 3] [i_13 + 1] [i_12]))))), (max((max((((/* implicit */unsigned long long int) var_5)), (var_0))), (((/* implicit */unsigned long long int) ((signed char) (signed char)53))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_14 = 1; i_14 < 9; i_14 += 4) 
        {
            for (long long int i_15 = 0; i_15 < 10; i_15 += 3) 
            {
                {
                    arr_54 [i_15] = ((/* implicit */signed char) (~(((/* implicit */int) var_12))));
                    arr_55 [i_15] [i_15] [i_15] = min((min((arr_10 [i_1 + 1] [i_14 - 1] [i_15] [i_15]), (arr_10 [i_1 + 3] [i_14 - 1] [i_1 + 3] [i_14]))), (((/* implicit */long long int) (-(((((/* implicit */_Bool) 57278497U)) ? (((/* implicit */int) arr_42 [i_14])) : (((/* implicit */int) arr_38 [i_14]))))))));
                    var_34 -= ((/* implicit */unsigned char) arr_7 [i_1] [i_1 - 1] [i_1]);
                    var_35 = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_15] [i_14])) << (((min((1414505027U), (arr_52 [i_14]))) - (1414505008U)))))));
                }
            } 
        } 
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_17 = 1; i_17 < 15; i_17 += 1) 
        {
            for (short i_18 = 0; i_18 < 18; i_18 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_19 = 0; i_19 < 18; i_19 += 2) 
                    {
                        for (short i_20 = 3; i_20 < 17; i_20 += 4) 
                        {
                            {
                                var_36 = ((/* implicit */unsigned long long int) arr_64 [i_20 + 1] [i_19] [i_16]);
                                var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_57 [i_16]), (((/* implicit */unsigned short) arr_62 [i_20 - 1] [i_19] [i_18] [i_16]))))) ? (((/* implicit */int) ((unsigned short) var_4))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_18]))) < (var_15))))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)25458)) == (((/* implicit */int) (short)-5889))))) : (((/* implicit */int) ((((/* implicit */int) max(((signed char)113), (((/* implicit */signed char) (_Bool)1))))) < (((/* implicit */int) max((var_16), ((unsigned short)47302)))))))));
                                var_38 = ((/* implicit */unsigned char) ((unsigned short) (signed char)-57));
                            }
                        } 
                    } 
                    arr_67 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_56 [i_18])) ? (((/* implicit */int) arr_56 [i_18])) : (((/* implicit */int) arr_56 [i_16]))))));
                    /* LoopSeq 1 */
                    for (signed char i_21 = 1; i_21 < 17; i_21 += 4) 
                    {
                        var_39 = ((/* implicit */long long int) min((var_39), ((~(((arr_60 [i_18]) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_69 [i_16] [i_21 - 1] [i_17 + 1])))))))));
                        arr_72 [i_16] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */long long int) min((min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_16] [i_17] [i_18]))) == (var_0)))), (arr_71 [i_17 + 1] [i_17 - 1] [i_17 + 3] [i_17 + 1] [i_17 + 1] [i_17]))), (1365305452)));
                        var_40 = ((/* implicit */unsigned int) max((var_40), (max((((/* implicit */unsigned int) var_10)), (((((((/* implicit */_Bool) -912238939)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (1073733632U))) % (arr_58 [i_17] [i_17 + 3])))))));
                    }
                }
            } 
        } 
        var_41 = ((/* implicit */short) (~(((long long int) 67108864U))));
    }
    for (signed char i_22 = 0; i_22 < 12; i_22 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_23 = 2; i_23 < 8; i_23 += 4) 
        {
            for (unsigned char i_24 = 2; i_24 < 11; i_24 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_25 = 1; i_25 < 10; i_25 += 2) 
                    {
                        arr_83 [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */unsigned int) max((max((((/* implicit */short) (!(((/* implicit */_Bool) arr_62 [i_22] [i_22] [i_22] [i_22]))))), (max((var_6), (((/* implicit */short) arr_66 [i_22] [i_23] [i_24] [i_25 + 1] [i_23] [i_23])))))), (((/* implicit */short) ((_Bool) (~(((/* implicit */int) (_Bool)1))))))));
                        var_42 = min((((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)10)) || ((_Bool)1)))), (var_12));
                    }
                    for (unsigned int i_26 = 1; i_26 < 11; i_26 += 1) 
                    {
                        var_43 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_65 [i_26] [i_26] [i_26] [i_26 - 1] [i_26])))) ? (((/* implicit */int) arr_57 [i_24 - 2])) : (((/* implicit */int) ((short) arr_65 [i_23] [i_26] [i_26 + 1] [i_26 - 1] [i_26])))));
                        arr_87 [i_22] [i_22] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_74 [i_22] [i_23 + 2])))) < ((~(arr_76 [i_26 + 1] [i_24 + 1] [i_22])))));
                        var_44 = ((/* implicit */signed char) ((var_15) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_22] [i_22] [i_22] [i_23] [i_23] [(signed char)11])))));
                        var_45 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_82 [i_22] [i_22] [i_24] [i_24 - 1]))) == ((-(7503627542888472910ULL)))))), (max((((/* implicit */unsigned long long int) arr_73 [i_24 - 2])), (arr_81 [i_23 + 1] [i_26] [i_26 + 1])))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_27 = 2; i_27 < 11; i_27 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_28 = 2; i_28 < 11; i_28 += 3) 
                        {
                            var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-42))))), (min((max((((/* implicit */unsigned long long int) (unsigned char)179)), (arr_91 [i_23]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */int) (short)-5889)) : (((/* implicit */int) (short)-9061))))))))))));
                            arr_93 [i_22] [i_23] [i_24] [i_22] [i_28] = ((/* implicit */unsigned int) (signed char)-20);
                        }
                        var_47 = ((/* implicit */signed char) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (912238941)))) & (((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))), (((/* implicit */unsigned long long int) min((((arr_73 [i_22]) >> (((/* implicit */int) arr_86 [i_22])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_74 [i_22] [i_22])) ? (((/* implicit */int) arr_88 [i_27] [i_24] [i_23] [i_22])) : (((/* implicit */int) var_12))))))))));
                    }
                    /* vectorizable */
                    for (long long int i_29 = 0; i_29 < 12; i_29 += 3) 
                    {
                        var_48 = ((/* implicit */unsigned int) ((int) (_Bool)1));
                        var_49 = ((/* implicit */unsigned int) ((arr_95 [i_24] [i_24 - 1] [i_22]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                        arr_97 [i_22] [i_22] [i_22] [i_22] = ((/* implicit */unsigned int) var_3);
                        arr_98 [i_22] [i_22] [i_22] [i_22] [i_22] = arr_76 [i_22] [i_22] [i_24];
                    }
                    arr_99 [i_22] [i_22] [i_22] [i_24 - 2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_65 [(unsigned char)16] [i_23] [(unsigned char)16] [i_24] [i_24]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) var_14)) ? (var_3) : (((/* implicit */long long int) arr_75 [i_22] [i_22])))))))));
                }
            } 
        } 
        var_50 = ((/* implicit */short) max((var_50), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-10618))) % (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (signed char)12))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_78 [i_22] [(unsigned char)6]))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (3843870451203185027LL))))))))));
        var_51 = ((/* implicit */short) min((var_51), (((/* implicit */short) (~(((/* implicit */int) ((short) ((arr_63 [i_22] [i_22] [i_22]) ? (((/* implicit */long long int) ((/* implicit */int) arr_78 [i_22] [(unsigned short)0]))) : (8987312234885967906LL))))))))));
        arr_100 [i_22] [i_22] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)0))));
    }
}
