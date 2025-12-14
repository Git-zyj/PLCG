/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165768
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
    var_14 = ((/* implicit */unsigned char) var_8);
    var_15 ^= ((((/* implicit */_Bool) var_5)) ? (var_2) : (var_2));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) - (((((/* implicit */int) (unsigned char)72)) << (((var_8) - (8963227101040482049ULL)))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_17 = ((/* implicit */int) var_8);
                        arr_9 [(unsigned char)10] [i_2] [i_1] [(short)3] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_6 [i_0] [i_2])) ? (arr_7 [i_0 + 1] [i_0 + 2] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)72))))));
                    }
                } 
            } 
        } 
        arr_10 [i_0 + 1] [i_0 - 3] = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) > (((/* implicit */int) (short)-25652))));
        var_18 = ((/* implicit */unsigned long long int) (short)-27354);
    }
    for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)214)), ((-(arr_3 [(unsigned char)4])))))) % (max((var_8), (((/* implicit */unsigned long long int) var_13))))));
        var_19 += ((/* implicit */unsigned char) min((arr_13 [i_4]), ((~(arr_13 [i_4])))));
        var_20 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-27328))));
        arr_15 [i_4] = ((/* implicit */int) var_7);
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_6 = 2; i_6 < 14; i_6 += 3) 
        {
            for (unsigned char i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 15; i_8 += 1) 
                {
                    {
                        /* LoopSeq 4 */
                        for (short i_9 = 2; i_9 < 13; i_9 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((int) arr_12 [i_6]));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_3))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            arr_32 [i_5] [i_8] [(unsigned char)13] [i_5] [i_5] = ((/* implicit */int) arr_26 [7] [i_6] [i_6 + 1] [(short)14] [(short)14] [i_7]);
                            arr_33 [i_5] [i_8] [i_8] [i_8] [5] [i_6 - 2] [i_5] = ((/* implicit */int) ((unsigned char) arr_12 [i_5]));
                        }
                        for (short i_11 = 0; i_11 < 15; i_11 += 1) 
                        {
                            arr_36 [i_5] [i_7] [i_5] = ((/* implicit */unsigned char) arr_27 [i_5] [i_5] [i_5] [i_5]);
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) (short)-2629))))))));
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-1700575750) : (2147483647)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5] [i_5]))) : (((arr_31 [i_11]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_11] [i_8] [i_7] [i_7] [i_6 - 2] [i_5])))))));
                            arr_37 [(short)11] [i_5] [i_7] [i_7] [i_7] [i_8] [i_11] = var_6;
                        }
                        for (unsigned char i_12 = 0; i_12 < 15; i_12 += 1) 
                        {
                            var_25 = arr_21 [i_5] [i_6 - 1];
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6]))) : (arr_7 [i_12] [i_8] [(unsigned char)13] [i_6])))))))));
                        }
                        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 379694265)) ? (((10816705383534591964ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5] [i_6]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_6 + 1] [i_6] [14ULL] [i_6 + 1])))));
                        var_28 |= ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) & (((/* implicit */int) ((-567735039) >= (((/* implicit */int) var_6)))))));
                        arr_41 [i_5] [i_6] [i_7] [i_8] [(short)14] [(unsigned char)0] &= ((/* implicit */unsigned long long int) var_3);
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */int) var_10);
        /* LoopNest 2 */
        for (unsigned char i_13 = 2; i_13 < 14; i_13 += 1) 
        {
            for (unsigned char i_14 = 2; i_14 < 13; i_14 += 4) 
            {
                {
                    arr_48 [i_5] = ((/* implicit */short) (~(((/* implicit */int) arr_43 [(unsigned char)0] [i_14 - 1] [i_5]))));
                    var_30 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_14 - 2] [i_14 + 2] [i_14 + 1] [i_13 - 2] [i_13 - 2] [i_13 - 1])) ? (((/* implicit */int) arr_38 [i_14 - 1] [i_14 - 1] [i_14 + 2] [i_13 - 2] [i_13 - 2] [i_13 + 1])) : (((/* implicit */int) var_6))));
                    var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((int) arr_21 [i_14] [10ULL])) ^ (var_3))))));
                }
            } 
        } 
        arr_49 [i_5] = ((/* implicit */short) ((((/* implicit */int) ((arr_0 [i_5] [i_5]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) & (((/* implicit */int) arr_17 [i_5]))));
        /* LoopNest 3 */
        for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 1) 
        {
            for (int i_16 = 0; i_16 < 15; i_16 += 3) 
            {
                for (unsigned char i_17 = 2; i_17 < 14; i_17 += 4) 
                {
                    {
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_25 [i_5] [i_15] [i_16] [i_17 - 1])) >= (((/* implicit */int) arr_25 [(unsigned char)14] [i_15] [i_16] [i_17 - 1]))));
                        arr_58 [i_5] [i_15] [i_5] [i_16] [i_17 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [3ULL] [i_15] [i_16] [(unsigned char)4] [(short)8] [i_17])) ? (((/* implicit */int) arr_26 [i_15] [i_17 - 2] [i_17 + 1] [i_17 + 1] [i_17 - 2] [i_17])) : (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 1) /* same iter space */
    {
        var_33 |= ((/* implicit */unsigned char) var_1);
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 15; i_19 += 1) 
        {
            for (unsigned char i_20 = 0; i_20 < 15; i_20 += 1) 
            {
                for (unsigned char i_21 = 0; i_21 < 15; i_21 += 1) 
                {
                    {
                        var_34 = ((/* implicit */unsigned char) ((short) arr_1 [i_18]));
                        /* LoopSeq 1 */
                        for (unsigned char i_22 = 1; i_22 < 14; i_22 += 4) 
                        {
                            arr_74 [i_18] [i_19] [i_19] [i_21] [i_22 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_22 - 1] [i_19] [i_20] [i_21] [i_22])) ? (((/* implicit */int) var_12)) : (var_11)))) ? (7209689999598056478ULL) : (((/* implicit */unsigned long long int) arr_55 [i_22 - 1] [i_19] [i_20] [(unsigned char)1] [i_22]))));
                            arr_75 [i_18] [i_18] [i_18] [i_19] [i_18] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-2617)) ^ (((/* implicit */int) (short)-23375))))) ? (((/* implicit */int) ((1604234499297728996ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))) : (((/* implicit */int) arr_22 [i_19] [i_22 - 1])))));
                        }
                    }
                } 
            } 
        } 
    }
    var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((short) 567735035)))));
    var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) var_7)) | (var_2))) : (((/* implicit */int) var_5)))))))));
}
