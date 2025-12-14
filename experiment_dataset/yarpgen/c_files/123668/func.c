/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123668
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_4))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 7; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 2; i_3 < 6; i_3 += 4) 
                    {
                        var_11 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [(short)2])), (((((/* implicit */_Bool) arr_8 [i_1] [i_2 + 1] [i_2 - 1] [i_2] [i_3 + 4] [i_3])) ? (arr_7 [i_0] [i_2 + 1] [i_2 - 1] [i_2]) : (arr_8 [i_0] [i_2 + 1] [i_2 - 1] [i_0] [i_3 + 4] [i_3 + 4])))));
                        var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_3] [i_3 + 4] [i_3 + 3] [i_3 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))), (((unsigned int) (+(((/* implicit */int) var_6)))))));
                        arr_10 [i_0] [i_0] [i_2 - 2] [i_0] = var_1;
                        var_13 = ((/* implicit */unsigned long long int) ((unsigned char) max((arr_1 [i_2 - 2]), (arr_1 [i_2 + 2]))));
                        var_14 *= ((/* implicit */unsigned long long int) var_7);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        arr_15 [i_4] [(_Bool)1] [i_4] [i_4] [(_Bool)1] = ((/* implicit */unsigned short) var_8);
                        var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_2 + 2] [i_2 - 1] [(unsigned short)0] [i_2 + 2] [(unsigned short)0])) ? (arr_9 [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 2]) : (((/* implicit */int) var_3))));
                        arr_16 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) var_5))))) : (var_8)));
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) arr_13 [6] [6] [6] [6] [i_4] [3]))));
                        arr_17 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (arr_9 [i_1] [i_2 - 1] [i_2 + 3] [i_2])));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        arr_20 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
                        var_17 = ((short) arr_3 [i_1] [i_2] [i_2]);
                        var_18 ^= ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))) : (((var_0) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))));
                    }
                    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2 + 2] [i_1] [i_2] [i_1])) && (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_0])))) ? (((/* implicit */unsigned long long int) (+(arr_13 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2] [i_2 - 2] [(unsigned char)4])))) : (((unsigned long long int) (-(((/* implicit */int) var_3)))))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) ((short) max((((/* implicit */short) arr_12 [i_0] [i_0] [i_0] [i_0] [(short)0])), (arr_4 [i_0] [i_0] [(unsigned char)6]))))) & ((-(((/* implicit */int) var_2)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_6 = 2; i_6 < 17; i_6 += 4) 
    {
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_6))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                for (int i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))));
                            arr_36 [i_6] [i_7] [i_8] [i_7] [i_9] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_0))))) : (var_8)));
                            var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
                            arr_37 [i_6] [i_6] = ((/* implicit */long long int) arr_34 [i_6] [i_6] [i_6 - 1] [i_6] [i_6 - 2] [i_8] [i_8]);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_11 = 0; i_11 < 19; i_11 += 1) 
            {
                for (unsigned short i_12 = 0; i_12 < 19; i_12 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            var_24 = ((/* implicit */short) ((((/* implicit */int) arr_43 [i_6 - 2])) ^ (((/* implicit */int) var_3))));
                            var_25 *= (!(((/* implicit */_Bool) arr_41 [i_6] [(short)0] [i_12])));
                            var_26 += ((/* implicit */unsigned char) (-(((/* implicit */int) arr_39 [i_12] [i_7] [i_12]))));
                        }
                        var_27 = ((/* implicit */unsigned char) ((var_0) ? (arr_32 [i_6 - 2] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6]) : (arr_33 [15] [15] [15] [i_6 - 2])));
                        arr_47 [i_11] = ((/* implicit */unsigned int) (+(((int) arr_42 [i_12] [i_11] [i_7] [i_6]))));
                    }
                } 
            } 
        }
    }
}
