/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150036
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
    var_13 &= ((/* implicit */unsigned char) min((min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), ((+(8422990832321639219LL))))), (var_4)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            var_14 = -8422990832321639220LL;
            /* LoopSeq 1 */
            for (short i_2 = 2; i_2 < 12; i_2 += 2) 
            {
                arr_9 [i_0] [i_0] [(signed char)10] &= ((/* implicit */unsigned long long int) -8422990832321639230LL);
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)15726)))))));
                var_16 = ((/* implicit */int) 8422990832321639219LL);
            }
            arr_10 [i_1 - 1] [i_1] [i_0] = arr_0 [i_0] [i_1 + 1];
            /* LoopNest 2 */
            for (unsigned int i_3 = 4; i_3 < 11; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_17 &= ((/* implicit */unsigned long long int) var_7);
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 1])))))));
                            arr_18 [i_1] [i_0] [i_1 - 1] [i_1 - 1] [i_1] = ((/* implicit */unsigned int) arr_14 [i_0] [i_1 - 1] [i_1] [i_0] [i_5]);
                            arr_19 [i_0] [(unsigned short)8] [i_0] [(unsigned char)8] [i_0] &= ((/* implicit */long long int) (unsigned short)1511);
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6]))) * (0LL))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)49817)) & (var_9))))));
            var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)15739))));
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_8))));
        }
        arr_22 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_22 &= ((/* implicit */unsigned int) arr_24 [(signed char)21]);
        arr_25 [(signed char)16] = ((/* implicit */unsigned char) (signed char)0);
        /* LoopSeq 4 */
        for (signed char i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            var_23 *= ((/* implicit */unsigned int) arr_23 [i_7] [(signed char)12]);
            arr_28 [i_7] [i_7] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_27 [i_7] [i_7] [i_8]))));
        }
        for (int i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_3))));
            var_25 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)15729)))))));
            arr_32 [i_7] [i_7] [i_7] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 15828084906967789110ULL)) ? (((/* implicit */int) arr_29 [i_7] [i_7])) : (var_9)));
            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50604))) : (arr_31 [i_9]))))));
            /* LoopSeq 2 */
            for (short i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (unsigned short i_11 = 0; i_11 < 22; i_11 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */long long int) (-(((/* implicit */int) ((short) (signed char)0)))));
                    arr_37 [i_7] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) 4727366901046113324ULL))) > (var_10)));
                }
                for (unsigned short i_12 = 0; i_12 < 22; i_12 += 3) /* same iter space */
                {
                    arr_41 [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-12595)) : (((/* implicit */int) (_Bool)0)))))));
                    var_28 = ((/* implicit */unsigned short) ((long long int) arr_33 [i_7] [i_7] [i_7] [i_7]));
                    var_29 ^= ((/* implicit */unsigned long long int) -1418531899921370835LL);
                    var_30 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)62906))));
                }
                for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) /* same iter space */
                {
                    arr_44 [0U] [i_9] [(signed char)1] [i_9] [i_9] = (~(var_9));
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_7] [i_9])) ? (((/* implicit */int) arr_39 [i_7] [i_13] [i_9] [i_9] [i_9])) : (((/* implicit */int) arr_24 [i_10]))));
                    arr_45 [i_13] [i_10] [i_9] [i_7] &= (~(((/* implicit */int) arr_24 [i_7])));
                }
                arr_46 [i_7] [1] [1] = ((/* implicit */signed char) arr_33 [i_7] [i_7] [i_7] [i_7]);
            }
            for (short i_14 = 0; i_14 < 22; i_14 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_15 = 0; i_15 < 22; i_15 += 2) 
                {
                    for (short i_16 = 0; i_16 < 22; i_16 += 3) 
                    {
                        {
                            arr_56 [i_16] [i_16] [i_16] [i_15] [i_16] [i_16] = ((/* implicit */int) (-(466453292606042847LL)));
                            var_32 *= 18446744073709551615ULL;
                        }
                    } 
                } 
                var_33 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)49810)) ? (((/* implicit */int) (unsigned short)44309)) : (-1212902706)));
                var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))));
            }
        }
        for (long long int i_17 = 3; i_17 < 21; i_17 += 4) /* same iter space */
        {
            arr_59 [i_7] [i_7] [20LL] &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_17] [i_17] [i_17 + 1]))));
            /* LoopSeq 1 */
            for (unsigned short i_18 = 0; i_18 < 22; i_18 += 1) 
            {
                arr_64 [i_7] [(signed char)14] &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_24 [0LL]))));
                /* LoopNest 2 */
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (int i_20 = 0; i_20 < 22; i_20 += 4) 
                    {
                        {
                            var_35 &= ((/* implicit */signed char) -1212902708);
                            var_36 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
                        }
                    } 
                } 
            }
            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) var_4))));
            arr_71 [8] [8] &= -1212902708;
        }
        for (long long int i_21 = 3; i_21 < 21; i_21 += 4) /* same iter space */
        {
            arr_74 [i_21 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)47)) * (((/* implicit */int) (unsigned short)1166))));
            /* LoopSeq 2 */
            for (unsigned char i_22 = 0; i_22 < 22; i_22 += 3) 
            {
                var_38 ^= ((/* implicit */unsigned int) ((var_1) < (1212902704)));
                var_39 &= ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)92))));
                /* LoopSeq 2 */
                for (unsigned char i_23 = 0; i_23 < 22; i_23 += 4) 
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_24 = 1; i_24 < 20; i_24 += 2) /* same iter space */
                    {
                        var_40 -= ((/* implicit */unsigned char) (-(293659596)));
                        var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_22] [i_24 - 1] [i_24 - 1] [i_22])) ? (-1212902700) : (arr_62 [i_22] [i_24 + 1] [i_24 + 1] [i_22])));
                        arr_84 [(_Bool)1] [i_22] [(_Bool)1] [i_22] [i_7] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) -557885951))))));
                        arr_85 [i_7] [i_22] [(_Bool)1] [(_Bool)1] [i_24 + 2] = ((/* implicit */int) var_12);
                        arr_86 [i_7] [i_7] [i_21] [i_22] [8] [i_22] [19ULL] = ((/* implicit */long long int) (~(arr_62 [i_22] [(unsigned char)4] [(unsigned char)4] [i_21 - 2])));
                    }
                    for (unsigned short i_25 = 1; i_25 < 20; i_25 += 2) /* same iter space */
                    {
                        var_42 &= ((/* implicit */long long int) (~(var_2)));
                        var_43 ^= ((/* implicit */signed char) (-(1594788769)));
                    }
                    for (unsigned short i_26 = 1; i_26 < 20; i_26 += 2) /* same iter space */
                    {
                        arr_92 [i_23] [(signed char)6] [i_23] [i_23] &= ((/* implicit */unsigned char) 33554431ULL);
                        var_44 &= ((/* implicit */long long int) (+(33554436ULL)));
                        var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) (unsigned short)44309))));
                    }
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        arr_96 [i_7] [i_22] [i_22] = (!(((/* implicit */_Bool) arr_76 [i_21 - 2] [i_21 - 3])));
                        arr_97 [i_7] [i_22] [i_27] = ((/* implicit */long long int) ((unsigned short) 3077568293U));
                    }
                    var_46 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)237))))) ? (((/* implicit */long long int) 3077568270U)) : (((((/* implicit */_Bool) (unsigned char)30)) ? (4384525369627026896LL) : (-1LL))));
                }
                for (unsigned int i_28 = 0; i_28 < 22; i_28 += 1) 
                {
                    var_47 &= ((/* implicit */signed char) var_7);
                    /* LoopSeq 3 */
                    for (signed char i_29 = 0; i_29 < 22; i_29 += 4) /* same iter space */
                    {
                        var_48 += ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)20)) & (((/* implicit */int) arr_75 [i_22] [i_21 - 2]))));
                        arr_103 [i_22] [(unsigned char)2] [i_28] [i_28] [i_28] [i_28] = ((/* implicit */unsigned char) 30LL);
                        var_49 = ((/* implicit */unsigned short) -974563557);
                    }
                    for (signed char i_30 = 0; i_30 < 22; i_30 += 4) /* same iter space */
                    {
                        arr_108 [(unsigned short)4] [i_22] [i_22] [20U] [i_30] = ((/* implicit */int) 13719377172663438291ULL);
                        arr_109 [i_7] [i_21] [3ULL] [i_21] [i_22] = ((((/* implicit */_Bool) 13719377172663438291ULL)) ? (4727366901046113322ULL) : (((/* implicit */unsigned long long int) (+(9223372036854775793LL)))));
                        var_50 = 4040158218U;
                    }
                    for (unsigned char i_31 = 0; i_31 < 22; i_31 += 2) 
                    {
                        var_51 = ((/* implicit */unsigned char) min((var_51), (((/* implicit */unsigned char) (signed char)-1))));
                        var_52 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1212902707)) ? (15383071032525243788ULL) : (((/* implicit */unsigned long long int) 32985348833280LL))));
                        var_53 = ((/* implicit */short) ((arr_83 [i_21] [i_22] [i_21] [i_21 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_100 [i_21 + 1] [i_21 - 1] [i_22] [i_22])))));
                        arr_113 [i_7] [i_21] [8] [i_28] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (arr_67 [i_7] [i_21 - 3] [19LL] [19LL] [i_28] [i_31]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_28] [i_28] [i_7])))));
                    }
                }
            }
            for (signed char i_32 = 0; i_32 < 22; i_32 += 3) 
            {
                /* LoopNest 2 */
                for (int i_33 = 2; i_33 < 21; i_33 += 4) 
                {
                    for (unsigned char i_34 = 0; i_34 < 22; i_34 += 1) 
                    {
                        {
                            arr_121 [i_32] [i_21] [i_21] [i_32] = ((/* implicit */long long int) (unsigned short)47377);
                            var_54 = ((/* implicit */short) (-(33554431ULL)));
                        }
                    } 
                } 
                arr_122 [i_32] [i_21 - 1] [i_32] [i_32] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)20)) ? (33554431ULL) : (18446744073675997170ULL)));
                /* LoopSeq 1 */
                for (signed char i_35 = 0; i_35 < 22; i_35 += 1) 
                {
                    arr_126 [i_35] [i_32] [i_7] [i_32] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_77 [i_21 - 1] [i_21 - 1] [i_21 - 2] [i_21 - 1] [i_32]))));
                    arr_127 [10LL] [(unsigned char)18] [i_32] [i_32] [5LL] [i_32] = ((/* implicit */unsigned short) 2147483647);
                    arr_128 [i_32] [(unsigned char)1] [i_32] [i_32] [i_32] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_125 [i_21 - 2] [i_21 - 3] [i_32] [i_21])) ? (33554441ULL) : (((/* implicit */unsigned long long int) arr_49 [i_7] [i_32] [i_7]))));
                    var_55 &= ((/* implicit */unsigned char) (short)-1);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_36 = 1; i_36 < 19; i_36 += 4) 
                    {
                        arr_132 [i_7] [i_32] [i_7] [i_7] [(_Bool)1] [i_7] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) (unsigned short)18177)) && (((/* implicit */_Bool) arr_23 [(unsigned short)16] [i_21 - 2]))))));
                        arr_133 [i_7] [i_36 + 2] [(_Bool)1] [i_35] [0LL] [i_7] [i_32] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)27))));
                    }
                }
                arr_134 [i_32] = (-(((((/* implicit */_Bool) (unsigned short)47344)) ? (((/* implicit */int) (signed char)111)) : (arr_43 [(unsigned char)16] [i_21 - 1] [i_21 - 1] [14]))));
            }
        }
    }
}
