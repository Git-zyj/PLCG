/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116557
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_12 *= ((/* implicit */_Bool) var_4);
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */signed char) var_6);
                    /* LoopSeq 4 */
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 2; i_4 < 20; i_4 += 4) 
                        {
                            var_13 += ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2ULL)))))));
                            var_14 += var_5;
                            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) >= (arr_12 [i_0] [i_4])))))));
                        }
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3 - 2] [i_3 + 2] [i_2 - 1] [i_2 - 1])) && (((/* implicit */_Bool) arr_11 [i_0]))));
                        arr_17 [i_3] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) arr_13 [i_0] [i_2 - 1] [i_2 + 1] [i_3 - 1] [i_2 + 1])) : (arr_7 [i_3 - 1] [i_2 - 1] [i_2 + 1])));
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)51172)) | (((/* implicit */int) (short)30756))));
                        arr_18 [i_0] [i_0] [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_0)))) >= (((int) var_10))));
                    }
                    for (long long int i_5 = 2; i_5 < 20; i_5 += 4) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                        {
                            arr_23 [i_0] [i_0] [i_0] [i_5 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) >= ((-(var_4)))));
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [(unsigned short)19])) | (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))))))));
                            var_19 = ((/* implicit */int) var_1);
                        }
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */int) (+(arr_6 [i_2 + 1] [8ULL] [i_2 + 1] [i_5 + 2])));
                            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_7] [i_7] [2U] [2U] [i_5 + 3] [i_2 - 1]))));
                            var_22 *= ((/* implicit */signed char) (-(var_11)));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_24 [i_2 - 1] [i_1] [i_2 + 1]) : (arr_10 [i_2 - 1] [i_1] [i_2] [i_5 + 2]))))));
                        }
                        var_24 = ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_3)) : (var_4))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (var_4))));
                        var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17944029765304320ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39061))) : (3135900132972667820ULL)))) ? (((/* implicit */int) var_2)) : (((arr_25 [i_0] [i_0] [i_2 - 1] [i_5]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))));
                        arr_27 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)56))));
                    }
                    for (long long int i_8 = 2; i_8 < 20; i_8 += 4) /* same iter space */
                    {
                        arr_30 [i_8] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) (signed char)-122));
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_8 - 1] [i_8 + 4] [i_2 - 1] [i_2 + 1] [i_2 - 1])) || (((/* implicit */_Bool) ((signed char) var_2))))))));
                            var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_8] [i_8] [i_2] [i_2 + 1] [i_8])))))));
                        }
                        var_28 *= ((/* implicit */signed char) ((var_0) ? (((/* implicit */unsigned long long int) ((arr_3 [i_8] [i_2] [i_8]) % (((/* implicit */unsigned int) arr_24 [18U] [i_1] [18U]))))) : (((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_2] [i_8] [i_8] [(signed char)6] [(signed char)6])))))));
                    }
                    for (long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        var_29 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0]))));
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (short)30756)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (signed char)-122)))) : ((~(((/* implicit */int) var_6))))));
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) % ((-(((/* implicit */int) var_1))))));
                    }
                }
            } 
        } 
        arr_37 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)249)) % (((/* implicit */int) (signed char)-14))));
    }
    for (long long int i_11 = 0; i_11 < 21; i_11 += 4) 
    {
        var_32 = ((/* implicit */signed char) min((var_32), (((signed char) (-(((/* implicit */int) (unsigned char)96)))))));
        /* LoopSeq 1 */
        for (unsigned char i_12 = 0; i_12 < 21; i_12 += 4) 
        {
            var_33 += ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) 4294967295U)))));
            /* LoopSeq 2 */
            for (short i_13 = 0; i_13 < 21; i_13 += 3) 
            {
                var_34 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_7)))), (((int) 1692007674))))) * (((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [(signed char)6] [i_12] [20ULL]))))) ? (min((var_4), (((/* implicit */unsigned long long int) arr_7 [18] [i_12] [(signed char)19])))) : (((/* implicit */unsigned long long int) ((1692007669) >> (((((/* implicit */int) (signed char)32)) - (7))))))))));
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    for (signed char i_15 = 0; i_15 < 21; i_15 += 3) 
                    {
                        {
                            arr_52 [18ULL] [i_14] [i_11] [i_11] [18ULL] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)4)), ((unsigned char)82)))) ? ((~(0U))) : ((-(var_3)))))) ? (((min((20ULL), (var_4))) % (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_35 [i_15] [i_14] [i_12] [i_11])), (var_10))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_15 [i_11] [1] [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_11 [i_12])))))));
                            var_35 = ((/* implicit */int) arr_44 [i_12] [i_14]);
                        }
                    } 
                } 
                arr_53 [i_11] [i_11] [i_13] [i_13] = ((/* implicit */unsigned short) arr_21 [(signed char)22] [i_12] [(unsigned char)8] [i_11] [(_Bool)1] [i_11] [(_Bool)1]);
                var_36 += ((/* implicit */int) var_0);
            }
            for (signed char i_16 = 0; i_16 < 21; i_16 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_17 = 0; i_17 < 21; i_17 += 4) 
                {
                    for (long long int i_18 = 0; i_18 < 21; i_18 += 4) 
                    {
                        {
                            arr_61 [i_18] [i_17] [i_16] [i_16] [3ULL] [3ULL] = ((/* implicit */signed char) var_8);
                            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_55 [i_12]) / (arr_55 [i_12])))) ? ((~(((/* implicit */int) arr_56 [19U] [19U] [i_17])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) >= (((((/* implicit */long long int) ((/* implicit */int) var_0))) % (arr_7 [i_16] [i_16] [i_18]))))))));
                            var_38 = ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_60 [i_16]))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))))));
                        }
                    } 
                } 
                var_39 += ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)57191)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)8))) : (9566802512873160173ULL)));
            }
            /* LoopNest 2 */
            for (signed char i_19 = 1; i_19 < 17; i_19 += 4) 
            {
                for (unsigned long long int i_20 = 0; i_20 < 21; i_20 += 4) 
                {
                    {
                        var_40 = (~(((((/* implicit */_Bool) var_10)) ? (arr_63 [i_11] [i_20]) : (arr_63 [i_20] [i_12]))));
                        arr_67 [i_20] [15] [i_12] [15] = ((/* implicit */_Bool) min(((-(arr_3 [i_19 - 1] [6] [i_12]))), (min((arr_12 [i_12] [i_12]), (var_3)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_21 = 0; i_21 < 21; i_21 += 3) 
            {
                for (signed char i_22 = 3; i_22 < 18; i_22 += 3) 
                {
                    for (signed char i_23 = 0; i_23 < 21; i_23 += 4) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned long long int) (~(((unsigned int) (+(-1692007658))))));
                            var_42 = ((/* implicit */int) (-(((long long int) arr_5 [i_23] [i_22] [i_11]))));
                            arr_77 [i_23] [(signed char)15] [i_21] [i_11] [i_11] = ((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned char)110))))));
                        }
                    } 
                } 
            } 
        }
        var_43 += ((/* implicit */_Bool) max(((~((~(var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) -6235862065833265086LL))) >= (((/* implicit */int) var_9)))))));
        var_44 += (~(((/* implicit */int) var_6)));
        var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))))), (arr_45 [(_Bool)1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_11] [(signed char)5]))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1692007674)) || (((/* implicit */_Bool) 2723130736564075599ULL))))))));
    }
    for (signed char i_24 = 0; i_24 < 14; i_24 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
        {
            var_46 += ((/* implicit */signed char) (((~(((/* implicit */int) min((arr_59 [i_25] [i_25] [i_25] [10LL] [i_25] [i_24] [i_24]), (var_2)))))) | (((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) (unsigned char)33)) : ((-2147483647 - 1))))));
            var_47 = ((/* implicit */long long int) min((min((arr_46 [i_24] [i_25]), (((/* implicit */unsigned long long int) arr_8 [i_24] [i_25] [i_24])))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_59 [i_24] [i_24] [i_24] [i_24] [(_Bool)1] [i_25] [i_25])) + (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [(short)18]))) : (arr_63 [i_24] [i_25])))))));
        }
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
        {
            var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) (unsigned short)65535))) | (((((/* implicit */int) arr_22 [i_24] [i_26] [i_24] [i_26] [i_24] [6U] [i_24])) | (var_11)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min(((unsigned char)144), (((/* implicit */unsigned char) (signed char)106)))))));
            /* LoopSeq 1 */
            for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
            {
                arr_88 [i_27] [(_Bool)1] [i_24] = max((((((/* implicit */int) arr_62 [i_24] [i_24] [i_24] [i_27])) * (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) arr_62 [i_24] [i_26] [i_27] [i_26])) ? (((/* implicit */int) arr_62 [i_24] [(signed char)0] [i_27] [i_27])) : (((/* implicit */int) var_9)))));
                var_49 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-109)) % (((/* implicit */int) (unsigned char)251))))), (((unsigned int) var_11))))) % (max((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) (!(var_8))))))));
                var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) (~(((((/* implicit */int) (unsigned char)128)) >> (((((/* implicit */int) (signed char)-107)) + (129))))))))));
            }
        }
        for (short i_28 = 0; i_28 < 14; i_28 += 3) 
        {
            var_51 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)28201))))) ? ((+(((/* implicit */int) arr_82 [i_28] [i_28] [i_24])))) : ((((~(arr_19 [i_28] [i_28] [(signed char)1] [i_24] [i_24] [i_24]))) >> (((max((var_4), (((/* implicit */unsigned long long int) var_6)))) - (15274097270629843805ULL)))))));
            arr_91 [i_24] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_0) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) arr_51 [16ULL] [i_28] [i_24]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (var_4))) : ((-(((unsigned long long int) var_2))))));
            var_52 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_44 [i_24] [i_28])) : (((/* implicit */int) var_7)))) >> (((max((arr_64 [i_24] [i_28]), (((/* implicit */int) arr_14 [9] [i_24] [i_24])))) - (1515760236)))))) ? (min((((/* implicit */int) var_1)), ((~(((/* implicit */int) (unsigned char)159)))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 4268186240U)) ? (((/* implicit */int) (signed char)-107)) : (var_11)))))));
        }
        var_53 = ((/* implicit */long long int) ((((unsigned long long int) (-(var_4)))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_78 [i_24])) ? (((/* implicit */unsigned int) var_11)) : (arr_45 [i_24]))))));
    }
    /* vectorizable */
    for (signed char i_29 = 2; i_29 < 22; i_29 += 3) 
    {
        var_54 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_95 [i_29 + 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_95 [i_29 + 2]))));
        /* LoopNest 2 */
        for (long long int i_30 = 1; i_30 < 24; i_30 += 3) 
        {
            for (signed char i_31 = 3; i_31 < 21; i_31 += 3) 
            {
                {
                    var_55 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) 274877906688ULL))) && (((/* implicit */_Bool) arr_98 [i_30] [i_29]))));
                    /* LoopNest 2 */
                    for (unsigned char i_32 = 0; i_32 < 25; i_32 += 3) 
                    {
                        for (unsigned long long int i_33 = 1; i_33 < 24; i_33 += 3) 
                        {
                            {
                                var_56 = ((/* implicit */int) max((var_56), (((/* implicit */int) ((long long int) (+(((/* implicit */int) var_2))))))));
                                var_57 *= ((/* implicit */signed char) (~(((/* implicit */int) var_10))));
                                var_58 = ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105))) + (2564001665U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-49))))));
                                arr_108 [i_29] [i_32] [i_29] [i_29] [i_30] [i_29] = (((-(((/* implicit */int) arr_92 [i_33])))) % (((/* implicit */int) arr_101 [i_30 + 1] [i_31 + 2] [i_33 - 1])));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_34 = 3; i_34 < 23; i_34 += 3) 
                    {
                        arr_112 [i_29] [i_29] [i_30] [i_29] [i_29] [i_34] = ((/* implicit */int) ((((/* implicit */_Bool) -1864885189)) || (((/* implicit */_Bool) (signed char)-113))));
                        var_59 = ((((/* implicit */_Bool) arr_98 [i_31 - 3] [i_30 - 1])) ? (((/* implicit */int) arr_98 [i_31 + 1] [i_30 - 1])) : (((/* implicit */int) arr_98 [i_31 - 2] [i_30 + 1])));
                        var_60 = ((/* implicit */unsigned int) ((unsigned long long int) (-(arr_102 [i_29]))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_35 = 0; i_35 < 25; i_35 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_36 = 0; i_36 < 25; i_36 += 4) 
                        {
                            arr_117 [i_30] [i_35] [i_29] [i_30] [i_29] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_103 [i_31 - 3] [i_30] [i_29] [i_30 - 1] [i_36] [i_29 - 2])) ? (((((/* implicit */_Bool) arr_106 [3U] [i_30 + 1] [i_31] [i_35] [i_36] [(signed char)4] [i_36])) ? (arr_105 [i_29] [i_30 + 1] [i_31] [i_30 + 1] [i_36] [i_36]) : (((/* implicit */int) var_9)))) : (((var_11) + (((/* implicit */int) var_9))))));
                            var_61 = ((/* implicit */unsigned long long int) ((((arr_105 [i_31 - 2] [i_31 - 3] [i_29 - 2] [0ULL] [i_29 - 2] [i_29 + 1]) + (2147483647))) >> (((arr_105 [i_29 - 1] [i_31 + 4] [i_31] [i_31] [i_29 + 2] [i_29 - 1]) + (1357115649)))));
                            var_62 = ((/* implicit */signed char) max((var_62), (((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) (signed char)0))))))));
                        }
                        var_63 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
                        var_64 *= ((/* implicit */unsigned int) ((signed char) arr_107 [i_31 - 2] [i_31 - 2] [i_30 - 1] [i_29 + 2] [i_29 - 2]));
                        var_65 = ((/* implicit */unsigned long long int) min((var_65), (((/* implicit */unsigned long long int) (-(((((((/* implicit */int) var_1)) + (2147483647))) >> (((((/* implicit */int) arr_115 [i_29] [i_29] [i_31] [i_35] [i_29] [i_35] [i_35])) + (26))))))))));
                    }
                    for (unsigned long long int i_37 = 0; i_37 < 25; i_37 += 3) 
                    {
                        arr_122 [i_29] [i_30 + 1] [i_29] [i_37] = ((/* implicit */_Bool) ((long long int) var_3));
                        arr_123 [i_29] [i_31] [i_31] [i_30 + 1] [i_29] = ((/* implicit */long long int) ((((/* implicit */int) ((var_0) || (((/* implicit */_Bool) arr_102 [i_29]))))) | (((((/* implicit */int) var_5)) % (arr_93 [i_31] [i_30])))));
                    }
                }
            } 
        } 
    }
    var_66 = ((/* implicit */unsigned int) (+(-3932287820070750453LL)));
}
