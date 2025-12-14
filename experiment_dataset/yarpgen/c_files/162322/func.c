/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162322
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                var_10 &= ((/* implicit */_Bool) (unsigned short)65521);
                var_11 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((-(arr_6 [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                {
                    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (7272447557380512740ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4]))))))));
                    /* LoopSeq 3 */
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            var_13 = ((/* implicit */unsigned short) arr_7 [i_3]);
                            var_14 = ((/* implicit */unsigned short) 9223372036854775807LL);
                            var_15 = ((/* implicit */long long int) min(((((-(arr_17 [i_2] [i_3] [i_4] [i_5] [i_6]))) != (((/* implicit */long long int) ((/* implicit */int) var_2))))), (var_9)));
                        }
                        for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            arr_21 [i_2] [i_3] [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? ((~(((((/* implicit */int) (unsigned short)63912)) | (arr_11 [i_2] [i_5] [i_5]))))) : (((/* implicit */int) var_8))));
                            arr_22 [i_2] [i_3] [i_4] [i_3] [i_3] [i_2] [i_5] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((var_9) ? (var_0) : (var_0)))) ? (((/* implicit */long long int) arr_18 [i_5])) : (((var_9) ? (var_4) : (((/* implicit */long long int) -8388608))))))));
                        }
                        var_16 += ((/* implicit */signed char) (-(((/* implicit */int) arr_9 [i_3]))));
                        arr_23 [i_4] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_2] [i_5])) ? (arr_8 [i_2] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2]))))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_5]))) : (arr_8 [i_2] [i_4])))));
                    }
                    for (unsigned short i_8 = 3; i_8 < 12; i_8 += 2) 
                    {
                        arr_26 [i_4] [i_3] [(_Bool)1] [i_8] = ((/* implicit */long long int) var_3);
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2]))) / (((((/* implicit */_Bool) (+(arr_10 [i_2] [i_2])))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_8 + 1] [i_8 + 1] [i_8 - 3] [i_8 + 1])))))));
                        var_18 = ((/* implicit */int) arr_7 [i_8 + 2]);
                    }
                    /* vectorizable */
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_24 [i_2] [3ULL] [i_3] [i_4] [i_9])))))) ^ ((+(arr_24 [i_2] [i_3] [(unsigned char)11] [i_4] [i_4])))));
                        var_20 ^= ((/* implicit */signed char) var_9);
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 2) 
                        {
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(var_5))))));
                            var_22 = ((/* implicit */unsigned char) arr_18 [i_4]);
                            var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_5))))));
                            arr_32 [i_2] [i_3] [i_4] [14LL] [i_10] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_28 [i_10] [i_9] [5LL] [5LL])))) ? (((/* implicit */long long int) arr_11 [2U] [2U] [i_9])) : (var_1)));
                            var_24 -= ((/* implicit */signed char) var_4);
                        }
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_2] [i_9] [i_4] [i_3] [i_2] [i_4] [i_9])) ? (arr_28 [i_9] [i_4] [i_3] [i_2]) : (arr_19 [i_2] [i_2] [i_2] [i_3] [i_2] [i_2] [i_2])));
                        var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)23709)) ? (((/* implicit */int) (unsigned short)43781)) : (-1510080430)));
                    }
                }
            } 
        } 
    } 
    var_27 |= ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (unsigned short i_11 = 2; i_11 < 20; i_11 += 2) 
    {
        for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 21; i_13 += 1) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))));
                            var_29 = ((/* implicit */_Bool) (+(1776898886)));
                            var_30 = ((/* implicit */signed char) ((((var_7) ? (arr_37 [i_12] [i_12]) : (arr_37 [i_12] [i_12]))) ^ ((~(arr_37 [i_12] [i_12])))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned char) arr_34 [i_11 + 1]);
                var_32 = ((/* implicit */unsigned int) arr_41 [i_11 - 2] [i_11 - 2]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    arr_46 [i_11] [i_12] [i_15] = ((/* implicit */unsigned int) ((arr_38 [i_12]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_12])))));
                    arr_47 [(_Bool)1] [(_Bool)1] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_12] [i_12])) || (((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_34 [i_11]))))));
                }
                for (unsigned char i_16 = 0; i_16 < 21; i_16 += 3) 
                {
                    arr_50 [i_11] [i_12] [i_12] [i_16] = var_0;
                    arr_51 [i_11 - 1] [i_12] = ((/* implicit */unsigned short) arr_49 [i_11 - 1] [i_12] [i_12] [i_12]);
                    arr_52 [i_11 + 1] [i_12] [i_12] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_49 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 - 1]))));
                    var_33 = ((/* implicit */long long int) var_0);
                }
                var_34 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((var_1) + (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-18)), (var_2)))))))));
            }
        } 
    } 
}
