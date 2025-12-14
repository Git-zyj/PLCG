/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173475
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0 - 2] [i_0] = ((/* implicit */short) (+(var_11)));
        arr_3 [i_0] [i_0 + 3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((arr_1 [i_0 - 1] [i_0]), (4397778075648LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4LL)))))) : (max((var_5), (arr_0 [i_0 + 1]))))) < (((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 12; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) ((unsigned char) var_2));
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [5U] [3LL] [(unsigned char)6] [i_5] [7LL] [10LL]))) / ((-(var_11)))));
                                arr_18 [(unsigned short)4] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_8) : (arr_10 [i_2] [6LL] [(unsigned char)0] [i_5])));
                                arr_19 [(short)2] [i_5] [i_2] [12ULL] [10LL] [i_5] = ((/* implicit */long long int) (-((~(((/* implicit */int) var_6))))));
                            }
                        } 
                    } 
                    arr_20 [11LL] [i_2] [6LL] [(signed char)11] = ((/* implicit */signed char) ((((/* implicit */long long int) arr_5 [i_1 + 2])) != ((+(arr_1 [i_1] [4U])))));
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        arr_24 [i_1] [11LL] [i_3] [(short)1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) arr_17 [i_1] [i_1 + 2] [(unsigned char)10] [(_Bool)1] [i_3 - 1] [i_3])) - (4850)))));
                        arr_25 [(unsigned char)6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_1] [i_2] [i_1 + 1] [8U] [(short)3])) ? (((/* implicit */int) arr_21 [12LL] [(short)6] [i_1 + 3] [i_3] [(short)0])) : (((/* implicit */int) arr_21 [(unsigned char)5] [i_1] [i_1 - 2] [0ULL] [(short)3]))));
                        var_15 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_9)) >= (((var_8) % (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
                        {
                            var_16 = ((/* implicit */signed char) var_6);
                            arr_28 [i_1] [11ULL] [(unsigned char)4] [i_6] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) -4397778075628LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12953))) : (0ULL))));
                            var_17 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_16 [0LL] [i_1 - 2] [i_3] [i_3] [i_3 + 1])) & (var_1)));
                        }
                        for (short i_8 = 2; i_8 < 12; i_8 += 3) 
                        {
                            arr_33 [9LL] [6U] [i_3 + 1] [(unsigned short)9] [i_8] [(short)9] = ((/* implicit */unsigned char) var_5);
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_8))))));
                            var_19 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (~(0))))));
                        }
                        for (long long int i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            arr_38 [i_6] = arr_10 [i_1] [i_2] [i_1] [12U];
                            var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_34 [(unsigned short)0] [i_3 + 1]))));
                        }
                        for (int i_10 = 1; i_10 < 10; i_10 += 4) 
                        {
                            var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_1] [(unsigned char)5] [i_3 - 1] [i_10 + 3] [i_10] [i_10 - 1] [i_10])) ? (((/* implicit */int) arr_39 [i_3] [3U] [i_3 - 1] [(unsigned char)10] [i_3] [i_10 - 1] [i_10])) : (((/* implicit */int) var_2))));
                            arr_41 [6LL] [(short)9] [6LL] [i_10] = ((/* implicit */long long int) var_3);
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-11162))) ^ (var_9))))));
                        }
                    }
                    for (long long int i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        arr_44 [5LL] [i_11] [i_11] [i_3 - 1] [i_11] = arr_16 [i_11] [6U] [2ULL] [(unsigned char)0] [i_11];
                        arr_45 [i_11] [(unsigned char)2] [i_3] [10U] [i_2] = ((/* implicit */short) ((var_10) / (((/* implicit */long long int) arr_8 [i_1 - 2]))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_1] [i_3 - 1] [i_1] [(short)7] [5LL])) ? (arr_35 [(short)1] [i_3 + 1] [9LL] [(unsigned char)2] [i_3 + 1]) : (var_8)));
                        var_25 = ((/* implicit */short) arr_10 [2LL] [2LL] [i_3] [2LL]);
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) arr_11 [(short)8] [(short)0] [i_3] [i_1] [i_3] [7ULL]))));
                    }
                    arr_46 [3U] = ((/* implicit */long long int) var_12);
                }
            } 
        } 
        arr_47 [3LL] = ((/* implicit */short) (~((+(((/* implicit */int) arr_37 [i_1] [(unsigned short)11] [(unsigned short)11] [1U] [i_1 - 1]))))));
    }
    for (short i_12 = 0; i_12 < 25; i_12 += 3) 
    {
        arr_50 [(unsigned char)4] [1] |= ((/* implicit */long long int) var_0);
        var_27 = ((/* implicit */unsigned int) max((var_27), ((~((~(max((((/* implicit */unsigned int) (unsigned char)189)), (var_9)))))))));
        /* LoopNest 2 */
        for (long long int i_13 = 0; i_13 < 25; i_13 += 3) 
        {
            for (short i_14 = 1; i_14 < 22; i_14 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (short)32749))))))), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) -4LL)) : (8196165478241011390ULL)))));
                    arr_57 [(signed char)0] [i_13] [1ULL] = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_56 [(short)19] [i_14 + 3] [i_14 - 1])), (var_4)))) >= (((2147483647) / (((/* implicit */int) arr_49 [i_14 + 2]))))));
                    arr_58 [20LL] [(short)21] [20LL] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(arr_54 [i_12] [i_13])))) - (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (593044130U)))) ? (var_8) : (((((/* implicit */long long int) ((/* implicit */int) arr_51 [i_13] [(unsigned char)13]))) / (var_5)))))));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */long long int) var_4);
    var_30 ^= var_10;
}
