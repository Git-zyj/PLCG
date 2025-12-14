/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162792
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) 1423871698))));
            var_16 &= 1423871698;
        }
        arr_5 [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_2 = 2; i_2 < 15; i_2 += 4) 
        {
            var_17 = ((((/* implicit */_Bool) var_1)) ? (arr_1 [i_2 - 2] [i_2 + 2]) : (arr_1 [i_2 - 2] [i_2 + 2]));
            var_18 = ((/* implicit */long long int) var_13);
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            for (long long int i_4 = 3; i_4 < 16; i_4 += 2) 
            {
                {
                    var_19 = var_1;
                    arr_12 [i_4] [i_4] [i_4] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) min((381245426653510580LL), (((/* implicit */long long int) arr_7 [i_3])))))))) ? (min((5633603617238941180ULL), (arr_3 [i_0] [13LL]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 416159463)) ? (arr_0 [i_4 - 1]) : (arr_0 [i_4 - 2]))))));
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    for (short i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_13 [0LL]))));
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 4) 
                {
                    {
                        arr_23 [i_5] [i_6] [i_7] [i_5] = ((/* implicit */unsigned long long int) arr_13 [i_5]);
                        var_21 &= min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */long long int) arr_13 [i_6])) > (1116892707587883008LL)))), (arr_21 [i_5] [i_6] [i_7] [i_8])))), (((((/* implicit */_Bool) (short)-24076)) ? ((+(2149234742336273065ULL))) : (((/* implicit */unsigned long long int) ((int) arr_19 [(unsigned char)12] [i_7] [i_8 - 1]))))));
                        var_22 = ((/* implicit */long long int) arr_16 [i_5] [i_6]);
                        /* LoopSeq 3 */
                        for (int i_9 = 0; i_9 < 20; i_9 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */int) 7748411419571115547LL);
                            var_24 += ((/* implicit */short) arr_24 [10LL] [i_6] [3LL] [i_8] [i_9]);
                        }
                        for (int i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */long long int) (-(max((max((1423871698), (((/* implicit */int) var_7)))), (var_2)))));
                            var_26 = arr_13 [i_5];
                            var_27 = max((min((((/* implicit */long long int) (short)-24076)), (arr_20 [i_6] [i_8 + 1] [i_8 - 1] [i_8]))), (((arr_21 [i_8 - 1] [i_8 - 1] [i_10] [i_10]) % (arr_24 [i_8 + 1] [i_8 + 1] [i_7] [i_5] [15LL]))));
                        }
                        for (int i_11 = 0; i_11 < 20; i_11 += 1) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_16 [i_11] [i_11])) : (((/* implicit */int) arr_17 [i_7] [i_11]))));
                            var_29 = min((arr_26 [i_8 - 1] [i_11] [i_11] [i_11] [(short)12] [i_11] [(short)1]), (((/* implicit */long long int) max((((/* implicit */int) arr_17 [i_8 - 1] [14LL])), (var_10)))));
                            var_30 &= ((/* implicit */short) var_13);
                        }
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_12) : (((arr_22 [i_5] [i_5] [i_5] [i_5]) % (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5] [i_5])))))));
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 20; i_12 += 2) 
        {
            for (short i_13 = 0; i_13 < 20; i_13 += 4) 
            {
                {
                    var_32 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) arr_25 [i_5] [i_5] [i_13] [i_13] [i_13] [i_12] [i_5])), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1423871698)) ? (var_12) : (((/* implicit */long long int) 1715452269))))), (arr_27 [i_5])))));
                    arr_34 [i_5] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1099511627775LL)) ? (((((/* implicit */_Bool) var_13)) ? (arr_21 [i_5] [i_13] [i_13] [i_12]) : (arr_31 [i_5] [i_12]))) : (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_13] [i_13] [i_13] [(short)8] [i_13] [0LL])))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)85)), (max((9223372036854775807LL), (((/* implicit */long long int) var_1))))))) : (((((/* implicit */_Bool) 2147483647)) ? (min((0ULL), (((/* implicit */unsigned long long int) arr_20 [i_5] [i_12] [2ULL] [i_13])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))));
                }
            } 
        } 
        var_33 = ((/* implicit */short) max(((-(((((/* implicit */_Bool) var_8)) ? (arr_30 [i_5]) : (arr_33 [i_5] [i_5] [i_5] [i_5]))))), (((/* implicit */unsigned long long int) (~(arr_21 [(unsigned char)4] [14LL] [(unsigned char)4] [i_5]))))));
    }
    for (short i_14 = 0; i_14 < 20; i_14 += 1) /* same iter space */
    {
        var_34 &= ((/* implicit */unsigned char) ((long long int) ((arr_14 [i_14]) >> (((arr_26 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] [i_14]) + (8965636011450959629LL))))));
        var_35 = ((/* implicit */int) (~(arr_20 [i_14] [i_14] [i_14] [i_14])));
    }
    for (short i_15 = 0; i_15 < 20; i_15 += 1) /* same iter space */
    {
        var_36 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_12)), (arr_19 [i_15] [i_15] [i_15])));
        var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) arr_14 [(unsigned char)17]))));
        var_38 &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_28 [i_15] [i_15] [i_15] [i_15] [i_15] [6LL])) ? (arr_20 [i_15] [i_15] [i_15] [i_15]) : (((/* implicit */long long int) arr_28 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])))), (((arr_20 [i_15] [i_15] [i_15] [(unsigned char)16]) % (((/* implicit */long long int) var_8))))));
        var_39 &= arr_28 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15];
    }
}
