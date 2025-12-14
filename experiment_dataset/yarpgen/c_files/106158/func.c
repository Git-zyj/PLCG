/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106158
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
    var_15 = ((/* implicit */_Bool) (+(14878086361648816669ULL)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0]);
        arr_4 [15LL] [i_0 - 1] = ((/* implicit */int) arr_2 [i_0]);
        arr_5 [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) 14878086361648816649ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-122))) : (3568657712060734940ULL)));
    }
    for (int i_1 = 4; i_1 < 16; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    {
                        var_16 |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)-18)) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)234)))))));
                        arr_16 [i_2] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_7 [i_1] [i_1]))))))) : (((((/* implicit */_Bool) (~(arr_2 [i_1])))) ? (arr_13 [i_1] [14U] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_2])))))));
                        var_17 = ((/* implicit */unsigned char) arr_13 [i_2] [i_3] [i_4]);
                    }
                } 
            } 
        } 
        arr_17 [i_1 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) -554971461927302825LL)) ? (18446744073709551594ULL) : (((/* implicit */unsigned long long int) -1297935330))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        var_18 |= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_12 [i_5] [i_5] [(signed char)18]))))));
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_12 [i_5] [i_5] [i_5]))));
        arr_20 [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_18 [5LL]))));
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_7 = 2; i_7 < 8; i_7 += 1) /* same iter space */
        {
            arr_25 [i_6] [i_7] [i_6] = arr_15 [i_6] [i_6];
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 2; i_8 < 11; i_8 += 1) 
            {
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_27 [i_6 - 1] [8U])))))));
                /* LoopSeq 3 */
                for (unsigned int i_9 = 1; i_9 < 11; i_9 += 2) 
                {
                    var_21 &= ((/* implicit */long long int) arr_21 [i_7 + 3] [i_7 + 3]);
                    arr_31 [i_6] [i_9] [i_8] [i_7] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_21 [i_7] [i_7]) ? (arr_11 [i_6] [(unsigned char)6] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_9 - 1] [i_8] [i_6]))))) : (((/* implicit */int) arr_15 [i_6] [i_6]))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) 261465093)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20192)))));
                    var_23 += ((/* implicit */unsigned int) arr_22 [(_Bool)1]);
                }
                for (int i_10 = 3; i_10 < 10; i_10 += 2) 
                {
                    var_24 = ((/* implicit */unsigned long long int) arr_22 [i_6]);
                    var_25 = ((/* implicit */unsigned short) (!(arr_15 [i_8] [i_6])));
                }
                for (unsigned int i_11 = 2; i_11 < 9; i_11 += 2) 
                {
                    var_26 = ((/* implicit */_Bool) arr_8 [i_6]);
                    arr_37 [i_6] [i_7] [(unsigned char)2] [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_6] [5] [0U] [i_11 + 2])) ? (arr_27 [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6] [i_7]))))))));
                    arr_38 [i_6 - 1] [i_6] [2LL] [i_8 + 1] [i_6 - 1] [i_8 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_6] [i_7] [i_8])) ? (((/* implicit */int) arr_8 [i_8 - 1])) : (((/* implicit */int) arr_9 [i_6] [i_6]))))) ? (((/* implicit */unsigned long long int) ((arr_23 [i_6] [i_7]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_6] [(signed char)6]))) : (arr_36 [i_7 - 1] [(unsigned char)3] [i_8] [(unsigned char)6] [i_8])))) : ((~(4597275713030624682ULL)))));
                }
                var_27 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_27 [i_7 + 2] [i_6])))) ? (((/* implicit */int) arr_8 [i_7])) : (((/* implicit */int) arr_9 [i_6] [18U]))));
            }
            for (int i_12 = 1; i_12 < 11; i_12 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_13 = 3; i_13 < 11; i_13 += 1) 
                {
                    for (unsigned char i_14 = 1; i_14 < 8; i_14 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */int) min((var_28), (arr_43 [i_7] [i_7] [i_7 - 1] [(_Bool)1])));
                            var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_7] [i_6] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6] [i_6]))) : (arr_12 [i_7] [i_6] [i_13]))))));
                            var_30 |= ((/* implicit */int) arr_32 [8ULL] [0U]);
                            var_31 = ((/* implicit */_Bool) arr_0 [i_12] [i_14 + 4]);
                            var_32 = arr_9 [i_6] [i_6];
                        }
                    } 
                } 
                arr_47 [i_6 - 1] [i_6 - 1] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_33 [9LL] [i_6] [i_6] [i_12]))));
            }
            var_33 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_27 [i_6] [4LL]))));
        }
        for (unsigned char i_15 = 2; i_15 < 8; i_15 += 1) /* same iter space */
        {
            arr_51 [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */int) (short)-20217)) : (((/* implicit */int) (signed char)75)))))));
            arr_52 [i_6 - 1] [i_6] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_6] [i_15])) ? (((/* implicit */int) arr_45 [4ULL] [i_15] [i_6] [i_15] [(unsigned short)3] [(unsigned short)7] [i_6])) : (((/* implicit */int) arr_8 [i_6 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_6] [i_15] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_6] [i_6] [i_6 - 1] [10U] [i_6]))) : (arr_41 [i_6 - 1] [i_6])))) : (arr_40 [i_6] [i_15] [i_6] [i_15])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_6] [i_6]))))) ? (((/* implicit */int) arr_9 [i_6] [i_15 + 2])) : (((/* implicit */int) arr_23 [i_6 - 1] [(unsigned short)3]))))) : (arr_36 [i_6] [i_6 - 1] [i_6 - 1] [i_15] [i_15])));
        }
        var_34 = ((/* implicit */unsigned short) arr_36 [2LL] [i_6] [i_6] [i_6 - 1] [2LL]);
    }
}
