/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114117
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_1 [(unsigned char)15] [i_0]))))));
        var_14 = ((/* implicit */int) ((_Bool) (-(min((var_8), (15390223515518061298ULL))))));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_15 ^= ((/* implicit */long long int) ((short) min(((~(((/* implicit */int) var_9)))), ((-(var_4))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            for (signed char i_3 = 3; i_3 < 20; i_3 += 4) 
            {
                {
                    arr_11 [i_1] [(unsigned char)3] [i_3] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_6 [i_1]), (((/* implicit */int) (short)32767)))))));
                    var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1] [i_3 - 3])) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) var_9))))));
                }
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
    {
        arr_16 [i_4] = ((/* implicit */unsigned int) var_12);
        /* LoopNest 2 */
        for (signed char i_5 = 3; i_5 < 20; i_5 += 3) 
        {
            for (unsigned char i_6 = 1; i_6 < 21; i_6 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) var_9);
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_17 [i_5 - 3] [i_5 + 2]), (arr_17 [i_5 + 1] [i_5 + 2])))))))));
                    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_5 - 2] [i_5 - 2])))))));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1040187392U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32760))) : (var_1)))) ? (((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */int) arr_5 [i_4] [i_4] [(unsigned char)10])) : (((/* implicit */int) arr_5 [i_4] [i_4] [i_4])))) : (min((arr_6 [i_4]), (((/* implicit */int) arr_4 [i_4] [i_4])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_7 = 2; i_7 < 21; i_7 += 4) 
        {
            /* LoopSeq 2 */
            for (int i_8 = 2; i_8 < 20; i_8 += 2) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned short) arr_5 [i_4] [(short)16] [i_8]);
                arr_25 [i_4] [i_7] = ((/* implicit */unsigned long long int) (!((_Bool)1)));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (~(arr_20 [i_4] [i_4] [(unsigned char)12] [18]))))));
            }
            for (int i_9 = 2; i_9 < 20; i_9 += 2) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned int i_10 = 1; i_10 < 20; i_10 += 1) /* same iter space */
                {
                    arr_32 [6U] [(unsigned char)2] [i_7 - 2] [i_10] [(unsigned char)2] [i_10 + 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_7 - 1] [20ULL] [i_9 + 1]))));
                    var_23 = ((/* implicit */long long int) arr_17 [i_4] [i_7]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        arr_36 [i_4] [(unsigned char)20] [i_11] [i_9] [i_10] [i_11] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_10 - 1] [i_10 + 1] [i_10 + 2]))));
                        arr_37 [i_4] [i_10] [i_7] [i_4] [i_9] [i_10 + 2] [i_11] = ((/* implicit */unsigned long long int) arr_26 [i_11] [i_10 + 1] [(unsigned char)0] [i_10]);
                        arr_38 [i_4] [i_10] [i_10] |= ((/* implicit */short) arr_33 [i_7] [i_7 - 1]);
                        arr_39 [i_4] [i_7 + 1] [(unsigned char)6] [i_4] [i_10] [i_4] |= ((/* implicit */_Bool) ((unsigned char) arr_9 [i_7] [4LL]));
                    }
                }
                for (unsigned int i_12 = 1; i_12 < 20; i_12 += 1) /* same iter space */
                {
                    arr_43 [i_4] [i_7 - 2] [i_9] [i_9] [i_12] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_4] [i_7 + 1])) ? (((/* implicit */int) arr_1 [(signed char)13] [i_7 + 1])) : (((/* implicit */int) arr_1 [i_4] [i_7 + 1]))));
                    /* LoopSeq 1 */
                    for (short i_13 = 3; i_13 < 20; i_13 += 1) 
                    {
                        var_24 ^= ((/* implicit */unsigned int) ((var_9) ? (((/* implicit */int) arr_18 [i_7 + 1] [i_7 + 1])) : (((/* implicit */int) arr_18 [i_7 - 1] [i_7]))));
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_17 [18ULL] [i_4]))))))))));
                        var_26 ^= ((/* implicit */unsigned long long int) (short)-32760);
                        var_27 = ((/* implicit */unsigned long long int) (+((+(var_4)))));
                        var_28 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_4] [i_4] [i_4]))));
                    }
                    var_29 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_4] [i_4]))) : (arr_46 [i_9] [i_9 - 2] [i_7 - 2])));
                    var_30 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                }
                for (unsigned int i_14 = 1; i_14 < 20; i_14 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))));
                    var_32 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) var_5))))));
                    var_33 = ((/* implicit */unsigned int) var_2);
                }
                for (unsigned char i_15 = 1; i_15 < 21; i_15 += 3) 
                {
                    var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) (-(((/* implicit */int) (short)32767)))))));
                    arr_52 [i_7] [4LL] = ((/* implicit */int) (signed char)15);
                    arr_53 [i_7] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_28 [i_15 + 1]))));
                }
                var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_35 [i_4] [i_7] [i_4] [i_9 + 1] [i_4])) || (((/* implicit */_Bool) var_4)))))));
                arr_54 [i_4] = (!(((/* implicit */_Bool) arr_48 [i_7 - 2] [i_7 + 1] [i_7 - 1] [i_9 + 1])));
            }
            /* LoopNest 2 */
            for (short i_16 = 1; i_16 < 21; i_16 += 3) 
            {
                for (unsigned char i_17 = 0; i_17 < 22; i_17 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_18 = 2; i_18 < 19; i_18 += 3) 
                        {
                            var_36 = ((/* implicit */short) (unsigned char)216);
                            var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) 3244090221237912265LL))));
                            arr_64 [i_17] = (~(((/* implicit */int) arr_18 [i_7 - 2] [16ULL])));
                        }
                        for (unsigned char i_19 = 2; i_19 < 20; i_19 += 3) 
                        {
                            arr_68 [i_19 + 2] [i_17] [i_16 - 1] [i_17] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_4] [i_17] [(signed char)11] [i_7 - 1] [i_16 + 1] [i_16 + 1] [i_19 - 1])) ? (((/* implicit */int) arr_34 [i_4] [i_17] [(signed char)16] [i_16] [(signed char)16] [i_16 + 1] [i_19 - 2])) : (-1955136291)));
                            arr_69 [(unsigned char)13] [(unsigned char)13] [i_7 + 1] [(unsigned char)18] [(unsigned char)13] [i_19] [i_17] = ((/* implicit */short) (-((~(((/* implicit */int) arr_35 [i_19] [i_17] [i_17] [i_7] [i_4]))))));
                        }
                        arr_70 [i_17] = ((/* implicit */unsigned int) var_4);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_20 = 1; i_20 < 20; i_20 += 3) 
            {
                for (signed char i_21 = 0; i_21 < 22; i_21 += 4) 
                {
                    {
                        var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_31 [8] [8] [i_20] [i_7] [i_20 + 1]))));
                        var_39 = ((/* implicit */unsigned char) 132443448U);
                    }
                } 
            } 
            var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) arr_48 [i_4] [i_4] [14U] [i_4]))));
        }
    }
    var_41 = ((/* implicit */unsigned char) max((var_41), ((unsigned char)178)));
}
