/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154175
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_11 ^= var_0;
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_12 &= ((/* implicit */unsigned char) 2305843009211596800ULL);
            /* LoopSeq 2 */
            for (signed char i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((arr_7 [(signed char)5] [(signed char)5]), (((/* implicit */long long int) var_5)))) << (((((long long int) var_0)) - (24LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned char)16)) || (((/* implicit */_Bool) arr_7 [(short)4] [i_1])))))))) : (min((min((var_9), (-5359875642833018919LL))), (((long long int) arr_13 [i_0] [i_0] [i_4] [i_0] [i_0])))))))));
                            var_14 *= ((/* implicit */short) ((max(((-(5948977604215847518LL))), (arr_7 [i_0] [i_0]))) > (((/* implicit */long long int) min((((unsigned int) var_5)), (((/* implicit */unsigned int) var_0)))))));
                        }
                    } 
                } 
                var_15 &= ((/* implicit */short) ((max((arr_9 [(_Bool)1] [6ULL] [(_Bool)1] [(_Bool)1]), (((/* implicit */long long int) 1898215388U)))) | (((arr_9 [(unsigned char)10] [i_2] [i_2 - 3] [(unsigned char)10]) / (arr_9 [(unsigned short)10] [(unsigned short)10] [i_2] [i_2 - 2])))));
                var_16 += ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-5359875642833018901LL) + (9223372036854775807LL))) >> (((arr_13 [i_0] [i_2 - 2] [(unsigned char)4] [i_2] [i_2]) - (99828651U)))))) ? (((/* implicit */int) arr_10 [i_2 - 3] [i_2 - 2] [i_2 + 1] [i_2 - 3] [i_2])) : (((/* implicit */int) (signed char)-122)))))));
                var_17 -= ((/* implicit */unsigned char) 372888827);
            }
            /* vectorizable */
            for (short i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (short i_6 = 2; i_6 < 8; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        {
                            var_18 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [6] [i_7] [i_5] [i_6 - 2])) ? ((-(arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) == (((/* implicit */long long int) ((/* implicit */int) var_8)))))))));
                            var_19 = ((/* implicit */long long int) ((13715195635200606524ULL) >> (((((/* implicit */int) (signed char)121)) - (72)))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_18 [i_6 + 1] [i_6 + 2] [i_6 + 3] [i_6 + 3])) : (((/* implicit */int) (unsigned short)131))));
                            var_21 = ((/* implicit */signed char) ((523671942U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120)))));
                            var_22 += (+(((/* implicit */int) arr_0 [i_6 + 3])));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_19 [i_1] [i_1] [i_5] [i_0])) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [(_Bool)1]))));
            }
            var_24 &= ((/* implicit */unsigned short) min((((/* implicit */long long int) var_2)), ((+((~(5359875642833018910LL)))))));
            /* LoopSeq 1 */
            for (unsigned short i_8 = 2; i_8 < 9; i_8 += 2) 
            {
                var_25 += ((/* implicit */_Bool) var_6);
                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (arr_21 [i_0] [i_0] [i_0] [i_0] [i_8] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
            }
            /* LoopSeq 3 */
            for (unsigned int i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                var_27 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_1] [i_9]))) < (arr_12 [i_1]))))) / (max((523671942U), (arr_13 [i_0] [6U] [i_1] [i_1] [i_0])))))), (min((((/* implicit */unsigned long long int) ((arr_11 [i_1]) & (523671925U)))), (max((((/* implicit */unsigned long long int) arr_13 [i_9] [i_9] [i_1] [i_9] [4ULL])), (6241773764133113759ULL)))))));
                var_28 |= ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) var_5)), (arr_21 [i_9] [i_1] [i_9] [i_1] [4U] [i_1] [(unsigned short)10]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -5359875642833018919LL)))))));
                var_29 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) >= (min((max((5359875642833018905LL), (((/* implicit */long long int) -1)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1])))))))));
                /* LoopNest 2 */
                for (int i_10 = 2; i_10 < 10; i_10 += 2) 
                {
                    for (unsigned int i_11 = 2; i_11 < 8; i_11 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_11 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)29722))) != (3559706908U))))) : (((((/* implicit */_Bool) arr_30 [i_9] [i_11] [i_11 + 2] [3U])) ? (((long long int) var_0)) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (1602487761U))))))));
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((int) (!(((/* implicit */_Bool) ((8627870561035180058ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-20))))))))))));
                            arr_34 [i_1] [i_1] [i_9] = ((/* implicit */short) (+(((/* implicit */int) arr_19 [i_0] [i_1] [i_10 - 2] [i_11 + 3]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_12 = 3; i_12 < 8; i_12 += 2) 
                {
                    var_32 &= ((/* implicit */unsigned int) max(((-(((/* implicit */int) ((unsigned short) (_Bool)1))))), (((/* implicit */int) (signed char)-120))));
                    var_33 &= ((/* implicit */unsigned long long int) arr_7 [i_9] [i_0]);
                    var_34 &= ((/* implicit */signed char) var_10);
                    arr_37 [i_0] [i_1] [i_1] [i_12 - 3] = ((/* implicit */_Bool) var_3);
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 1; i_13 < 8; i_13 += 4) 
                    {
                        arr_41 [i_0] [i_13] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) 6241773764133113759ULL)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */int) (unsigned short)31744)) : (((/* implicit */int) (signed char)-121)))))))) % (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)39)), (var_10)))) ? (((/* implicit */int) arr_40 [i_13] [i_1] [i_9] [i_12] [i_13])) : (((((/* implicit */int) var_4)) >> (((arr_39 [i_0] [i_0] [i_1] [i_9] [i_12] [i_13]) - (911893631)))))))));
                        var_35 &= ((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_0] [i_1] [i_12 + 1] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_9] [i_12] [i_13])) : (((/* implicit */int) arr_32 [i_0] [i_13 + 1])))) != (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_9] [i_12 - 2] [i_13 + 1])) ? (((/* implicit */int) arr_19 [i_0] [i_1] [i_9] [(signed char)8])) : (((/* implicit */int) arr_19 [i_0] [i_1] [(unsigned short)10] [i_0]))))));
                        arr_42 [i_0] [i_1] [i_9] [(signed char)4] [0LL] |= ((/* implicit */short) (-(3227056303094393606ULL)));
                    }
                    for (short i_14 = 2; i_14 < 10; i_14 += 1) 
                    {
                        arr_46 [i_1] [8] [i_9] [i_1] [i_1] = ((/* implicit */signed char) ((((max((((/* implicit */long long int) var_2)), (arr_7 [i_1] [i_1]))) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) != (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (arr_7 [i_14 - 2] [i_14 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3648683053U))))))))));
                        arr_47 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) 745853544011678334ULL)) && (((/* implicit */_Bool) var_0)))) ? (((unsigned int) arr_1 [i_14 - 2])) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_1]), (arr_1 [i_9])))))));
                    }
                }
            }
            for (long long int i_15 = 0; i_15 < 11; i_15 += 2) /* same iter space */
            {
                var_36 = ((/* implicit */unsigned int) arr_16 [i_0] [i_1] [i_1] [i_15]);
                var_37 = ((/* implicit */short) min((((int) min((((/* implicit */long long int) (unsigned short)65534)), (-5359875642833018919LL)))), ((+(((/* implicit */int) (signed char)118))))));
                /* LoopSeq 2 */
                for (int i_16 = 0; i_16 < 11; i_16 += 1) 
                {
                    var_38 = ((/* implicit */unsigned long long int) (_Bool)1);
                    /* LoopSeq 1 */
                    for (int i_17 = 2; i_17 < 9; i_17 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_44 [i_17 + 2] [(short)9] [i_17 - 1] [i_17 + 2] [7ULL] [i_17 - 2])) && (((/* implicit */_Bool) arr_44 [i_17 - 2] [i_17 - 1] [i_17 + 1] [i_17 - 2] [(short)7] [i_17 - 1])))) || (((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_5)))))));
                        arr_55 [i_0] [i_15] [i_15] [i_15] [i_16] |= ((/* implicit */short) min((((/* implicit */long long int) min((((446254664U) * (0U))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) arr_32 [i_0] [i_0])) - (83))))))))), (min((min((arr_7 [i_17 + 1] [i_15]), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) arr_44 [i_17] [i_17 + 1] [i_17] [i_17 - 2] [i_17] [i_17 - 2]))))));
                        var_40 = max((((/* implicit */long long int) (-(((/* implicit */int) arr_38 [i_0] [i_17 - 2] [i_1] [i_16] [i_17 + 1] [i_0] [i_16]))))), (min((((/* implicit */long long int) 381081945)), (5359875642833018915LL))));
                        var_41 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_18 = 0; i_18 < 11; i_18 += 2) 
                    {
                        var_42 = ((/* implicit */unsigned long long int) max((var_42), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= ((+(6629430928388429107ULL))))))) | (18446744073709551615ULL)))));
                        var_43 |= ((/* implicit */_Bool) arr_35 [i_0] [i_15]);
                        var_44 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) 1437421471)) || (((/* implicit */_Bool) (unsigned short)49026))))));
                    }
                }
                for (signed char i_19 = 2; i_19 < 7; i_19 += 3) 
                {
                    var_45 = min((max((((unsigned long long int) (signed char)(-127 - 1))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_3)), (arr_48 [i_0] [i_0] [i_0] [i_19])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((/* implicit */int) ((unsigned short) arr_14 [i_15] [i_0]))) : (((/* implicit */int) arr_31 [(unsigned char)1] [i_1] [i_19 - 1] [i_19 + 4] [i_1] [i_19]))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_20 = 1; i_20 < 10; i_20 += 1) /* same iter space */
                    {
                        var_46 = ((((/* implicit */_Bool) (-(arr_28 [i_15])))) && (((/* implicit */_Bool) arr_58 [i_0] [i_0] [0] [i_19] [i_20 + 1])));
                        var_47 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) var_9))))) == (((/* implicit */int) ((signed char) var_3)))))) != (((/* implicit */int) var_7))));
                    }
                    for (unsigned short i_21 = 1; i_21 < 10; i_21 += 1) /* same iter space */
                    {
                        arr_69 [(signed char)4] [i_1] [(signed char)4] [i_19] [i_15] [(signed char)2] &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_44 [i_19 + 4] [i_19] [i_19] [i_19 - 2] [i_19 - 1] [i_21 - 1]))))) & (((((/* implicit */_Bool) -285306382)) ? (1099434705U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27869)))))));
                        var_48 = ((unsigned long long int) (+(((((/* implicit */unsigned int) -1437421472)) - (arr_13 [i_19] [i_19] [i_1] [i_19 + 2] [i_19])))));
                        var_49 ^= ((/* implicit */short) ((long long int) max((((/* implicit */int) (unsigned char)86)), (-2001011634))));
                    }
                    var_50 = ((/* implicit */int) min((var_50), (((/* implicit */int) arr_28 [i_0]))));
                    var_51 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-27878)), (0ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_33 [i_0] [i_0] [i_0] [i_0] [i_19]))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */int) var_2))))) : ((-(10380589064369201039ULL))));
                }
            }
            for (long long int i_22 = 0; i_22 < 11; i_22 += 2) /* same iter space */
            {
                var_52 = ((/* implicit */int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)2047))) > (arr_53 [i_0] [i_0] [i_1] [i_1] [i_1]))));
                /* LoopSeq 1 */
                for (int i_23 = 0; i_23 < 11; i_23 += 1) 
                {
                    var_53 = (+(((/* implicit */int) ((short) (-(4ULL))))));
                    var_54 = ((/* implicit */unsigned char) (short)-1);
                }
                var_55 *= ((/* implicit */short) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_4)))) / (((((/* implicit */_Bool) arr_24 [i_1] [i_1])) ? (((/* implicit */int) arr_49 [i_22])) : (((/* implicit */int) var_7))))))) ? (((((/* implicit */_Bool) 2147483645)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_21 [i_22] [i_22] [i_22] [i_1] [i_22] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)2047)) - (((/* implicit */int) (unsigned char)88)))))));
                arr_74 [i_1] [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_22] [i_1]))))), (min((var_9), (((/* implicit */long long int) (_Bool)1))))));
            }
        }
        var_56 |= ((/* implicit */signed char) max((((/* implicit */short) ((((/* implicit */_Bool) var_3)) || (((((/* implicit */long long int) var_10)) == (arr_28 [i_0])))))), (((short) 778191553313330715ULL))));
    }
    for (int i_24 = 0; i_24 < 11; i_24 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_25 = 0; i_25 < 11; i_25 += 2) 
        {
            for (short i_26 = 2; i_26 < 10; i_26 += 3) 
            {
                {
                    var_57 += ((/* implicit */short) ((((/* implicit */_Bool) 68719476735ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_79 [i_24])) || (((/* implicit */_Bool) arr_71 [i_24] [i_25] [i_25] [i_25]))))) : (min((arr_36 [i_26] [i_26] [i_26] [i_26 - 1]), (((/* implicit */int) (!(((/* implicit */_Bool) 2147483641)))))))));
                    arr_85 [i_24] [i_25] [i_24] = ((/* implicit */unsigned char) max((min((((arr_72 [i_24] [(signed char)7] [i_26] [i_25]) | (5031664365957860466ULL))), (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */unsigned int) (short)16384))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_51 [i_26 + 1] [i_25] [i_26 + 1] [i_26])) & (((/* implicit */int) arr_51 [i_26 - 1] [i_25] [i_26] [i_26])))))));
                    var_58 = (short)16381;
                }
            } 
        } 
        var_59 = ((/* implicit */long long int) min((var_59), (((/* implicit */long long int) (~(((/* implicit */int) min((arr_10 [i_24] [i_24] [i_24] [i_24] [1LL]), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)137))) > (arr_9 [(short)4] [(short)4] [i_24] [i_24]))))))))))));
        arr_86 [6LL] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned char)2)), (15219687770615158022ULL)));
    }
    var_60 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_9)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) & (var_9)))))))));
    var_61 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max(((~(((/* implicit */int) var_5)))), (((/* implicit */int) (!(((/* implicit */_Bool) 3227056303094393606ULL)))))))), (var_6)));
    var_62 = ((/* implicit */unsigned short) (-(-1617008653312898615LL)));
}
