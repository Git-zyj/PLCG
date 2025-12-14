/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187134
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((67108864U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)212))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            var_17 |= ((/* implicit */unsigned char) ((short) ((unsigned int) 4124186790U)));
            var_18 = ((/* implicit */unsigned char) ((4124186790U) + ((+(((((/* implicit */_Bool) var_8)) ? (170780505U) : (4124186810U)))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_10 [i_1] = ((/* implicit */signed char) (~(((((/* implicit */int) max(((unsigned char)175), (((/* implicit */unsigned char) (_Bool)1))))) ^ ((~(((/* implicit */int) (_Bool)1))))))));
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 19; i_3 += 2) 
                {
                    for (unsigned char i_4 = 3; i_4 < 19; i_4 += 3) 
                    {
                        {
                            arr_16 [i_0] [i_0] [i_2] [i_1] [i_2] [i_0] [i_2] = ((/* implicit */short) ((((((/* implicit */unsigned int) -2031316378)) <= (4294967295U))) ? (((/* implicit */int) ((short) 1LL))) : ((~(((/* implicit */int) (short)-9564))))));
                            arr_17 [i_3] [(_Bool)1] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (_Bool)1);
                            var_19 &= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 11U)))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) ^ (0ULL))))) >= (max((((/* implicit */unsigned long long int) (short)-64)), (var_12)))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) 10ULL))) / (((((/* implicit */int) (unsigned char)80)) + (((/* implicit */int) (unsigned char)7))))));
                        }
                    } 
                } 
            }
        }
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) || (((/* implicit */_Bool) var_10))))) >= ((-(((/* implicit */int) ((_Bool) (unsigned char)0)))))));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 1; i_5 < 16; i_5 += 3) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
            {
                var_22 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)98))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 1; i_7 < 19; i_7 += 2) 
                {
                    for (unsigned int i_8 = 2; i_8 < 19; i_8 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) ((unsigned int) (unsigned char)176));
                            arr_30 [i_0] [i_6] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)157))));
                        }
                    } 
                } 
            }
            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
            {
                arr_35 [i_0] [i_5] [(_Bool)1] = ((/* implicit */unsigned short) ((max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)27))) * (0U))), (max((871517667U), (((/* implicit */unsigned int) (unsigned char)79)))))) << (((/* implicit */int) ((_Bool) (unsigned char)173)))));
                /* LoopSeq 1 */
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    var_24 = ((/* implicit */unsigned int) min(((+(8ULL))), (((/* implicit */unsigned long long int) max((max((((/* implicit */short) (unsigned char)79)), ((short)-215))), (((/* implicit */short) ((signed char) (_Bool)1))))))));
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        var_25 &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 32767U)) ? (4185850159U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))));
                        arr_40 [i_11] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-76)))))))));
                    }
                }
                arr_41 [i_0] [i_5 + 1] [i_5] [i_9] = ((/* implicit */int) var_13);
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) / (min((((/* implicit */long long int) (unsigned short)49936)), (min((((/* implicit */long long int) var_0)), (4054929035785169855LL)))))));
            }
            for (unsigned short i_12 = 0; i_12 < 20; i_12 += 3) 
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_13 = 1; i_13 < 18; i_13 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (var_2)))))));
                    var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)79)))))));
                }
                for (unsigned short i_14 = 1; i_14 < 18; i_14 += 3) /* same iter space */
                {
                    var_29 -= ((/* implicit */_Bool) (((((_Bool)1) ? (max((535822336), (((/* implicit */int) (unsigned char)1)))) : ((+(((/* implicit */int) (signed char)7)))))) ^ (((/* implicit */int) ((((/* implicit */int) (signed char)-84)) >= (((((/* implicit */int) (signed char)56)) | (-535822336))))))));
                    var_30 += ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) (~(780449329)))) || (((((/* implicit */int) (unsigned char)188)) <= (((/* implicit */int) (_Bool)1))))))), ((((-(((/* implicit */int) (_Bool)0)))) ^ (((/* implicit */int) (unsigned short)4080))))));
                    /* LoopSeq 1 */
                    for (long long int i_15 = 0; i_15 < 20; i_15 += 2) 
                    {
                        arr_52 [i_5] [i_5] [i_12] [i_14 - 1] [i_0] [i_0] [i_14] = (((-(2570578046U))) << (((min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)68))) + (var_1))), (((/* implicit */unsigned int) ((unsigned char) var_12))))) - (181U))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)-2)) / (var_15)))))))) <= (((((/* implicit */_Bool) var_9)) ? (32769U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47450)))))));
                        var_32 = ((/* implicit */unsigned char) ((var_8) + (((/* implicit */int) ((((((/* implicit */unsigned long long int) 1387832908U)) * (var_10))) >= (((((/* implicit */_Bool) -625304769)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_12))))))));
                        arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)3)) + (((/* implicit */int) (_Bool)1))))) | ((((_Bool)1) ? (((/* implicit */unsigned int) var_0)) : (0U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1724389236U)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)51)))))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_15)) != (703457665U))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 16777216)) | (min((703457687U), (((/* implicit */unsigned int) (short)26528))))))));
                    }
                }
                for (unsigned short i_16 = 3; i_16 < 18; i_16 += 3) /* same iter space */
                {
                    arr_56 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (((+(var_2))) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-67)))));
                    var_33 ^= ((/* implicit */unsigned char) (~(max((2ULL), (((/* implicit */unsigned long long int) (unsigned short)22))))));
                    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-2310)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (_Bool)1)), (-1236809341))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)43)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60)))))) ? (max((var_12), (2305843009146585088ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_14) <= (((/* implicit */int) var_11)))))))))));
                }
                for (unsigned short i_17 = 3; i_17 < 18; i_17 += 3) /* same iter space */
                {
                    var_35 = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (_Bool)1))))));
                    var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) (~(((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_15) : (((/* implicit */int) (short)-9966))))) / (var_9))))))));
                    var_37 = ((/* implicit */unsigned short) var_10);
                }
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 2) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 3) 
                    {
                        {
                            var_38 = (~(((/* implicit */int) (!(((/* implicit */_Bool) 1061895655620840867LL))))));
                            arr_65 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((max((((/* implicit */int) (_Bool)1)), (1602893300))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)2296)))))));
                        }
                    } 
                } 
            }
            var_39 = min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) >= (3247543940100627138ULL))))) != (max((((/* implicit */unsigned long long int) var_5)), (var_6)))))), (-535822336));
        }
    }
    /* vectorizable */
    for (unsigned int i_20 = 3; i_20 < 13; i_20 += 2) 
    {
        var_40 = ((/* implicit */unsigned long long int) (signed char)118);
        /* LoopSeq 1 */
        for (int i_21 = 0; i_21 < 17; i_21 += 2) 
        {
            /* LoopSeq 3 */
            for (short i_22 = 0; i_22 < 17; i_22 += 3) /* same iter space */
            {
                var_41 = ((/* implicit */long long int) ((unsigned int) var_1));
                /* LoopNest 2 */
                for (unsigned long long int i_23 = 3; i_23 < 15; i_23 += 3) 
                {
                    for (unsigned long long int i_24 = 1; i_24 < 14; i_24 += 3) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2173161944U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))));
                            arr_80 [i_22] [i_21] [i_24] [(unsigned short)2] [i_24] = ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))) >= (((1451173338U) | (3951586044U)))));
                        }
                    } 
                } 
                var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3410525080448453745ULL)) ? (((/* implicit */unsigned long long int) var_8)) : (9200389618834091081ULL)))) && (((/* implicit */_Bool) (+(2368829789U)))))))));
                var_44 = ((/* implicit */int) (((_Bool)1) ? (var_1) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)25250)))))));
            }
            for (short i_25 = 0; i_25 < 17; i_25 += 3) /* same iter space */
            {
                var_45 = ((/* implicit */unsigned int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) (_Bool)1))));
                var_46 = ((/* implicit */short) ((((/* implicit */_Bool) 12342438345307598562ULL)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
                var_47 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-60)) && ((_Bool)1))))));
                var_48 &= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_4)))) && (((/* implicit */_Bool) ((var_9) / (((/* implicit */long long int) var_1)))))));
                var_49 = var_4;
            }
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                arr_87 [i_26] [i_26] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (_Bool)1))))));
                var_50 += ((/* implicit */unsigned long long int) ((-16777199) / (((/* implicit */int) (_Bool)1))));
                var_51 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((3591509631U) | (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) ((((/* implicit */int) (short)25270)) >= (((/* implicit */int) (signed char)71))))) : (((/* implicit */int) (short)13367))));
            }
            /* LoopSeq 3 */
            for (unsigned char i_27 = 0; i_27 < 17; i_27 += 3) /* same iter space */
            {
                var_52 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483640)) ? (((/* implicit */int) (signed char)71)) : ((-(((/* implicit */int) var_3))))));
                var_53 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) << (((((((/* implicit */unsigned long long int) var_0)) + (var_6))) - (1620631351032234258ULL)))));
            }
            for (unsigned char i_28 = 0; i_28 < 17; i_28 += 3) /* same iter space */
            {
                var_54 = ((/* implicit */short) (!(((/* implicit */_Bool) 12342438345307598562ULL))));
                var_55 -= ((/* implicit */short) ((((/* implicit */_Bool) ((3131396228U) | (6U)))) ? ((~(1183141402))) : (1073217536)));
                var_56 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)448))));
            }
            for (unsigned char i_29 = 0; i_29 < 17; i_29 += 3) /* same iter space */
            {
                var_57 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1189091995U)) + (var_10)));
                /* LoopNest 2 */
                for (unsigned char i_30 = 3; i_30 < 15; i_30 += 3) 
                {
                    for (int i_31 = 1; i_31 < 15; i_31 += 3) 
                    {
                        {
                            var_58 = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-103))));
                            var_59 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (var_0)));
                        }
                    } 
                } 
                var_60 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)104))));
            }
            var_61 = ((/* implicit */unsigned int) max((var_61), (((/* implicit */unsigned int) (+(-242139306159221533LL))))));
            /* LoopNest 3 */
            for (unsigned long long int i_32 = 0; i_32 < 17; i_32 += 3) 
            {
                for (long long int i_33 = 0; i_33 < 17; i_33 += 2) 
                {
                    for (unsigned int i_34 = 4; i_34 < 14; i_34 += 2) 
                    {
                        {
                            var_62 = ((/* implicit */unsigned long long int) min((var_62), (((/* implicit */unsigned long long int) (!((_Bool)1))))));
                            arr_105 [i_32] [i_32] = (-(((/* implicit */int) (signed char)71)));
                            var_63 = ((/* implicit */signed char) max((var_63), (((/* implicit */signed char) var_3))));
                            arr_106 [i_20] [i_21] [i_32] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (signed char)118)))) - (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) -242139306159221546LL)))))));
                            var_64 = ((/* implicit */short) ((((/* implicit */_Bool) 524288)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_35 = 1; i_35 < 16; i_35 += 3) /* same iter space */
        {
            arr_109 [i_20] [i_35] = ((/* implicit */int) ((17592186044415ULL) << (((long long int) (_Bool)1))));
            var_65 = (-(((((/* implicit */_Bool) (short)4096)) ? (((/* implicit */int) (signed char)71)) : (var_0))));
            var_66 = ((/* implicit */long long int) ((2147483647) != (((/* implicit */int) (short)-23931))));
            arr_110 [i_20] [i_35] = ((/* implicit */_Bool) (-((+(((/* implicit */int) (signed char)71))))));
            var_67 |= ((/* implicit */int) (unsigned short)49384);
        }
        for (unsigned long long int i_36 = 1; i_36 < 16; i_36 += 3) /* same iter space */
        {
            var_68 += ((/* implicit */unsigned int) ((unsigned long long int) -242139306159221524LL));
            var_69 = ((/* implicit */int) ((10ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        }
    }
    var_70 = ((/* implicit */unsigned int) 242139306159221533LL);
    var_71 *= var_1;
    var_72 = ((/* implicit */int) ((unsigned long long int) (~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))))));
}
