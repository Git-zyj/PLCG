/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176446
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
    var_14 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) (signed char)53)) : (((((/* implicit */_Bool) var_7)) ? (var_3) : (var_1)))));
    var_15 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        var_16 += ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_0 - 2]))));
        var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_0 [i_0 + 2])), (var_8)))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_13)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)229)))));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0 - 2]))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) var_0))))), (max((18446744073709551610ULL), (((/* implicit */unsigned long long int) arr_1 [i_0 + 3]))))))));
            arr_4 [i_0] = ((/* implicit */long long int) min(((-(((/* implicit */int) ((var_12) > (((/* implicit */unsigned long long int) arr_2 [i_0 + 2] [14ULL] [i_1 + 2]))))))), (((/* implicit */int) (!(((/* implicit */_Bool) 368263794U)))))));
        }
    }
    for (long long int i_2 = 3; i_2 < 22; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
            {
                var_19 = (+(min((((long long int) arr_11 [3])), (arr_6 [i_3]))));
                var_20 &= ((/* implicit */int) ((unsigned int) (~(((/* implicit */int) arr_5 [i_2] [i_2 + 1])))));
                var_21 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 15712563659404981187ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24497)))))) ? (min((10978691066191037344ULL), (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 838351570)) ? (((/* implicit */int) arr_11 [i_2])) : (((/* implicit */int) (unsigned short)4))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2 + 2])) ? (var_1) : (((((/* implicit */_Bool) arr_10 [i_2])) ? (var_3) : (((/* implicit */int) var_0)))))))));
            }
            for (int i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_7 = 1; i_7 < 21; i_7 += 3) 
                    {
                        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) 17895097014086440790ULL))));
                        var_23 = ((/* implicit */signed char) (~(((/* implicit */int) arr_8 [i_2]))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) /* same iter space */
                    {
                        arr_23 [i_8] [i_6] [i_5] [i_3] [i_3] [1LL] = ((/* implicit */unsigned short) ((arr_12 [i_2 - 1] [i_2 + 1]) <= (((/* implicit */unsigned int) 28))));
                        var_24 ^= ((/* implicit */long long int) var_8);
                        var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (4175391355476527648LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2] [i_2] [i_2 + 3] [i_2 + 3] [i_2 - 1] [i_2 - 1]))))))));
                        var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 1610855138U)) && (((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [i_2 - 1] [i_5] [i_6]))));
                    }
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((4095U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)14850)))))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) (unsigned char)131))));
                        var_28 *= ((/* implicit */long long int) ((_Bool) -1300654721775221907LL));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_2 + 2]))));
                        var_30 = ((/* implicit */long long int) ((10222542729447550557ULL) <= (((/* implicit */unsigned long long int) arr_25 [i_2] [i_2] [i_2] [i_2 - 1] [(unsigned char)5] [i_2]))));
                        var_31 = ((/* implicit */unsigned long long int) arr_28 [i_5]);
                    }
                    arr_29 [i_2] [i_3] [i_3] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_15 [i_2] [i_2 - 1] [i_2]))));
                }
                for (unsigned short i_11 = 3; i_11 < 23; i_11 += 4) 
                {
                    var_32 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)3))) : (1030400656U))), (((/* implicit */unsigned int) arr_31 [i_2 + 3] [i_3] [i_5] [i_11 + 1] [i_11 + 1]))));
                    arr_33 [i_2] [i_3] [i_2] [i_11 + 1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (+(-1479390849)))), (min((arr_21 [i_2 - 1] [i_11 - 3] [i_5]), (((/* implicit */unsigned int) (signed char)-108))))));
                    var_33 = ((/* implicit */unsigned char) ((_Bool) 72057594037923840ULL));
                    var_34 = ((/* implicit */unsigned short) var_13);
                }
                var_35 = ((/* implicit */unsigned short) ((int) max((2818815703U), (((/* implicit */unsigned int) arr_19 [i_2] [i_2 + 2] [(unsigned short)24] [i_2 - 3] [i_3] [(unsigned short)24] [i_3])))));
                arr_34 [i_2] [i_2] [(_Bool)0] [i_2] &= ((/* implicit */signed char) (-(((/* implicit */int) ((arr_12 [i_2] [i_2]) >= (min((((/* implicit */unsigned int) var_1)), (arr_13 [13ULL] [22ULL]))))))));
            }
            var_36 ^= ((/* implicit */unsigned long long int) ((min((var_6), (((((/* implicit */_Bool) arr_13 [i_3] [i_2])) && (((/* implicit */_Bool) 577146724U)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) min((((/* implicit */int) arr_22 [i_2 + 2] [i_2] [i_2])), (var_3)))) != (min((arr_13 [23LL] [23LL]), (((/* implicit */unsigned int) (unsigned char)28))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_2])))))));
        }
        for (unsigned short i_12 = 0; i_12 < 25; i_12 += 4) 
        {
            var_37 = ((/* implicit */int) ((((/* implicit */_Bool) -1529392491)) ? ((~(1628305364U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 - 3])))));
            arr_37 [i_2 + 2] [i_2] [i_2] = ((/* implicit */int) (short)21107);
            var_38 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) ((short) arr_31 [i_12] [i_12] [i_12] [i_12] [(unsigned char)23])))))));
        }
        /* LoopSeq 2 */
        for (long long int i_13 = 0; i_13 < 25; i_13 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_44 [i_14] = ((/* implicit */unsigned char) ((unsigned int) -2075296158));
                arr_45 [i_14] = ((/* implicit */unsigned int) min((((unsigned short) (unsigned char)0)), (((/* implicit */unsigned short) arr_19 [i_2 + 1] [i_13] [i_14] [i_2] [i_2 + 1] [24] [i_2 + 2]))));
                /* LoopSeq 2 */
                for (signed char i_15 = 0; i_15 < 25; i_15 += 2) 
                {
                    var_39 *= ((/* implicit */unsigned char) var_5);
                    var_40 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? ((((!(((/* implicit */_Bool) 8649715175646421147ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (599983656U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) : (max((((/* implicit */unsigned long long int) (unsigned char)149)), (11300227369734857924ULL))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4)))))));
                }
                for (unsigned short i_16 = 1; i_16 < 24; i_16 += 1) 
                {
                    var_41 -= ((/* implicit */unsigned char) var_6);
                    arr_52 [i_2 + 1] [i_14] [i_2 + 2] [i_2 + 2] = ((/* implicit */signed char) max((((/* implicit */int) arr_32 [i_16] [(unsigned short)24] [i_16] [i_16])), ((~(((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) var_9)))))))));
                    /* LoopSeq 3 */
                    for (short i_17 = 0; i_17 < 25; i_17 += 4) 
                    {
                        var_42 -= ((/* implicit */unsigned char) ((unsigned short) max((arr_55 [i_16 - 1] [i_16 + 1] [i_16] [i_13] [i_16 + 1]), (arr_55 [i_16 - 1] [i_16 + 1] [14U] [i_17] [i_16 + 1]))));
                        var_43 = ((/* implicit */int) arr_41 [i_2 - 3] [i_14]);
                    }
                    for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 3) /* same iter space */
                    {
                        var_44 = ((arr_25 [i_18] [i_18] [i_18] [i_18] [(unsigned short)9] [i_16 - 1]) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), (var_5)))))))));
                        var_45 = ((/* implicit */unsigned short) ((min((((unsigned long long int) (signed char)36)), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))))) >> ((+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) <= (7622235208497370228LL))))))));
                        var_46 = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) 2927448391U)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_19 = 0; i_19 < 25; i_19 += 3) /* same iter space */
                    {
                        var_47 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_27 [i_16 + 1] [i_16 + 1] [(unsigned short)10] [i_16] [i_13] [i_16 - 1]))));
                        arr_61 [i_2] [i_13] [i_14] [i_16] [i_19] = ((/* implicit */_Bool) (-(5134673205493374412LL)));
                        var_48 = ((/* implicit */unsigned int) var_5);
                        arr_62 [i_2 - 3] [13ULL] [i_14] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (arr_6 [i_16 + 1])));
                        var_49 &= ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) << (((((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */long long int) 4287152180U)) : (3879876034484679015LL))) - (4287152180LL)))));
                    }
                    /* LoopSeq 3 */
                    for (int i_20 = 3; i_20 < 22; i_20 += 2) 
                    {
                        var_50 *= (+(max((var_12), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)42)), (3692201621U)))))));
                        var_51 *= ((/* implicit */_Bool) arr_20 [8LL] [i_13]);
                        var_52 = ((/* implicit */unsigned short) ((arr_57 [i_20 + 3] [i_16] [i_14] [i_2] [i_2]) >> (((((/* implicit */int) (unsigned short)25298)) - (25266)))));
                        var_53 = ((/* implicit */unsigned short) var_6);
                    }
                    /* vectorizable */
                    for (unsigned int i_21 = 0; i_21 < 25; i_21 += 3) 
                    {
                        var_54 -= ((/* implicit */unsigned char) var_2);
                        var_55 |= ((/* implicit */signed char) arr_16 [i_2 - 2] [i_2] [i_2 + 2] [(unsigned char)24] [i_2 - 2] [i_2]);
                        arr_70 [12ULL] [i_13] [3U] [i_13] [10LL] [i_13] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_57 [(signed char)8] [9U] [i_13] [i_13] [(signed char)8])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)161))));
                        var_56 = ((/* implicit */unsigned short) var_1);
                    }
                    for (unsigned short i_22 = 2; i_22 < 23; i_22 += 3) 
                    {
                        var_57 ^= ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                        var_58 += ((/* implicit */unsigned int) min((min((max((arr_6 [i_2]), (((/* implicit */long long int) arr_8 [i_2])))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)106)) - (((/* implicit */int) (unsigned char)224))))))), (((/* implicit */long long int) (((+(((/* implicit */int) arr_15 [i_22] [i_22 + 2] [i_22 + 2])))) << (((((((/* implicit */_Bool) -7632018585960803859LL)) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) var_5)))) - (15))))))));
                    }
                }
                /* LoopSeq 2 */
                for (unsigned char i_23 = 0; i_23 < 25; i_23 += 3) 
                {
                    arr_77 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_72 [i_2 - 3] [i_13] [17ULL] [i_14] [i_14] [i_23])), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_53 [i_2] [i_2] [i_2 - 3] [i_14] [i_2 - 1])) : (((/* implicit */int) arr_63 [i_14] [i_13] [i_14] [i_13] [i_23])))))))));
                    var_59 = ((/* implicit */unsigned short) (+((-9223372036854775807LL - 1LL))));
                    var_60 = ((/* implicit */long long int) min((((/* implicit */int) var_11)), (min((min((2075296157), (((/* implicit */int) var_7)))), (((/* implicit */int) var_5))))));
                }
                for (int i_24 = 0; i_24 < 25; i_24 += 3) 
                {
                    var_61 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) 242324332U)) ? (((/* implicit */long long int) arr_47 [i_24] [i_14] [i_13] [i_13] [i_2])) : (arr_75 [i_24] [i_24] [(short)19] [i_24]))), (((/* implicit */long long int) max((var_1), (((/* implicit */int) (unsigned short)39977))))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)18102)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_7 [i_13]))))) ? (((((/* implicit */_Bool) (unsigned short)61715)) ? (((/* implicit */long long int) 884909644U)) : (-867960431482020749LL))) : (((/* implicit */long long int) ((/* implicit */int) min((var_5), (var_4)))))))));
                    /* LoopSeq 1 */
                    for (signed char i_25 = 0; i_25 < 25; i_25 += 3) 
                    {
                        var_62 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) 9223372036854775790LL)) % (12744464649471966151ULL)));
                        arr_83 [i_14] [i_13] [23U] [i_14] = (+(((/* implicit */int) min(((signed char)-47), ((signed char)30)))));
                    }
                }
            }
            for (unsigned int i_26 = 2; i_26 < 22; i_26 += 4) 
            {
                /* LoopSeq 3 */
                for (short i_27 = 0; i_27 < 25; i_27 += 4) 
                {
                    var_63 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)10)) >= (((/* implicit */int) (unsigned char)198))));
                    var_64 = ((/* implicit */long long int) var_1);
                    var_65 = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_12 [i_2 - 3] [i_13]) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))) != (((/* implicit */int) ((((/* implicit */int) min((arr_36 [i_27]), (arr_60 [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2] [i_2 - 1])))) != (((/* implicit */int) ((unsigned short) (short)-4922))))))));
                    var_66 ^= ((/* implicit */signed char) (unsigned short)56348);
                    /* LoopSeq 4 */
                    for (signed char i_28 = 0; i_28 < 25; i_28 += 3) 
                    {
                        var_67 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(17587367479312397747ULL)))) ? (((/* implicit */int) (_Bool)1)) : (min((((/* implicit */int) ((((/* implicit */int) (unsigned char)97)) <= (((/* implicit */int) var_5))))), (max((((/* implicit */int) var_10)), (var_3)))))));
                        var_68 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_75 [i_2] [(signed char)22] [i_2] [i_2])) | (min((((/* implicit */unsigned long long int) (short)11220)), (9223372036854775807ULL)))));
                        var_69 ^= ((/* implicit */_Bool) var_9);
                        var_70 *= ((signed char) (unsigned short)65535);
                    }
                    /* vectorizable */
                    for (unsigned short i_29 = 1; i_29 < 22; i_29 += 3) 
                    {
                        var_71 = ((/* implicit */signed char) var_6);
                        var_72 = ((/* implicit */signed char) ((short) (-9223372036854775807LL - 1LL)));
                        var_73 |= ((/* implicit */long long int) ((short) var_13));
                    }
                    for (long long int i_30 = 0; i_30 < 25; i_30 += 4) 
                    {
                        var_74 = ((/* implicit */long long int) (~(max((3936389046U), (((/* implicit */unsigned int) var_0))))));
                        var_75 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((min((1099511627775LL), (((/* implicit */long long int) (signed char)72)))) >= (((/* implicit */long long int) ((/* implicit */int) arr_95 [22U] [i_26 - 1] [i_27] [i_13])))))), (((((((/* implicit */int) var_9)) != (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_40 [i_2 + 1] [i_26 - 1])))));
                        arr_99 [i_2] [i_2] [i_13] [i_26 - 1] [i_27] [24U] [i_30] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((12313543919354492732ULL), (((/* implicit */unsigned long long int) arr_59 [(unsigned short)12] [i_30] [i_27] [i_30] [i_13] [i_2 - 2] [i_2])))), (((/* implicit */unsigned long long int) arr_7 [i_2 - 1]))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)9630)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))) >= (((((/* implicit */int) var_8)) * (((/* implicit */int) arr_60 [i_2] [i_27] [i_26 + 3] [i_27] [i_26 + 3]))))))) : (((((/* implicit */_Bool) arr_81 [i_2 + 3] [(unsigned short)17] [i_2] [i_2 + 1] [i_30])) ? ((~(((/* implicit */int) (unsigned short)25189)))) : (((/* implicit */int) arr_53 [i_2] [i_13] [i_26] [i_13] [i_2]))))));
                        var_76 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_82 [i_30] [(short)5] [i_26] [i_26 + 1] [i_13] [i_2]))));
                    }
                    for (_Bool i_31 = 1; i_31 < 1; i_31 += 1) 
                    {
                        var_77 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) -8513091231205875403LL)) || (((/* implicit */_Bool) (unsigned char)5)))));
                        var_78 ^= ((/* implicit */unsigned char) min((3673957284U), (((/* implicit */unsigned int) (unsigned short)65523))));
                    }
                }
                for (unsigned char i_32 = 4; i_32 < 24; i_32 += 3) 
                {
                    var_79 = ((/* implicit */long long int) (signed char)96);
                    var_80 ^= ((/* implicit */signed char) arr_15 [i_13] [i_13] [i_13]);
                }
                for (unsigned int i_33 = 0; i_33 < 25; i_33 += 2) 
                {
                    var_81 = ((/* implicit */unsigned long long int) var_2);
                    var_82 ^= ((/* implicit */_Bool) arr_19 [i_33] [23LL] [i_33] [i_33] [i_33] [i_33] [14U]);
                }
                var_83 |= ((/* implicit */unsigned short) (+(16008533193059777271ULL)));
                arr_112 [12U] [i_13] [i_13] |= ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)56031)), (1285282589U)));
            }
            var_84 = ((/* implicit */short) ((_Bool) (-(((/* implicit */int) arr_43 [i_13])))));
        }
        for (signed char i_34 = 0; i_34 < 25; i_34 += 4) 
        {
            var_85 = ((/* implicit */int) arr_85 [i_34] [i_34] [i_34] [i_2]);
            var_86 -= var_8;
        }
        var_87 -= ((/* implicit */signed char) min((((unsigned short) (signed char)-100)), (arr_81 [i_2] [i_2] [i_2] [i_2] [(unsigned char)6])));
    }
    var_88 = ((/* implicit */long long int) var_10);
}
