/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141590
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
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)3), (arr_2 [i_0])))) ? (-1001519452) : (((/* implicit */int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)50)) : (arr_8 [i_0] [i_1] [i_0]))) + (((1001519451) << (((((/* implicit */int) (unsigned char)117)) - (117)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (unsigned char)45))));
                                var_14 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1084743522)) ? (arr_13 [i_3] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_0] [0] [i_3] [i_4])))))) | (var_8))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)42411)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)165))) : (-679432789992963517LL))))));
                                var_15 = ((/* implicit */int) (unsigned char)6);
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) -1784228591)) ? (0ULL) : (18446744073709551615ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [4LL] [i_0])))));
                    var_16 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) & (((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)198))) & (1916272288009166612LL))) << (((((((/* implicit */_Bool) (unsigned char)101)) ? (arr_13 [i_0] [0LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned char)4]))))) + (4439168319449499909LL)))))));
                    arr_18 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned long long int) -1001519452);
                }
            } 
        } 
        var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_5 [i_0])) ? (-1001519452) : (((/* implicit */int) arr_5 [i_0])))) / (((/* implicit */int) arr_2 [i_0]))));
    }
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            var_18 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1562258852))));
            var_19 = ((/* implicit */int) arr_6 [i_5] [i_5]);
        }
        /* LoopSeq 3 */
        for (int i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            var_20 = ((/* implicit */unsigned char) min((var_20), (arr_24 [(unsigned short)6] [i_7] [8])));
            var_21 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [8])) ? (((/* implicit */int) arr_21 [0])) : (((/* implicit */int) arr_21 [(unsigned char)8]))))) ? ((+(((/* implicit */int) arr_2 [(unsigned char)6])))) : ((-(((/* implicit */int) arr_2 [(unsigned short)4]))))));
            arr_26 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)94)), (-412076553)));
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)50)) < (((/* implicit */int) (unsigned short)42411))))) : ((~(((/* implicit */int) arr_25 [i_5]))))));
        }
        for (unsigned char i_8 = 2; i_8 < 8; i_8 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) (unsigned short)4702);
            var_24 = ((/* implicit */unsigned long long int) var_10);
            /* LoopSeq 2 */
            for (unsigned long long int i_9 = 2; i_9 < 9; i_9 += 4) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_23 [i_8 + 2] [i_5])) < (((/* implicit */int) arr_23 [i_8 - 1] [i_5])))))));
                var_26 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned char)167))))));
            }
            for (unsigned long long int i_10 = 2; i_10 < 9; i_10 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_11 = 1; i_11 < 9; i_11 += 3) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (long long int i_12 = 2; i_12 < 6; i_12 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) (unsigned char)0);
                        var_28 = ((/* implicit */long long int) max((((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1186))) >= (arr_38 [(unsigned short)3] [i_5] [i_10 - 1])))), (((unsigned char) (unsigned char)255))));
                    }
                    for (long long int i_13 = 1; i_13 < 8; i_13 += 4) 
                    {
                        var_29 = ((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)21)))))));
                        var_30 = ((/* implicit */unsigned short) var_0);
                    }
                    for (unsigned char i_14 = 0; i_14 < 10; i_14 += 4) /* same iter space */
                    {
                        arr_46 [i_5] = ((/* implicit */int) var_10);
                        var_31 = (i_5 % 2 == 0) ? (((/* implicit */unsigned char) ((((var_2) + (9223372036854775807LL))) << (((arr_11 [i_5] [i_8 + 2] [i_8 - 2] [i_5] [i_5] [i_8]) - (10541074326143683348ULL)))))) : (((/* implicit */unsigned char) ((((var_2) + (9223372036854775807LL))) << (((((arr_11 [i_5] [i_8 + 2] [i_8 - 2] [i_5] [i_5] [i_8]) - (10541074326143683348ULL))) - (3901618650843264268ULL))))));
                    }
                    for (unsigned char i_15 = 0; i_15 < 10; i_15 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) 264027132))));
                        var_33 *= arr_28 [i_10];
                    }
                    /* LoopSeq 4 */
                    for (unsigned long long int i_16 = 1; i_16 < 9; i_16 += 3) 
                    {
                        var_34 = ((/* implicit */long long int) ((arr_6 [i_5] [i_5]) == (((/* implicit */unsigned long long int) 4458748526065392947LL))));
                        var_35 = ((/* implicit */unsigned char) var_6);
                    }
                    /* vectorizable */
                    for (unsigned char i_17 = 1; i_17 < 8; i_17 += 4) /* same iter space */
                    {
                        var_36 = ((((/* implicit */_Bool) arr_39 [i_5] [i_10 - 2] [i_11 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_37 [i_8 + 1] [i_10 - 1] [i_11] [i_5] [2LL] [i_17 + 2])));
                        var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) var_4))))))));
                    }
                    for (unsigned char i_18 = 1; i_18 < 8; i_18 += 4) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (var_6)));
                        var_39 = arr_14 [i_10] [i_5];
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65528))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_5]))) : (((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */long long int) ((/* implicit */int) arr_51 [i_5]))) : (6423840431371572740LL)))));
                        arr_57 [i_5] [i_8] [i_10] = ((/* implicit */unsigned char) 1953397887);
                    }
                    for (unsigned char i_19 = 1; i_19 < 8; i_19 += 4) /* same iter space */
                    {
                        arr_61 [i_5] [i_8] [i_10] [i_5] [(unsigned short)6] [(unsigned short)6] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_59 [i_5] [i_5] [i_5])) ? (455432973490096418ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-1437307534) : (((/* implicit */int) (unsigned char)110)))))))));
                        arr_62 [i_5] [(unsigned short)7] [i_5] [i_5] [(unsigned short)7] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_31 [i_5] [i_8] [i_8]);
                    }
                }
                for (unsigned long long int i_20 = 1; i_20 < 9; i_20 += 3) /* same iter space */
                {
                    arr_66 [i_5] [i_20] = ((/* implicit */unsigned char) ((3773498585838735958LL) != (723467259974821265LL)));
                    var_41 |= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_50 [i_10] [i_8] [(unsigned char)4] [i_8] [i_8 + 2] [i_5] [i_10]))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)208)))))));
                }
                for (unsigned long long int i_21 = 1; i_21 < 9; i_21 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_22 = 0; i_22 < 10; i_22 += 3) /* same iter space */
                    {
                        var_42 = ((unsigned char) var_4);
                        var_43 *= ((/* implicit */unsigned char) (+(1158883428821104800LL)));
                        var_44 = var_3;
                    }
                    for (unsigned short i_23 = 0; i_23 < 10; i_23 += 3) /* same iter space */
                    {
                        arr_76 [i_5] [i_5] [i_10 + 1] = (unsigned char)117;
                        var_45 = ((((/* implicit */_Bool) -6423840431371572744LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)174))) : (18446744073709551615ULL));
                        var_46 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_60 [i_21 + 1] [i_21 + 1] [i_10 - 2] [i_10] [i_8 + 2] [i_8 - 2] [i_8 + 1])) ? (((/* implicit */int) ((var_7) > (((/* implicit */int) (unsigned char)50))))) : (((/* implicit */int) (unsigned char)137)))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7831))) ^ (6423840431371572740LL)))))))));
                    }
                    var_47 = ((/* implicit */int) 2939975604902977026LL);
                }
                var_48 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(arr_69 [i_5])))) < (arr_55 [i_8] [7LL] [i_8 + 2] [4LL] [i_8] [i_5])))), (((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)127)) / (((/* implicit */int) (unsigned char)155))))) / (((((/* implicit */_Bool) 4763780543980429093LL)) ? (var_5) : (1158883428821104800LL)))))));
                var_49 = ((((arr_38 [(unsigned char)3] [i_5] [(unsigned char)3]) ^ (arr_38 [i_5] [i_5] [i_10]))) ^ (((((/* implicit */_Bool) var_9)) ? (arr_38 [i_5] [i_5] [i_10 - 1]) : (((/* implicit */long long int) var_7)))));
                var_50 = ((((/* implicit */_Bool) ((((var_9) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_36 [i_5])) != (((/* implicit */int) arr_0 [i_5]))))))))) ? (((((/* implicit */_Bool) 3773498585838735972LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-1158883428821104801LL)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_5] [i_5] [i_8 + 1] [1LL] [i_10]))) : (4331938462286314801ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -6566815849540354115LL)) && (((/* implicit */_Bool) (unsigned short)20685)))))));
            }
        }
        for (long long int i_24 = 0; i_24 < 10; i_24 += 4) 
        {
            var_51 = ((/* implicit */int) (unsigned short)9956);
            var_52 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -717826794)) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)26))))) != (((/* implicit */int) (unsigned char)237)))))));
            arr_79 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_5);
            var_53 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)8)) || (((/* implicit */_Bool) var_10))));
        }
    }
    var_54 = ((/* implicit */int) (((+(6032518882766215693LL))) / (-5378514974994775930LL)));
    var_55 = var_9;
}
