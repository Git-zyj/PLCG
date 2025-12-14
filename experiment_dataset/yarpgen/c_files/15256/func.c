/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15256
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) != (arr_8 [i_0] [i_1] [i_0]))) ? (((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_2 [i_0])))) : ((~(((/* implicit */int) var_7))))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_2])) & ((~(((/* implicit */int) arr_4 [i_0]))))))) : (((1058925129230352832LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        arr_13 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */short) var_2);
                        arr_14 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)-1)) + (2147483647))) >> (((-643768960456467216LL) + (643768960456467241LL)))));
                        var_14 = ((/* implicit */long long int) min((var_14), (((long long int) min((arr_8 [i_0] [i_1] [i_2]), (((/* implicit */long long int) (unsigned char)9)))))));
                    }
                    var_15 = ((/* implicit */unsigned char) var_2);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            {
                arr_20 [i_4] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) arr_17 [i_4] [i_5])) : (((/* implicit */int) var_12)))));
                var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -1058925129230352844LL)) ? (1058925129230352832LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)53))))) % (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                var_17 -= ((/* implicit */unsigned short) var_10);
                /* LoopSeq 3 */
                for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_7 = 3; i_7 < 21; i_7 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned short) arr_23 [i_7] [i_7 + 3] [i_7 + 3] [i_7 + 1]);
                        arr_27 [i_4] [i_5] [i_6] [i_7 + 2] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_5)) | (((/* implicit */int) arr_25 [i_4] [i_4] [i_7 - 3] [i_7] [i_4] [i_7])))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_7 + 2])) && (((/* implicit */_Bool) ((unsigned short) arr_24 [i_7 + 2] [i_6]))))))));
                        var_19 -= ((/* implicit */unsigned short) arr_17 [i_4] [i_4]);
                    }
                    for (long long int i_8 = 3; i_8 < 21; i_8 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((short) arr_29 [i_8] [i_8 + 2] [i_8 - 3] [i_8 - 2] [i_8 + 2])))));
                        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_24 [i_5] [i_5])) > (((/* implicit */int) var_12)))) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) ((unsigned short) arr_26 [i_8 - 3] [i_8 - 1] [i_8 - 3] [i_8 + 2])))));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 4; i_9 < 23; i_9 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_15 [i_9 - 2]) <= (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4] [i_4]))))))) : (((((/* implicit */_Bool) arr_28 [i_9] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)12))) : (arr_15 [i_4])))));
                        arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((((((/* implicit */_Bool) 7583395288013393252LL)) && (((/* implicit */_Bool) var_12)))) ? (((((/* implicit */_Bool) var_4)) ? (arr_28 [i_4] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_2))))));
                    }
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        for (long long int i_11 = 0; i_11 < 24; i_11 += 2) 
                        {
                            {
                                arr_41 [i_4] [i_4] [i_10] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((min((((/* implicit */long long int) (short)4104)), (var_11))) <= (arr_26 [i_4] [i_4] [i_4] [i_4])))) ^ (((/* implicit */int) var_5))));
                                arr_42 [i_4] [i_4] [i_4] [i_10] = ((/* implicit */long long int) ((var_4) == (((/* implicit */long long int) (~(((/* implicit */int) (short)-1)))))));
                                var_23 = ((/* implicit */long long int) var_2);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) var_7);
                }
                for (long long int i_12 = 1; i_12 < 23; i_12 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 24; i_13 += 4) 
                    {
                        for (unsigned char i_14 = 0; i_14 < 24; i_14 += 3) 
                        {
                            {
                                var_25 *= ((/* implicit */unsigned short) arr_16 [i_4] [i_5]);
                                var_26 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) var_10)) + (((/* implicit */int) arr_23 [i_12 - 1] [i_12 + 1] [i_12 - 1] [i_12])))));
                                arr_52 [i_4] = ((/* implicit */long long int) var_5);
                                arr_53 [i_14] [i_14] [i_13] [i_12 + 1] [i_12 - 1] [i_5] [i_4] = var_3;
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_15 = 0; i_15 < 24; i_15 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_16 = 1; i_16 < 23; i_16 += 2) 
                        {
                            arr_58 [i_16 + 1] [i_15] [i_12 - 1] [i_5] [i_4] = ((/* implicit */unsigned char) var_0);
                            var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_25 [i_4] [i_5] [i_12 + 1] [i_5] [i_12 + 1] [i_4])))) != (((/* implicit */int) arr_31 [i_16 - 1] [i_16 - 1] [i_12 + 1] [i_15] [i_16 + 1] [i_12 + 1]))));
                            var_28 -= ((/* implicit */short) ((arr_57 [i_16 - 1] [i_16 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_4]) % (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                            arr_59 [i_16 - 1] = ((short) ((((/* implicit */long long int) ((/* implicit */int) var_10))) | (-4LL)));
                            arr_60 [i_4] [i_5] [i_12 + 1] [i_16 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_16 + 1] [i_16 - 1] [i_16 + 1] [i_12 + 1] [i_12 + 1])) ? (((/* implicit */int) arr_37 [i_16 + 1] [i_16 - 1] [i_16 + 1] [i_12 - 1] [i_12 + 1])) : (((/* implicit */int) var_1))));
                        }
                        arr_61 [i_15] [i_15] [i_12 + 1] [i_15] [i_12 + 1] = ((/* implicit */short) (+(((/* implicit */int) arr_45 [i_4] [i_5] [i_12 - 1] [i_5]))));
                        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_4] [i_5] [i_12 - 1] [i_12 + 1])) ? (((/* implicit */int) arr_36 [i_15] [i_12 - 1] [i_12 - 1] [i_12 - 1])) : (((/* implicit */int) arr_36 [i_5] [i_5] [i_5] [i_12 + 1])))))));
                        var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                    }
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) > (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_4] [i_4] [i_5] [i_12 - 1])))))))));
                }
                for (unsigned char i_17 = 1; i_17 < 20; i_17 += 2) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        arr_67 [i_18] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_57 [i_17] [i_17] [i_17 + 3] [i_17 + 3] [i_17] [i_17]))));
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((unsigned char) ((((/* implicit */_Bool) -1058925129230352833LL)) ? (((/* implicit */int) (unsigned short)33739)) : (((/* implicit */int) (unsigned char)13)))))));
                        arr_68 [i_4] [i_4] [i_5] [i_17 - 1] [i_18] = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
                        var_33 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_54 [i_17 + 3] [i_17 + 2] [i_17 - 1] [i_17 + 2])) ? (((/* implicit */int) arr_54 [i_17 + 3] [i_17 + 2] [i_17 - 1] [i_17 + 2])) : (((/* implicit */int) arr_54 [i_17 + 3] [i_17 + 2] [i_17 - 1] [i_17 + 2]))));
                    }
                    for (long long int i_19 = 0; i_19 < 24; i_19 += 1) 
                    {
                        arr_72 [i_19] [i_19] [i_19] [i_4] = ((/* implicit */unsigned short) var_4);
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_19] [i_5] [i_17 + 4] [i_19])) ? (((/* implicit */int) arr_62 [i_4] [i_4] [i_17 + 1])) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_45 [i_4] [i_4] [i_17 + 2] [i_19])) * (((/* implicit */int) arr_71 [i_19] [i_17 + 1] [i_5] [i_4]))))) ? ((~(((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) (unsigned short)61689)) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) arr_56 [i_17 + 3]))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_20 = 0; i_20 < 24; i_20 += 1) 
                    {
                        var_35 = var_10;
                        var_36 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) arr_34 [i_4] [i_4]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_64 [i_5] [i_17] [i_20])) : (((/* implicit */int) arr_34 [i_4] [i_4]))))) : (arr_26 [i_4] [i_5] [i_5] [i_5])));
                        arr_75 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_54 [i_4] [i_5] [i_17 + 3] [i_20])) ? (arr_35 [i_17 + 2] [i_17 + 3] [i_20]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    }
                    /* LoopNest 2 */
                    for (short i_21 = 0; i_21 < 24; i_21 += 1) 
                    {
                        for (long long int i_22 = 0; i_22 < 24; i_22 += 3) 
                        {
                            {
                                arr_80 [i_4] [i_4] [i_5] [i_17 + 3] [i_21] [i_22] [i_22] = -6645745454912604670LL;
                                arr_81 [i_17 + 2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_73 [i_17 + 4] [i_17 + 2] [i_17] [i_17 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_6))) != (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)3828)))))));
                                arr_82 [i_22] [i_21] [i_21] [i_17] [i_17 - 1] [i_5] [i_4] = ((/* implicit */unsigned short) (~((~((+(((/* implicit */int) var_1))))))));
                            }
                        } 
                    } 
                    var_37 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_74 [i_17 + 4] [i_17 + 2] [i_17] [i_17 + 1])) : (((/* implicit */int) (short)18565)))));
                }
                arr_83 [i_4] [i_5] = ((/* implicit */unsigned char) var_12);
            }
        } 
    } 
}
