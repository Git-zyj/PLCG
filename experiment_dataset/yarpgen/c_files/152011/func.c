/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152011
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
    for (signed char i_0 = 2; i_0 < 12; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0 + 1]);
        var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_2 [i_0 - 1]))))) - ((+(var_12)))));
    }
    for (signed char i_1 = 2; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) (+(((/* implicit */int) max((arr_0 [i_1 - 2] [i_1 - 1]), (arr_0 [i_1 + 1] [i_1 + 1]))))));
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_4 [i_1] [i_1])) / (((/* implicit */int) (_Bool)1))))))) - (((unsigned long long int) var_1))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) <= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 2]))))))) : (((((/* implicit */_Bool) (short)9567)) ? (21U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32742)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (1844283663U)))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 1; i_3 < 8; i_3 += 4) 
        {
            arr_12 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) 2117478368U))));
            arr_13 [9U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_12)))) && (((/* implicit */_Bool) arr_10 [i_3 - 1] [2LL]))));
            var_21 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 2147483631)) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) var_6))))));
            /* LoopSeq 3 */
            for (unsigned int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                arr_17 [i_2] [(signed char)0] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) != (17U))))) - (arr_10 [i_4] [i_2])));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        {
                            arr_23 [i_5] = ((/* implicit */short) ((arr_16 [i_3 - 1] [i_3 + 2] [i_3 + 3]) & (arr_15 [(unsigned short)1] [i_3] [(unsigned short)1])));
                            var_22 = ((/* implicit */long long int) var_6);
                            arr_24 [i_5] [i_5] [i_5] [i_2] = ((((/* implicit */_Bool) arr_4 [i_3 + 3] [i_3])) ? (2167857719U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3 + 3] [i_3]))));
                        }
                    } 
                } 
                arr_25 [i_2] [i_2] [i_2] = ((/* implicit */short) (((-(19U))) & (4294967276U)));
                /* LoopSeq 1 */
                for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    var_23 = ((/* implicit */signed char) 2167857709U);
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        var_24 = ((((/* implicit */int) arr_18 [i_7] [0LL] [i_4] [i_7])) >> (((((/* implicit */int) var_0)) - (31680))));
                        var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
                    }
                    arr_32 [i_7] = ((/* implicit */unsigned short) var_5);
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned int) arr_20 [i_4] [i_4]);
                        arr_35 [i_3 + 1] [i_9] [i_4] [i_7] [i_4] |= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)51975))));
                        arr_36 [i_7] [i_3] [i_7] [i_7] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 4) 
                    {
                        var_27 = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) (signed char)72)))));
                        var_28 = ((/* implicit */long long int) ((((((/* implicit */int) arr_18 [i_10] [i_7] [i_4] [i_10])) << (((2127109578U) - (2127109548U))))) << (((((/* implicit */int) var_6)) - (247)))));
                    }
                }
            }
            for (long long int i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                arr_41 [i_2] [i_3 + 3] [i_11] [i_11] = ((/* implicit */unsigned int) ((((-6672910967521655395LL) + (9223372036854775807LL))) << (((arr_15 [i_3 + 1] [i_3 - 1] [i_3 + 2]) - (3630241611350448567LL)))));
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 11; i_12 += 4) 
                {
                    for (long long int i_13 = 0; i_13 < 11; i_13 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3 - 1] [i_3] [i_3]))) / (var_4)));
                            arr_47 [i_2] [i_2] [8LL] [i_11] [i_12] [i_2] [i_13] = ((((arr_30 [i_3] [i_3 + 2] [i_3] [i_3] [(_Bool)1]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_2 [i_3 + 2])) - (30))));
                            arr_48 [i_11] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) -5385748978026967012LL)) && (((/* implicit */_Bool) var_12)))))));
                            arr_49 [i_11] [i_12] [i_11] [i_3] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_4)))) < (arr_30 [i_3 - 1] [i_3] [i_3] [i_3 - 1] [i_3])));
                        }
                    } 
                } 
                var_30 = (~(2678275246U));
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_31 -= ((/* implicit */long long int) (-(18079007542708989696ULL)));
                            var_32 = ((/* implicit */signed char) ((long long int) ((var_2) << (((((/* implicit */int) var_15)) - (30338))))));
                            arr_58 [i_2] [i_14] = (i_14 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_42 [i_2] [i_3] [i_14] [i_14] [i_14] [i_15 - 1])) + (2147483647))) << (((var_4) - (3497597189U)))))) : (((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_42 [i_2] [i_3] [i_14] [i_14] [i_14] [i_15 - 1])) - (2147483647))) + (2147483647))) << (((var_4) - (3497597189U))))));
                            arr_59 [i_14] [i_3] [(short)0] [i_14] [i_16] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) arr_57 [i_16] [i_15] [i_14] [i_3 + 1] [8LL])))));
                        }
                    } 
                } 
                arr_60 [i_3] [i_14] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) >> (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_53 [i_2] [i_2] [i_14] [i_14] [i_14] [i_14])))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 4) 
                {
                    arr_63 [i_14] [i_17] = ((/* implicit */signed char) var_13);
                    var_33 = ((/* implicit */_Bool) (((((-(134247710392932047LL))) + (9223372036854775807LL))) << (((((int) 771604939)) - (771604939)))));
                    var_34 = ((var_13) ^ (((/* implicit */unsigned long long int) (+(17U)))));
                }
            }
        }
        /* LoopNest 2 */
        for (unsigned int i_18 = 0; i_18 < 11; i_18 += 1) 
        {
            for (long long int i_19 = 0; i_19 < 11; i_19 += 1) 
            {
                {
                    arr_69 [(signed char)10] [i_18] [i_18] [i_18] = ((/* implicit */unsigned char) ((arr_56 [i_2]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (var_1)))))));
                    var_35 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (4294967276U)));
                }
            } 
        } 
        arr_70 [i_2] = ((/* implicit */unsigned long long int) (+(-134247710392932047LL)));
    }
    /* vectorizable */
    for (signed char i_20 = 0; i_20 < 11; i_20 += 4) /* same iter space */
    {
        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)23)) : (arr_20 [i_20] [i_20])))) || (var_5)));
        arr_74 [i_20] = ((/* implicit */long long int) ((unsigned short) (signed char)-72));
        /* LoopSeq 2 */
        for (unsigned int i_21 = 1; i_21 < 9; i_21 += 4) /* same iter space */
        {
            var_37 = ((arr_66 [i_21 - 1] [5U] [0]) <= (((long long int) var_14)));
            arr_77 [i_21] [i_21] [i_21] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) == (var_4))))));
            var_38 = ((/* implicit */long long int) ((2167857736U) << (((((((/* implicit */_Bool) (unsigned short)49585)) ? (((/* implicit */int) (unsigned short)15951)) : (((/* implicit */int) (signed char)54)))) - (15936)))));
        }
        for (unsigned int i_22 = 1; i_22 < 9; i_22 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_23 = 0; i_23 < 11; i_23 += 2) 
            {
                var_39 += ((/* implicit */signed char) var_12);
                var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7920)) ? (((/* implicit */long long int) 21602265U)) : (3806881569141701466LL)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)249))))) : (((var_8) ? (20U) : (((/* implicit */unsigned int) arr_65 [10LL] [10LL]))))));
                var_41 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) 1616692050U))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244)))));
                var_42 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))) ^ (-134247710392932048LL)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_20] [i_22]))));
                var_43 = ((/* implicit */int) max((var_43), (((((/* implicit */int) var_5)) << (((/* implicit */int) var_5))))));
            }
            arr_83 [i_22 + 2] [i_22] [i_22] = ((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_22 + 1] [i_22 + 2] [i_22 + 1])) ? (((((/* implicit */_Bool) (short)16097)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_22] [i_20] [i_22] [i_20]))) : (var_2))) : ((~(4624352690566200593LL)))));
            arr_84 [i_22] = ((((((/* implicit */_Bool) 9067303995453963780LL)) ? (((/* implicit */long long int) 1598578705U)) : (0LL))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1931398532841131683LL)))))));
        }
        /* LoopNest 2 */
        for (short i_24 = 0; i_24 < 11; i_24 += 4) 
        {
            for (signed char i_25 = 0; i_25 < 11; i_25 += 2) 
            {
                {
                    var_44 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)249)) << ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775795LL))) + (34LL)))));
                    var_45 = ((/* implicit */long long int) ((((/* implicit */int) arr_64 [i_24])) >> (((((/* implicit */int) (unsigned char)121)) - (118)))));
                }
            } 
        } 
        arr_89 [i_20] [i_20] = ((/* implicit */unsigned int) arr_54 [i_20] [i_20] [i_20] [8LL] [i_20] [i_20]);
    }
    /* vectorizable */
    for (signed char i_26 = 0; i_26 < 11; i_26 += 4) /* same iter space */
    {
        arr_92 [i_26] [i_26] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)223))));
        var_46 = ((/* implicit */long long int) ((var_5) ? (((/* implicit */int) (unsigned short)63625)) : (((/* implicit */int) ((arr_53 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26]) != (((/* implicit */long long int) 0U)))))));
    }
}
