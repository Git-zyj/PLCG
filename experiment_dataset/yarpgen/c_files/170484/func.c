/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170484
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
    var_20 = ((/* implicit */unsigned short) var_13);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_21 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_12)) : (var_8)))) ? (((/* implicit */unsigned long long int) (+(arr_1 [(_Bool)1])))) : (max((18446744073709551603ULL), (((/* implicit */unsigned long long int) var_13))))))));
        var_22 = ((/* implicit */long long int) arr_2 [i_0]);
        var_23 = ((/* implicit */unsigned short) ((max((((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (arr_2 [i_0])))), ((-(((/* implicit */int) (unsigned char)254)))))) ^ ((-(((/* implicit */int) (unsigned char)2))))));
        var_24 ^= ((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_1 [i_0 + 1])), (-19LL))), (((((/* implicit */_Bool) -19LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232))) : (18LL)))));
    }
    for (unsigned int i_1 = 1; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */signed char) ((unsigned char) max((arr_2 [18]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))))))));
        var_26 = ((/* implicit */unsigned int) var_17);
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            arr_10 [i_1 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(max((654714993), (((/* implicit */int) (unsigned short)42455))))))) * (min((((/* implicit */unsigned int) (unsigned char)248)), (3169967807U)))));
            /* LoopSeq 1 */
            for (int i_3 = 2; i_3 < 21; i_3 += 3) 
            {
                var_27 ^= ((/* implicit */signed char) max((max((8226476371822319843LL), (min((((/* implicit */long long int) 4096078921U)), (arr_3 [i_1] [i_2]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)42455)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) var_13)))))));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 3; i_4 < 23; i_4 += 2) 
                {
                    arr_16 [(short)4] [(_Bool)1] [i_3] [i_4] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) var_7)))));
                    arr_17 [i_4 - 2] [i_4 - 3] [i_4] [(unsigned short)18] [i_4] [i_4 + 1] = ((/* implicit */unsigned long long int) ((long long int) min((3169967782U), (1124999514U))));
                }
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    var_28 += ((/* implicit */unsigned long long int) var_18);
                    /* LoopSeq 3 */
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        arr_23 [i_1 + 1] [8LL] &= ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (unsigned short)35431)) : (((/* implicit */int) (short)32767))));
                        arr_24 [i_1] [i_2] [i_5] [i_5] [17] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_4 [i_3])) ? (var_0) : (var_0)))));
                        arr_25 [i_1 + 1] [i_2] [(signed char)2] [i_1 + 1] [i_2] [i_6] = ((/* implicit */short) ((((/* implicit */int) arr_11 [i_3 + 1] [i_1 - 1] [i_3] [i_5])) & (((/* implicit */int) var_19))));
                    }
                    for (int i_7 = 1; i_7 < 23; i_7 += 1) 
                    {
                        arr_29 [i_1] [i_2] [9] [i_7] = ((((arr_4 [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_3 [i_1 + 1] [i_2])));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_22 [i_3] [(unsigned short)9] [i_3 - 1] [i_3 + 3] [i_3 + 3] [14])) / (((/* implicit */int) (unsigned char)247))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        var_30 = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) var_13)))));
                        var_31 += ((/* implicit */unsigned char) arr_14 [i_1] [i_1] [i_1] [i_1]);
                        arr_32 [i_3] [18ULL] [4] [i_3] [i_3 + 1] [(_Bool)1] [i_3 + 2] = ((/* implicit */long long int) ((((/* implicit */int) var_17)) ^ ((+(((/* implicit */int) var_15))))));
                        arr_33 [i_1] [(unsigned short)13] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned int) var_19));
                    }
                }
            }
            var_32 = ((/* implicit */unsigned char) min((((/* implicit */int) var_2)), ((-((-(((/* implicit */int) arr_2 [i_2]))))))));
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (int i_10 = 1; i_10 < 20; i_10 += 2) 
                {
                    {
                        arr_38 [i_10 + 4] [i_10] [23] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4765))) + (3533146735787350502LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_6)))) : ((-(var_4)))));
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((long long int) ((unsigned long long int) (-(((/* implicit */int) var_17)))))))));
                    }
                } 
            } 
        }
        var_34 -= ((/* implicit */unsigned long long int) (short)32763);
    }
    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_12 = 1; i_12 < 14; i_12 += 1) 
        {
            /* LoopSeq 4 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (short i_14 = 2; i_14 < 12; i_14 += 1) 
                {
                    for (int i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-45)))))) : (arr_3 [i_14 + 4] [i_12])))), (((((/* implicit */_Bool) (unsigned short)23068)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_1)))))) : (((((/* implicit */_Bool) 1574616669)) ? (0ULL) : (3948487184926375501ULL)))))));
                            arr_53 [i_11] [i_12 + 2] [i_13] [i_12] = (unsigned char)238;
                        }
                    } 
                } 
                var_36 = ((/* implicit */unsigned char) max((max(((-(var_0))), (((unsigned long long int) (unsigned short)39107)))), (max((((/* implicit */unsigned long long int) arr_20 [i_11] [i_11])), (var_8)))));
            }
            for (long long int i_16 = 0; i_16 < 16; i_16 += 4) 
            {
                var_37 = ((/* implicit */_Bool) (-(arr_47 [i_11] [14LL] [(short)7] [i_12 + 2])));
                var_38 = ((/* implicit */short) (!(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_11])), (var_1)))) || (((/* implicit */_Bool) var_2))))));
                arr_56 [i_12] = ((/* implicit */unsigned long long int) ((unsigned char) max(((unsigned short)10366), (arr_6 [i_12]))));
            }
            for (signed char i_17 = 1; i_17 < 14; i_17 += 1) 
            {
                var_39 = ((/* implicit */unsigned char) ((int) (unsigned short)0));
                arr_59 [i_12] = ((/* implicit */_Bool) var_14);
                var_40 = ((/* implicit */unsigned int) arr_28 [i_11] [i_12] [i_17] [i_17 - 1] [i_17]);
                arr_60 [i_12] [i_12] [i_17 - 1] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_30 [i_11] [i_12] [i_17] [i_12 + 1] [i_12])) ? (arr_50 [i_12 - 1] [i_12] [i_12 - 1] [i_12 + 2]) : (((/* implicit */int) var_18)))));
            }
            for (unsigned char i_18 = 4; i_18 < 15; i_18 += 2) 
            {
                var_41 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((int) var_12))) * (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_12)) > (var_0)))), (((18446744073709551603ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65522)))))))));
                var_42 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
                var_43 = ((/* implicit */unsigned char) (~(((long long int) 5851689097114612259ULL))));
            }
            arr_64 [i_11] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26429)) ? (18346442244906865094ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22059)))));
            var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) (+(var_1))))));
        }
        for (unsigned int i_19 = 1; i_19 < 15; i_19 += 3) 
        {
            var_45 = ((/* implicit */unsigned long long int) min((var_45), (((((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) 5213711188349890998LL))))), ((short)-12586)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((7216952719171771998ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12576))))))) : (min((637697826675278681ULL), (((/* implicit */unsigned long long int) arr_65 [i_19 - 1] [i_19 + 1]))))))));
            var_46 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) (unsigned short)58723)))), (((/* implicit */int) (unsigned short)58723))));
            /* LoopSeq 4 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                arr_70 [i_20] [i_11] [i_20] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (arr_44 [i_11] [i_11] [i_19] [i_20])))) < (((/* implicit */int) var_2)))))) - (11229791354537779617ULL)));
                /* LoopNest 2 */
                for (unsigned long long int i_21 = 3; i_21 < 15; i_21 += 4) 
                {
                    for (unsigned long long int i_22 = 0; i_22 < 16; i_22 += 3) 
                    {
                        {
                            var_47 = ((/* implicit */long long int) min(((unsigned char)246), ((unsigned char)197)));
                            var_48 *= ((/* implicit */unsigned char) (short)0);
                            var_49 = ((/* implicit */_Bool) ((11229791354537779596ULL) ^ (((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))) : (min((((/* implicit */unsigned long long int) arr_19 [i_11] [(short)4] [i_11] [(short)4])), (11229791354537779594ULL)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_23 = 2; i_23 < 14; i_23 += 2) 
                {
                    arr_80 [7] [i_20] = ((/* implicit */unsigned long long int) (-(((((((/* implicit */int) (unsigned short)6813)) % (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) min((((/* implicit */unsigned short) var_18)), (var_3))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_24 = 0; i_24 < 16; i_24 += 3) /* same iter space */
                    {
                        var_50 *= ((/* implicit */unsigned short) ((unsigned char) (-(((/* implicit */int) arr_72 [i_11] [(signed char)12] [i_23] [14ULL])))));
                        var_51 = ((/* implicit */unsigned int) (+(7216952719171772020ULL)));
                        arr_83 [i_11] [i_19] [i_20] [i_20] [i_24] = ((/* implicit */unsigned char) ((_Bool) arr_36 [i_23 + 2] [i_19 - 1] [i_11] [i_11] [i_11] [i_11]));
                        var_52 -= ((/* implicit */unsigned char) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    }
                    for (unsigned long long int i_25 = 0; i_25 < 16; i_25 += 3) /* same iter space */
                    {
                        var_53 += max(((+(var_4))), (((/* implicit */long long int) (-(((/* implicit */int) var_2))))));
                        arr_88 [i_20] [(_Bool)1] [5] [i_20] [i_20] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_0))))));
                    }
                    for (unsigned long long int i_26 = 0; i_26 < 16; i_26 += 3) /* same iter space */
                    {
                        var_54 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)14153)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-14157)))))));
                        var_55 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_89 [(signed char)4] [i_19 - 1] [i_19] [(unsigned short)3] [i_19] [i_19] [i_19]), (((/* implicit */unsigned long long int) arr_47 [i_20] [i_19] [i_20] [i_23 - 2]))))))))) > (((long long int) 6452495749629903010LL))));
                        var_56 = ((/* implicit */unsigned long long int) max((var_56), (((/* implicit */unsigned long long int) var_6))));
                    }
                    for (long long int i_27 = 0; i_27 < 16; i_27 += 2) 
                    {
                        var_57 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)20404))));
                        var_58 -= ((unsigned long long int) max(((unsigned short)58723), (((/* implicit */unsigned short) (short)4156))));
                        arr_95 [i_20] [i_23 + 1] [i_20] [11] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_8))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6452495749629903007LL)))))) : (var_4)));
                        var_59 = ((/* implicit */_Bool) min((var_59), (((/* implicit */_Bool) arr_92 [i_27] [(_Bool)1] [8ULL] [8ULL] [i_27] [i_20] [i_23]))));
                    }
                }
                var_60 ^= ((/* implicit */unsigned int) ((signed char) 4099324258611055588LL));
            }
            for (unsigned int i_28 = 0; i_28 < 16; i_28 += 2) /* same iter space */
            {
                arr_98 [i_11] [i_11] [(unsigned short)15] [i_11] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_19])) ? (((/* implicit */int) (unsigned short)42725)) : (((/* implicit */int) var_11)))))))));
                arr_99 [i_11] [i_19 - 1] [i_28] [(short)13] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) (-(((/* implicit */int) var_7))))))));
                var_61 = (!(((/* implicit */_Bool) var_16)));
                var_62 = ((/* implicit */long long int) min((min((var_9), (((/* implicit */unsigned long long int) arr_19 [i_19 - 1] [i_19 + 1] [i_19 + 1] [i_19])))), (((/* implicit */unsigned long long int) max(((short)-709), (arr_27 [12LL] [i_19 - 1] [(unsigned char)10]))))));
            }
            for (unsigned int i_29 = 0; i_29 < 16; i_29 += 2) /* same iter space */
            {
                arr_102 [i_29] [i_29] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_42 [i_29] [i_19] [i_29]))))));
                arr_103 [i_29] [8] [11ULL] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_19)), (((((/* implicit */_Bool) (unsigned short)20381)) ? ((~(6452495749629903007LL))) : (((/* implicit */long long int) var_12))))));
                /* LoopNest 2 */
                for (unsigned long long int i_30 = 0; i_30 < 16; i_30 += 2) 
                {
                    for (_Bool i_31 = 1; i_31 < 1; i_31 += 1) 
                    {
                        {
                            var_63 = ((/* implicit */unsigned short) min((var_63), (((/* implicit */unsigned short) arr_63 [i_19 - 1]))));
                            var_64 = ((/* implicit */_Bool) ((unsigned long long int) (short)689));
                        }
                    } 
                } 
                var_65 = ((/* implicit */short) (!(((/* implicit */_Bool) (((-(-6452495749629903010LL))) - (((/* implicit */long long int) 1776589959)))))));
                var_66 ^= ((/* implicit */unsigned int) max(((((-(arr_50 [i_11] [i_11] [i_19] [(unsigned char)6]))) | ((+(((/* implicit */int) var_18)))))), (((int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)2320)))))));
            }
            for (unsigned int i_32 = 0; i_32 < 16; i_32 += 2) /* same iter space */
            {
                var_67 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(arr_62 [i_11] [i_19 - 1] [i_11]))))));
                /* LoopSeq 3 */
                for (long long int i_33 = 0; i_33 < 16; i_33 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_34 = 0; i_34 < 16; i_34 += 2) /* same iter space */
                    {
                        var_68 = ((/* implicit */unsigned int) ((short) arr_86 [i_33] [i_19 + 1] [i_19 - 1]));
                        var_69 = ((/* implicit */unsigned long long int) (+((~(var_12)))));
                    }
                    for (int i_35 = 0; i_35 < 16; i_35 += 2) /* same iter space */
                    {
                        var_70 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) (unsigned short)0)))));
                        var_71 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(-6452495749629903030LL))), (((/* implicit */long long int) ((short) (unsigned short)65535)))))) ? (((/* implicit */int) (((-(((/* implicit */int) var_13)))) < (((((/* implicit */_Bool) (signed char)-100)) ? (((/* implicit */int) arr_104 [(unsigned short)14] [i_33])) : (((/* implicit */int) (unsigned short)0))))))) : ((-((-(((/* implicit */int) var_18))))))));
                        arr_119 [12ULL] [i_33] [2] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_117 [i_19 + 1] [14U] [i_19 - 1] [i_19 - 1] [i_19 - 1]))))) < (var_9)));
                        arr_120 [i_35] [i_33] [i_11] [i_33] [i_11] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0))));
                    }
                    var_72 = ((/* implicit */signed char) max((var_72), (((/* implicit */signed char) (((-(((var_1) - (((/* implicit */unsigned long long int) var_12)))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_19)) - (((/* implicit */int) var_15))))))))));
                    var_73 ^= ((/* implicit */int) ((753754426U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))));
                }
                for (long long int i_36 = 0; i_36 < 16; i_36 += 3) /* same iter space */
                {
                    arr_124 [i_11] [i_32] = ((/* implicit */int) arr_76 [i_11]);
                    arr_125 [(unsigned short)8] [5LL] [7U] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */long long int) arr_100 [i_11] [i_19] [0LL] [i_19 - 1])), (var_4))));
                }
                for (long long int i_37 = 0; i_37 < 16; i_37 += 3) /* same iter space */
                {
                    arr_129 [i_37] [(unsigned char)9] [i_32] [i_37] = ((/* implicit */signed char) var_4);
                    arr_130 [i_37] [(unsigned short)15] [i_32] [i_32] [i_32] = ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_19 + 1] [i_19 - 1] [(unsigned char)2])) & (((/* implicit */int) arr_7 [i_19 - 1] [i_19 + 1] [i_19]))));
                    arr_131 [i_37] [i_19] = ((/* implicit */unsigned short) max((arr_126 [i_11] [i_37] [i_32] [2U] [i_37]), ((-((-(((/* implicit */int) arr_57 [i_37]))))))));
                    var_74 = ((/* implicit */unsigned long long int) (unsigned short)65528);
                    arr_132 [(_Bool)1] [(_Bool)1] [i_37] [(_Bool)1] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_4))))), (((((int) var_19)) * ((-(((/* implicit */int) var_18))))))));
                }
                /* LoopSeq 1 */
                for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
                {
                    arr_136 [15LL] [i_19] [i_19] [15LL] [12ULL] = ((/* implicit */_Bool) var_8);
                    var_75 = ((/* implicit */unsigned char) (unsigned short)65532);
                }
                arr_137 [i_11] [i_19] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65531))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (max((((arr_46 [i_32] [i_32] [i_19] [i_11] [i_11]) | (((/* implicit */unsigned long long int) -7441335662433129791LL)))), (((/* implicit */unsigned long long int) arr_58 [i_11] [i_19] [i_19] [i_19]))))));
            }
        }
        var_76 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4))) : (var_4)))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
    }
    var_77 = var_7;
}
