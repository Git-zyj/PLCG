/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178717
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
    var_10 = ((/* implicit */unsigned char) var_0);
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) 3618453908U))));
    /* LoopSeq 2 */
    for (long long int i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        var_12 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) 3618453908U))))), (-779996447)))) ? (var_1) : (((/* implicit */long long int) max((((/* implicit */int) arr_3 [i_0 - 1] [i_0])), (1768720896))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_10 [i_0 - 3] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) var_2);
                    arr_11 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) arr_2 [19U]);
                    var_13 = ((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2]);
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        /* LoopSeq 4 */
        for (long long int i_4 = 3; i_4 < 14; i_4 += 4) 
        {
            arr_17 [i_4] = ((/* implicit */long long int) ((var_5) ? (((((/* implicit */_Bool) -1022512267)) ? (((/* implicit */unsigned int) 810565853)) : (676513388U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3] [i_4])))));
            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) 6928786724865777616ULL)) ? (((/* implicit */unsigned long long int) -810565854)) : ((~((~(arr_15 [i_4] [i_4])))))));
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 676513407U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13208600864546563621ULL)) ? (956692213099615773LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-7)))))) : ((~(arr_15 [13LL] [13LL])))));
            arr_18 [i_4] = ((/* implicit */unsigned int) (short)0);
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                var_16 = ((/* implicit */long long int) 3130533482U);
                arr_21 [i_4] [i_4] [i_4] [i_5 - 1] = ((/* implicit */unsigned long long int) var_7);
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(-1692486178)))), (1288813645U)))) ? (min((((/* implicit */unsigned int) (-2147483647 - 1))), (3618453908U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_15 [i_4 + 1] [i_4 + 1]))))))))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 2; i_6 < 13; i_6 += 4) 
                {
                    for (short i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) arr_14 [i_6] [i_3]);
                            arr_26 [i_3] [i_4] [i_4 - 3] [i_5] [i_5] [i_6 - 1] [i_7] = ((/* implicit */unsigned int) (signed char)123);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_8 = 1; i_8 < 14; i_8 += 4) 
                {
                    arr_30 [i_4] [i_4] [i_5] [3ULL] = ((/* implicit */long long int) arr_7 [i_3] [i_3] [i_3]);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_3] [i_4 - 2])) ? (((/* implicit */int) arr_33 [(unsigned short)6] [(unsigned short)6])) : ((~(((/* implicit */int) arr_4 [i_3] [(signed char)24] [0ULL])))))))));
                        var_20 = ((/* implicit */long long int) (-(-810565853)));
                    }
                    for (long long int i_10 = 0; i_10 < 15; i_10 += 1) 
                    {
                        arr_37 [i_10] [i_8] [i_4] [i_4] [i_4] [i_3] [i_3] = ((/* implicit */_Bool) arr_1 [i_4]);
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_10])) ? (((/* implicit */int) (signed char)92)) : (-810565854)));
                        arr_38 [i_3] [i_4] [i_5] [i_8 - 1] [i_4] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 676513387U)) ? (((/* implicit */int) arr_31 [i_4 - 3] [i_5 - 1] [i_8] [i_8] [i_8 + 1])) : (810565827)))));
                        var_22 = ((/* implicit */_Bool) 9002804076148965200LL);
                    }
                }
                for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    arr_42 [i_3] [i_4] [i_5] [i_11] = ((/* implicit */unsigned long long int) (short)-12752);
                    arr_43 [i_3] [i_3] [10ULL] &= ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3] [i_5])) ? (((/* implicit */int) (short)12752)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) arr_34 [i_3] [i_3] [i_3] [i_4] [i_5] [i_11])) ? (((/* implicit */unsigned long long int) -810565854)) : (var_0))) : (((/* implicit */unsigned long long int) min((arr_27 [i_3] [i_4] [i_11]), (((/* implicit */long long int) (unsigned char)176)))))))));
                }
            }
            for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) 
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_13 = 3; i_13 < 13; i_13 += 1) 
                {
                    arr_52 [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */long long int) 0)) : (-7999447128759854761LL)));
                    arr_53 [i_3] [i_4] [i_12] [i_4] = ((/* implicit */long long int) arr_1 [i_4]);
                    arr_54 [i_3] [i_4] [i_12] [i_4] &= ((/* implicit */_Bool) 294517473U);
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12416)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-966)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)65535))))) : (((((/* implicit */_Bool) 676513387U)) ? (3377292373U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
                        arr_59 [i_4] [i_14] [i_12] [i_3] [i_4] = ((/* implicit */_Bool) 676513388U);
                    }
                    for (unsigned long long int i_16 = 1; i_16 < 12; i_16 += 1) 
                    {
                        var_24 = ((/* implicit */int) arr_32 [i_16] [i_14] [i_12] [i_4 - 2] [i_3]);
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_40 [i_12] [i_12] [i_12] [i_12]))));
                        arr_63 [i_3] [i_3] [i_4] [i_12] [i_14] [i_16] = ((/* implicit */unsigned long long int) arr_24 [i_3] [i_3] [(signed char)4] [i_3] [i_4]);
                    }
                    var_26 = ((/* implicit */int) arr_39 [(signed char)1] [i_12] [i_12] [i_4] [(short)5]);
                    arr_64 [i_14] [i_4] [i_4] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (~(3712764845U)))) ? ((-(var_1))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) (short)32767))))))), (((/* implicit */long long int) arr_3 [i_3] [i_4 - 2]))));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 8117687484793088019LL)), (((((/* implicit */_Bool) 676513387U)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_4 - 1] [i_4 - 3] [i_4 + 1] [i_17] [i_17])))))));
                    arr_69 [i_3] [i_4 - 3] [i_4 - 1] [i_4] [i_17] [i_4 - 1] = ((/* implicit */unsigned char) (short)-1683);
                }
                for (unsigned short i_18 = 0; i_18 < 15; i_18 += 4) 
                {
                    var_28 = var_1;
                    var_29 = (short)-12609;
                }
                var_30 = ((/* implicit */short) -4586368468196386742LL);
                /* LoopSeq 4 */
                for (long long int i_19 = 0; i_19 < 15; i_19 += 2) 
                {
                    var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) min((1808629707U), (((/* implicit */unsigned int) (unsigned short)19116)))))));
                    var_32 &= ((/* implicit */_Bool) 8791740656981211241ULL);
                    arr_76 [i_4] [i_4] = ((/* implicit */short) -1848577033);
                }
                /* vectorizable */
                for (unsigned long long int i_20 = 0; i_20 < 15; i_20 += 1) 
                {
                    var_33 ^= ((/* implicit */_Bool) 4337509103107832297ULL);
                    var_34 = ((/* implicit */long long int) arr_4 [i_3] [i_4] [i_20]);
                }
                for (long long int i_21 = 0; i_21 < 15; i_21 += 4) 
                {
                    /* LoopSeq 3 */
                    for (short i_22 = 3; i_22 < 13; i_22 += 1) 
                    {
                        var_35 = ((/* implicit */signed char) var_7);
                        var_36 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */unsigned int) -2147483633)), (900536945U))) : (((/* implicit */unsigned int) arr_86 [i_3] [i_3] [i_3] [i_21] [i_3]))))));
                        arr_87 [i_4] [i_4] [i_12] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) -4586368468196386742LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)12608))) : ((+(3618453877U)))));
                        var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) arr_48 [i_3] [1ULL] [i_3] [i_3]))));
                    }
                    for (unsigned int i_23 = 0; i_23 < 15; i_23 += 4) 
                    {
                        arr_90 [i_3] [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_21] [i_4] [i_23] = arr_27 [i_21] [i_4] [i_4];
                        var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 676513418U)) : (var_0)))))) ? ((+(max((-1456345261961311437LL), (((/* implicit */long long int) (short)-12608)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3618453908U)) ? (7418379363567540880ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_23])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)12638)) : (((/* implicit */int) arr_61 [i_3] [i_3] [i_4] [i_4] [i_12] [i_3] [i_23]))))) : (((((/* implicit */_Bool) var_8)) ? (arr_27 [i_3] [i_4] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_23]))))))))))));
                        var_39 = ((/* implicit */long long int) (~(((arr_33 [i_3] [i_23]) ? (max((((/* implicit */unsigned int) arr_48 [i_4] [i_12] [14LL] [(signed char)6])), (676513388U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))));
                    }
                    for (signed char i_24 = 0; i_24 < 15; i_24 += 4) 
                    {
                        arr_93 [i_4] = ((/* implicit */short) var_7);
                        var_40 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_74 [i_4 - 1] [i_4 - 1] [i_4 - 3])))) ? (min((((/* implicit */long long int) 1070003303)), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_74 [i_4 + 1] [i_4] [i_4 + 1]))))))));
                        arr_94 [i_4] [i_24] [i_4] [i_12] [i_4 - 2] [i_4] = ((/* implicit */long long int) (unsigned char)88);
                        arr_95 [i_3] [i_4] [i_4 + 1] [i_12] [i_21] [i_24] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 3618453908U)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)27)))))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(short)9] [(short)9] [(short)9])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (676513379U)))) : (((arr_8 [i_4] [i_12] [i_4] [i_24]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24452))) : (536870880ULL)))))));
                    }
                    /* LoopSeq 2 */
                    for (short i_25 = 0; i_25 < 15; i_25 += 4) /* same iter space */
                    {
                        var_41 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (arr_24 [i_3] [i_4 - 2] [i_12] [i_21] [i_4])))) : (((((/* implicit */_Bool) arr_44 [i_3] [i_4 - 1] [i_12])) ? (((/* implicit */long long int) 3618453907U)) : (0LL))))), (arr_45 [i_4] [i_4] [i_4])));
                        var_42 = ((/* implicit */short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_25 [i_3] [i_4 - 3] [i_4] [i_4 - 2] [i_4 + 1]))))), (((((/* implicit */_Bool) arr_56 [i_4] [i_4 - 2] [i_4] [i_4 + 1] [i_4 - 3])) ? (arr_56 [i_4] [i_4 - 3] [i_4 - 1] [i_4 - 2] [i_4 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)156)))))));
                    }
                    for (short i_26 = 0; i_26 < 15; i_26 += 4) /* same iter space */
                    {
                        var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) var_1))));
                        var_44 = ((/* implicit */short) (unsigned short)4173);
                        arr_100 [i_3] [i_4] [i_12] [i_3] [i_4] = ((/* implicit */short) min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_3] [i_3] [i_3] [i_3]))) : (0LL)))) ? (max((var_0), (((/* implicit */unsigned long long int) arr_34 [i_3] [i_4] [i_4] [i_21] [i_21] [i_26])))) : (((/* implicit */unsigned long long int) (-(-5480350334355753359LL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_3] [i_12]))) : (var_3)))) ? (-6335888321820721392LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1))))))))))));
                    }
                }
                for (unsigned int i_27 = 2; i_27 < 13; i_27 += 1) 
                {
                    var_45 -= (!(((/* implicit */_Bool) 8685241653897107266ULL)));
                    arr_103 [i_3] [i_12] [i_12] [i_12] &= min((((/* implicit */int) (unsigned char)155)), ((-((-(((/* implicit */int) var_5)))))));
                    arr_104 [i_4] = ((/* implicit */unsigned int) (-((~((((_Bool)1) ? (((/* implicit */int) (unsigned short)44177)) : (((/* implicit */int) (unsigned char)99))))))));
                }
            }
        }
        /* vectorizable */
        for (long long int i_28 = 0; i_28 < 15; i_28 += 1) /* same iter space */
        {
            var_46 = ((/* implicit */short) min((var_46), (((/* implicit */short) (unsigned char)99))));
            arr_108 [i_3] = ((/* implicit */unsigned int) (_Bool)1);
        }
        for (long long int i_29 = 0; i_29 < 15; i_29 += 1) /* same iter space */
        {
            var_47 -= ((/* implicit */short) 12923854U);
            arr_111 [i_29] = ((/* implicit */short) min((min(((-(((/* implicit */int) (unsigned char)99)))), (((/* implicit */int) (unsigned short)32767)))), (((/* implicit */int) (short)12606))));
        }
        for (long long int i_30 = 0; i_30 < 15; i_30 += 1) /* same iter space */
        {
            var_48 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
            arr_115 [(_Bool)1] [i_30] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 7183341041479414913ULL)) ? (407680299029948402LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (max((-7820967639547340239LL), (((/* implicit */long long int) (unsigned short)30492)))) : ((~((~(6382161894520019355LL)))))));
            arr_116 [i_30] [i_3] = ((/* implicit */short) (-((-(arr_70 [i_3] [i_30] [i_30] [i_30] [i_3])))));
        }
        arr_117 [i_3] = ((/* implicit */long long int) (short)32767);
    }
}
