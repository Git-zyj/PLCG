/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115943
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
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_1))));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (((((/* implicit */_Bool) (unsigned short)2725)) ? (12366924050770321621ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (~(1468785631))))));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((var_14) << (((((((/* implicit */unsigned long long int) 75374852)) & (15346592722433997108ULL))) - (71573734ULL)))))) % (((unsigned long long int) arr_4 [i_0] [i_1]))));
            var_20 -= ((/* implicit */long long int) ((signed char) max((((long long int) 8760737478766392818LL)), (((/* implicit */long long int) ((unsigned char) var_9))))));
        }
        for (int i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            var_21 = ((min((((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) var_6)))) ^ (((/* implicit */long long int) ((/* implicit */int) var_0))));
            arr_8 [i_2] [i_2] = ((/* implicit */short) var_2);
        }
        var_22 = ((/* implicit */long long int) (+(-2094284684)));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopSeq 4 */
        for (long long int i_4 = 4; i_4 < 15; i_4 += 1) 
        {
            var_23 -= min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (arr_4 [i_4 - 2] [i_4 - 3]))), (((/* implicit */unsigned int) ((signed char) arr_4 [i_4 - 1] [i_4 - 1]))));
            arr_14 [i_3] [i_4 - 2] = ((/* implicit */unsigned short) var_11);
        }
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((short) (unsigned short)17388)))));
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((8760737478766392818LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) : (((long long int) arr_10 [13])))))));
        }
        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_7 = 2; i_7 < 14; i_7 += 1) 
            {
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_10)) ? (max((arr_13 [i_3] [i_6]), (((/* implicit */unsigned int) 1468785631)))) : ((+(arr_4 [i_3] [i_6]))))))))));
                /* LoopSeq 4 */
                for (int i_8 = 0; i_8 < 16; i_8 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)30590)) - (30566)))));
                    arr_23 [i_6] = ((/* implicit */unsigned int) ((unsigned long long int) ((min((((/* implicit */unsigned long long int) arr_15 [i_7] [i_6])), (12712722314841103052ULL))) == (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))))));
                }
                for (int i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */unsigned char) (((_Bool)1) ? (-213736505206177025LL) : (-8760737478766392819LL)));
                    var_29 += min((((((/* implicit */_Bool) arr_5 [i_7 + 1] [i_7 - 2] [i_7 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_21 [i_3] [i_6] [i_6] [i_9])), (var_3))))) : (((unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))));
                    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (+(((long long int) arr_25 [i_3] [i_6] [i_7] [i_9] [i_3])))))));
                    var_31 = (i_6 % 2 == zero) ? (((/* implicit */unsigned long long int) min(((+(arr_24 [i_7 + 1] [i_7 - 2] [i_7 + 2] [i_6]))), (((((arr_24 [i_7 + 1] [i_7 - 2] [i_7 + 2] [i_6]) + (2147483647))) << (((((/* implicit */int) arr_6 [i_7 + 1] [i_7 - 2] [i_7 + 2])) + (120)))))))) : (((/* implicit */unsigned long long int) min(((+(arr_24 [i_7 + 1] [i_7 - 2] [i_7 + 2] [i_6]))), (((((((arr_24 [i_7 + 1] [i_7 - 2] [i_7 + 2] [i_6]) - (2147483647))) + (2147483647))) << (((((((/* implicit */int) arr_6 [i_7 + 1] [i_7 - 2] [i_7 + 2])) + (120))) - (1))))))));
                }
                /* vectorizable */
                for (long long int i_10 = 1; i_10 < 15; i_10 += 4) 
                {
                    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((arr_1 [i_3] [i_7 - 2]) << (((/* implicit */int) arr_16 [i_3] [i_3])))))));
                    /* LoopSeq 1 */
                    for (short i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) arr_22 [i_3] [i_7 - 2] [i_3] [i_10 - 1] [i_10 - 1]))));
                        arr_32 [i_11] [i_6] [5] [i_6] [i_6] [i_3] = ((/* implicit */long long int) arr_13 [i_7] [i_10]);
                        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) var_6))));
                    }
                }
                /* vectorizable */
                for (unsigned int i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    var_35 += ((/* implicit */_Bool) ((signed char) (+(var_15))));
                    arr_35 [i_3] [i_6] = 5910946419782429290LL;
                    var_36 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) var_10)))));
                    /* LoopSeq 1 */
                    for (long long int i_13 = 1; i_13 < 15; i_13 += 1) 
                    {
                        var_37 = ((/* implicit */int) arr_18 [i_3] [i_6]);
                        var_38 = ((/* implicit */_Bool) max((var_38), (((((/* implicit */long long int) ((/* implicit */int) var_4))) >= ((+((-9223372036854775807LL - 1LL))))))));
                        var_39 ^= ((/* implicit */unsigned char) ((var_1) <= (((/* implicit */unsigned long long int) var_10))));
                        arr_40 [i_3] [i_6] [i_7] [i_7] [i_13] = var_2;
                    }
                }
            }
            arr_41 [i_3] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-2578))) % (-3337308714180268202LL)))) || (((/* implicit */_Bool) ((short) (short)-2578)))));
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) /* same iter space */
            {
                var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((unsigned long long int) -1953094501357584894LL)))));
                var_41 *= ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_3] [i_14] [i_15 + 1] [14]))) | (var_15));
            }
            for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) /* same iter space */
            {
                arr_50 [i_14] = (+(-899315109));
                var_42 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_37 [6LL]), (((/* implicit */int) var_11)))))));
            }
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) /* same iter space */
            {
                var_43 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_27 [i_3] [i_3] [i_17 + 1] [i_3] [i_17 + 1] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_9 [i_3] [i_17 + 1])))));
                var_44 = ((/* implicit */signed char) arr_20 [i_3] [i_3] [i_3]);
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_18 = 0; i_18 < 16; i_18 += 4) 
            {
                var_45 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_14])) ? (((/* implicit */int) ((5734021758868448579ULL) == (((/* implicit */unsigned long long int) 2826852973922523508LL))))) : (((/* implicit */int) arr_55 [i_3] [i_14] [i_18] [i_18]))));
                var_46 = ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_3] [i_3] [i_14] [i_14])) && ((_Bool)1)));
                var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_18] [i_18] [i_14] [i_18] [i_18] [i_18])) ? (var_9) : (((/* implicit */unsigned long long int) arr_30 [(signed char)0] [i_3] [i_14] [i_14] [i_14] [i_18]))));
            }
            arr_56 [i_14] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((var_1) == (((unsigned long long int) 16515072)))))));
            var_48 = min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_3] [i_3] [i_3] [i_14])) ^ (((/* implicit */int) arr_19 [i_3] [i_14] [i_3] [i_14]))))), (arr_43 [i_3] [i_14]));
        }
        arr_57 [10ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -5447597407212734424LL))));
        /* LoopSeq 2 */
        for (signed char i_19 = 3; i_19 < 15; i_19 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 1) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (signed char i_22 = 0; i_22 < 16; i_22 += 1) 
                    {
                        {
                            arr_69 [i_20] [i_3] [i_20] [i_21] [i_22] [i_3] [i_20] = ((/* implicit */signed char) (-(arr_63 [i_3] [i_20] [1ULL] [i_22])));
                            arr_70 [i_20] [14U] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_54 [i_19 - 2] [i_19 - 2] [i_19 + 1] [i_19 - 2])) : (((/* implicit */int) arr_54 [i_19 + 1] [i_19 + 1] [i_19] [i_19])))), ((-(((/* implicit */int) var_12))))));
                        }
                    } 
                } 
            } 
            var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) arr_58 [i_3] [i_3] [i_19]))));
            var_50 ^= ((/* implicit */unsigned int) ((((var_8) + (2147483647))) << (((((((/* implicit */int) (short)20689)) << (((((var_9) % (((/* implicit */unsigned long long int) var_14)))) - (469137174ULL))))) - (82756)))));
            /* LoopSeq 2 */
            for (long long int i_23 = 0; i_23 < 16; i_23 += 1) 
            {
                var_51 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_23] [i_19] [i_3])) ? (((((/* implicit */_Bool) ((unsigned int) var_12))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [6] [i_19] [i_23] [(unsigned char)2] [i_23]))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
                var_52 = ((/* implicit */unsigned short) min((var_52), (((/* implicit */unsigned short) ((unsigned long long int) ((long long int) (unsigned char)236))))));
                /* LoopNest 2 */
                for (signed char i_24 = 1; i_24 < 14; i_24 += 4) 
                {
                    for (long long int i_25 = 1; i_25 < 15; i_25 += 4) 
                    {
                        {
                            arr_80 [2] [2] &= ((/* implicit */unsigned long long int) (((-(var_7))) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_34 [i_3] [i_19 + 1] [i_24 + 1] [i_24]))))));
                            var_53 = ((/* implicit */signed char) min((var_53), (((/* implicit */signed char) (-(((var_2) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_7)) : (12712722314841103052ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_4)))))))))))));
                            var_54 |= ((/* implicit */signed char) ((unsigned short) var_5));
                            arr_81 [i_24] [i_19] [(signed char)6] [i_24 + 2] [i_24] = ((/* implicit */unsigned char) min((((/* implicit */int) var_5)), (min((((/* implicit */int) ((var_14) <= (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))), (((((/* implicit */int) (unsigned char)13)) | (var_8)))))));
                            var_55 = ((/* implicit */unsigned char) max((var_9), (((/* implicit */unsigned long long int) (+(((arr_21 [3LL] [i_23] [i_19] [7LL]) ? (5910946419782429290LL) : (((/* implicit */long long int) arr_68 [i_3] [i_24] [i_23] [i_24])))))))));
                        }
                    } 
                } 
                arr_82 [i_3] = ((/* implicit */_Bool) arr_74 [(_Bool)1] [(signed char)11] [i_3]);
                var_56 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (((unsigned long long int) (signed char)-27))));
            }
            for (unsigned long long int i_26 = 1; i_26 < 15; i_26 += 1) 
            {
                var_57 = ((/* implicit */_Bool) var_6);
                var_58 = ((/* implicit */_Bool) (unsigned char)152);
            }
            var_59 ^= ((/* implicit */signed char) var_7);
        }
        for (unsigned long long int i_27 = 0; i_27 < 16; i_27 += 4) 
        {
            /* LoopNest 3 */
            for (int i_28 = 0; i_28 < 16; i_28 += 4) 
            {
                for (_Bool i_29 = 0; i_29 < 0; i_29 += 1) 
                {
                    for (unsigned char i_30 = 0; i_30 < 16; i_30 += 1) 
                    {
                        {
                            var_60 = ((/* implicit */int) var_0);
                            var_61 = ((/* implicit */long long int) var_6);
                            var_62 = 2953252017U;
                        }
                    } 
                } 
            } 
            arr_95 [i_3] [i_3] [i_3] = ((/* implicit */signed char) (_Bool)1);
            var_63 = var_1;
            /* LoopNest 3 */
            for (unsigned int i_31 = 2; i_31 < 15; i_31 += 1) 
            {
                for (int i_32 = 1; i_32 < 12; i_32 += 4) 
                {
                    for (long long int i_33 = 0; i_33 < 16; i_33 += 1) 
                    {
                        {
                            var_64 = ((/* implicit */long long int) max((var_64), (((/* implicit */long long int) min((min(((~(var_9))), (((/* implicit */unsigned long long int) var_13)))), (arr_34 [(unsigned char)14] [7] [i_32] [(_Bool)1]))))));
                            var_65 = ((/* implicit */unsigned char) ((unsigned long long int) max((((/* implicit */unsigned short) (unsigned char)18)), ((unsigned short)17388))));
                        }
                    } 
                } 
            } 
        }
        var_66 = 0ULL;
    }
    /* LoopSeq 2 */
    for (unsigned int i_34 = 0; i_34 < 16; i_34 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_35 = 1; i_35 < 14; i_35 += 1) 
        {
            var_67 = ((long long int) max((((unsigned short) var_9)), (((/* implicit */unsigned short) ((arr_97 [i_34] [i_34] [i_34]) <= (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
            var_68 += ((/* implicit */unsigned int) ((signed char) var_13));
        }
        for (unsigned char i_36 = 0; i_36 < 16; i_36 += 1) 
        {
            var_69 = ((/* implicit */signed char) max((var_69), (((/* implicit */signed char) max((arr_86 [i_34] [1LL] [3]), (((/* implicit */int) (_Bool)1)))))));
            arr_111 [i_36] = ((/* implicit */int) arr_90 [i_34] [i_36] [i_36] [i_34] [i_34] [i_36]);
            arr_112 [i_34] [i_36] = ((/* implicit */unsigned int) max((arr_86 [i_34] [i_34] [i_34]), ((~(((/* implicit */int) var_2))))));
        }
        for (long long int i_37 = 0; i_37 < 16; i_37 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_38 = 0; i_38 < 0; i_38 += 1) 
            {
                for (unsigned int i_39 = 0; i_39 < 16; i_39 += 4) 
                {
                    {
                        arr_121 [i_38] [i_38 + 1] [i_39] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), ((+(var_6)))))) ? (((/* implicit */int) ((signed char) arr_71 [i_38 + 1] [i_38 + 1] [i_38 + 1] [i_38 + 1]))) : (((/* implicit */int) ((((/* implicit */int) arr_20 [i_38 + 1] [i_38 + 1] [i_38 + 1])) > (((/* implicit */int) arr_20 [i_38 + 1] [i_38 + 1] [i_38 + 1])))))));
                        arr_122 [i_38] [i_39] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_34] [i_37] [i_38] [i_39])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) (_Bool)1))))))))));
                    }
                } 
            } 
            arr_123 [i_37] [i_34] = ((/* implicit */int) min((arr_74 [i_37] [i_37] [i_34]), (((/* implicit */long long int) ((int) (unsigned char)212)))));
        }
        arr_124 [(_Bool)1] = ((/* implicit */unsigned long long int) arr_26 [i_34] [i_34] [i_34] [i_34]);
    }
    for (_Bool i_40 = 0; i_40 < 0; i_40 += 1) 
    {
        arr_127 [i_40] [i_40 + 1] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(signed char)16]))))) : ((-2147483647 - 1)))));
        var_70 = ((/* implicit */int) var_0);
    }
    var_71 = ((/* implicit */unsigned int) ((_Bool) var_15));
}
