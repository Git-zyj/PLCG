/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173732
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
    var_20 = ((/* implicit */signed char) var_12);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (unsigned char i_3 = 1; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-22)) + (2147483647))) << (((((/* implicit */int) (signed char)85)) - (85)))))) ? ((~(4870323071495398100LL))) : ((~(-3936255811783582239LL))))), ((((!(((/* implicit */_Bool) 6900090924441661169LL)))) ? (3936255811783582242LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)28)))))));
                        var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(arr_4 [i_0] [(unsigned char)10] [i_0])))))) ? (((/* implicit */long long int) (-((-(((/* implicit */int) (unsigned char)55))))))) : (((long long int) min((((/* implicit */unsigned char) var_0)), (arr_3 [i_2]))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 3; i_4 < 12; i_4 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned char) (-(((min((-3936255811783582239LL), (-3936255811783582243LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0])))))));
                            arr_14 [i_0] = arr_6 [i_0] [i_1];
                            var_24 ^= ((/* implicit */unsigned char) ((long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_12 [i_0] [i_1 + 3] [i_2] [i_3 + 1] [i_4 - 3])) : (((/* implicit */int) arr_8 [i_4 + 1] [i_3 - 1] [i_2] [i_1] [i_0]))))), ((-(3936255811783582238LL))))));
                            arr_15 [i_0] [i_0] [i_2] [i_3 - 1] [i_3 + 2] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((signed char) (unsigned char)250)))) % (((((/* implicit */int) (!(((/* implicit */_Bool) 9060275859636193706LL))))) ^ (((/* implicit */int) (unsigned char)1))))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
                        {
                            var_25 -= ((/* implicit */signed char) max((((((/* implicit */int) arr_7 [i_1 + 2] [i_1] [i_1 + 2])) << (((((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 3] [i_1 + 2])) - (110))))), (((/* implicit */int) var_7))));
                            arr_20 [i_0] [i_1] [i_2] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (signed char)-82))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_7 = 2; i_7 < 10; i_7 += 2) 
            {
                arr_26 [i_7] [i_6] [i_7] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_8 [i_7 + 4] [i_7] [i_7] [i_7 - 1] [i_7 - 1])), (((((((/* implicit */int) (signed char)-80)) + (2147483647))) << (((((((/* implicit */int) var_18)) + (52))) - (4))))))))));
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_4 [i_7 + 1] [i_7 - 1] [i_7 + 3])))) ? (min((((/* implicit */long long int) (signed char)-33)), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_4 [i_0] [i_0] [i_7]))))) : (-7060077992690759747LL)));
                arr_27 [i_0] [i_0] [i_7] = min((((long long int) max((((/* implicit */unsigned char) arr_18 [i_0])), (arr_19 [i_0] [i_0] [i_0] [i_7] [i_0])))), (((/* implicit */long long int) max((((/* implicit */int) var_16)), ((+(((/* implicit */int) (signed char)-93))))))));
                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((arr_17 [i_7 + 3] [i_0] [i_0] [i_6] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_6] [i_6] [i_7] [i_0])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min(((signed char)-66), (arr_25 [i_0] [i_0] [i_7 - 1] [i_0]))))))) : ((~(((/* implicit */int) arr_11 [i_7] [i_7 - 1] [10LL] [i_7])))))))));
                arr_28 [i_0] [i_6] [i_0] [i_6] = ((/* implicit */unsigned char) ((max((arr_4 [i_0] [i_6] [i_7 - 1]), (arr_4 [i_0] [1LL] [i_7 + 2]))) < (((((/* implicit */_Bool) arr_4 [i_0] [i_6] [i_7 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)55))) : (arr_4 [i_0] [i_6] [i_7 - 2])))));
            }
            for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                arr_31 [i_0] [i_0] [i_6] [i_8] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_23 [i_0] [i_0])))) >= ((~(((/* implicit */int) arr_23 [i_0] [i_0]))))));
                var_28 -= ((/* implicit */signed char) (+(((4519929535387798921LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)217)))))));
                var_29 = ((/* implicit */signed char) min((((/* implicit */long long int) arr_23 [i_0] [i_0])), (max((((long long int) (signed char)100)), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_0] [9LL] [i_0] [i_0])))))))));
            }
            var_30 *= arr_8 [i_6] [i_6] [i_6] [i_0] [i_0];
        }
        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 4) 
        {
            arr_35 [i_0] = ((/* implicit */signed char) max((min(((-(var_14))), (((/* implicit */long long int) ((signed char) (signed char)120))))), (((/* implicit */long long int) min(((signed char)-81), (arr_0 [i_0] [i_0]))))));
            arr_36 [i_0] [i_0] [i_0] = ((long long int) (-(((/* implicit */int) arr_3 [i_0]))));
        }
        /* vectorizable */
        for (unsigned char i_10 = 1; i_10 < 12; i_10 += 1) 
        {
            arr_40 [5LL] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_10] [i_10 - 1])) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_10 + 1] [(unsigned char)2]))));
            arr_41 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) arr_23 [i_10 + 2] [i_0]))));
        }
        arr_42 [i_0] = ((/* implicit */signed char) max((-7159614523639855846LL), (3936255811783582242LL)));
    }
    for (long long int i_11 = 0; i_11 < 24; i_11 += 3) 
    {
        var_31 = (((~(var_8))) << (((((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)32))) : (0LL))) - (32LL))));
        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_46 [i_11] [i_11])) && (((/* implicit */_Bool) (signed char)-32))))), ((+(3LL))))))));
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 24; i_12 += 3) 
        {
            for (long long int i_13 = 0; i_13 < 24; i_13 += 2) 
            {
                {
                    var_33 = ((/* implicit */long long int) min((max((((/* implicit */signed char) ((arr_50 [(unsigned char)7] [i_12] [(unsigned char)7] [i_12]) != (arr_50 [i_11] [i_11] [i_11] [i_11])))), (arr_44 [i_11] [i_11]))), (arr_45 [i_12])));
                    var_34 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(-9060275859636193706LL)))) ? (-9060275859636193707LL) : (((/* implicit */long long int) ((/* implicit */int) var_16)))));
                    var_35 ^= ((/* implicit */signed char) min((min(((-(var_1))), (((/* implicit */long long int) (unsigned char)27)))), (((/* implicit */long long int) ((signed char) 0LL)))));
                    arr_51 [i_11] [i_11] [i_13] [i_13] = ((/* implicit */unsigned char) (((-(((/* implicit */int) var_18)))) | (((/* implicit */int) ((unsigned char) (signed char)116)))));
                }
            } 
        } 
        arr_52 [i_11] = ((/* implicit */unsigned char) 15LL);
        var_36 += (unsigned char)3;
    }
    for (signed char i_14 = 0; i_14 < 24; i_14 += 1) 
    {
        var_37 -= ((/* implicit */long long int) (~((~(((/* implicit */int) arr_49 [i_14] [i_14] [i_14] [i_14]))))));
        /* LoopNest 3 */
        for (signed char i_15 = 0; i_15 < 24; i_15 += 2) 
        {
            for (signed char i_16 = 0; i_16 < 24; i_16 += 4) 
            {
                for (signed char i_17 = 2; i_17 < 21; i_17 += 3) 
                {
                    {
                        var_38 = ((/* implicit */long long int) min((((((/* implicit */int) arr_43 [i_17 + 3])) - (((/* implicit */int) arr_43 [i_17 - 1])))), (((/* implicit */int) ((signed char) arr_43 [i_17 - 2])))));
                        var_39 = ((/* implicit */long long int) arr_45 [i_14]);
                        var_40 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_49 [i_16] [i_15] [i_17 + 1] [i_17]))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (signed char i_18 = 1; i_18 < 10; i_18 += 3) 
    {
        for (signed char i_19 = 0; i_19 < 11; i_19 += 2) 
        {
            {
                var_41 ^= ((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) arr_8 [(unsigned char)4] [i_18 - 1] [i_19] [i_19] [i_19])))));
                /* LoopSeq 2 */
                for (signed char i_20 = 3; i_20 < 9; i_20 += 3) 
                {
                    arr_76 [i_18] = ((signed char) var_10);
                    /* LoopSeq 2 */
                    for (long long int i_21 = 0; i_21 < 11; i_21 += 3) /* same iter space */
                    {
                        arr_80 [i_18] [i_19] [i_20] [i_18] [i_19] [i_18] = ((/* implicit */long long int) (signed char)-81);
                        var_42 = ((/* implicit */unsigned char) (~(-12LL)));
                        arr_81 [i_21] [i_21] [i_18] [i_21] [i_21] [i_21] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(4291227872902215710LL))))));
                    }
                    /* vectorizable */
                    for (long long int i_22 = 0; i_22 < 11; i_22 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (long long int i_23 = 0; i_23 < 11; i_23 += 4) /* same iter space */
                        {
                            var_43 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_67 [i_23]))));
                            arr_88 [i_22] [i_18] [i_18] [i_18 + 1] = ((/* implicit */signed char) ((arr_38 [i_18 - 1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6)))));
                            var_44 = ((/* implicit */unsigned char) -9223372036854775792LL);
                        }
                        for (long long int i_24 = 0; i_24 < 11; i_24 += 4) /* same iter space */
                        {
                            var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_50 [i_18] [i_18] [i_19] [i_20 - 2])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_82 [i_18] [i_18 + 1] [(signed char)1] [i_20 - 2]))));
                            var_46 = ((/* implicit */long long int) ((unsigned char) arr_9 [i_18] [i_20 + 2] [i_18] [i_20]));
                        }
                        for (signed char i_25 = 0; i_25 < 11; i_25 += 3) 
                        {
                            var_47 += ((/* implicit */long long int) (-((~(((/* implicit */int) arr_25 [i_18] [i_19] [i_22] [i_25]))))));
                            var_48 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) 32767LL)))));
                            var_49 = ((unsigned char) arr_86 [i_18 + 1] [i_20 + 1] [i_20 - 1]);
                            var_50 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_18])) ^ (((/* implicit */int) arr_92 [i_18] [i_18 - 1]))));
                        }
                        var_51 = 16LL;
                        var_52 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_18 - 1])) ? (((/* implicit */long long int) (+(((/* implicit */int) var_16))))) : (-4291227872902215711LL)));
                        arr_96 [i_18] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)51))));
                        arr_97 [i_18] [i_19] [i_18] = var_3;
                    }
                    arr_98 [i_18] [i_19] [8LL] = ((/* implicit */signed char) (unsigned char)217);
                }
                for (long long int i_26 = 1; i_26 < 8; i_26 += 1) 
                {
                    var_53 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) min((arr_6 [i_18] [i_18]), (((/* implicit */unsigned char) (signed char)-74)))))))), ((+(((/* implicit */int) (signed char)127))))));
                    /* LoopNest 2 */
                    for (long long int i_27 = 0; i_27 < 11; i_27 += 3) 
                    {
                        for (signed char i_28 = 0; i_28 < 11; i_28 += 2) 
                        {
                            {
                                var_54 = (((!(((/* implicit */_Bool) arr_47 [i_26 + 2] [i_26 + 2] [i_26 + 3])))) ? (max((arr_47 [i_26 + 1] [i_26 + 2] [i_26 + 1]), (arr_47 [i_26 + 1] [i_26 - 1] [i_26 + 1]))) : ((-(arr_47 [i_26 - 1] [i_26 + 3] [i_26 + 2]))));
                                var_55 = 1924145348608LL;
                            }
                        } 
                    } 
                    var_56 = ((/* implicit */long long int) max((var_56), ((~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) & (7161956535255284493LL)))))));
                }
                var_57 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)7))))) ? (3936255811783582239LL) : (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_18] [i_18] [i_19] [i_19])))))) ? (((/* implicit */int) var_5)) : (min(((+(((/* implicit */int) (signed char)64)))), (((/* implicit */int) min((arr_61 [i_18] [i_18] [i_18]), (var_5))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_29 = 0; i_29 < 11; i_29 += 4) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_30 = 0; i_30 < 11; i_30 += 3) 
                    {
                        arr_114 [i_18] [i_29] [i_29] = ((/* implicit */signed char) (~(3936255811783582238LL)));
                        arr_115 [i_18] [i_18] = ((/* implicit */long long int) arr_75 [i_18] [i_19] [i_29]);
                        var_58 = ((/* implicit */long long int) min((var_58), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_18 - 1] [i_18] [i_18 - 1] [i_18 + 1] [i_18 - 1] [i_30])))))));
                        var_59 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_91 [i_29] [i_19] [i_29] [i_30] [i_30])) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) arr_108 [i_18] [i_18] [i_18 + 1] [i_18 - 1]))));
                    }
                    var_60 = (~(arr_48 [i_18 - 1] [i_18 + 1] [i_18 + 1]));
                }
                /* vectorizable */
                for (unsigned char i_31 = 0; i_31 < 11; i_31 += 2) 
                {
                    var_61 &= ((/* implicit */signed char) (~(((/* implicit */int) arr_19 [i_18 - 1] [i_18 + 1] [i_19] [i_19] [i_31]))));
                    var_62 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_117 [i_18 - 1] [i_18 - 1])) ? (((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_14))) : (arr_47 [i_18] [i_18 + 1] [i_18 - 1])));
                }
                for (unsigned char i_32 = 3; i_32 < 8; i_32 += 3) 
                {
                    var_63 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_64 [i_18] [i_19])) : (((/* implicit */int) var_7)))) | ((~(((/* implicit */int) var_18)))))), (((/* implicit */int) arr_30 [i_32 - 3] [i_19] [i_18] [i_18]))));
                    var_64 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)0))))) / ((+(-1535481884433904710LL)))));
                    var_65 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_59 [i_18 - 1] [i_18] [i_32 - 2]), (arr_59 [i_18 + 1] [i_18] [i_32 - 3])))) ? (((/* implicit */int) ((unsigned char) arr_59 [i_18 - 1] [i_18] [i_32 - 1]))) : (((((/* implicit */int) arr_59 [i_18 + 1] [i_18] [i_32 + 1])) / (((/* implicit */int) var_10))))));
                    arr_122 [i_18] [i_18] [i_18] [i_18 - 1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_74 [i_18]))) ^ (((((/* implicit */_Bool) arr_1 [i_18 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_79 [i_18] [i_18] [i_18 + 1])) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (unsigned char)211))))) : ((~(var_1)))))));
                    arr_123 [i_19] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_0))) * (max((((/* implicit */long long int) arr_8 [i_18 - 1] [i_19] [i_18 + 1] [i_32 - 3] [i_32 - 2])), (min((((/* implicit */long long int) (signed char)25)), (1152921504606814208LL)))))));
                }
                var_66 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (arr_10 [i_19] [i_18] [i_18 - 1] [i_18] [i_18 - 1] [i_18 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_19))))))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_100 [i_18] [i_18]), ((signed char)-117))))) < (min((var_6), (((/* implicit */long long int) var_9)))))))));
            }
        } 
    } 
}
