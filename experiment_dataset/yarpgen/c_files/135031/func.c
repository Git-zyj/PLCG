/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135031
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
    var_15 ^= ((/* implicit */unsigned short) (-(var_10)));
    var_16 ^= ((/* implicit */short) (-(((/* implicit */int) var_13))));
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) max(((+((+(((/* implicit */int) var_11)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-28043)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (short)28032)))))) >= (var_7)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            arr_6 [i_0] [i_1] [1LL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_1 [i_1]))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 4; i_3 < 11; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_0] [i_3 - 1] [i_3 - 4] [i_3 - 1])) ? (((/* implicit */int) arr_11 [i_3 - 4] [i_3 - 2] [i_3 - 2] [i_3 - 2])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2])))))));
                    }
                } 
            } 
        }
        for (unsigned char i_4 = 1; i_4 < 14; i_4 += 1) 
        {
            var_20 = ((/* implicit */long long int) (((((-(((/* implicit */int) (short)28073)))) + (2147483647))) >> (((((/* implicit */int) var_13)) + (28896)))));
            var_21 = ((/* implicit */_Bool) var_14);
            var_22 = ((/* implicit */unsigned long long int) var_1);
            /* LoopNest 3 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) arr_19 [(short)12] [i_4] [i_4])))))));
                            var_24 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)28034))));
                        }
                    } 
                } 
            } 
        }
        for (short i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            /* LoopNest 3 */
            for (long long int i_9 = 3; i_9 < 14; i_9 += 4) 
            {
                for (unsigned char i_10 = 0; i_10 < 15; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_37 [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) > ((+(16892842023833156316ULL)))));
                            var_25 |= ((-1920089282741847726LL) - (arr_12 [i_0] [i_9 - 3]));
                            var_26 = (short)-28040;
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */short) ((var_12) & (((/* implicit */unsigned long long int) 897006637))));
            arr_38 [10U] &= ((/* implicit */unsigned short) arr_3 [i_0]);
            /* LoopNest 3 */
            for (unsigned short i_12 = 0; i_12 < 15; i_12 += 4) 
            {
                for (unsigned short i_13 = 0; i_13 < 15; i_13 += 1) 
                {
                    for (short i_14 = 3; i_14 < 14; i_14 += 4) 
                    {
                        {
                            var_28 += ((/* implicit */_Bool) var_12);
                            arr_48 [i_0] [i_12] [(unsigned short)14] [i_12] [i_8] [i_12] [i_0] &= ((/* implicit */_Bool) (-(18446744073709551613ULL)));
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-28063)) ? (((/* implicit */int) ((18446744073709551613ULL) != (var_12)))) : (((/* implicit */int) arr_1 [i_14 - 1]))));
                            arr_49 [i_0] [i_8] [i_12] [i_8] [(short)10] [9LL] [9LL] = ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_14 + 1]))) : (arr_7 [i_14 - 3] [i_14 + 1]));
                        }
                    } 
                } 
            } 
        }
        arr_50 [i_0] [i_0] = ((/* implicit */unsigned short) arr_44 [i_0] [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_15 = 0; i_15 < 11; i_15 += 4) 
    {
        arr_55 [i_15] = ((((/* implicit */int) arr_1 [i_15])) < (((/* implicit */int) arr_1 [i_15])));
        var_30 = ((/* implicit */long long int) (short)-28043);
        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((arr_53 [i_15]) - (var_10))))));
    }
}
