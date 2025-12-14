/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105253
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 230460003)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : ((+(var_0)))))) ? (min((((/* implicit */unsigned long long int) ((short) var_5))), (arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((var_5) >= (((/* implicit */unsigned long long int) var_13))))))))));
        var_19 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) -455938579)) && (((/* implicit */_Bool) 33492034))))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
        var_20 |= ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) 181338759U)))) ? (((/* implicit */long long int) var_9)) : (((((/* implicit */_Bool) 16934053906747892595ULL)) ? (var_0) : (var_16))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) var_15)) : (10U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)34702)) : (((/* implicit */int) (signed char)-111))))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_21 = ((/* implicit */int) var_0);
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    for (signed char i_5 = 4; i_5 < 9; i_5 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) var_13))))) || (((/* implicit */_Bool) 4294967285U)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) == (-9223372036854775804LL)))), (11)))) : ((-(4294967276U)))));
                            var_23 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) 14U)) % (max((((((/* implicit */_Bool) var_10)) ? (1671815027911233859LL) : (1671815027911233842LL))), (((/* implicit */long long int) arr_12 [i_5] [i_5] [i_5 - 3] [i_5] [i_5]))))));
                            arr_15 [i_1] [i_2] [i_3] [i_4] [i_5 - 1] = ((/* implicit */int) min((4294967273U), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967281U)) ? (((/* implicit */int) var_6)) : (-726844663)))) ? (((0U) - (14U))) : (4U)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_6 = 4; i_6 < 9; i_6 += 2) 
                {
                    arr_18 [(_Bool)1] [(_Bool)1] [i_3] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-10010)) ? (-1671815027911233858LL) : (((/* implicit */long long int) 1024576410))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)213)) != (((/* implicit */int) (unsigned short)127)))))) : ((~(arr_14 [i_1] [i_2] [i_1])))));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_12 [i_1] [i_2] [i_3] [i_6] [i_7])) + (1591116614)));
                        var_26 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (var_5))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16883))));
                        var_27 = ((/* implicit */int) var_6);
                    }
                }
                arr_22 [i_1] [i_2] [i_3] [i_3] = ((((/* implicit */_Bool) (+(max((1610612736U), (((/* implicit */unsigned int) var_12))))))) || (((/* implicit */_Bool) var_0)));
            }
            /* vectorizable */
            for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                var_28 ^= ((/* implicit */int) ((((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */unsigned long long int) var_9)) : (8684886520398706026ULL))) % (((/* implicit */unsigned long long int) 387634001))));
                /* LoopSeq 1 */
                for (int i_9 = 3; i_9 < 8; i_9 += 2) 
                {
                    var_29 ^= ((/* implicit */_Bool) (~(-4122718860052339730LL)));
                    arr_28 [i_1] [5] [(unsigned char)8] [(unsigned char)8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 17018361582776755383ULL))));
                    var_30 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (10431934438756823781ULL)));
                }
                var_31 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_2] [i_1]))));
                var_32 *= ((/* implicit */unsigned long long int) var_8);
            }
            var_33 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) ((signed char) var_13))) << (((((unsigned long long int) var_16)) - (13120917154136139636ULL))))));
        }
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_11 = 2; i_11 < 9; i_11 += 3) 
            {
                var_34 -= ((/* implicit */int) ((var_10) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-1218)))))));
                arr_34 [i_1] [i_10] [i_11] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)0))));
                /* LoopSeq 4 */
                for (unsigned long long int i_12 = 2; i_12 < 9; i_12 += 4) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        arr_39 [i_13] = ((/* implicit */unsigned long long int) arr_11 [i_12 - 2] [i_12 - 1] [i_12 - 2] [i_12 + 1]);
                        var_35 -= (+(((/* implicit */int) var_6)));
                    }
                    arr_40 [i_1] [i_10] [i_11] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))));
                    var_36 = (-(((/* implicit */int) var_7)));
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */int) (_Bool)0))))) > ((+(var_10)))));
                }
                for (unsigned short i_14 = 0; i_14 < 10; i_14 += 2) 
                {
                    arr_44 [i_1] [i_1] [i_1] [i_14] [i_11] [i_11] = ((/* implicit */unsigned long long int) (short)8176);
                    arr_45 [i_1] [i_10] [i_11] [i_14] [i_14] = ((((((/* implicit */unsigned int) var_13)) + (4294967295U))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_1] [i_10] [i_11 + 1] [(unsigned short)3]))));
                }
                for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 10; i_16 += 3) 
                    {
                        var_38 ^= ((/* implicit */_Bool) 1671815027911233846LL);
                        var_39 = ((/* implicit */long long int) (unsigned char)128);
                    }
                    var_40 = (~(arr_13 [i_1] [i_10] [i_11 - 2] [i_15] [i_1]));
                    var_41 = ((((/* implicit */_Bool) var_8)) ? (arr_20 [i_15] [i_1] [i_10] [i_1] [i_1]) : (((/* implicit */long long int) var_9)));
                }
                for (long long int i_17 = 1; i_17 < 8; i_17 += 4) 
                {
                    var_42 = ((/* implicit */_Bool) (-(arr_14 [i_1] [i_1] [i_1])));
                    arr_54 [i_1] [i_10] [i_1] [i_17] [i_1] [i_17 - 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
                    arr_55 [i_1] [i_11 - 2] [i_11 - 2] [i_17 - 1] = ((/* implicit */unsigned short) ((arr_21 [i_1] [i_17 - 1] [i_10] [i_11] [i_11]) > (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                    var_43 = ((/* implicit */int) arr_27 [i_1] [i_10] [i_10] [i_11] [i_17]);
                }
                var_44 = ((/* implicit */unsigned int) ((unsigned char) arr_33 [i_11] [i_11] [i_11] [i_11 + 1]));
            }
            arr_56 [i_1] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_10] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_10] [i_10] [i_1] [i_1]))) : (-6801456117594417597LL)));
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_45 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)141)))))));
            /* LoopSeq 1 */
            for (unsigned char i_19 = 1; i_19 < 6; i_19 += 1) 
            {
                arr_63 [i_1] [i_18] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_18] [i_18] [i_18])) ? ((-(var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63618)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) << (((-1019604331) + (1019604339)))))) : (((((((/* implicit */_Bool) 1830637972102236268LL)) ? (10431934438756823761ULL) : (((/* implicit */unsigned long long int) var_11)))) + (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (var_16)))))));
                /* LoopSeq 1 */
                for (int i_20 = 0; i_20 < 10; i_20 += 1) 
                {
                    var_46 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)65534)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((((/* implicit */int) (signed char)-11)) * (((/* implicit */int) (_Bool)0))))));
                    var_47 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -634923561483533793LL)) ? (((/* implicit */long long int) 1047552)) : (2251799813685247LL)))));
                }
                arr_68 [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_4);
                arr_69 [i_1] [i_1] [i_18] = (+((-(((/* implicit */int) var_4)))));
            }
        }
        arr_70 [i_1] [i_1] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_17)) : (var_13))) >> (((((/* implicit */_Bool) -1508532462)) ? (((/* implicit */unsigned long long int) 0U)) : (var_5)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) var_12)))) >= (var_11))))) : (((3292928064U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
    }
    /* vectorizable */
    for (int i_21 = 0; i_21 < 17; i_21 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
        {
            var_48 |= ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_22]))));
            arr_76 [i_22] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) / (-1671815027911233862LL))) > (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_22])))));
        }
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
        {
            arr_79 [i_23] [i_23] = ((/* implicit */signed char) (~(0U)));
            var_49 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_21])) ? (var_3) : (arr_1 [i_23])));
            arr_80 [i_23] [i_23] = ((((/* implicit */_Bool) 1048568)) ? (arr_73 [i_21]) : (arr_73 [i_23]));
        }
        var_50 ^= ((/* implicit */_Bool) 3692458559U);
        /* LoopSeq 2 */
        for (unsigned char i_24 = 0; i_24 < 17; i_24 += 1) 
        {
            var_51 = ((/* implicit */unsigned short) (+(849072081)));
            /* LoopNest 2 */
            for (unsigned int i_25 = 0; i_25 < 17; i_25 += 1) 
            {
                for (unsigned int i_26 = 0; i_26 < 17; i_26 += 1) 
                {
                    {
                        var_52 = ((/* implicit */int) (unsigned short)65504);
                        var_53 = ((/* implicit */int) var_17);
                        var_54 = ((/* implicit */_Bool) ((((/* implicit */int) var_17)) & (((/* implicit */int) var_7))));
                        var_55 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && ((_Bool)1)));
                    }
                } 
            } 
        }
        for (unsigned short i_27 = 0; i_27 < 17; i_27 += 3) 
        {
            var_56 = ((long long int) 618556975);
            /* LoopSeq 4 */
            for (unsigned int i_28 = 0; i_28 < 17; i_28 += 1) 
            {
                var_57 ^= ((/* implicit */unsigned short) (+(var_5)));
                var_58 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
            }
            for (int i_29 = 1; i_29 < 15; i_29 += 4) 
            {
                var_59 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_13)))) || ((!(((/* implicit */_Bool) var_15))))));
                arr_100 [i_21] [i_27] [i_27] = (-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_7)) : (var_9))));
            }
            for (unsigned short i_30 = 0; i_30 < 17; i_30 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_31 = 0; i_31 < 17; i_31 += 2) 
                {
                    var_60 ^= 248005411;
                    arr_106 [i_27] [i_27] = (~(var_15));
                }
                for (int i_32 = 0; i_32 < 17; i_32 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_33 = 0; i_33 < 17; i_33 += 2) 
                    {
                        var_61 = var_12;
                        var_62 = ((/* implicit */short) (((-(2147483647))) / (((var_9) + (((/* implicit */int) var_6))))));
                        arr_111 [i_27] [i_27] [i_27] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)33242))));
                    }
                    for (short i_34 = 0; i_34 < 17; i_34 += 4) 
                    {
                        var_63 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) 1591116628)) ? (((/* implicit */int) (signed char)35)) : (((/* implicit */int) (unsigned short)6284)))));
                        arr_115 [i_21] [i_27] [i_27] [i_30] [i_32] [i_34] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1671815027911233861LL)))) ? (((/* implicit */unsigned long long int) arr_91 [i_32] [i_30])) : (arr_0 [i_34])));
                    }
                    arr_116 [i_21] [i_27] [i_27] [i_32] [16] [i_21] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */int) (unsigned char)75))))) > (arr_107 [i_21] [(short)0])));
                    var_64 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) -1671815027911233846LL))));
                }
                /* LoopSeq 2 */
                for (long long int i_35 = 1; i_35 < 15; i_35 += 3) /* same iter space */
                {
                    arr_121 [i_21] [i_27] [7] = ((/* implicit */unsigned char) ((long long int) var_11));
                    var_65 *= ((/* implicit */int) ((((/* implicit */_Bool) 1637655686U)) && (((/* implicit */_Bool) 1821693681))));
                }
                for (long long int i_36 = 1; i_36 < 15; i_36 += 3) /* same iter space */
                {
                    var_66 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) & (((/* implicit */int) arr_3 [i_21]))));
                    var_67 *= ((/* implicit */_Bool) (+(((long long int) var_5))));
                    arr_125 [i_27] = ((/* implicit */short) (+(-1671815027911233862LL)));
                }
                var_68 = ((/* implicit */signed char) (~(-782343135)));
            }
            for (unsigned char i_37 = 0; i_37 < 17; i_37 += 1) 
            {
                arr_129 [i_27] [i_27] [i_27] [i_27] = arr_126 [(unsigned char)15] [i_27] [i_27];
                arr_130 [i_21] [i_27] [i_37] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_92 [i_21]))));
            }
        }
    }
    for (unsigned long long int i_38 = 0; i_38 < 10; i_38 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_39 = 0; i_39 < 10; i_39 += 4) 
        {
            var_69 ^= (((((+(2068110236))) == (((((/* implicit */_Bool) 2104711074343103447ULL)) ? (((/* implicit */int) (unsigned short)65529)) : (var_13))))) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)65535)) ? (1591116614) : (((/* implicit */int) (unsigned short)10))))))));
            var_70 += ((/* implicit */unsigned long long int) (((+(-1591116635))) / (-546589801)));
            var_71 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (var_10) : (((/* implicit */unsigned long long int) ((3556512126U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
            var_72 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_75 [i_38])) ? (var_5) : (arr_77 [i_39] [i_39])))) ? (((((/* implicit */unsigned long long int) 15LL)) ^ (arr_75 [i_38]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_14)), (var_6)))))));
        }
        for (long long int i_40 = 2; i_40 < 7; i_40 += 1) 
        {
            var_73 ^= ((/* implicit */long long int) (short)-18119);
            arr_140 [i_38] = ((/* implicit */unsigned char) var_16);
        }
        /* LoopSeq 1 */
        for (long long int i_41 = 0; i_41 < 10; i_41 += 1) 
        {
            var_74 = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 562949416550400ULL)) ? (-6095171327468380526LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65409)))))), ((~(18446744073709551604ULL)))))));
            /* LoopSeq 1 */
            for (unsigned int i_42 = 0; i_42 < 10; i_42 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_43 = 3; i_43 < 8; i_43 += 4) 
                {
                    arr_148 [i_42] [i_42] [i_42] [i_41] [i_41] |= ((/* implicit */int) var_7);
                    arr_149 [i_38] [i_41] [i_41] [9ULL] [i_41] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((4294967273U), (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_13)))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_13)) : (var_10)))));
                    var_75 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -1562732220)) && (((/* implicit */_Bool) -1562732228))))) : (var_11)));
                    arr_150 [i_41] [i_42] [i_42] [i_42] [3ULL] [i_41] = ((/* implicit */int) (signed char)(-127 - 1));
                }
                var_76 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((unsigned short) (unsigned char)211)))))));
                var_77 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)-12744)) : (((((/* implicit */int) (signed char)116)) + (((/* implicit */int) (short)22936))))));
            }
            var_78 = ((/* implicit */unsigned int) max((((var_3) + (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))), (((/* implicit */long long int) ((2610537301U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-18122))))))));
        }
    }
    var_79 -= ((/* implicit */int) (-((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-19))) : (var_5)))))));
    var_80 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_6))))));
}
