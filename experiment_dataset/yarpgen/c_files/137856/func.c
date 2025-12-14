/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137856
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_13 = ((/* implicit */int) ((long long int) (+(((/* implicit */int) arr_0 [i_0 + 1] [i_0])))));
        var_14 = ((/* implicit */unsigned char) (-2147483647 - 1));
        arr_2 [i_0] = ((/* implicit */unsigned char) 2392681984U);
    }
    for (long long int i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 4; i_3 < 10; i_3 += 4) 
            {
                for (short i_4 = 3; i_4 < 9; i_4 += 3) 
                {
                    {
                        var_15 &= ((/* implicit */unsigned int) arr_3 [i_1]);
                        arr_16 [i_2] [(short)11] [i_2] [i_3] [(signed char)5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            /* LoopNest 3 */
            for (short i_6 = 2; i_6 < 12; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_27 [i_1] [0] [i_6] [i_6] [i_8] [(short)2] [0] &= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((_Bool) arr_24 [i_1 - 1] [i_5] [i_6 - 2] [(_Bool)1] [(short)12] [i_1 - 1]))), (max((13708797112086163150ULL), (((/* implicit */unsigned long long int) var_3))))));
                            var_16 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_1 [i_5])) * (((/* implicit */int) min(((short)-7), ((short)-27)))))), (((((/* implicit */int) (unsigned char)189)) - (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) (unsigned char)127)))))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                var_17 += ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551609ULL)) && (((/* implicit */_Bool) (unsigned short)11280))));
                arr_30 [i_5] = ((/* implicit */unsigned short) 18446744073709551613ULL);
                var_18 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) arr_4 [i_1]))) * (((/* implicit */int) arr_3 [i_1 - 1]))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (4737946961623388462ULL)))));
                var_19 *= ((/* implicit */unsigned char) (+((+(10024597522574993428ULL)))));
            }
            /* LoopNest 3 */
            for (unsigned char i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned char i_12 = 0; i_12 < 13; i_12 += 2) 
                    {
                        {
                            arr_39 [4ULL] [i_1] [i_10] [i_11] [i_12] [i_5] [i_5] = ((/* implicit */short) max((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_5)))), ((!(((/* implicit */_Bool) arr_6 [i_1] [(short)11] [i_5]))))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_10))));
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_25 [(unsigned short)4] [i_12] [i_12] [i_11] [(unsigned short)4]))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_23 [i_5] [i_5])) : ((~(((/* implicit */int) var_12))))))));
            /* LoopNest 2 */
            for (unsigned char i_13 = 2; i_13 < 10; i_13 += 4) 
            {
                for (short i_14 = 0; i_14 < 13; i_14 += 4) 
                {
                    {
                        arr_46 [i_1] [0ULL] [i_5] [i_13] [(unsigned short)3] = ((/* implicit */unsigned long long int) var_0);
                        var_23 = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_24 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_13 + 1] [i_5] [i_13 - 1])) - (((/* implicit */int) arr_24 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_13 - 1] [i_5] [i_13 + 3])))), (arr_44 [i_5] [i_13] [(short)0] [i_5])));
                    }
                } 
            } 
        }
        for (short i_15 = 3; i_15 < 12; i_15 += 4) 
        {
            var_24 = ((/* implicit */_Bool) ((((_Bool) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_7))))) ? (((/* implicit */int) (short)32761)) : (((/* implicit */int) var_2))));
            arr_49 [i_1] [i_15] = ((/* implicit */signed char) var_9);
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (!(min(((!(((/* implicit */_Bool) arr_4 [i_1])))), ((!(((/* implicit */_Bool) 13708797112086163148ULL)))))))))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_16 = 0; i_16 < 13; i_16 += 4) 
        {
            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_1)) ? (arr_47 [i_1 + 1] [(short)11] [(signed char)7]) : (((/* implicit */int) arr_17 [i_1] [i_1] [i_16]))))))))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_17 = 2; i_17 < 11; i_17 += 4) /* same iter space */
            {
                arr_56 [i_1] [(unsigned char)11] [i_1] [i_1 + 1] = ((/* implicit */unsigned int) ((max(((+(8163961392851929732ULL))), (((/* implicit */unsigned long long int) min(((unsigned short)65521), (((/* implicit */unsigned short) arr_17 [i_1] [i_16] [i_17]))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_16] [8] [(short)4] [i_17])) * (((/* implicit */int) arr_41 [i_16])))))));
                arr_57 [i_16] [i_16] [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)28325))) >= (18446744073709551600ULL)))), (((short) 11667963767595806102ULL))))) ? (((/* implicit */int) ((signed char) ((unsigned int) 18446744073709551615ULL)))) : (((/* implicit */int) ((((/* implicit */int) var_3)) != (((((/* implicit */_Bool) 13616238065291122957ULL)) ? (((/* implicit */int) arr_11 [i_17] [(unsigned short)8] [i_17] [i_1 - 1])) : (((/* implicit */int) (signed char)-6)))))))));
                /* LoopSeq 1 */
                for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                {
                    var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-537)) == (((/* implicit */int) ((-2072327822) == (612877963)))))))) != (13708797112086163129ULL))))));
                    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) max((min((var_9), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) min((arr_24 [i_1 - 1] [i_17 + 2] [i_18 + 1] [i_18] [i_17] [(unsigned char)6]), (((/* implicit */unsigned short) (signed char)63))))))))));
                    var_29 = ((/* implicit */_Bool) max((var_29), (min((((((/* implicit */_Bool) (unsigned char)197)) || (((/* implicit */_Bool) (unsigned char)56)))), (var_10)))));
                }
            }
            for (unsigned long long int i_19 = 2; i_19 < 11; i_19 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_20 = 0; i_20 < 13; i_20 += 4) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 13; i_21 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -32248636)) ? (((/* implicit */int) (short)19229)) : (((/* implicit */int) (short)28319))));
                            arr_69 [i_19] [i_16] = ((/* implicit */signed char) ((((max((4737946961623388461ULL), (((/* implicit */unsigned long long int) var_3)))) % (((/* implicit */unsigned long long int) 3986979967U)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) (signed char)26)))))))));
                            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (+(((/* implicit */int) (!(arr_62 [4LL] [i_21] [i_19])))))))));
                        }
                    } 
                } 
                var_32 = max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-45)) / (((/* implicit */int) arr_22 [i_19] [i_1 + 1] [i_16] [i_19 + 1] [i_19 - 1]))))), (((4737946961623388464ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
                var_33 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)36)), (((short) var_3)))))) <= (arr_42 [i_16] [(_Bool)1] [i_16])));
            }
        }
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)9811)))))));
            var_35 = ((/* implicit */unsigned int) ((short) var_7));
            /* LoopSeq 2 */
            for (short i_23 = 2; i_23 < 11; i_23 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (short i_24 = 4; i_24 < 11; i_24 += 4) 
                {
                    var_36 *= ((/* implicit */signed char) arr_33 [i_1 - 1] [i_24] [i_24]);
                    arr_79 [i_1] [i_22] [(unsigned short)12] [i_24] [6] [i_24 - 3] &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((var_8) + (2147483647))) << (((((/* implicit */int) ((unsigned char) (unsigned char)43))) - (43)))))), (arr_45 [i_1 + 1] [i_24] [i_1] [(signed char)2] [i_1] [4ULL])));
                }
                for (short i_25 = 0; i_25 < 13; i_25 += 4) /* same iter space */
                {
                    arr_82 [i_1] [i_22] [(unsigned short)12] [(unsigned short)0] [i_25] [i_23] = ((/* implicit */short) 18446744073709551600ULL);
                    arr_83 [i_23] = ((((/* implicit */_Bool) (signed char)-42)) || (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)20337)) ? (((/* implicit */int) (unsigned short)48130)) : (((/* implicit */int) var_0))))))));
                    var_37 &= ((/* implicit */long long int) (+(max((4737946961623388452ULL), (((/* implicit */unsigned long long int) (signed char)13))))));
                }
                for (short i_26 = 0; i_26 < 13; i_26 += 4) /* same iter space */
                {
                    var_38 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49285)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4737946961623388433ULL)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22868))) : (4642275732911546912ULL))) : (var_7))));
                    /* LoopSeq 1 */
                    for (signed char i_27 = 0; i_27 < 13; i_27 += 3) 
                    {
                        var_39 = (!(((/* implicit */_Bool) ((-67108864) | (((/* implicit */int) (unsigned short)12506))))));
                        var_40 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((arr_21 [i_1 - 1] [i_23]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                    }
                    var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) arr_7 [i_26]))));
                    var_42 = ((/* implicit */unsigned short) min((var_42), (((/* implicit */unsigned short) arr_84 [i_26] [i_26] [i_23 + 2] [i_26]))));
                }
                var_43 ^= max(((~(((/* implicit */int) ((unsigned short) (_Bool)1))))), (((/* implicit */int) ((short) ((unsigned long long int) (short)-634)))));
            }
            for (short i_28 = 2; i_28 < 11; i_28 += 1) /* same iter space */
            {
                arr_91 [4ULL] [i_22] [i_28] [i_28 - 2] = ((/* implicit */short) 612877953);
                /* LoopSeq 1 */
                for (unsigned char i_29 = 3; i_29 < 12; i_29 += 3) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_30 = 2; i_30 < 12; i_30 += 4) /* same iter space */
                    {
                        var_44 = ((/* implicit */int) ((short) var_8));
                        arr_98 [(_Bool)1] [i_29] [i_28] [i_28] [i_28] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65522)) | (((/* implicit */int) arr_68 [i_1 + 1] [i_1 - 1] [i_28 + 1] [i_28 + 1] [i_29 + 1]))));
                        var_45 = ((/* implicit */unsigned long long int) min((var_45), (var_7)));
                    }
                    for (unsigned long long int i_31 = 2; i_31 < 12; i_31 += 4) /* same iter space */
                    {
                        var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) arr_75 [i_31] [(short)2])) : (((/* implicit */int) (short)-1927)))))))))));
                        var_47 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)51)) != (1096743913)));
                        var_48 -= max((max((arr_100 [i_31] [i_28 + 2]), (((/* implicit */int) (unsigned char)118)))), (((/* implicit */int) arr_66 [i_31] [i_22])));
                        arr_101 [i_22] [i_22] [i_28 - 2] [i_28 - 2] [i_28] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_5))))));
                    }
                    for (unsigned long long int i_32 = 2; i_32 < 12; i_32 += 4) /* same iter space */
                    {
                        arr_106 [i_1] [i_1] [i_1] [i_1] [i_28] [i_1 + 1] = ((/* implicit */long long int) (short)620);
                        var_49 = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_92 [i_28] [7U]) > (((/* implicit */int) var_1))))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_92 [i_28] [i_28])) || (((/* implicit */_Bool) arr_95 [i_28] [i_28] [(signed char)11] [i_28])))))));
                    }
                    for (unsigned long long int i_33 = 2; i_33 < 12; i_33 += 4) /* same iter space */
                    {
                        var_50 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)128)), ((short)28301)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1982445338))))) : (33554428)));
                        var_51 += ((/* implicit */int) (((-(((/* implicit */int) var_6)))) == (max((((/* implicit */int) ((signed char) 4259541257211260227ULL))), (((((/* implicit */int) arr_12 [i_1 + 1] [i_33] [i_1 - 1] [i_1 - 1])) & (((/* implicit */int) arr_75 [i_33] [i_22]))))))));
                    }
                    var_52 |= ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_109 [(short)12]))) & (((/* implicit */int) ((_Bool) arr_109 [(unsigned short)0])))));
                }
                var_53 *= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (unsigned short)2567))))));
                arr_110 [(unsigned short)10] [(signed char)10] &= ((short) (!(((/* implicit */_Bool) arr_74 [8ULL] [6] [i_28] [i_28]))));
                arr_111 [i_28] [i_28] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)189)) >= (((/* implicit */int) (unsigned char)241))))) >= (((/* implicit */int) max((((/* implicit */short) var_10)), ((short)-25323)))))))) % (min((((unsigned int) arr_47 [6U] [i_22] [i_28])), (((/* implicit */unsigned int) (-2147483647 - 1)))))));
            }
            var_54 = ((/* implicit */unsigned int) min((var_54), (((/* implicit */unsigned int) max((((int) var_5)), (((/* implicit */int) ((short) (unsigned short)65532))))))));
            /* LoopSeq 2 */
            for (int i_34 = 2; i_34 < 12; i_34 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_35 = 3; i_35 < 9; i_35 += 4) 
                {
                    arr_117 [i_1 - 1] [i_22] [i_34 - 2] [i_1 - 1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)(-32767 - 1)))));
                    var_55 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_99 [i_1] [(short)6] [i_22] [4LL] [0ULL] [i_34] [i_35 - 2])), ((-((+(((/* implicit */int) var_11))))))));
                    arr_118 [(unsigned char)6] [i_22] [i_34] = ((/* implicit */short) (+(max((((/* implicit */int) (unsigned char)4)), (((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) var_6))))))));
                }
                var_56 = ((/* implicit */long long int) arr_63 [i_1 - 1] [6] [i_22] [i_22]);
            }
            for (unsigned long long int i_36 = 3; i_36 < 12; i_36 += 1) 
            {
                /* LoopNest 2 */
                for (short i_37 = 1; i_37 < 10; i_37 += 3) 
                {
                    for (unsigned short i_38 = 3; i_38 < 11; i_38 += 4) 
                    {
                        {
                            var_57 = ((/* implicit */unsigned short) max((var_57), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_84 [(_Bool)1] [i_1] [(_Bool)1] [(short)2])))) : (((18446744073709551613ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5219))))))));
                            var_58 *= ((/* implicit */signed char) var_10);
                            var_59 = ((/* implicit */int) min((var_59), ((~((+(arr_127 [(unsigned short)12] [(signed char)6] [i_37] [i_38] [i_38])))))));
                        }
                    } 
                } 
                arr_128 [i_1] [i_22] [i_36] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((var_12) ? (((/* implicit */int) (short)436)) : (((/* implicit */int) arr_99 [i_22] [i_22] [i_36 - 2] [i_1] [(short)6] [2] [(unsigned char)2]))))))) ? (((/* implicit */int) ((short) (+(((/* implicit */int) var_1)))))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_88 [i_1 + 1] [i_1] [i_22] [12] [4])) * (16051060472404169620ULL)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [(unsigned short)10] [i_22] [i_22] [(unsigned short)4])), ((unsigned short)511)))) : (((/* implicit */int) (short)-28332))))));
            }
        }
        arr_129 [i_1] = ((/* implicit */unsigned short) max(((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) (_Bool)1)))))), (((int) max((((/* implicit */unsigned short) var_4)), ((unsigned short)4088))))));
        var_60 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-21))));
    }
    for (unsigned char i_39 = 0; i_39 < 21; i_39 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_40 = 0; i_40 < 21; i_40 += 1) 
        {
            var_61 = ((/* implicit */int) max((var_61), (((/* implicit */int) var_9))));
            var_62 = (i_39 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_12) && (((/* implicit */_Bool) var_0))))) >> (((((unsigned int) arr_134 [i_39] [i_40])) - (626204404U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_12) && (((/* implicit */_Bool) var_0))))) >> (((((((unsigned int) arr_134 [i_39] [i_40])) - (626204404U))) - (1739134626U))))));
            var_63 = ((/* implicit */unsigned short) (unsigned char)8);
        }
        arr_135 [i_39] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)32749))));
        var_64 = ((/* implicit */unsigned int) min((((/* implicit */short) var_2)), ((short)4921)));
    }
    /* LoopSeq 2 */
    for (unsigned short i_41 = 1; i_41 < 8; i_41 += 3) /* same iter space */
    {
        var_65 &= ((/* implicit */short) (~(((((/* implicit */int) var_3)) & (((/* implicit */int) (unsigned char)215))))));
        var_66 = ((short) ((((/* implicit */int) max(((short)-21), ((short)-1)))) / (((int) (short)32762))));
        var_67 = ((/* implicit */int) arr_120 [i_41] [i_41] [i_41] [i_41]);
        /* LoopNest 2 */
        for (unsigned short i_42 = 1; i_42 < 9; i_42 += 4) 
        {
            for (unsigned long long int i_43 = 0; i_43 < 11; i_43 += 3) 
            {
                {
                    arr_144 [0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_121 [i_41 + 1]))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_80 [(short)12] [(short)12])) ? (((/* implicit */int) (short)4908)) : (((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) (unsigned short)495)) ? (((/* implicit */int) (unsigned short)31099)) : (((/* implicit */int) (short)-25))))));
                    arr_145 [i_41] [i_43] [1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_97 [i_41] [(short)5] [4] [i_43] [i_43] [i_42])) && (((/* implicit */_Bool) 34342961152LL))))))));
                }
            } 
        } 
        var_68 = ((/* implicit */short) (-(max((arr_59 [(unsigned char)5] [i_41] [i_41 + 3] [i_41] [i_41 + 3]), (((/* implicit */int) var_4))))));
    }
    for (unsigned short i_44 = 1; i_44 < 8; i_44 += 3) /* same iter space */
    {
        var_69 = arr_21 [i_44] [i_44];
        arr_149 [i_44] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-18)) == (((/* implicit */int) ((short) arr_23 [i_44] [i_44 + 3])))));
    }
}
