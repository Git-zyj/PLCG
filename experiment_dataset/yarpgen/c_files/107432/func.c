/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107432
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) var_0))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) -1844632472))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) : (arr_3 [i_1] [i_0])))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (unsigned int i_3 = 2; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_12 = arr_6 [i_0] [i_1] [i_2];
                        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned char) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (var_1)))) : (((unsigned long long int) var_8))))) ? (((((((/* implicit */int) var_7)) != (-1844632470))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)1))))) : (((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_0 [i_3] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                var_14 ^= ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) var_9)), (arr_3 [i_0] [i_4]))) * (((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                arr_14 [i_1] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_1] [i_1] [(unsigned char)7]))) | (arr_9 [i_4] [i_1] [i_1] [i_0])))) ? (arr_9 [i_0] [i_1] [i_4] [i_0]) : (((/* implicit */unsigned long long int) ((arr_13 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_4])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_1])))))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_4))))), ((~(((((/* implicit */_Bool) var_2)) ? (7389616416398283934ULL) : (11057127657311267682ULL)))))));
                            var_16 *= ((/* implicit */signed char) var_9);
                            arr_21 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) min((max((((/* implicit */short) arr_13 [i_6] [i_4] [i_1] [i_0])), ((short)-3555))), ((short)19498)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) (short)-3535);
                            var_18 = ((/* implicit */unsigned short) max((var_4), (((/* implicit */unsigned long long int) (~(((unsigned int) (_Bool)1)))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned int i_9 = 3; i_9 < 23; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_10 = 1; i_10 < 24; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_9 + 2] [i_9 - 2] [i_9 - 3] [i_10 - 1])) << (((arr_12 [i_11] [i_10 + 1] [i_1] [i_1]) - (13263406004712426690ULL)))));
                            var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_10 - 1])) ? (((/* implicit */int) arr_5 [i_10 - 1])) : (((/* implicit */int) arr_33 [i_9 - 1] [i_9 + 1] [i_1] [i_9 - 1]))));
                            var_21 ^= ((/* implicit */_Bool) arr_26 [i_9 - 2] [i_9 + 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 - 1]);
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0]))))) | (((/* implicit */int) arr_28 [(signed char)1] [i_9 + 1] [i_10 - 1] [i_11]))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned int i_12 = 0; i_12 < 25; i_12 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_24 [i_9 - 3] [i_9 + 1] [i_9 + 1])) | (((/* implicit */int) arr_24 [i_9 - 3] [i_9 - 3] [i_9 - 2]))));
                    /* LoopSeq 1 */
                    for (short i_13 = 2; i_13 < 23; i_13 += 4) 
                    {
                        var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_9 - 3] [i_13 - 1] [i_9 - 3])) ? (((/* implicit */int) ((_Bool) 0U))) : (arr_22 [i_13] [10U] [i_9] [i_0])));
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (arr_39 [i_13 + 2] [i_12] [i_13 - 1] [i_9 - 1] [i_12] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
                        arr_43 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)0))));
                    }
                    var_26 *= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4274))) < (arr_10 [i_1] [i_9] [i_1] [i_1]))) ? (((/* implicit */int) arr_19 [i_9 + 2] [i_9 - 2] [i_9 - 1])) : ((+(-1034424743)))));
                }
                for (unsigned int i_14 = 0; i_14 < 25; i_14 += 4) /* same iter space */
                {
                    arr_46 [18ULL] [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_9 - 3] [i_9 - 2])) ? (((/* implicit */unsigned long long int) var_9)) : (var_4)));
                    var_27 = ((/* implicit */unsigned long long int) var_7);
                }
                arr_47 [i_9 + 1] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */int) arr_8 [(signed char)13] [i_9 + 1] [i_9 - 3] [i_9 - 3] [i_9])) << (((arr_44 [i_0]) + (484730557)))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_8 [(signed char)13] [i_9 + 1] [i_9 - 3] [i_9 - 3] [i_9])) << (((((arr_44 [i_0]) + (484730557))) - (2116643919))))));
                /* LoopSeq 1 */
                for (unsigned char i_15 = 0; i_15 < 25; i_15 += 4) 
                {
                    var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
                    var_29 = ((/* implicit */_Bool) ((short) var_2));
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (var_8) : (arr_10 [i_0] [i_9 - 2] [i_9 - 1] [i_0])));
                    var_31 -= ((/* implicit */int) ((var_1) < (var_1)));
                }
            }
        }
        for (long long int i_16 = 0; i_16 < 25; i_16 += 4) 
        {
            arr_53 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(var_1)));
            arr_54 [i_0] = var_1;
            /* LoopSeq 2 */
            for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 4) 
            {
                var_32 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_0 [i_16] [i_17])) ? (((/* implicit */unsigned long long int) var_6)) : (var_8))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (arr_41 [i_0]) : (((/* implicit */int) var_7))))), (var_8)))));
                arr_57 [i_0] [i_17] [i_16] [i_0] = ((/* implicit */unsigned short) ((short) min((((arr_28 [i_0] [i_16] [i_0] [i_0]) ? (arr_11 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_17] [i_0] [i_16] [i_0] [i_0]))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))))));
                arr_58 [i_0] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) (short)32256)) ? (var_8) : (((/* implicit */unsigned long long int) 3673415211U))))))) ? (((((/* implicit */_Bool) var_4)) ? (7389616416398283964ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_0] [i_0] [i_17] [i_17]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) | (((/* implicit */int) arr_28 [(short)17] [i_16] [i_16] [i_16])))))));
            }
            /* vectorizable */
            for (unsigned int i_18 = 1; i_18 < 24; i_18 += 3) 
            {
                arr_61 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_18 - 1] [i_0] [i_0] [i_0]))) & (arr_42 [i_18 - 1] [i_18 + 1] [i_18] [(signed char)19] [i_18])));
                /* LoopSeq 1 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_19 [i_18 - 1] [i_0] [i_0]))))) || (((/* implicit */_Bool) var_8))));
                    /* LoopSeq 1 */
                    for (unsigned char i_20 = 0; i_20 < 25; i_20 += 4) 
                    {
                        var_34 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_55 [(_Bool)1] [i_20] [i_20] [i_18 - 1])) | (arr_44 [i_16])));
                        var_35 = ((((/* implicit */_Bool) var_8)) ? (arr_22 [i_18 + 1] [i_18 + 1] [i_18 + 1] [i_18 + 1]) : (((/* implicit */int) var_5)));
                        var_36 = (+(arr_51 [i_0]));
                        var_37 = ((/* implicit */unsigned char) max((var_37), (arr_26 [i_16] [i_18] [i_18 - 1] [i_18] [i_18 - 1] [i_18] [i_18 - 1])));
                    }
                    var_38 *= ((/* implicit */unsigned short) ((arr_36 [i_18 + 1] [i_16] [i_19] [i_19]) > (arr_36 [i_18 + 1] [i_16] [i_16] [i_19])));
                }
                arr_68 [i_0] [i_16] [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) 536805376U)))));
            }
        }
        var_39 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_62 [i_0] [(unsigned short)9] [i_0] [i_0] [i_0])) ? (arr_62 [i_0] [i_0] [i_0] [i_0] [i_0]) : (var_6))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_41 [i_0])) ? (((/* implicit */int) (unsigned char)0)) : (arr_41 [i_0]))))));
        arr_69 [i_0] [i_0] = ((/* implicit */int) var_0);
        /* LoopNest 2 */
        for (long long int i_21 = 0; i_21 < 25; i_21 += 4) 
        {
            for (unsigned char i_22 = 0; i_22 < 25; i_22 += 4) 
            {
                {
                    var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((((/* implicit */int) (signed char)64)) | (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_70 [i_0] [i_21] [i_22])))))))));
                    arr_75 [(short)10] [i_0] [(short)10] = ((/* implicit */long long int) (unsigned char)162);
                    var_41 |= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((((/* implicit */_Bool) arr_66 [i_22] [i_21] [i_0] [i_0] [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_64 [i_0] [(signed char)18] [i_22]))))) : (((/* implicit */unsigned long long int) ((unsigned int) 33521664LL))))));
                }
            } 
        } 
    }
    for (unsigned short i_23 = 0; i_23 < 25; i_23 += 1) /* same iter space */
    {
        var_42 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_73 [i_23] [i_23] [i_23] [(unsigned short)21])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) < (var_9))))))), (var_4)));
        var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) -1844632470))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_23] [i_23])) ? (((/* implicit */int) arr_31 [i_23] [i_23])) : (((/* implicit */int) arr_31 [i_23] [(unsigned char)21]))))) : (((((/* implicit */_Bool) arr_31 [i_23] [i_23])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_23] [i_23])))))));
        var_44 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_72 [i_23] [i_23] [(_Bool)1] [i_23]))) | (((((170894134907666463ULL) | (((/* implicit */unsigned long long int) 1844632480)))) ^ (((/* implicit */unsigned long long int) ((var_0) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
        var_45 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((unsigned short) arr_22 [i_23] [i_23] [i_23] [i_23]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_63 [i_23] [i_23] [i_23] [i_23])))))))) ? (((/* implicit */int) arr_17 [i_23] [i_23] [i_23] [i_23] [i_23])) : (((((/* implicit */_Bool) -1844632464)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (short)-31046))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)56)) && (var_5))))))));
        var_46 = ((/* implicit */long long int) max((((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_23] [i_23] [i_23] [i_23])) && (((/* implicit */_Bool) arr_10 [i_23] [11] [i_23] [i_23]))))), ((short)32271)));
    }
    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
    {
        var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [(short)1] [(short)1]))) : (arr_11 [i_24] [(_Bool)1] [(signed char)0])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((((/* implicit */_Bool) arr_71 [14ULL])) && (arr_28 [(short)14] [i_24] [i_24] [i_24])))))) : (max((((/* implicit */int) ((unsigned short) var_6))), (arr_22 [i_24] [i_24] [i_24] [i_24]))))))));
        arr_80 [i_24] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)76)) || (var_0))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [(short)4] [i_24] [i_24] [i_24])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (1920LL)))) : (((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [i_24] [i_24] [i_24] [i_24] [(unsigned char)18]))) : (var_8)))))) ? (((unsigned int) var_3)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) var_0))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) * (arr_30 [i_24] [(_Bool)1])))))));
        var_48 = ((/* implicit */short) var_9);
        /* LoopNest 3 */
        for (signed char i_25 = 0; i_25 < 25; i_25 += 2) 
        {
            for (unsigned char i_26 = 0; i_26 < 25; i_26 += 4) 
            {
                for (unsigned char i_27 = 0; i_27 < 25; i_27 += 3) 
                {
                    {
                        var_49 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_55 [i_27] [i_27] [i_27] [i_24]))) | (arr_42 [i_24] [i_24] [i_24] [i_24] [i_24]))))));
                        arr_90 [i_24] [i_27] [i_27] [(unsigned short)24] [9] = ((/* implicit */int) ((((/* implicit */_Bool) arr_86 [i_24] [i_25] [i_26] [i_27])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_24] [i_25] [i_26] [i_24] [i_27]))) : (arr_86 [i_24] [i_25] [i_26] [i_27]))) : (((arr_86 [(short)3] [i_24] [i_24] [i_24]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_24] [i_25] [i_26] [i_25] [i_27])))))));
                    }
                } 
            } 
        } 
    }
    var_50 = ((/* implicit */short) var_5);
    var_51 = ((/* implicit */unsigned short) max((var_51), (((/* implicit */unsigned short) var_6))));
}
