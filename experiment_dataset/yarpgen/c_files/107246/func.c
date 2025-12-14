/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107246
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_3 = 2; i_3 < 18; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */_Bool) ((arr_6 [i_0] [i_1] [(unsigned short)9] [i_0]) - (((/* implicit */long long int) (-(15))))));
                        arr_9 [i_0] [i_1] [7LL] [i_3] [7LL] [(_Bool)1] = ((/* implicit */unsigned char) (-(((((-10) + (2147483647))) >> (((((/* implicit */int) (signed char)70)) - (69)))))));
                        var_19 = ((/* implicit */short) min((-1987795549), (((/* implicit */int) (unsigned short)19792))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        var_20 = ((/* implicit */signed char) (-(((((/* implicit */int) (unsigned short)45743)) & (((/* implicit */int) arr_0 [i_0] [i_1]))))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            arr_16 [i_0] [0] [i_2] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_1] [i_2] [(_Bool)1] [(short)18])) >= (((/* implicit */int) (unsigned short)19786))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_8 [3LL] [i_1] [i_2] [i_4] [i_5] [(_Bool)1])))))));
                            arr_17 [i_4] [i_1] [i_2] [i_1] [4] = ((/* implicit */short) ((((/* implicit */int) ((1987795548) > (((/* implicit */int) arr_11 [i_5] [(short)14] [i_0] [i_1] [i_0] [i_0]))))) ^ (var_2)));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_1] [i_5])) % (((/* implicit */int) arr_4 [19LL] [i_1] [i_1] [(short)9]))));
                        }
                        var_22 = ((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_0] [(unsigned char)19] [5LL] [(unsigned char)13]);
                    }
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        arr_21 [i_0] [0U] [i_0] [i_6] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(21)))) ? (min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_19 [(unsigned short)8] [(unsigned short)8] [(unsigned char)9] [i_6])), (var_5)))), ((-(arr_14 [12] [(unsigned char)13] [(unsigned short)4] [i_2] [(unsigned short)9] [(short)9]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_2])))));
                        arr_22 [(unsigned short)2] [i_1] [i_1] [i_2] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_0] [i_1] [4LL] [i_6])) < (((/* implicit */int) var_15))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_12)), (arr_14 [(unsigned char)1] [(unsigned short)1] [i_2] [(unsigned short)1] [i_2] [i_6])))) ? (((((/* implicit */_Bool) 1987795548)) ? (((/* implicit */unsigned int) -22)) : (3742497177U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                        var_23 = var_0;
                        /* LoopSeq 2 */
                        for (int i_7 = 2; i_7 < 19; i_7 += 2) 
                        {
                            var_24 ^= ((/* implicit */long long int) (((_Bool)1) ? (min((((((/* implicit */_Bool) arr_6 [i_7] [i_6] [i_2] [i_6])) ? (2475189024U) : (((/* implicit */unsigned int) -1426054460)))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_1] [9LL] [i_1] [12LL])) >= (((/* implicit */int) var_12))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [11])))));
                            var_25 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_7 + 1] [i_7] [i_7])))))) == (max((arr_14 [i_2] [i_7] [i_7 + 1] [i_7] [i_7] [i_7]), (arr_14 [i_1] [i_2] [i_7 + 1] [i_7] [3] [i_7])))));
                            arr_25 [i_0] [(unsigned char)12] [i_2] [3U] [3U] = ((/* implicit */signed char) min((((/* implicit */int) max((arr_11 [i_7 + 1] [10LL] [i_7 - 2] [18] [i_7 + 1] [18]), (arr_11 [i_7 - 2] [i_7] [i_7 - 2] [10LL] [i_7] [(_Bool)1])))), (((((/* implicit */_Bool) arr_11 [i_7 + 1] [18LL] [i_7 - 2] [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_11 [i_7 + 1] [i_7 + 1] [i_7 - 1] [(short)9] [(short)10] [i_7])) : (((/* implicit */int) arr_11 [i_7 + 1] [i_7] [i_7 - 1] [13LL] [i_7] [(unsigned char)10]))))));
                        }
                        for (short i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            arr_30 [i_0] [i_8] [i_2] [2LL] [i_0] = ((/* implicit */unsigned char) min((min(((unsigned short)15948), (((/* implicit */unsigned short) (signed char)-78)))), (((/* implicit */unsigned short) arr_10 [i_6] [i_2] [i_1] [i_6]))));
                            arr_31 [i_0] [i_0] [i_0] [i_0] [(unsigned short)17] [i_0] = ((/* implicit */_Bool) (-(((((/* implicit */int) min((arr_7 [i_0]), (((/* implicit */signed char) var_4))))) >> (((min((9223372036854775804LL), (9223372036854775804LL))) - (9223372036854775798LL)))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        for (int i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 3742497165U)) ? (max((((/* implicit */long long int) (unsigned char)204)), (max((((/* implicit */long long int) (signed char)53)), (9223372036854775804LL))))) : (((/* implicit */long long int) (+(-1426054475)))))))));
                                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) arr_27 [(unsigned short)7] [6LL] [i_2] [(signed char)14]))));
                            }
                        } 
                    } 
                    arr_39 [i_1] = ((((arr_32 [i_1]) ? (((/* implicit */int) arr_32 [i_0])) : (((/* implicit */int) var_1)))) > (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        for (signed char i_12 = 0; i_12 < 20; i_12 += 2) 
                        {
                            {
                                var_28 = (-(((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_0] [i_11] [i_12])) ? (((/* implicit */int) arr_40 [i_0] [i_2] [i_2] [i_12])) : (((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [(signed char)2])))));
                                arr_46 [i_0] [i_0] [i_2] [i_0] [i_12] = ((/* implicit */unsigned short) -6114583134428023496LL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_13 = 2; i_13 < 21; i_13 += 4) 
    {
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_15 = 0; i_15 < 25; i_15 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                arr_60 [i_14] [i_17] [i_15] [i_15] [(unsigned short)5] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1426054460)) ? (848125813) : (((/* implicit */int) (signed char)70))));
                                arr_61 [i_13] [(_Bool)1] [i_14] [(_Bool)1] [(short)16] = (-(((((/* implicit */_Bool) arr_49 [i_14] [0LL] [i_15])) ? (max((((/* implicit */long long int) 1987795548)), (var_11))) : (var_17))));
                            }
                        } 
                    } 
                    arr_62 [i_14] [i_15] [i_14] [i_14] = ((/* implicit */short) (((!((!(((/* implicit */_Bool) (unsigned short)49588)))))) && (((/* implicit */_Bool) (signed char)43))));
                    arr_63 [i_13] |= ((/* implicit */unsigned char) max(((+(arr_54 [i_13 + 1] [4LL] [i_14] [i_14]))), (max((arr_54 [i_13 + 2] [i_13] [i_15] [i_15]), (arr_54 [i_13 + 4] [i_15] [i_15] [13])))));
                }
                var_29 = ((/* implicit */unsigned short) min(((-(max((arr_49 [i_14] [i_14] [19LL]), (var_0))))), (((/* implicit */int) (!(arr_59 [i_13 - 1] [i_13 - 1]))))));
            }
        } 
    } 
}
