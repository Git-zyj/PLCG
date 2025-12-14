/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169150
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((((/* implicit */_Bool) (unsigned char)167)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3403))) : (var_7))) : (((/* implicit */unsigned long long int) ((unsigned int) -3698119180478887713LL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1 - 1])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    arr_9 [(unsigned char)7] = ((/* implicit */unsigned char) ((long long int) var_5));
                    var_18 = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
                    var_19 ^= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) arr_0 [i_0] [i_0])))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)65)) ? (((((/* implicit */_Bool) 2147483624)) ? (((/* implicit */unsigned long long int) -1108716779050954791LL)) : (2954192991711041281ULL))) : (17472743940898431976ULL)));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3] = var_15;
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((unsigned int) arr_0 [i_1 - 2] [i_1 - 2])))));
                        var_22 = ((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_0]);
                        var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) >= (2954192991711041276ULL)));
                    }
                }
                var_24 = ((/* implicit */signed char) var_7);
                arr_14 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) var_3)) ? (var_7) : (15492551081998510341ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [9LL] [10U])) ? (-2147483625) : (((/* implicit */int) (signed char)-22)))))))) ? (var_9) : (((/* implicit */unsigned long long int) 922113199U))));
                arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? ((+(arr_11 [i_1] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */int) ((unsigned short) 9ULL)))))) | (((-1LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)57)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_5 = 1; i_5 < 16; i_5 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 16; i_7 += 4) 
                {
                    for (short i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        {
                            var_26 ^= ((/* implicit */short) ((arr_19 [i_5 + 1] [i_8] [14]) != (arr_19 [i_5 - 1] [i_8] [(short)10])));
                            var_27 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) arr_16 [i_6])))));
                            arr_30 [i_8] [i_7] &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [8ULL] [0])) ? (((/* implicit */int) var_10)) : (2147483619)))) <= (((long long int) arr_27 [i_5 - 1] [(unsigned char)5] [i_7]))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */short) arr_22 [i_4] [i_4] [i_5] [i_6]);
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned long long int) ((int) (+(arr_17 [i_6]))));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [16ULL] [i_5] [i_5] [i_9] [i_10])))));
                        }
                    } 
                } 
            }
            for (signed char i_11 = 0; i_11 < 17; i_11 += 2) /* same iter space */
            {
                var_31 ^= ((/* implicit */unsigned short) arr_28 [i_5 + 1] [i_5 + 1] [i_5] [i_5] [i_5 + 1] [(unsigned short)9]);
                var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned char)26))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-54))) : (2954192991711041281ULL)));
                /* LoopSeq 2 */
                for (int i_12 = 0; i_12 < 17; i_12 += 1) 
                {
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) 7ULL)) ? (arr_10 [i_4] [i_5 + 1] [i_4] [i_5 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_5 + 1] [i_5 + 1] [i_4])))));
                    arr_41 [(unsigned char)12] [i_4] [i_11] [i_4] = ((/* implicit */unsigned long long int) var_3);
                    var_34 = ((/* implicit */long long int) var_16);
                    arr_42 [14ULL] [i_5] [i_5] [i_4] = ((/* implicit */int) (-(arr_34 [i_4] [i_4] [i_4] [i_12] [i_5 + 1])));
                    arr_43 [i_4] [i_5 - 1] [i_4] = ((/* implicit */unsigned long long int) var_10);
                }
                for (unsigned int i_13 = 0; i_13 < 17; i_13 += 1) 
                {
                    arr_46 [i_4] [i_5] [(unsigned char)15] [i_4] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (3418935684U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)35))))));
                    var_35 += ((/* implicit */signed char) (-((+(var_5)))));
                    arr_47 [i_4] [(unsigned char)15] [i_5 + 1] [i_5 + 1] [i_4] [i_5 - 1] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)32964))));
                }
            }
            for (unsigned short i_14 = 0; i_14 < 17; i_14 += 3) 
            {
                arr_50 [i_4] [i_5 + 1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_5 - 1] [i_5 - 1] [i_5 + 1])) ? (arr_11 [i_4] [i_4] [i_4] [i_4] [i_4]) : ((~(((/* implicit */int) arr_38 [i_5 + 1] [i_5] [i_5]))))));
                var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_29 [9U] [i_5 - 1] [9U]))) ? (((/* implicit */int) arr_5 [i_5] [i_14])) : (arr_44 [i_4] [i_5 - 1] [i_14] [i_14] [i_14])));
                var_37 = ((/* implicit */unsigned char) (unsigned short)3404);
                /* LoopSeq 2 */
                for (unsigned char i_15 = 0; i_15 < 17; i_15 += 2) 
                {
                    var_38 = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) <= (((((/* implicit */int) (signed char)22)) ^ (((/* implicit */int) (unsigned char)240))))));
                    var_39 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_38 [i_14] [i_5] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [(short)9] [i_5 + 1] [i_14] [i_15]))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [(signed char)6]))) : (arr_10 [i_15] [13U] [i_5] [i_4])))));
                    arr_53 [i_4] [i_5] = ((/* implicit */unsigned char) arr_1 [i_14]);
                }
                for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 4) 
                {
                    var_40 = ((/* implicit */long long int) arr_54 [i_4] [i_5] [i_14] [14]);
                    var_41 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_6 [i_5 - 1] [i_5 - 1] [i_5 - 1]) : (arr_6 [i_5 - 1] [i_5] [i_5])));
                }
                arr_56 [i_4] [i_4] = ((/* implicit */unsigned long long int) (unsigned char)251);
            }
            var_42 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483622)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 12741803468600630906ULL)) ? (((/* implicit */int) arr_33 [i_5] [i_5] [i_5 - 1] [i_5])) : (-1389492422)))) : (((((/* implicit */_Bool) 805306368LL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_4] [(short)8] [4LL])))))));
            var_43 ^= ((/* implicit */signed char) var_13);
            var_44 = ((/* implicit */long long int) max((var_44), (((((/* implicit */_Bool) -610196836)) ? (((/* implicit */long long int) 2312452100U)) : (-1LL)))));
        }
        for (short i_17 = 1; i_17 < 16; i_17 += 2) /* same iter space */
        {
            arr_59 [i_4] = ((/* implicit */short) ((arr_49 [i_17 - 1] [i_17 - 1] [i_17 + 1] [i_17 + 1]) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_54 [i_4] [i_4] [i_4] [i_4])) || (((/* implicit */_Bool) var_15)))))));
            var_45 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_17 - 1] [i_17 - 1] [i_17 - 1] [10] [i_17 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_17 - 1] [i_17 - 1] [i_17] [i_17] [i_17 + 1]))) : (1982515196U)));
            var_46 = ((((/* implicit */_Bool) ((int) arr_4 [i_4]))) ? (((/* implicit */unsigned long long int) arr_34 [i_17] [i_4] [i_17 + 1] [i_17 + 1] [i_17 + 1])) : (14139194408307684435ULL));
        }
        for (signed char i_18 = 0; i_18 < 17; i_18 += 4) 
        {
            var_47 ^= ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)2009)) ? (10525223911859249485ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
            var_48 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_18]))) > (arr_20 [i_4])));
            var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_4] [i_18])) ? (arr_61 [0]) : (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_4]))) : (var_16)));
        }
        arr_62 [(signed char)0] [(signed char)0] &= ((/* implicit */int) var_4);
        var_50 = ((/* implicit */unsigned short) arr_29 [i_4] [i_4] [i_4]);
    }
    for (unsigned long long int i_19 = 0; i_19 < 17; i_19 += 3) /* same iter space */
    {
        arr_65 [i_19] [i_19] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_26 [i_19] [i_19] [i_19] [i_19] [i_19])) && (((/* implicit */_Bool) var_1)))) ? (((int) 158465520)) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)9)), (1660413632051299656ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_19]))))) : (((((/* implicit */_Bool) arr_64 [i_19])) ? (((/* implicit */int) arr_24 [i_19] [i_19] [i_19] [(unsigned char)7])) : (((/* implicit */int) var_6))))))));
        arr_66 [(unsigned short)16] &= max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_19] [i_19] [i_19] [i_19] [i_19])) ? (((/* implicit */int) (unsigned char)20)) : (((/* implicit */int) var_4))))) ? (max((var_8), (((/* implicit */unsigned long long int) (unsigned char)15)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_28 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])) : (-158465519)))))), (((/* implicit */unsigned long long int) min((((arr_16 [i_19]) ? (((/* implicit */long long int) arr_45 [(short)0] [(short)0] [i_19])) : (arr_58 [i_19]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 420056882U)) ? (((/* implicit */int) (unsigned char)11)) : (arr_12 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19]))))))));
        arr_67 [i_19] = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_2 [i_19])) & (((/* implicit */int) arr_2 [i_19]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_20 = 0; i_20 < 17; i_20 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_21 = 4; i_21 < 15; i_21 += 4) 
        {
            for (long long int i_22 = 0; i_22 < 17; i_22 += 4) 
            {
                for (signed char i_23 = 3; i_23 < 16; i_23 += 4) 
                {
                    {
                        var_51 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_21 - 1] [i_23 - 1] [i_23 + 1])) ? (((/* implicit */int) arr_5 [i_21 - 1] [i_23 - 1])) : (((/* implicit */int) arr_38 [i_21 - 1] [i_23 - 1] [i_23 + 1]))));
                        /* LoopSeq 4 */
                        for (long long int i_24 = 0; i_24 < 17; i_24 += 4) 
                        {
                            arr_79 [i_23] [i_23] [i_22] [i_23] [i_24] [i_22] = ((/* implicit */int) ((var_8) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                            var_52 = (short)-32742;
                        }
                        for (unsigned char i_25 = 0; i_25 < 17; i_25 += 3) 
                        {
                            var_53 = ((/* implicit */unsigned long long int) arr_72 [i_20] [i_21] [i_22] [(unsigned char)4]);
                            arr_84 [i_20] [5] [i_20] [i_20] [i_23 - 1] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_21 - 1] [i_23 - 1])) : (((/* implicit */int) arr_0 [i_21 - 2] [i_23 - 1]))));
                            arr_85 [i_22] [i_22] &= ((arr_45 [i_21] [i_21 - 4] [i_23 - 3]) ^ (((/* implicit */int) (signed char)(-127 - 1))));
                            var_54 = ((/* implicit */unsigned int) min((var_54), (var_2)));
                        }
                        for (unsigned char i_26 = 0; i_26 < 17; i_26 += 4) 
                        {
                            var_55 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)75)) > (((/* implicit */int) (signed char)-83))));
                            arr_88 [i_22] [i_23] [i_22] = ((/* implicit */unsigned short) var_15);
                            var_56 = ((/* implicit */int) var_12);
                            var_57 = ((/* implicit */long long int) arr_37 [i_20] [i_20] [i_23]);
                        }
                        for (unsigned int i_27 = 0; i_27 < 17; i_27 += 4) 
                        {
                            arr_92 [i_20] [i_27] [i_27] [i_27] [i_22] [i_27] [i_27] |= ((/* implicit */unsigned char) ((arr_44 [i_21 + 1] [i_21] [i_21 - 1] [i_21 - 3] [i_21 + 1]) >= (((/* implicit */int) (unsigned short)0))));
                            var_58 ^= ((/* implicit */unsigned int) (short)27492);
                        }
                    }
                } 
            } 
        } 
        var_59 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(0LL)))) ? (((/* implicit */int) arr_32 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20])) : (((/* implicit */int) arr_69 [i_20]))));
        var_60 = ((/* implicit */int) var_5);
    }
    for (unsigned long long int i_28 = 0; i_28 < 25; i_28 += 3) 
    {
        arr_97 [i_28] [i_28] = ((/* implicit */unsigned char) var_16);
        arr_98 [i_28] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (-(9223372036854775806LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_94 [i_28] [i_28])) >> (((arr_93 [i_28]) - (13277117690520328170ULL)))))) : (min((arr_93 [i_28]), (((/* implicit */unsigned long long int) (signed char)107)))))), (((/* implicit */unsigned long long int) (unsigned short)50932))));
    }
    var_61 = ((/* implicit */unsigned int) min((var_61), (((/* implicit */unsigned int) (unsigned char)162))));
    var_62 &= ((/* implicit */long long int) var_16);
}
