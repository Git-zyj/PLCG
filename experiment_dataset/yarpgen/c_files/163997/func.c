/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163997
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
    var_10 = ((((/* implicit */_Bool) (((-(-3219503423789397131LL))) + (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) var_2)) <= (var_6)))) >> ((((~(((/* implicit */int) (signed char)-99)))) - (91)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] &= ((/* implicit */int) ((((/* implicit */long long int) 2944705747U)) + (7361399664619355904LL)));
            arr_7 [(_Bool)1] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) arr_3 [i_1])) + ((((_Bool)0) ? (((/* implicit */long long int) 3723473247U)) : (3219503423789397124LL)))));
            var_11 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (arr_0 [i_0])));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_12 += ((/* implicit */_Bool) (+(arr_8 [i_2])));
            /* LoopNest 2 */
            for (long long int i_3 = 3; i_3 < 15; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    {
                        var_13 = ((/* implicit */long long int) (~(-1793259109)));
                        /* LoopSeq 4 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_18 [i_0] [7LL] [i_3 - 3] [i_4] [i_5] = 571494048U;
                            var_14 = ((/* implicit */_Bool) arr_10 [i_3] [i_3] [(short)0]);
                            var_15 ^= ((/* implicit */_Bool) arr_10 [i_0] [i_0] [(_Bool)1]);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0]);
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_14 [i_4] [i_3] [16U] [i_0]) : (arr_5 [i_3])))) ? (((/* implicit */int) arr_19 [i_0] [i_2] [i_6] [i_3 - 3] [i_6])) : (((/* implicit */int) arr_10 [9LL] [i_2] [i_3 + 3]))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_18 |= ((/* implicit */int) arr_11 [(signed char)15] [(signed char)15]);
                            arr_23 [i_3] [i_3 + 2] [i_3 + 2] &= ((/* implicit */signed char) arr_12 [i_3 - 1] [i_3 - 2] [i_3] [i_3] [i_3 - 2] [i_3]);
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) arr_24 [i_0] [0U] [i_3 + 2] [i_4])) : (2944705747U)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_3 - 3] [(signed char)1] [i_3 - 1] [i_3 - 3] [i_8] [i_8] [i_8]))) : (arr_16 [i_0] [17] [i_3] [17] [i_8])));
                            arr_26 [i_0] [i_0] [i_2] [i_2] [i_4] [i_8] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (((/* implicit */long long int) 1350261549U)) : (-6135534513891885014LL))) >= (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_15 [i_0] [i_2] [i_3 + 3] [i_4] [i_2]))))));
                        }
                        arr_27 [i_0] = ((/* implicit */unsigned long long int) arr_8 [10LL]);
                        arr_28 [i_0] [7U] [i_0] [(signed char)4] = ((/* implicit */_Bool) ((signed char) arr_12 [9ULL] [i_2] [i_3 + 1] [i_4] [i_3 - 1] [i_4]));
                        arr_29 [i_0] = ((/* implicit */unsigned int) ((long long int) 4858944331955517746LL));
                    }
                } 
            } 
        }
        arr_30 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_4)) ? (arr_15 [15] [i_0] [i_0] [12] [i_0]) : (((/* implicit */unsigned long long int) arr_5 [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7357972690303519868LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [16ULL] [i_0]))) : (var_5))))));
        /* LoopNest 3 */
        for (long long int i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            for (signed char i_10 = 0; i_10 < 18; i_10 += 2) 
            {
                for (unsigned int i_11 = 2; i_11 < 16; i_11 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_9]))) + (var_4)))) & (((((/* implicit */_Bool) -1325485414)) ? (((/* implicit */long long int) var_5)) : (-5459638486569113001LL)))));
                        var_21 = ((arr_16 [i_0] [i_10] [i_10] [i_10] [i_11 - 2]) ^ (arr_25 [i_11] [0LL] [i_11 + 2] [i_11 + 2] [i_11 + 2]));
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) 4189576993U))));
                        var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) 179866362)) ? (-2131700516289563140LL) : (((/* implicit */long long int) -1582906763)))) / (((/* implicit */long long int) ((553134745U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    }
                } 
            } 
        } 
        arr_38 [i_0] = ((/* implicit */short) 1793259109);
        /* LoopSeq 4 */
        for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_13 = 0; i_13 < 18; i_13 += 1) 
            {
                arr_45 [i_0] [i_0] [i_12] [i_0] = ((/* implicit */_Bool) -9019334704294046688LL);
                arr_46 [i_12] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 1229153643U)) & (arr_25 [i_0] [i_0] [i_0] [(_Bool)1] [i_13])));
            }
            arr_47 [i_0] = ((/* implicit */signed char) var_2);
            var_24 |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_34 [i_0])))))) != (arr_36 [i_12] [i_12] [i_12] [i_12] [i_0] [i_0])));
        }
        for (int i_14 = 0; i_14 < 18; i_14 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_15 = 0; i_15 < 18; i_15 += 2) 
            {
                var_25 = ((/* implicit */_Bool) -632964989);
                /* LoopSeq 3 */
                for (long long int i_16 = 4; i_16 < 14; i_16 += 1) 
                {
                    var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0] [i_14] [10ULL])) ? (arr_22 [i_16 + 4] [i_16 + 1] [i_16 + 4] [i_16 - 2] [i_16]) : (arr_16 [i_16 - 4] [i_16] [i_16] [i_16 - 1] [i_16])));
                    /* LoopSeq 4 */
                    for (int i_17 = 1; i_17 < 15; i_17 += 3) 
                    {
                        var_27 = ((/* implicit */_Bool) arr_54 [i_0] [i_14] [(signed char)7] [i_17]);
                        var_28 = ((/* implicit */long long int) ((_Bool) arr_50 [i_16 + 1]));
                        arr_59 [i_17] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_0] [(short)2] [3U] [i_0])) ? (arr_33 [i_0] [i_14] [i_15] [17ULL]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (arr_22 [i_0] [i_14] [i_14] [i_14] [i_17 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [(signed char)8] [i_16 + 2] [i_15] [(signed char)8])))));
                        var_29 = ((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) 4138819305U))));
                    }
                    for (unsigned int i_18 = 0; i_18 < 18; i_18 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned int) -179866377);
                        arr_63 [i_15] [i_16] [i_15] [(signed char)12] = (signed char)19;
                    }
                    for (unsigned int i_19 = 2; i_19 < 16; i_19 += 1) /* same iter space */
                    {
                        arr_66 [i_0] [i_19] [i_14] [i_15] [i_16] [i_19] [i_19] = ((/* implicit */short) arr_35 [i_0] [i_0] [(short)9]);
                        var_31 &= ((/* implicit */long long int) (((_Bool)0) || (((/* implicit */_Bool) arr_9 [(short)4] [i_14]))));
                    }
                    for (unsigned int i_20 = 2; i_20 < 16; i_20 += 1) /* same iter space */
                    {
                        arr_70 [i_0] [i_14] [i_0] [i_16 + 1] [i_20] &= ((/* implicit */_Bool) arr_44 [i_0]);
                        var_32 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [3LL] [i_15] [i_16] [i_20 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_9 [1] [i_14]))))) ? (1563344278730764644LL) : (var_8));
                    }
                    var_33 *= ((/* implicit */short) arr_60 [i_0] [i_0] [5LL] [5LL] [i_0] [i_16 + 3]);
                    var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((4094216189U) + (var_6))) > (arr_54 [i_16] [i_16 - 3] [i_16 - 3] [i_16]))))));
                }
                for (short i_21 = 2; i_21 < 17; i_21 += 1) /* same iter space */
                {
                    arr_74 [i_0] [i_14] [i_14] [i_15] [i_21] = ((/* implicit */signed char) -957500529302993643LL);
                    arr_75 [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)42);
                    arr_76 [12ULL] [12ULL] [i_21] = ((/* implicit */_Bool) ((unsigned int) 3723473252U));
                }
                for (short i_22 = 2; i_22 < 17; i_22 += 1) /* same iter space */
                {
                    arr_80 [12U] [12U] = ((/* implicit */long long int) arr_79 [i_14] [i_22 - 1] [i_22 - 1] [i_22 - 2]);
                    var_35 = ((/* implicit */unsigned int) arr_78 [i_22] [i_22] [i_22] [i_22 + 1]);
                }
            }
            var_36 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_14])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_43 [i_0] [i_0] [i_0]))));
            var_37 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_14] [i_14] [i_14])) : (((/* implicit */int) arr_11 [i_0] [i_0]))));
        }
        for (int i_23 = 0; i_23 < 18; i_23 += 3) /* same iter space */
        {
            var_38 ^= ((/* implicit */_Bool) arr_57 [i_0] [i_0] [i_0] [13ULL] [i_0]);
            var_39 += ((((/* implicit */_Bool) -1219417417938449548LL)) ? (((/* implicit */int) (short)-19193)) : (((/* implicit */int) (_Bool)0)));
        }
        for (int i_24 = 0; i_24 < 18; i_24 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                var_40 = ((/* implicit */_Bool) 14207055127430982837ULL);
                var_41 -= ((/* implicit */_Bool) ((var_3) ? (((var_9) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_68 [i_0] [i_0] [i_24] [i_24] [i_24])))));
                var_42 = ((/* implicit */_Bool) arr_72 [i_25] [0LL] [i_0] [i_24] [i_24] [i_0]);
            }
            for (long long int i_26 = 1; i_26 < 16; i_26 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_27 = 0; i_27 < 18; i_27 += 3) 
                {
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        {
                            var_43 = ((/* implicit */unsigned long long int) max((var_43), (4266655448537056293ULL)));
                            arr_97 [1U] [i_27] [i_24] [i_26] [i_24] [i_0] [i_0] = ((arr_36 [i_0] [i_0] [i_26 - 1] [i_27] [14U] [i_27]) / (arr_36 [i_0] [i_24] [i_26 + 1] [i_27] [i_28] [i_26]));
                        }
                    } 
                } 
                arr_98 [2U] [i_24] [2U] [2U] &= ((/* implicit */signed char) var_5);
                var_44 = ((/* implicit */_Bool) ((((_Bool) var_7)) ? (((((/* implicit */_Bool) 1851383384U)) ? (arr_71 [6U] [i_24]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (arr_94 [i_26 - 1] [i_26 + 2] [i_26 + 1])));
            }
            var_45 = ((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_78 [i_24] [i_24] [i_0] [i_0]))) | (var_4)))));
        }
    }
}
