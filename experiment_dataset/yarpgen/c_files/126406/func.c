/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126406
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
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (long long int i_4 = 4; i_4 < 10; i_4 += 3) 
                            {
                                var_20 ^= ((/* implicit */_Bool) (~(((var_18) / (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                                var_21 -= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [3LL] [i_3])) <= (arr_8 [(_Bool)1] [i_3] [i_2]))))) * (arr_3 [i_0] [i_0] [i_0])));
                                arr_14 [i_0] [i_2] [i_2] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)32)))) || (((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 2] [i_3 - 1]))));
                            }
                            for (long long int i_5 = 3; i_5 < 9; i_5 += 3) /* same iter space */
                            {
                                var_22 = ((/* implicit */unsigned char) arr_5 [i_0]);
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) arr_7 [i_1] [5U] [i_5 + 1]))));
                                var_24 = ((/* implicit */signed char) 15044793055088787LL);
                                var_25 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)81)) - ((~(((((/* implicit */_Bool) (short)-24152)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) var_2))))))));
                            }
                            /* vectorizable */
                            for (long long int i_6 = 3; i_6 < 9; i_6 += 3) /* same iter space */
                            {
                                var_26 = ((/* implicit */long long int) max((var_26), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_10 [(short)2] [(short)2] [(unsigned short)7] [(unsigned short)7] [i_6] [i_1 - 1])))));
                                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_3 + 1] [i_6 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_6]))) : (var_4))))));
                            }
                            /* vectorizable */
                            for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                            {
                                var_28 *= ((/* implicit */short) arr_23 [3] [i_1] [3] [(_Bool)1] [1LL] [i_7]);
                                var_29 = ((/* implicit */unsigned char) max((var_29), (var_13)));
                                var_30 = (((+(-15044793055088793LL))) / (((/* implicit */long long int) arr_8 [8LL] [i_2] [i_7])));
                                var_31 -= ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)65))));
                                var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)190)))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((unsigned short) var_1))))))));
                            }
                            var_33 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0] [1LL]);
                            arr_24 [i_2] = ((/* implicit */short) var_9);
                        }
                    } 
                } 
                arr_25 [(unsigned char)10] = ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) (short)18058)) ? (arr_11 [0LL] [i_1] [i_1] [(short)6]) : (((/* implicit */int) var_2)))) / (((/* implicit */int) var_11))))));
                var_34 = ((/* implicit */int) max((var_34), ((~(((/* implicit */int) (((~(var_6))) <= (((/* implicit */int) arr_19 [5] [i_0] [i_0] [i_0] [i_1] [i_1])))))))));
                var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) arr_13 [i_1 + 1] [(short)2] [(short)0] [i_0] [i_1 - 2] [4] [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_8 = 4; i_8 < 10; i_8 += 1) 
    {
        for (long long int i_9 = 0; i_9 < 14; i_9 += 4) 
        {
            {
                arr_32 [(unsigned char)5] [(unsigned char)5] [i_9] &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_30 [i_8] [i_9])) ? (((/* implicit */int) min((arr_30 [i_8] [5ULL]), (arr_31 [i_8] [i_9])))) : (((/* implicit */int) arr_31 [i_8] [i_9]))))));
                arr_33 [i_8] [i_9] [i_9] = ((/* implicit */short) (((-(((/* implicit */int) arr_28 [i_9])))) & (-833052023)));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 1) 
    {
        var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) arr_36 [i_10] [9LL])), (var_4)))))) ^ (((((/* implicit */_Bool) (-(((/* implicit */int) arr_31 [i_10] [i_10]))))) ? (((unsigned long long int) (short)-24145)) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))))))))));
        /* LoopSeq 1 */
        for (long long int i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) var_15))));
            var_38 = ((/* implicit */short) ((arr_38 [(short)1] [10LL]) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_10] [i_11]))) : (((((/* implicit */_Bool) ((unsigned char) arr_34 [i_10]))) ? ((~(arr_35 [i_11]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3099)))))));
            arr_40 [i_10] [6LL] [i_11] |= ((/* implicit */signed char) ((_Bool) 1254391372777581991LL));
        }
        arr_41 [i_10] = var_8;
    }
    /* LoopNest 2 */
    for (short i_12 = 0; i_12 < 21; i_12 += 3) 
    {
        for (short i_13 = 0; i_13 < 21; i_13 += 3) 
        {
            {
                var_39 = ((/* implicit */short) max((var_39), (arr_47 [(signed char)18])));
                /* LoopSeq 1 */
                for (short i_14 = 1; i_14 < 20; i_14 += 3) 
                {
                    arr_50 [i_12] [(unsigned char)2] [i_12] [i_13] &= ((/* implicit */short) arr_46 [i_14 - 1]);
                    /* LoopNest 2 */
                    for (short i_15 = 1; i_15 < 19; i_15 += 4) 
                    {
                        for (short i_16 = 0; i_16 < 21; i_16 += 4) 
                        {
                            {
                                var_40 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)11535))));
                                var_41 += ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_7)) == (((/* implicit */int) (signed char)-106)))));
                            }
                        } 
                    } 
                    var_42 = ((/* implicit */long long int) (~(((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) | (var_1))))));
                }
                arr_55 [i_12] [i_13] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) var_2))))));
            }
        } 
    } 
    var_43 -= (-(((/* implicit */int) (short)-9683)));
}
