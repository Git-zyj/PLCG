/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181918
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
    var_11 = ((/* implicit */signed char) var_2);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_12 = ((/* implicit */short) var_6);
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) var_7)))));
                            arr_14 [i_3] [i_1] [i_2] [i_3] [i_0] [i_3] = ((/* implicit */_Bool) ((arr_8 [i_4] [14] [(unsigned short)7] [(unsigned short)7] [i_4]) << (((((/* implicit */int) arr_11 [i_0] [8ULL] [i_2] [i_3] [i_4])) - (72)))));
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_4))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */long long int) ((arr_13 [i_0] [i_2]) > (arr_13 [i_2] [i_2])));
            }
            /* LoopSeq 2 */
            for (short i_5 = 2; i_5 < 17; i_5 += 3) 
            {
                arr_19 [i_1] [i_5] = arr_0 [i_5];
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
                {
                    for (int i_7 = 1; i_7 < 18; i_7 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) ((((arr_8 [i_7 + 1] [i_6] [8LL] [i_1] [(_Bool)1]) * (((/* implicit */unsigned long long int) arr_22 [i_5] [(unsigned char)3] [i_6] [i_7])))) * (((((/* implicit */unsigned long long int) var_5)) / (arr_5 [i_0] [18ULL] [i_0] [(signed char)1])))));
                            arr_25 [i_5] [i_1] [i_1] [i_1] [(unsigned short)9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) 4946322235357057808ULL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(short)15] [i_1] [i_1] [i_1] [15U]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5] [i_7 + 1])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 17; i_8 += 1) 
                {
                    for (short i_9 = 3; i_9 < 18; i_9 += 4) 
                    {
                        {
                            arr_30 [i_5] = var_3;
                            var_17 = ((/* implicit */unsigned long long int) (short)32750);
                        }
                    } 
                } 
                arr_31 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) 13500421838352493808ULL);
            }
            for (unsigned long long int i_10 = 2; i_10 < 18; i_10 += 1) 
            {
                arr_34 [i_10 + 1] = ((/* implicit */unsigned char) arr_21 [i_1] [i_1] [i_10 + 1] [i_10] [i_0] [(unsigned char)0]);
                arr_35 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_11 [i_1] [i_1] [i_10 + 1] [i_0] [i_0]))));
                /* LoopSeq 1 */
                for (unsigned short i_11 = 0; i_11 < 19; i_11 += 4) 
                {
                    arr_38 [i_10] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_0])) : (((/* implicit */int) var_10)))));
                    var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
                }
            }
            /* LoopNest 2 */
            for (signed char i_12 = 3; i_12 < 17; i_12 += 4) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 4) 
                {
                    {
                        arr_45 [i_0] [(signed char)16] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_7 [i_12] [i_12 - 2] [i_12 + 2]);
                        arr_46 [7LL] [(short)18] [(short)18] [i_13] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 4121824379U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)56))) : (4946322235357057831ULL))) << (((((int) arr_2 [i_0] [i_0] [i_0])) - (1054082490)))));
                        var_19 = ((/* implicit */unsigned char) (~(4121824379U)));
                        var_20 = ((/* implicit */int) ((signed char) arr_10 [i_1] [i_1] [i_1] [i_1] [(signed char)14]));
                        arr_47 [i_13] [i_1] [8LL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_13] [(unsigned char)16] [i_1] [i_1] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [16ULL] [i_0] [10LL])) * (((/* implicit */int) (unsigned short)0))))) : (arr_22 [i_0] [i_0] [i_1] [4U])));
                    }
                } 
            } 
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_14 = 1; i_14 < 18; i_14 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) arr_22 [(unsigned short)4] [(unsigned short)4] [i_14] [i_14]);
        arr_52 [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_3 [i_14 + 1] [18LL] [(short)18]))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)15))) : (arr_3 [i_14] [i_14] [i_14]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)126))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_15 = 0; i_15 < 11; i_15 += 3) 
    {
        arr_55 [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_24 [i_15] [i_15] [i_15] [i_15] [6]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_2)) : (var_3)))) : (arr_27 [i_15] [i_15])));
        arr_56 [i_15] [2LL] = var_0;
        var_22 = ((/* implicit */long long int) arr_18 [i_15] [i_15]);
    }
}
