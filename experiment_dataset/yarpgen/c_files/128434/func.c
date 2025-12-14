/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128434
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) + (var_3)))) ? (min((((/* implicit */long long int) var_2)), (var_5))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned long long int) 830755706)) : (var_9)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_12 *= ((/* implicit */signed char) var_10);
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned int) arr_5 [i_1] [i_2] [i_3])) : (((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (max((((/* implicit */unsigned int) (_Bool)1)), (arr_2 [i_4] [i_0]))))))))));
                            var_14 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_14 [i_0] [i_1] [i_3])) != (((/* implicit */int) arr_9 [i_0] [i_1] [i_3]))))) + (((/* implicit */int) (short)-25063)))));
                        }
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            arr_19 [i_0] [i_0] [i_1] [i_0] [i_0] &= var_1;
                            var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))) ? (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_0))));
                            arr_20 [i_0] [i_1] [i_1] [i_0] [i_3] [i_3] [i_5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_0])))));
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((var_4) & (((/* implicit */unsigned long long int) arr_5 [i_0] [i_2] [i_3])))) : (var_4))))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            var_17 *= ((/* implicit */unsigned char) ((var_1) + (((/* implicit */int) (unsigned short)12030))));
                            var_18 &= ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_3] [i_1] [i_3] [i_3])), (arr_3 [i_0] [i_1] [i_3]))), ((~(min((var_9), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0]))))))));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_3 [i_0] [i_1] [i_6]))));
                        }
                        var_20 = ((/* implicit */short) arr_14 [i_0] [i_1] [i_3]);
                    }
                    /* vectorizable */
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        arr_27 [i_7] |= (~(arr_3 [i_0] [i_7] [i_2]));
                        var_21 &= ((/* implicit */unsigned long long int) arr_16 [i_0]);
                    }
                    arr_28 [i_1] [i_1] &= ((/* implicit */unsigned long long int) (~(((unsigned int) ((((/* implicit */int) arr_12 [i_2] [i_1] [i_0])) * (((/* implicit */int) var_0)))))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */_Bool) (~(arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((319302322767749887LL) ^ (((/* implicit */long long int) arr_2 [i_0] [i_0]))))) : (arr_18 [i_2] [i_1] [i_2] [i_0] [i_2] [i_1] [i_1])))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (signed char)15))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65535)) % (var_1)));
            arr_35 [i_9] = ((/* implicit */long long int) (-(((/* implicit */int) arr_34 [i_8] [i_8] [i_8]))));
            var_25 = ((/* implicit */short) 5547113012135709382LL);
            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (-(var_1))))));
        }
        for (short i_10 = 0; i_10 < 21; i_10 += 2) 
        {
            arr_38 [i_8] [i_10] = ((/* implicit */signed char) (~(((arr_32 [i_10]) ? (((/* implicit */int) arr_31 [i_10])) : (((/* implicit */int) var_8))))));
            /* LoopNest 3 */
            for (unsigned short i_11 = 0; i_11 < 21; i_11 += 4) 
            {
                for (signed char i_12 = 0; i_12 < 21; i_12 += 1) 
                {
                    for (unsigned char i_13 = 0; i_13 < 21; i_13 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) 1532579756))));
                            arr_47 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) arr_46 [i_8] [i_10] [i_11] [i_12] [i_13] [i_10]);
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) arr_44 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))));
                            var_29 *= ((/* implicit */_Bool) arr_43 [i_8] [i_10] [i_11] [i_12] [i_13]);
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_42 [i_8] [i_8] [i_8] [i_10])) + (arr_45 [i_8] [i_10] [i_10] [i_8] [i_10] [i_8])));
        }
        for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 4) 
        {
            arr_51 [i_8] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)15)) ^ (((int) var_2))));
            var_31 *= ((/* implicit */signed char) (-(var_4)));
            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_14])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)24))));
        }
        /* LoopNest 2 */
        for (unsigned short i_15 = 0; i_15 < 21; i_15 += 3) 
        {
            for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 1) 
            {
                {
                    var_33 &= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_7))))));
                    var_34 += ((/* implicit */long long int) var_2);
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 21; i_17 += 1) 
                    {
                        for (long long int i_18 = 0; i_18 < 21; i_18 += 3) 
                        {
                            {
                                var_35 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_37 [i_18])) ? (arr_37 [i_8]) : (arr_37 [i_8])));
                                var_36 += ((/* implicit */unsigned long long int) ((unsigned short) arr_61 [2ULL] [i_17] [i_16] [i_15] [2ULL]));
                            }
                        } 
                    } 
                    arr_62 [i_15] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_8] [i_15] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_8] [i_8] [i_15] [i_15] [i_15] [i_16]))) : (arr_54 [i_8] [i_8] [i_16])))) ? (((/* implicit */int) (unsigned char)229)) : (((((/* implicit */int) var_8)) - (((/* implicit */int) var_8))))));
                }
            } 
        } 
    }
    var_37 = ((/* implicit */_Bool) var_5);
}
