/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171923
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
    var_19 = var_3;
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0]);
        /* LoopSeq 3 */
        for (int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        {
                            var_20 ^= ((/* implicit */unsigned short) ((unsigned int) ((unsigned short) arr_5 [i_0] [i_0] [i_1] [i_1 + 2])));
                            arr_13 [i_4] [i_0] [i_2] [i_2] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [15] [i_3] [i_4] [(unsigned char)8])) ? (var_3) : (((/* implicit */long long int) var_13))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (arr_10 [i_4] [i_3] [i_3] [i_0] [9LL] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(unsigned char)4])))))) : (arr_6 [i_1] [i_0] [i_0] [i_1])))) ? (min((arr_9 [i_0] [i_1 + 2] [(unsigned char)8] [(unsigned char)12] [i_4]), (arr_9 [i_3] [i_1 + 2] [i_2] [10LL] [10LL]))) : ((-2147483647 - 1)));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */unsigned short) max((var_21), (((unsigned short) (+(var_15))))));
            arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) arr_8 [i_1]);
        }
        for (long long int i_5 = 3; i_5 < 15; i_5 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                var_22 += ((unsigned short) 2032201812);
                arr_20 [i_6] [2U] [2U] [i_6] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1668880259))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 13; i_7 += 1) 
                {
                    for (unsigned short i_8 = 2; i_8 < 14; i_8 += 2) 
                    {
                        {
                            arr_26 [i_0] [i_5 + 2] [i_5] [i_5] [i_5 + 2] [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_5 [(unsigned char)8] [(unsigned short)11] [i_0] [4LL]), (arr_18 [(unsigned short)2] [i_5] [i_0] [i_0])))) ? (((/* implicit */int) arr_21 [i_0] [i_5 - 3] [i_5] [i_5] [i_5])) : (((int) var_0))))) ? (arr_10 [i_8] [i_7] [9] [i_6] [i_6] [i_5] [i_0]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_25 [i_5 - 2] [i_7 + 2] [i_7] [i_8] [i_8] [i_8 + 1] [i_8]))))));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((unsigned char) min((arr_17 [i_7 + 4] [i_8 + 3] [i_5 + 2]), (arr_17 [i_7 + 4] [i_8 + 3] [i_5 + 2])))))));
                        }
                    } 
                } 
            }
            for (unsigned int i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_9] [(unsigned char)2])) ? (((/* implicit */int) arr_18 [i_0] [i_5] [i_0] [10])) : (((/* implicit */int) ((((/* implicit */_Bool) 2032201812)) && (((/* implicit */_Bool) var_6)))))));
                arr_31 [i_0] = ((long long int) (~((~(((/* implicit */int) arr_4 [i_0]))))));
            }
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 17; i_10 += 2) 
            {
                for (unsigned short i_11 = 4; i_11 < 16; i_11 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) arr_21 [i_10] [i_5] [i_5] [i_11 - 1] [(unsigned char)4]))));
                        arr_37 [i_0] [i_5] [i_0] [i_11] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_8 [i_11])) : (((/* implicit */int) var_10)))))), (min((((/* implicit */long long int) ((unsigned int) arr_29 [i_0]))), (((long long int) (unsigned short)65525))))));
                        var_26 = arr_5 [i_0] [i_5] [i_0] [i_11];
                        var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65523)) ? (((((/* implicit */_Bool) arr_22 [i_5] [i_5] [i_5] [i_5])) ? (arr_22 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5] [i_5 - 3] [i_10] [i_10] [i_5] [i_5 - 1]))))) : (((/* implicit */long long int) 0U))));
                    }
                } 
            } 
            arr_38 [i_0] [i_0] = ((/* implicit */int) (((-((-(arr_6 [i_5] [i_0] [i_0] [i_0]))))) ^ (((((/* implicit */_Bool) var_14)) ? (((long long int) arr_35 [i_0] [i_5] [i_5] [i_0])) : (((/* implicit */long long int) arr_10 [i_0] [i_5 - 3] [i_5 - 3] [i_5 - 1] [3LL] [i_5] [i_5]))))));
            var_28 -= ((/* implicit */unsigned short) ((arr_30 [16] [i_5 + 1] [i_5]) / (arr_30 [8LL] [i_5 + 1] [i_5])));
        }
        for (unsigned short i_12 = 0; i_12 < 17; i_12 += 2) 
        {
            var_29 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_23 [i_0])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0]))))));
            var_30 = ((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_0] [i_0] [i_12] [i_12] [i_12]);
            arr_42 [i_0] [i_12] = ((/* implicit */long long int) arr_23 [i_0]);
            var_31 = ((unsigned int) (!(((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0]))));
        }
    }
    for (int i_13 = 3; i_13 < 12; i_13 += 1) 
    {
        var_32 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_45 [i_13 + 1])))), (((((/* implicit */int) arr_45 [i_13 - 1])) | (((/* implicit */int) arr_45 [i_13 - 1]))))));
        /* LoopSeq 2 */
        for (unsigned int i_14 = 4; i_14 < 13; i_14 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_15 = 0; i_15 < 14; i_15 += 4) 
            {
                arr_51 [i_13] [i_13] [i_13] [i_13 - 2] = arr_19 [i_13 - 1] [i_14 - 1] [i_15];
                arr_52 [i_15] [i_15] = ((/* implicit */unsigned short) (+(768392112)));
            }
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_16 = 2; i_16 < 10; i_16 += 4) /* same iter space */
            {
                var_33 += ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) -686253055))));
                var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_35 [i_13] [i_14] [i_16] [i_16])) ? (((/* implicit */int) arr_41 [i_13] [i_14] [i_16])) : (((/* implicit */int) var_4))))))));
                var_35 = 686253054;
                var_36 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_13 + 1] [i_13 + 1] [i_14 - 2] [i_16 + 3] [i_16])) ? (var_17) : (arr_9 [i_13 + 2] [i_14] [i_14 - 3] [i_16 + 1] [i_16])));
                var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_55 [i_14] [i_13] [i_13 + 1])) ? (arr_36 [i_14 - 3] [i_16] [i_16] [i_13 + 1]) : (((/* implicit */int) var_6)))))));
            }
            for (unsigned short i_17 = 2; i_17 < 10; i_17 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_18 = 0; i_18 < 14; i_18 += 1) 
                {
                    for (unsigned short i_19 = 4; i_19 < 12; i_19 += 1) 
                    {
                        {
                            var_38 = (~(((/* implicit */int) var_5)));
                            var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) max((arr_35 [i_17] [6U] [i_14] [i_17]), (((/* implicit */long long int) (+(((unsigned int) var_0))))))))));
                            arr_63 [i_19] [i_14] [i_19 - 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) min((arr_53 [i_13 + 2] [i_17 - 2] [i_18]), (arr_53 [i_13 - 2] [i_17 - 2] [i_18])))) == (arr_15 [i_13 + 1] [i_17 + 3] [i_17])));
                        }
                    } 
                } 
                var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((unsigned char) var_11)))));
                arr_64 [i_13 - 3] [i_13] [i_13 - 3] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_43 [i_13] [i_13]))));
                var_41 += ((/* implicit */unsigned char) min((((/* implicit */long long int) min((arr_54 [i_13 - 3] [i_14 - 4] [i_17 + 1]), (((/* implicit */int) arr_57 [i_13 - 1] [i_14 - 2] [i_17 + 1]))))), (var_11)));
                arr_65 [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_54 [i_17 - 1] [i_14] [i_13 + 1])) ? (((((/* implicit */_Bool) var_7)) ? (arr_54 [i_17 + 3] [i_17 + 3] [i_13 + 2]) : (arr_54 [i_17 + 1] [0] [i_13 + 2]))) : ((+(arr_54 [i_17 + 2] [3] [i_13 - 1])))));
            }
            for (unsigned short i_20 = 2; i_20 < 10; i_20 += 4) /* same iter space */
            {
                var_42 += ((/* implicit */int) ((long long int) (((+(((/* implicit */int) arr_5 [i_20] [i_20] [i_20] [i_13])))) >> (((arr_32 [i_14] [i_14] [8LL] [i_14]) + (1681921482))))));
                arr_68 [i_13] = var_16;
                var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_13 + 1] [i_14 - 3] [i_20] [i_14 - 2])) ? (((/* implicit */int) arr_8 [i_20 + 4])) : (((/* implicit */int) arr_8 [i_13 - 1]))))) ? (((/* implicit */int) arr_18 [i_13 - 2] [i_14] [i_14] [i_20])) : (max((((((/* implicit */_Bool) arr_47 [i_13] [i_14])) ? (var_17) : (((/* implicit */int) (unsigned short)4)))), (-654497438)))));
            }
        }
        /* vectorizable */
        for (unsigned int i_21 = 2; i_21 < 12; i_21 += 4) 
        {
            arr_71 [i_13] [i_21] [i_21] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_13] [i_21 + 2] [i_13]))) : (-5696775340341914967LL))));
            arr_72 [i_13] [i_13] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_13 - 1] [i_21 - 2] [i_21 + 2] [i_21] [i_21] [i_21] [i_21 + 1])) ? (((/* implicit */long long int) arr_10 [i_13 - 1] [i_13 - 1] [i_21 + 2] [i_21] [13U] [i_21] [i_21 - 1])) : (var_3)));
            var_44 &= ((/* implicit */unsigned short) arr_3 [1U] [1U]);
        }
        var_45 += ((/* implicit */long long int) arr_19 [(unsigned char)8] [i_13] [14LL]);
        arr_73 [i_13] [i_13 - 1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((int) arr_33 [i_13 + 1] [8]))), ((~(8124294133048824130LL)))));
    }
}
