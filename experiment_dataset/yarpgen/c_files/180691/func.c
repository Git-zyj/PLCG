/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180691
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
        var_16 = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        var_17 = ((/* implicit */short) ((unsigned short) (~(((/* implicit */int) var_4)))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (short i_2 = 3; i_2 < 16; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                for (unsigned char i_4 = 1; i_4 < 17; i_4 += 2) 
                {
                    {
                        var_18 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)202)), (18446744073709551606ULL)));
                        var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-112))));
                        var_20 = ((/* implicit */unsigned long long int) (-((+(((((/* implicit */int) (unsigned char)53)) - (2147483647)))))));
                    }
                } 
            } 
        } 
        arr_13 [i_1] = ((/* implicit */_Bool) min((((long long int) arr_12 [i_1] [i_1] [6LL])), (((/* implicit */long long int) arr_8 [i_1] [i_1] [0ULL] [i_1]))));
        /* LoopSeq 4 */
        for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                for (signed char i_7 = 3; i_7 < 15; i_7 += 2) 
                {
                    {
                        var_21 += ((/* implicit */short) min((((/* implicit */unsigned short) ((unsigned char) (signed char)16))), (min((arr_10 [i_1] [i_6] [i_6] [i_7 + 2]), (((/* implicit */unsigned short) (short)-4))))));
                        arr_22 [i_5] [i_6] [i_5] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 15768841841902136331ULL))));
                        var_22 = ((/* implicit */unsigned int) max((arr_19 [i_5] [i_7]), (((_Bool) (unsigned char)25))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                        {
                            arr_26 [i_1] [(unsigned char)13] [i_7] [(unsigned char)13] [(unsigned char)13] = ((/* implicit */long long int) ((signed char) max((max((arr_0 [i_1] [i_8]), (((/* implicit */unsigned char) arr_19 [i_8] [(short)17])))), ((unsigned char)53))));
                            arr_27 [i_1] [i_5] [i_6] [i_6] [i_5] = ((/* implicit */int) max((((/* implicit */unsigned int) max((1868263851), (((/* implicit */int) ((_Bool) var_11)))))), (max((4294967295U), (((/* implicit */unsigned int) (unsigned char)6))))));
                        }
                        for (int i_9 = 2; i_9 < 17; i_9 += 2) 
                        {
                            arr_30 [i_1] [i_5] [(unsigned short)3] [i_7] = ((/* implicit */int) (short)32441);
                            arr_31 [i_1] [i_5] [i_6] [i_7] [i_6] [i_9] = ((/* implicit */unsigned short) (+(((int) 26U))));
                        }
                        for (int i_10 = 1; i_10 < 16; i_10 += 2) 
                        {
                            arr_34 [i_1] [i_5] [i_6] [i_7 - 3] [i_10 + 1] = var_7;
                            arr_35 [i_1] [i_1] [i_6] [i_1] [i_6] = (~(min((((/* implicit */unsigned long long int) -1197238449)), (18446744073709551601ULL))));
                        }
                        var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)230)), (max((144115188075823104ULL), (((/* implicit */unsigned long long int) (_Bool)0))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_11 = 0; i_11 < 18; i_11 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_12 = 3; i_12 < 16; i_12 += 2) 
                {
                    var_24 = ((/* implicit */long long int) (+(5635856430781912189ULL)));
                    var_25 = ((/* implicit */int) (!(((/* implicit */_Bool) 1353775449U))));
                    /* LoopSeq 1 */
                    for (long long int i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        arr_45 [i_1] [i_5] [i_11] [i_12 + 1] [i_5] = ((/* implicit */int) max((((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) 536346624U))))), (max((((/* implicit */int) (short)32441)), (-1197238449)))))), (((long long int) ((((/* implicit */_Bool) arr_18 [5U] [i_5] [i_11] [(signed char)11] [(signed char)11] [5U])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8701))))))));
                        var_26 = ((/* implicit */unsigned short) ((int) 7124647612705380438ULL));
                        arr_46 [i_11] [i_5] [i_11] [i_12 + 1] [(_Bool)0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1]))) - (max((-1LL), (((/* implicit */long long int) 0U))))))), (min((((/* implicit */unsigned long long int) 0U)), (10433388917398656918ULL)))));
                    }
                }
                var_27 = ((/* implicit */unsigned short) var_9);
                var_28 = ((((((/* implicit */int) arr_28 [i_11] [i_11] [i_11] [(signed char)11] [i_1] [i_5])) + (2147483647))) >> (((((((/* implicit */_Bool) -6649116958385414767LL)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_1]))))) + (16LL))));
            }
            for (signed char i_14 = 3; i_14 < 17; i_14 += 2) 
            {
                var_29 = ((/* implicit */unsigned char) ((long long int) 3690919026U));
                /* LoopSeq 1 */
                for (unsigned char i_15 = 3; i_15 < 17; i_15 += 2) 
                {
                    var_30 = max((((/* implicit */int) var_8)), (min((arr_29 [i_14 - 2] [i_14 - 2] [i_14 - 1] [i_1] [i_5] [i_1]), (((/* implicit */int) ((signed char) var_6))))));
                    arr_53 [i_1] [i_5] [14ULL] [i_1] = ((/* implicit */int) (_Bool)0);
                    var_31 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((max((3195373556624209077LL), (((/* implicit */long long int) (unsigned char)230)))), (((/* implicit */long long int) (+(arr_21 [i_5] [i_5]))))))), (max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (arr_47 [i_1] [4U])))))));
                }
                arr_54 [i_14 - 1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min((4662445561473877079LL), ((+(min((4662445561473877074LL), (((/* implicit */long long int) arr_38 [i_1] [i_5] [i_14]))))))));
                var_32 = ((/* implicit */int) ((arr_41 [i_14 - 3] [i_14] [i_14] [(unsigned short)13]) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (((/* implicit */unsigned char) (signed char)120))))))));
            }
            arr_55 [i_1] [i_5] = ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned char) 440180276U))), (max((((/* implicit */long long int) 604048270U)), (arr_32 [i_5] [i_5] [i_1])))));
        }
        for (long long int i_16 = 0; i_16 < 18; i_16 += 2) 
        {
            var_33 = ((/* implicit */unsigned short) (-(((-659398937) - (((/* implicit */int) (short)-5704))))));
            var_34 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((((((/* implicit */int) var_7)) * (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_42 [i_1] [i_16] [(signed char)17]))))), (max((1551118406U), (((/* implicit */unsigned int) (_Bool)1))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_17 = 3; i_17 < 17; i_17 += 2) 
            {
                arr_60 [i_1] [i_16] [5LL] = ((/* implicit */_Bool) (~(((/* implicit */int) var_14))));
                var_35 = ((/* implicit */int) ((_Bool) arr_49 [i_17 + 1] [1ULL] [i_17]));
                arr_61 [i_17] [i_17] [i_17] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -4662445561473877079LL)) * (72057594037927935ULL)));
                var_36 = ((/* implicit */unsigned char) arr_43 [i_1] [i_1] [i_16] [i_16] [i_1]);
            }
            var_37 = ((/* implicit */unsigned int) min((min((min((18377358133474673066ULL), (((/* implicit */unsigned long long int) -1)))), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) var_5))));
        }
        for (short i_18 = 0; i_18 < 18; i_18 += 2) 
        {
            var_38 = ((/* implicit */signed char) (+(min((((((/* implicit */long long int) -1)) & (arr_32 [i_1] [i_18] [i_18]))), ((~(-5931553613513346889LL)))))));
            /* LoopSeq 2 */
            for (signed char i_19 = 2; i_19 < 16; i_19 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 2) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */_Bool) 273674020U);
                            var_40 = ((/* implicit */int) max((arr_71 [i_19 - 1] [i_19 + 1]), (max((arr_71 [i_19 - 2] [i_19 - 2]), (arr_71 [i_19 - 2] [i_19 + 2])))));
                        }
                    } 
                } 
                var_41 = min(((~(((/* implicit */int) arr_23 [10LL])))), (((/* implicit */int) var_2)));
            }
            for (unsigned short i_22 = 0; i_22 < 18; i_22 += 2) 
            {
                arr_76 [i_1] [i_18] [i_22] = ((/* implicit */long long int) max(((+(18446744073709551615ULL))), (((/* implicit */unsigned long long int) min(((((_Bool)1) ? (((/* implicit */int) (short)4437)) : (-534128655))), (((/* implicit */int) arr_2 [i_1])))))));
                arr_77 [(signed char)0] [i_18] |= ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((/* implicit */int) min((var_12), ((_Bool)1))))) + (var_3))), (((/* implicit */long long int) (_Bool)1))));
                var_42 = ((/* implicit */unsigned short) max((((/* implicit */int) (signed char)-41)), (max((1131107603), (((/* implicit */int) (_Bool)0))))));
                arr_78 [7LL] [i_18] [i_22] [i_22] |= ((/* implicit */int) min((arr_7 [i_22] [3LL] [5ULL] [i_1]), (((/* implicit */long long int) max((max((13U), (((/* implicit */unsigned int) var_13)))), (((/* implicit */unsigned int) ((unsigned char) (short)19))))))));
                var_43 -= ((/* implicit */short) min((((4021293276U) + (((/* implicit */unsigned int) (~(((/* implicit */int) arr_67 [i_1]))))))), (((/* implicit */unsigned int) (short)19))));
            }
        }
        for (short i_23 = 4; i_23 < 16; i_23 += 2) 
        {
            var_44 = ((/* implicit */short) arr_47 [i_1] [i_1]);
            var_45 = ((/* implicit */unsigned long long int) min((max((max((23LL), (((/* implicit */long long int) 1044549310)))), (((/* implicit */long long int) (+(((/* implicit */int) var_2))))))), (((/* implicit */long long int) ((unsigned char) max((-3041519911982323664LL), (((/* implicit */long long int) arr_23 [i_23]))))))));
            var_46 = ((/* implicit */unsigned short) (+(13U)));
            var_47 = ((/* implicit */unsigned int) -5174619933267597183LL);
        }
        /* LoopNest 2 */
        for (unsigned short i_24 = 0; i_24 < 18; i_24 += 2) 
        {
            for (int i_25 = 2; i_25 < 17; i_25 += 2) 
            {
                {
                    var_48 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_8))))), (min((var_6), (var_6)))))) ? (((/* implicit */long long int) arr_52 [i_1] [i_24] [i_24] [i_1])) : (max((((/* implicit */long long int) min((((/* implicit */unsigned char) arr_9 [(signed char)12] [i_24] [i_24] [i_25])), (var_2)))), (((var_3) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)50)))))))));
                    var_49 = min((((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */unsigned char) arr_15 [i_1] [i_24] [i_1])), (arr_33 [i_24] [i_24])))), (arr_57 [i_24])))), (max((arr_47 [i_1] [5]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 684260727))))))));
                    var_50 = ((/* implicit */signed char) max((arr_72 [i_1] [7] [i_24] [7] [i_25 - 2]), (min((min((3096456543263029029LL), (((/* implicit */long long int) (unsigned char)214)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 5133912651051190819LL)))))))));
                }
            } 
        } 
    }
}
