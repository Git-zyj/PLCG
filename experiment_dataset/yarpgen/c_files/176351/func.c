/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176351
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
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), (var_15)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (var_9)))) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */_Bool) (signed char)-118)) ? (var_2) : (var_8)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_20 = ((((/* implicit */_Bool) ((arr_0 [i_0] [(unsigned short)5]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) && ((_Bool)1));
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_1])))))));
            var_22 *= (unsigned short)4049;
            var_23 &= ((unsigned long long int) arr_3 [(unsigned char)23] [i_0] [i_0]);
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                var_24 *= ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0])) << (((((((((/* implicit */_Bool) arr_6 [(short)0] [(short)0] [i_1] [(short)0])) ? (((/* implicit */int) arr_8 [i_0] [(unsigned short)18] [i_2])) : (((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_0] [7LL])))) + (52))) - (28)))));
                var_25 = ((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0] [i_0]));
                var_26 *= ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_5 [i_2])))) == (((/* implicit */int) arr_2 [17LL]))));
            }
        }
        for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            arr_13 [i_0] [i_3] = ((/* implicit */signed char) arr_1 [i_0] [i_3]);
            var_27 = ((/* implicit */unsigned short) ((unsigned int) ((68717379584ULL) / (68717379569ULL))));
            var_28 -= ((/* implicit */unsigned int) ((_Bool) arr_11 [(unsigned char)22] [i_3] [i_3]));
        }
        for (unsigned short i_4 = 2; i_4 < 20; i_4 += 3) 
        {
            arr_16 [i_0] [(signed char)9] |= ((/* implicit */signed char) ((((/* implicit */_Bool) -700583954)) ? (((((/* implicit */int) (unsigned short)56964)) & (((/* implicit */int) arr_5 [i_0])))) : (((((/* implicit */_Bool) arr_4 [21ULL] [(unsigned short)19] [i_4 + 1])) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (536805376)))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    {
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (unsigned short)59269)) : (-700583954)))) ? (((/* implicit */int) (!((_Bool)0)))) : (((/* implicit */int) (_Bool)0))));
                        var_30 *= ((/* implicit */unsigned long long int) (+(arr_3 [i_4 + 2] [i_4 + 1] [i_4 + 2])));
                        var_31 = ((/* implicit */signed char) (unsigned short)9807);
                    }
                } 
            } 
        }
        for (signed char i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_5 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) 0U))))) : (((/* implicit */int) arr_19 [i_0] [i_7] [i_0] [i_0])))))));
            arr_23 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) arr_2 [22LL]))))) / (((/* implicit */int) arr_18 [i_0] [i_7] [i_7]))));
        }
        /* LoopSeq 2 */
        for (signed char i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            var_33 = ((/* implicit */int) min((var_33), (((((/* implicit */_Bool) arr_3 [i_0] [i_8] [i_0])) ? (arr_3 [i_0] [i_8] [i_8]) : (arr_3 [i_0] [i_8] [i_0])))));
            var_34 = ((/* implicit */signed char) ((int) ((unsigned short) (short)-2722)));
            arr_27 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_8] [i_8] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (-1277122574)));
            arr_28 [i_0] [i_8] [i_8] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_20 [i_0] [i_8] [i_8] [i_8] [i_8])) ? (arr_0 [i_8] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_8]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            arr_31 [i_9] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 68717379584ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)111))) : (68717379584ULL)))));
            arr_32 [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_9])) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)5866)) - (((/* implicit */int) (unsigned short)34504)))))));
        }
        arr_33 [i_0] = ((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) arr_14 [i_0] [(unsigned short)14]))));
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_35 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)1023)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)27752))));
        var_36 |= (((_Bool)1) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (short)-11121)));
        arr_38 [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_10])) << (((((/* implicit */int) arr_12 [i_10])) - (18866)))));
        /* LoopSeq 1 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_42 [i_11] = ((/* implicit */unsigned char) ((unsigned short) (signed char)-1));
            /* LoopNest 3 */
            for (short i_12 = 0; i_12 < 21; i_12 += 3) 
            {
                for (signed char i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    for (long long int i_14 = 0; i_14 < 21; i_14 += 3) 
                    {
                        {
                            var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) arr_34 [i_10])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)3324)) || (((/* implicit */_Bool) arr_11 [i_10] [(signed char)2] [i_10]))))))))));
                            arr_54 [i_14] [i_11] [i_12] [i_12] [i_11] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_10] [i_11] [i_10])) ? (((/* implicit */int) arr_11 [i_10] [i_10] [i_10])) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 3 */
        for (unsigned long long int i_15 = 1; i_15 < 19; i_15 += 3) /* same iter space */
        {
            arr_59 [(unsigned short)3] [16ULL] [16ULL] = ((/* implicit */unsigned char) (((_Bool)1) ? (arr_25 [i_10] [i_15 + 1]) : (arr_25 [i_10] [i_15 + 2])));
            var_38 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)4727))));
            arr_60 [i_10] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_10] [(signed char)15] [(_Bool)1] [i_15])) ? (arr_49 [(unsigned short)13] [(unsigned short)13] [(unsigned short)13] [(unsigned char)0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (arr_25 [i_10] [i_15]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_10] [i_15])) * (((/* implicit */int) (unsigned short)10260))))));
        }
        for (unsigned long long int i_16 = 1; i_16 < 19; i_16 += 3) /* same iter space */
        {
            var_39 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_16 + 2] [i_16 - 1] [i_16 + 1] [i_16 + 1])) ? (((/* implicit */int) arr_7 [i_16 - 1] [i_16 + 1] [i_16] [i_16 - 1])) : (((/* implicit */int) arr_7 [i_16 - 1] [i_16 + 1] [i_16] [i_16 - 1]))));
            var_40 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_47 [i_10] [i_16 - 1] [i_16 - 1] [i_16 - 1])) ? (((/* implicit */int) (unsigned short)55276)) : (((/* implicit */int) arr_47 [(short)15] [i_16 - 1] [13U] [i_16 + 2]))));
            /* LoopSeq 4 */
            for (int i_17 = 0; i_17 < 21; i_17 += 1) 
            {
                var_41 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)10259)) ? (((/* implicit */unsigned long long int) 193700717U)) : (arr_0 [i_10] [i_16 + 1]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_57 [i_16]))))));
                /* LoopNest 2 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    for (unsigned short i_19 = 0; i_19 < 21; i_19 += 1) 
                    {
                        {
                            arr_70 [(signed char)9] [i_18] [i_18] [i_10] = ((/* implicit */unsigned int) ((arr_64 [i_10] [i_16 + 1] [i_10]) || (((((/* implicit */_Bool) (unsigned short)55276)) || (((/* implicit */_Bool) (signed char)124))))));
                            var_42 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)11120)) ? (((/* implicit */int) (short)32767)) : (-1560804239)));
                            var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) arr_49 [i_16] [i_16 - 1] [i_17] [i_16]))));
                        }
                    } 
                } 
            }
            for (int i_20 = 0; i_20 < 21; i_20 += 3) /* same iter space */
            {
                arr_73 [i_20] [i_16] [i_20] = ((((/* implicit */int) arr_18 [i_16 + 2] [i_16 + 2] [i_16 + 1])) << (((((/* implicit */int) ((signed char) arr_44 [i_10] [(signed char)1] [i_16] [i_16]))) - (56))));
                var_44 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_36 [i_10]))))) ? (((((/* implicit */_Bool) 429183888869999775ULL)) ? (((/* implicit */unsigned int) arr_65 [(signed char)1] [6ULL] [(unsigned short)0])) : (1175688664U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_48 [6LL] [i_16] [(unsigned char)6]))))));
            }
            for (int i_21 = 0; i_21 < 21; i_21 += 3) /* same iter space */
            {
                arr_76 [(signed char)8] [14ULL] &= ((/* implicit */int) ((unsigned long long int) arr_21 [i_16] [(signed char)22]));
                var_45 = ((/* implicit */signed char) ((((/* implicit */int) (short)-32767)) > (((/* implicit */int) arr_62 [i_16 + 1]))));
            }
            for (int i_22 = 0; i_22 < 21; i_22 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_23 = 0; i_23 < 21; i_23 += 1) 
                {
                    var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((int) arr_4 [i_10] [i_10] [i_10])) : ((+(((/* implicit */int) arr_80 [i_22] [i_22] [i_22] [i_22] [(_Bool)1]))))));
                    arr_82 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (short)32767))) ? (((((/* implicit */_Bool) 1521790069U)) ? (-4796682908047910383LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-103))))) : (((/* implicit */long long int) ((4101266578U) + (arr_22 [i_10] [i_22]))))));
                }
                var_47 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)76)) ? (8130150949281616811ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) -4796682908047910389LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (509540744549365900ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_16 - 1] [i_16 - 1] [i_16 + 2] [i_16 + 1])))));
                var_48 = ((/* implicit */long long int) (((((_Bool)1) ? (arr_35 [i_16 - 1]) : (arr_61 [i_10] [(signed char)11]))) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-105)))));
            }
            arr_83 [i_10] [i_16 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-19440)) * (((/* implicit */int) ((signed char) arr_39 [i_10])))));
        }
        for (unsigned long long int i_24 = 1; i_24 < 19; i_24 += 3) /* same iter space */
        {
            var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)7)) > (((/* implicit */int) arr_50 [i_10] [i_10] [i_24] [i_24]))))) | (((((/* implicit */_Bool) arr_78 [i_10] [(_Bool)1])) ? (((/* implicit */int) arr_84 [i_10] [i_24 + 1])) : (((/* implicit */int) (short)-28062))))));
            /* LoopNest 2 */
            for (signed char i_25 = 0; i_25 < 21; i_25 += 3) 
            {
                for (unsigned char i_26 = 0; i_26 < 21; i_26 += 3) 
                {
                    {
                        arr_92 [i_25] [i_24] [i_24] [i_26] = ((((/* implicit */int) (signed char)13)) % (((/* implicit */int) ((_Bool) arr_39 [i_24]))));
                        arr_93 [i_10] [i_24] [i_25] [i_26] = ((/* implicit */signed char) ((unsigned int) 2413433636015318910LL));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned int i_27 = 0; i_27 < 21; i_27 += 3) 
            {
                var_50 = ((/* implicit */short) ((unsigned long long int) ((arr_0 [i_10] [i_10]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_10] [i_10] [i_27]))))));
                var_51 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_47 [i_10] [i_10] [i_10] [i_10])) || (((/* implicit */_Bool) (signed char)74)))) ? (((((/* implicit */int) (unsigned short)35918)) >> (((((/* implicit */int) arr_72 [(unsigned short)18] [(unsigned short)18] [(signed char)16] [i_27])) - (41857))))) : ((((_Bool)1) ? (((/* implicit */int) arr_30 [(_Bool)1])) : (((/* implicit */int) (unsigned short)63528))))));
            }
            for (short i_28 = 1; i_28 < 18; i_28 += 1) 
            {
                var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) ((unsigned short) 176720160U)))));
                var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_28] [(unsigned char)14] [i_28])) + (((/* implicit */int) arr_72 [(unsigned char)8] [(_Bool)1] [i_28] [i_28 - 1]))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_84 [i_10] [i_10])) ? (((/* implicit */int) arr_29 [18ULL])) : (((/* implicit */int) arr_81 [i_10] [i_24] [i_28 + 2] [i_10] [i_10] [(unsigned short)18]))))));
                var_54 = ((/* implicit */unsigned char) arr_40 [i_24 + 2] [i_24 + 2] [i_28 + 1]);
            }
            for (int i_29 = 0; i_29 < 21; i_29 += 3) 
            {
                var_55 = ((/* implicit */unsigned int) ((unsigned long long int) arr_89 [i_10] [i_10] [7] [i_24 - 1]));
                var_56 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10544944927317659874ULL)) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) (short)252))));
            }
        }
    }
}
