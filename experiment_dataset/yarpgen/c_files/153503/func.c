/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153503
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
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [(unsigned short)15] [i_1] [i_1] = ((/* implicit */unsigned short) (short)-30608);
            /* LoopSeq 4 */
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 2; i_3 < 17; i_3 += 3) 
                {
                    for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        {
                            arr_16 [i_1] = (unsigned char)180;
                            arr_17 [i_0] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)76)), (((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_12), (var_12))))) : (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_3] [i_4])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))));
                            var_15 -= max((((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_3])), (((unsigned long long int) ((var_8) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) max((((((/* implicit */_Bool) (unsigned short)47993)) ? (((/* implicit */long long int) var_1)) : (max((-5952582278747400878LL), (((/* implicit */long long int) arr_12 [i_0] [10U] [i_1] [10U] [i_0])))))), (((/* implicit */long long int) 459481828U)))))));
                arr_18 [i_1] [i_1] = ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)68))))) || (((((/* implicit */int) var_10)) != (((/* implicit */int) (unsigned short)9646)))));
            }
            /* vectorizable */
            for (signed char i_5 = 0; i_5 < 18; i_5 += 1) /* same iter space */
            {
                var_17 += ((/* implicit */unsigned int) (signed char)-54);
                var_18 = ((/* implicit */short) (~(((/* implicit */int) var_13))));
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-2117)) ? (arr_19 [i_0] [i_1] [i_5] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
            }
            for (signed char i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)76)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_11)))))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    for (int i_8 = 2; i_8 < 16; i_8 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */int) (short)3152)) - (-831688546)))))) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_8 + 1] [i_1])) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_6))));
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)43))) : (9223372036854775794LL))))));
                            arr_28 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) min((2633907217360830591LL), (((/* implicit */long long int) (signed char)-32))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (signed char i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */short) -5760565529838599945LL);
                /* LoopSeq 1 */
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_10 + 1] [i_10 + 1])) ? (((((/* implicit */_Bool) arr_34 [i_0] [14U] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_0))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)23)) ? (((/* implicit */int) (unsigned short)298)) : (((/* implicit */int) (unsigned short)22)))))));
                        var_25 *= ((/* implicit */signed char) -676512582);
                        var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_11] [i_1] [i_1] [i_0])) ? (((/* implicit */int) (short)-3666)) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_10] [i_1] [i_1] [i_0]))) : (((long long int) arr_23 [(_Bool)1] [i_1] [i_11])));
                    }
                    for (signed char i_12 = 0; i_12 < 18; i_12 += 1) 
                    {
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)9] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) var_7)) : (var_14)))));
                        arr_39 [i_1] [i_1] [15] [i_9] [i_9] [15] = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned long long int) 3449600422U)) >= (var_14)))));
                        var_28 = ((((/* implicit */_Bool) arr_32 [i_0] [(unsigned short)3])) ? (((/* implicit */long long int) 8388607)) : (var_0));
                    }
                    arr_40 [i_0] [(short)9] [i_0] [i_1] = ((/* implicit */_Bool) (unsigned char)22);
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) arr_37 [(short)8] [i_1]))));
                    /* LoopSeq 4 */
                    for (short i_13 = 0; i_13 < 18; i_13 += 4) 
                    {
                        arr_44 [i_1] = ((/* implicit */long long int) var_13);
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)3661)) >> (((((var_0) << (((262143LL) - (262143LL))))) - (9122852559439604087LL)))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        var_31 = ((/* implicit */unsigned short) (~(2065045905)));
                        var_32 ^= ((/* implicit */_Bool) ((long long int) var_2));
                    }
                    for (short i_15 = 0; i_15 < 18; i_15 += 3) 
                    {
                        var_33 = ((/* implicit */signed char) ((2976880921732841844ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_10 + 1])))));
                        var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (unsigned char)224))));
                        var_35 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 6238795900083272672ULL)))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_6))));
                        arr_52 [i_0] [i_1] [i_1] [i_0] [i_1] [i_15] [i_15] = (~(((((/* implicit */_Bool) var_9)) ? (arr_8 [i_1]) : (((/* implicit */unsigned long long int) -1027937256453886958LL)))));
                    }
                    for (short i_16 = 2; i_16 < 17; i_16 += 3) 
                    {
                        var_36 ^= ((((-274408122785975076LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))))) ? (((long long int) (signed char)88)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_10])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_25 [i_0] [i_10 + 1] [10LL] [i_0] [i_16] [i_9]))))));
                        arr_56 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (5660561926371341455LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64951)))))) ? (((/* implicit */int) arr_41 [i_9] [i_9] [i_9] [i_9] [i_9] [(unsigned char)11] [i_9])) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_49 [i_0] [i_1] [i_9] [i_10] [i_1]))))));
                    }
                    arr_57 [i_1] [i_1] [i_9] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                }
                /* LoopSeq 3 */
                for (short i_17 = 0; i_17 < 18; i_17 += 3) 
                {
                    arr_60 [i_1] = (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_9] [i_9]))) : (8776001521766396614LL))));
                    var_37 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned short)53258))));
                }
                for (unsigned short i_18 = 2; i_18 < 16; i_18 += 4) 
                {
                    var_38 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)31492)) ? (((/* implicit */int) (unsigned short)55248)) : (((/* implicit */int) (_Bool)1))));
                    var_39 = ((/* implicit */short) ((((/* implicit */int) (signed char)10)) <= ((~(((/* implicit */int) (short)766))))));
                    var_40 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)79))) / (2798254870U))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [(unsigned short)11] [i_0] [(_Bool)1] [i_9] [(unsigned short)6] [i_18]))))))));
                    /* LoopSeq 3 */
                    for (long long int i_19 = 0; i_19 < 18; i_19 += 4) /* same iter space */
                    {
                        var_41 = ((/* implicit */short) arr_24 [(signed char)14] [(signed char)14] [i_1] [i_0]);
                        arr_65 [10U] [i_19] [i_9] [i_19] [(signed char)7] [i_18 - 2] [i_1] = ((((/* implicit */_Bool) arr_21 [i_0] [i_0])) ? (((/* implicit */int) (short)31492)) : (((((/* implicit */_Bool) arr_53 [17LL] [(short)2] [i_18] [i_1] [i_1] [i_0])) ? (arr_61 [i_1]) : (((/* implicit */int) var_13)))));
                        arr_66 [i_0] [15U] [i_1] [i_9] [i_1] [i_19] = ((/* implicit */int) ((arr_41 [i_9] [i_9] [i_18 - 2] [i_19] [i_19] [i_18 - 2] [i_19]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17347))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_14)))));
                        var_42 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_0] [i_0] [i_0]))))))));
                    }
                    for (long long int i_20 = 0; i_20 < 18; i_20 += 4) /* same iter space */
                    {
                        arr_71 [i_1] [(signed char)8] [i_1] [i_1] [i_1] = var_4;
                        arr_72 [i_0] [(_Bool)1] [i_1] [i_1] [i_9] [i_18] [i_20] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(1606933956U)))) ? (arr_34 [i_20] [i_9] [i_0]) : (((((/* implicit */_Bool) (unsigned short)14175)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_0)))));
                        var_43 = ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_18] [i_18 - 2] [i_18 + 2] [i_20])) ? (arr_31 [i_18] [i_18 + 1] [i_18 - 1] [i_18]) : (arr_31 [i_9] [i_18 - 2] [i_18 + 1] [i_20])));
                    }
                    for (unsigned short i_21 = 0; i_21 < 18; i_21 += 3) 
                    {
                        var_44 = ((/* implicit */unsigned long long int) var_10);
                        var_45 &= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)143)) - (-885899029)));
                    }
                }
                for (signed char i_22 = 1; i_22 < 17; i_22 += 4) 
                {
                    arr_79 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_22] [i_1] [i_22] [i_22 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_30 [i_22] [i_1] [i_22 - 1] [i_22 + 1]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_23 = 2; i_23 < 17; i_23 += 1) 
                    {
                        arr_82 [i_0] [i_1] [i_9] = arr_73 [i_22 + 1] [i_23 - 2] [i_23] [i_23] [7];
                        var_46 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_43 [i_23] [i_23] [3U] [i_23 - 1] [i_23 - 2]))));
                    }
                }
            }
            /* LoopNest 3 */
            for (unsigned int i_24 = 0; i_24 < 18; i_24 += 2) 
            {
                for (unsigned char i_25 = 0; i_25 < 18; i_25 += 4) 
                {
                    for (long long int i_26 = 0; i_26 < 18; i_26 += 4) 
                    {
                        {
                            var_47 = ((/* implicit */short) ((((/* implicit */_Bool) 1348111068626758049ULL)) ? (((/* implicit */int) (_Bool)0)) : (min((((/* implicit */int) min(((unsigned short)65512), (((/* implicit */unsigned short) var_9))))), ((~(arr_70 [i_1] [i_26])))))));
                            var_48 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_13)), (var_1)))) ? (arr_24 [i_0] [i_1] [i_25] [i_26]) : (var_0))))));
                            arr_90 [i_1] [i_1] = ((/* implicit */int) max((((unsigned short) ((((/* implicit */_Bool) 8146662632491133947ULL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_1] [i_24] [i_1] [i_1] [(short)0])))))), (((/* implicit */unsigned short) arr_51 [(signed char)2] [i_1] [i_1] [i_24] [i_1] [i_1] [i_26]))));
                            var_49 = ((/* implicit */signed char) (~(min((max((arr_54 [i_1] [i_1] [i_24] [i_24] [16LL]), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_4)), (var_1))))))));
                        }
                    } 
                } 
            } 
            var_50 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */int) (short)4096)) : (-1879035984))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)2046))))) ? ((+(((/* implicit */int) (unsigned char)249)))) : (((/* implicit */int) arr_58 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_87 [i_0] [2] [i_0] [i_0] [i_0] [i_1]))))) ? (((/* implicit */int) ((unsigned char) var_1))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
        }
        for (long long int i_27 = 0; i_27 < 18; i_27 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_28 = 0; i_28 < 18; i_28 += 4) 
            {
                for (short i_29 = 1; i_29 < 14; i_29 += 3) 
                {
                    {
                        var_51 = ((/* implicit */signed char) max((var_51), (((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_84 [(signed char)10] [i_27] [i_27] [i_29])) ? (arr_84 [i_29 + 2] [i_28] [i_27] [i_0]) : (arr_84 [i_0] [i_27] [i_28] [i_29 + 3]))))))));
                        var_52 = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) -1239674193)))), (((((/* implicit */_Bool) (signed char)126)) || (var_8)))));
                        var_53 = ((/* implicit */short) min((((/* implicit */long long int) -164040962)), (arr_7 [i_27] [i_29 + 3] [i_29 - 1])));
                    }
                } 
            } 
            var_54 = ((/* implicit */unsigned long long int) ((2280428066U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        }
        var_55 = ((/* implicit */_Bool) min((((/* implicit */int) max((arr_37 [i_0] [i_0]), (var_3)))), ((~(((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (signed char i_30 = 0; i_30 < 16; i_30 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_31 = 1; i_31 < 14; i_31 += 4) 
        {
            var_56 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_83 [(unsigned char)9] [i_31 + 2] [i_31 + 1])) ? (arr_8 [(signed char)12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_85 [i_31 - 1] [(signed char)14] [i_31 + 2] [i_31 + 2]))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_12)), ((unsigned short)35913))))));
            arr_106 [i_30] [i_30] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)32))));
            var_57 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51360))));
        }
        for (long long int i_32 = 0; i_32 < 16; i_32 += 4) 
        {
            arr_109 [i_32] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_61 [i_32])) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_25 [i_30] [i_30] [i_30] [i_32] [i_32] [i_32])) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) var_6))));
            var_58 -= (~(((/* implicit */int) (!(((/* implicit */_Bool) 8968149595366921586LL))))));
            var_59 += ((/* implicit */unsigned int) var_13);
            var_60 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) % (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))));
        }
        arr_110 [i_30] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_83 [i_30] [i_30] [i_30])) ? (((/* implicit */int) (unsigned short)20217)) : (arr_83 [i_30] [i_30] [i_30])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-126)) ? (8095472279023149126LL) : (((/* implicit */long long int) -502602467)))))));
        var_61 = ((/* implicit */unsigned short) (signed char)118);
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_33 = 0; i_33 < 14; i_33 += 3) 
    {
        var_62 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) arr_91 [i_33])) : (max((((/* implicit */int) var_6)), (arr_83 [i_33] [i_33] [i_33]))))))));
        arr_113 [i_33] = ((/* implicit */short) min((((/* implicit */long long int) var_10)), (min((((/* implicit */long long int) (((-2147483647 - 1)) / (((/* implicit */int) var_11))))), (max((9144697425979905512LL), (arr_101 [i_33])))))));
    }
    var_63 += ((/* implicit */long long int) ((var_1) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)126)) : (262143)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))))));
}
