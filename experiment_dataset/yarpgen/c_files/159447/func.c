/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159447
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) min((((long long int) ((arr_0 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_1 [i_1])))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    arr_8 [i_1] = ((/* implicit */signed char) ((270215977642229760LL) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)10))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned short) ((unsigned int) arr_4 [i_0] [i_1] [i_2] [i_3]));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (-(((/* implicit */int) arr_13 [i_4] [2U] [i_2] [i_1] [i_4])))))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((unsigned short) var_9))));
                        }
                        arr_15 [0ULL] [(unsigned char)1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) var_5);
                        var_23 *= ((/* implicit */long long int) arr_3 [7LL] [i_1] [(unsigned short)10]);
                    }
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_22 [i_1] [(short)8] [(signed char)3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_14 [i_1] [13U] [9U] [(_Bool)1] [(unsigned short)9]), (arr_14 [i_1] [i_1] [i_5] [(unsigned char)1] [i_6])))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) var_6))));
                        arr_23 [i_5] [i_1] [i_1] [i_6] [(unsigned short)15] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) arr_18 [i_0] [i_1])))));
                    }
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            arr_28 [18U] [(_Bool)1] [i_1] [(signed char)1] [i_1] [(unsigned short)13] [i_0] = ((/* implicit */short) arr_1 [i_8]);
                            arr_29 [i_0] [i_1] [(signed char)14] [i_7] [i_8] = arr_9 [i_0] [i_1] [(_Bool)1] [(signed char)16];
                        }
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 20; i_9 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (arr_11 [i_0] [(signed char)2] [i_7]) : (arr_11 [i_0] [(unsigned short)9] [(short)1])));
                            arr_33 [i_9] [i_1] [i_5] [i_5] [0ULL] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned short) arr_32 [i_0] [i_1] [i_5] [(signed char)5] [(unsigned short)15]));
                            arr_34 [i_7] [(_Bool)1] [i_1] [i_7] [i_9] = var_5;
                            arr_35 [11U] [i_7] [i_1] [19] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [(_Bool)1] [(signed char)19]))) - (-270215977642229755LL)))));
                        }
                        /* vectorizable */
                        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
                        {
                            var_25 = ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */long long int) var_2)) : (var_3));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [12LL] [13U] [i_1] [i_10]))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) == (1143456216U)))))));
                        }
                        var_27 = ((/* implicit */long long int) var_2);
                        var_28 = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_6 [16] [i_1] [14] [i_7])), (((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_7] [i_5] [i_1] [i_0])))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 3; i_11 < 18; i_11 += 4) 
                        {
                            arr_41 [(_Bool)1] [i_1] [i_5] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_36 [i_11] [1U] [i_11 - 2] [i_11] [i_11] [5U] [i_11 + 1]) % (arr_36 [i_11] [i_11] [i_11 - 3] [(unsigned char)17] [i_11] [(unsigned short)14] [i_11 - 2])))) ? (((arr_36 [(short)18] [11ULL] [i_11 + 2] [(short)3] [i_11] [(_Bool)1] [i_11 - 3]) - (arr_36 [(short)3] [(_Bool)1] [i_11 - 3] [(signed char)18] [(_Bool)1] [18LL] [i_11 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_36 [i_1] [i_7] [i_11 + 1] [i_11] [8] [(short)3] [i_11 - 1]) != (arr_36 [17LL] [i_7] [i_11 - 1] [(unsigned char)6] [(unsigned short)6] [i_11] [i_11 - 2])))))));
                            arr_42 [i_1] [(unsigned short)14] [(signed char)9] [(unsigned short)13] [i_11] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_2)) % (max((arr_40 [i_11 - 3] [i_11 - 1] [i_11 + 1] [i_11 + 2]), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) != (var_3))))))));
                            arr_43 [3U] [10LL] [i_5] [i_7] [i_1] = (i_1 % 2 == 0) ? (((/* implicit */short) (~(((/* implicit */int) ((min((((/* implicit */long long int) arr_3 [i_0] [(_Bool)1] [(unsigned short)14])), (8946860933064118029LL))) <= (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_11] [i_1] [i_1] [i_1])) << (((((/* implicit */int) arr_38 [i_0] [(short)17] [i_5] [i_7] [i_11])) - (17250)))))))))))) : (((/* implicit */short) (~(((/* implicit */int) ((min((((/* implicit */long long int) arr_3 [i_0] [(_Bool)1] [(unsigned short)14])), (8946860933064118029LL))) <= (((/* implicit */long long int) ((((((/* implicit */int) arr_4 [i_11] [i_1] [i_1] [i_1])) + (2147483647))) << (((((((/* implicit */int) arr_38 [i_0] [(short)17] [i_5] [i_7] [i_11])) - (17250))) - (18))))))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_12 = 0; i_12 < 20; i_12 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_7] [(_Bool)1] [i_5] [i_1] [(unsigned short)16] [i_7])) ? (((long long int) var_18)) : (((/* implicit */long long int) var_17)))))));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_7] [i_7] [(signed char)6]))) + (arr_36 [(signed char)14] [i_1] [7U] [8U] [0U] [(short)18] [(unsigned short)15])));
                            var_31 = ((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) arr_2 [i_7] [i_7])))));
                            var_32 -= ((/* implicit */signed char) arr_5 [(signed char)0] [i_12]);
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_13 = 3; i_13 < 16; i_13 += 2) 
                        {
                            arr_49 [2U] [i_7] [i_1] = ((/* implicit */unsigned int) arr_17 [i_13 + 3] [i_13] [15U]);
                            var_33 = ((/* implicit */unsigned short) var_18);
                        }
                    }
                    for (short i_14 = 4; i_14 < 18; i_14 += 2) 
                    {
                        arr_53 [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_48 [i_0] [i_1] [i_0] [i_1] [11ULL] [(unsigned char)14] [i_14 + 1])) ? (((/* implicit */int) arr_13 [i_5] [i_1] [i_5] [i_14] [i_1])) : (((/* implicit */int) var_12))))));
                        var_34 = ((/* implicit */int) var_17);
                        arr_54 [i_1] [(signed char)12] [(short)8] [i_5] = (((_Bool)1) ? (((/* implicit */int) (unsigned short)60850)) : (((/* implicit */int) (short)17129)));
                        var_35 -= ((/* implicit */short) max((((/* implicit */unsigned short) ((signed char) arr_4 [i_0] [i_14] [i_5] [i_14 - 1]))), (min((((/* implicit */unsigned short) arr_4 [i_0] [i_0] [(signed char)0] [i_14 - 1])), (var_7)))));
                        var_36 = ((/* implicit */long long int) 0U);
                    }
                    for (signed char i_15 = 0; i_15 < 20; i_15 += 2) 
                    {
                        arr_57 [i_1] [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (11446358105420978751ULL))) : ((((~(0ULL))) >> (((209805187) - (209805144)))))));
                        arr_58 [i_1] [(unsigned short)15] [19U] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_50 [(unsigned short)13] [(_Bool)1] [i_1] [i_0] [(unsigned char)8]))));
                        arr_59 [16ULL] [i_1] [i_5] [(unsigned short)1] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), (var_1)))) && (((((/* implicit */_Bool) arr_6 [15LL] [10] [i_5] [(signed char)1])) && (arr_3 [i_15] [i_1] [i_0]))))));
                    }
                    arr_60 [i_5] [i_1] [i_1] [(unsigned short)15] = ((/* implicit */signed char) var_4);
                    var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_5]))));
                }
                arr_61 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_45 [i_0] [i_0] [(signed char)19] [3ULL] [i_1] [3ULL] [(_Bool)1]), (arr_45 [i_0] [i_1] [i_0] [i_0] [i_1] [i_1] [(short)11]))))));
            }
        } 
    } 
    var_38 *= (!(((/* implicit */_Bool) var_8)));
    var_39 = ((/* implicit */unsigned int) min((((((long long int) var_9)) & (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_17))))))));
}
