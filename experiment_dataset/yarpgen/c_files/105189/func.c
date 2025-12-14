/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105189
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
    for (short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) (~((-(3895401051U)))));
        var_15 = ((/* implicit */unsigned int) (~(var_12)));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                arr_8 [i_1] [(signed char)5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)10881)) - (((/* implicit */int) (unsigned short)10855))))) ? (max((((/* implicit */unsigned long long int) var_13)), (arr_0 [i_0 + 1]))) : (((/* implicit */unsigned long long int) var_9))));
                /* LoopSeq 2 */
                for (int i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        var_16 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) != (var_3)));
                        var_17 = var_3;
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */unsigned int) var_5);
                        arr_18 [i_1] [(signed char)8] [(signed char)8] = ((/* implicit */short) arr_3 [i_1]);
                        arr_19 [i_0] [i_1] [i_1] [i_2] [i_2] [i_1] [5] = ((/* implicit */int) (-(arr_11 [i_2 - 1] [i_1] [i_0 + 1] [i_1])));
                    }
                    for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                    {
                        var_19 *= ((/* implicit */unsigned long long int) arr_11 [i_0] [2U] [i_3] [(unsigned short)2]);
                        arr_23 [i_1] [i_1] [2ULL] [9LL] [i_6] = ((/* implicit */short) var_9);
                        var_20 += var_1;
                        var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 11724246189137401711ULL)) ? (arr_15 [2ULL] [i_1] [i_2] [i_3] [i_2] [i_6] [i_1]) : (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 2824027607748675783LL)) ? (3477753668994449906LL) : (2824027607748675786LL)))))));
                        var_22 = (-(((/* implicit */int) arr_2 [6U])));
                    }
                    for (unsigned long long int i_7 = 1; i_7 < 6; i_7 += 2) 
                    {
                        var_23 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [(_Bool)0] [i_0] [i_0] [8U] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10882))) : (arr_21 [i_0] [i_0] [(short)2] [8] [4U] [i_2 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10881))) : (max((((((-8017981545327706549LL) + (9223372036854775807LL))) << (((var_4) - (1063338117U))))), (((/* implicit */long long int) var_0))))));
                        var_24 = ((/* implicit */unsigned long long int) (-(var_4)));
                    }
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((-2824027607748675783LL) + (((/* implicit */long long int) (~(((/* implicit */int) (signed char)107))))))) : (((/* implicit */long long int) var_3))));
                }
                for (int i_8 = 0; i_8 < 10; i_8 += 1) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) var_5))));
                    arr_30 [i_1] [i_1] [i_1] [i_8] [i_1] [(signed char)7] = ((/* implicit */unsigned int) (((+(var_11))) - ((-(var_13)))));
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((arr_16 [i_2 - 1] [i_8] [i_8] [i_8] [i_8]) ? (arr_26 [i_2 + 1] [0ULL] [i_2 + 1] [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2 + 1] [(signed char)6] [i_8] [i_8] [(signed char)6]))))) == (((((/* implicit */_Bool) arr_26 [i_2 + 1] [8U] [i_2] [i_8] [2LL])) ? (var_6) : (127471623U))))))));
                }
            }
            arr_31 [i_1] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6)))) | (4005729631U));
            /* LoopSeq 1 */
            for (short i_9 = 3; i_9 < 6; i_9 += 2) 
            {
                arr_34 [i_0] [i_0] [(_Bool)1] [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1] [i_0 + 1] [i_9 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_6 [i_0 + 2])))) ? (((((/* implicit */_Bool) var_0)) ? (var_4) : (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)16))))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1] [3U] [3U] [2U])) ? (var_9) : (2824027607748675786LL)))), (((unsigned long long int) var_12))))));
                var_28 = ((/* implicit */int) max((2725988212U), (3611764685U)));
                /* LoopNest 2 */
                for (unsigned int i_10 = 2; i_10 < 9; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        {
                            arr_41 [i_0] [(signed char)4] [i_1] [i_9 + 2] [1ULL] [i_11] = max((var_4), (((/* implicit */unsigned int) (short)-28523)));
                            arr_42 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 2824027607748675782LL)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))) % (var_8)));
                            arr_43 [i_0] [i_1] [5] [i_1] [(short)0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                        }
                    } 
                } 
            }
        }
        arr_44 [i_0] = ((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned int) arr_3 [(signed char)2])) & (var_6))) : (var_6))) & (max((((/* implicit */unsigned int) -2097123638)), (1093357333U))));
    }
    var_29 = ((/* implicit */unsigned int) var_11);
    /* LoopNest 3 */
    for (unsigned int i_12 = 1; i_12 < 16; i_12 += 1) 
    {
        for (int i_13 = 2; i_13 < 15; i_13 += 2) 
        {
            for (signed char i_14 = 0; i_14 < 17; i_14 += 2) 
            {
                {
                    var_30 = 2417721487U;
                    /* LoopNest 2 */
                    for (short i_15 = 1; i_15 < 16; i_15 += 1) 
                    {
                        for (unsigned int i_16 = 3; i_16 < 15; i_16 += 2) 
                        {
                            {
                                arr_58 [i_12] [i_12 + 1] [i_15] [i_12] [0] = ((/* implicit */int) arr_52 [i_12 - 1] [i_12 - 1] [i_16]);
                                arr_59 [i_12] [i_15] [i_12] [6] [i_12] [i_12] [i_12 - 1] = var_0;
                                var_31 ^= ((/* implicit */unsigned int) -274870753);
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 706703562)) ? (arr_50 [i_12 - 1] [12ULL] [i_12]) : (arr_50 [i_12 - 1] [i_12 + 1] [(_Bool)1])))));
                    arr_60 [i_12] [i_13] [i_14] &= ((/* implicit */unsigned int) ((arr_57 [i_12] [i_12]) < (arr_48 [i_12 + 1])));
                }
            } 
        } 
    } 
}
