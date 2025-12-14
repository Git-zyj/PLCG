/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177758
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
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_13 += ((/* implicit */long long int) min((((unsigned long long int) ((var_6) > (var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) -1654545788))))) && (((/* implicit */_Bool) 0U)))))));
                                var_14 += ((_Bool) ((((/* implicit */long long int) ((arr_4 [i_3] [(unsigned char)0] [i_3]) << (((((/* implicit */int) var_7)) - (29)))))) * (((((/* implicit */long long int) ((/* implicit */int) var_3))) % (-1LL)))));
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((int) var_1)) % (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2] [i_1] [i_3 - 2]))))) ? ((+(((arr_0 [(_Bool)1]) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0 - 1])) : (((/* implicit */int) arr_10 [i_4] [i_2] [i_2] [i_1 + 2] [i_2] [11ULL])))))) : (((/* implicit */int) arr_8 [i_0 - 1] [i_1 - 1] [i_0 - 1]))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_5 = 1; i_5 < 11; i_5 += 2) 
                {
                    arr_15 [i_0] [i_0 - 1] [9LL] = ((/* implicit */int) ((((/* implicit */int) ((signed char) min((((/* implicit */long long int) arr_3 [i_0])), (var_11))))) >= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 7791363944763618920LL)))) > (min((-1LL), (((/* implicit */long long int) arr_11 [(_Bool)1] [(_Bool)0] [i_5] [8LL] [i_5] [(signed char)4])))))))));
                    var_16 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                }
                /* vectorizable */
                for (int i_6 = 3; i_6 < 11; i_6 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 1) 
                        {
                            arr_23 [i_8] [i_6] [i_6] [i_1 - 1] = ((/* implicit */long long int) arr_18 [i_0] [i_1 + 1] [i_6] [i_7]);
                            var_17 = arr_21 [i_0 + 1] [i_1] [5LL] [i_7] [i_8];
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) arr_6 [i_0] [(_Bool)1] [0U] [i_8 + 1]))));
                            arr_24 [i_0] [i_0] [i_6] = ((/* implicit */unsigned char) ((-1080241240839742885LL) >= (((/* implicit */long long int) arr_4 [i_6] [i_1] [i_1]))));
                        }
                        for (int i_9 = 0; i_9 < 12; i_9 += 3) 
                        {
                            arr_27 [i_6] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_6] [i_6 + 1] [i_6 + 1]))));
                            arr_28 [i_6] [i_6] [i_6 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */long long int) arr_4 [i_6] [i_1] [i_1])))) : (var_12)));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                        {
                            var_19 = arr_30 [i_6];
                            arr_32 [i_0] [i_0] [i_0] [(signed char)6] [i_0] [i_0] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_1 + 1] [i_0 + 1]))));
                        }
                        var_20 = ((arr_0 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_6] [i_6 - 1]))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_6]))) : (var_8))));
                    }
                    for (int i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) 8966686810562603126LL);
                        arr_36 [i_0] [i_0] [i_6] [i_0 - 1] [9ULL] [i_0 + 1] = ((/* implicit */unsigned int) ((var_11) + (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))));
                        arr_37 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_11] [i_0 - 1] [i_6] = ((/* implicit */long long int) ((_Bool) arr_21 [i_1 + 1] [i_1] [i_6 + 1] [i_11] [i_0 - 1]));
                        var_22 = (!(((/* implicit */_Bool) arr_35 [i_0 - 1] [8LL])));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) (signed char)-6))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        arr_40 [i_0] [i_6] = ((/* implicit */long long int) var_3);
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1]))) ^ ((~(-8850666054980883935LL))))))));
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-7))) >= (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_12] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_12] [i_1] [6] [i_1 + 1] [i_1]))) : (var_12))))))));
                        arr_41 [i_0] [i_1] [i_0] [i_6] [i_6] = ((/* implicit */unsigned int) var_3);
                    }
                    var_26 = ((/* implicit */long long int) (-(var_9)));
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_13 = 1; i_13 < 21; i_13 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_14 = 0; i_14 < 24; i_14 += 2) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    var_27 = ((/* implicit */unsigned char) (unsigned short)12946);
                    arr_50 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_47 [i_13] [i_13] [i_13 + 1] [i_13])), (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (arr_45 [i_13] [i_13] [i_13 + 3])));
                    var_28 &= ((/* implicit */signed char) min((((long long int) ((unsigned char) (signed char)42))), (min((-7791363944763618938LL), (arr_45 [i_13] [i_13] [(unsigned char)9])))));
                }
            } 
        } 
        var_29 = ((long long int) arr_45 [i_13] [i_13] [i_13]);
        /* LoopSeq 3 */
        for (long long int i_16 = 2; i_16 < 23; i_16 += 4) 
        {
            arr_53 [i_13] = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_42 [i_13])), (4817096434436400897LL))) + (((/* implicit */long long int) (-(-987696069))))));
            arr_54 [i_13] [i_13] [i_16 - 2] = ((/* implicit */unsigned char) (((-(arr_45 [i_16 - 2] [i_16 - 2] [i_16 - 1]))) - ((-(arr_45 [i_16 - 1] [i_16] [i_16 - 2])))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_17 = 3; i_17 < 22; i_17 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_18 = 0; i_18 < 24; i_18 += 4) 
                {
                    arr_61 [i_13] [15] [i_17] [i_17] [15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_17 - 2] [i_17] [i_17] [i_13 + 2])))));
                    var_30 = ((/* implicit */unsigned long long int) ((unsigned char) arr_56 [i_13] [i_17] [i_13] [i_13 + 1]));
                    arr_62 [i_17] [i_16 - 1] [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_46 [(signed char)14] [i_16] [i_16 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_13])) ? (var_5) : (arr_42 [i_13])))) : (arr_49 [i_13 + 2] [i_17 + 2])));
                }
                arr_63 [i_13] [i_17] [i_13 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? ((+(6LL))) : (((/* implicit */long long int) ((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_13 - 1] [i_13 + 3] [i_13 + 3] [i_17 - 1]))))))));
                var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) var_8))));
                arr_64 [i_13] [i_13] [i_17] = ((/* implicit */int) ((long long int) 692868370056330087LL));
            }
            for (long long int i_19 = 0; i_19 < 24; i_19 += 3) 
            {
                arr_69 [i_13] [i_16] [i_19] = ((/* implicit */signed char) var_5);
                var_32 = ((/* implicit */unsigned char) (-2147483647 - 1));
            }
            for (long long int i_20 = 0; i_20 < 24; i_20 += 3) 
            {
                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((var_3), (((/* implicit */unsigned short) (signed char)-110)))), (((/* implicit */unsigned short) ((_Bool) arr_46 [i_20] [i_16 - 1] [i_13])))))) ? (min((((long long int) var_3)), (arr_71 [i_20]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_48 [i_13] [i_13] [i_13 - 1] [i_13 - 1]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6)))))))));
                arr_72 [i_20] [i_16 + 1] [i_16 + 1] [i_16] = ((/* implicit */signed char) min(((-(min((-2291233145838496566LL), (var_6))))), (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) * (arr_60 [i_13 + 3] [i_20] [i_13] [i_13]))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            }
            var_34 *= ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) (unsigned char)0)) ? (arr_48 [i_13 + 2] [i_13 + 3] [i_13] [i_13 + 3]) : (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_59 [i_13] [i_13] [i_13] [i_16])), (var_9)))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)254))))))));
            arr_73 [i_13 - 1] [i_13] = ((/* implicit */_Bool) ((signed char) ((long long int) arr_59 [i_13 + 3] [i_13 + 1] [i_13 + 1] [i_16])));
        }
        /* vectorizable */
        for (long long int i_21 = 0; i_21 < 24; i_21 += 2) 
        {
            arr_76 [i_13] = ((/* implicit */unsigned char) var_4);
            arr_77 [i_13 + 1] [(unsigned char)5] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) > (((unsigned int) var_10))));
        }
        /* vectorizable */
        for (int i_22 = 0; i_22 < 24; i_22 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_23 = 0; i_23 < 24; i_23 += 1) 
            {
                var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4)))))));
                var_36 = ((/* implicit */unsigned long long int) (signed char)-1);
                arr_83 [i_13 - 1] [i_13 + 2] [i_23] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_59 [i_13] [i_13] [23] [i_23]))))));
            }
            arr_84 [i_13] [(unsigned short)7] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_9)) % ((-9223372036854775807LL - 1LL))));
            var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) 4294967295U))));
            var_38 = ((/* implicit */signed char) ((9223372036854775807LL) | (((/* implicit */long long int) ((/* implicit */int) var_4)))));
        }
    }
    /* vectorizable */
    for (signed char i_24 = 0; i_24 < 24; i_24 += 4) 
    {
        var_39 = ((/* implicit */unsigned long long int) ((_Bool) (signed char)90));
        var_40 = ((/* implicit */unsigned short) var_12);
    }
    /* vectorizable */
    for (unsigned long long int i_25 = 0; i_25 < 16; i_25 += 2) 
    {
        var_41 = ((/* implicit */unsigned char) 7427950382614462641ULL);
        arr_91 [i_25] = ((((/* implicit */int) ((11018793691095088975ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) * (((/* implicit */int) arr_81 [i_25])));
        var_42 = var_11;
    }
}
