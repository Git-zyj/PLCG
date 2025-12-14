/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163426
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
    var_10 = ((/* implicit */signed char) var_8);
    var_11 = ((/* implicit */short) var_1);
    var_12 = ((/* implicit */short) ((((/* implicit */int) (short)31295)) / (((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_8)), (arr_2 [i_0 - 1] [i_0 - 1])));
                /* LoopSeq 2 */
                for (short i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    var_14 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((-9064370416207478188LL) & (((/* implicit */long long int) 1220754325))))), (((4695240322055506508ULL) >> (((((unsigned long long int) (unsigned char)248)) - (193ULL)))))));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_6);
                }
                for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 6409091012875836383LL)) > (4397115325875272995ULL)))) ^ (((/* implicit */int) var_9))));
                        var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((arr_11 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]) > (arr_11 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1])))), ((-(14049628747834278620ULL)))));
                    }
                    var_17 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_0))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        var_18 = (short)-14126;
                        arr_17 [15U] [i_1] [15U] [i_5] = ((/* implicit */unsigned int) var_8);
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 2; i_6 < 16; i_6 += 4) /* same iter space */
                    {
                        arr_20 [(short)7] [i_1] [i_1] [i_3] [i_6 + 1] = var_8;
                        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */int) ((short) var_6))) * (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_6 + 1])))))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_3])) ? ((-(arr_9 [i_3] [i_3] [i_3]))) : (arr_18 [(unsigned short)6] [i_0 + 1] [i_6 + 1] [(unsigned short)6])));
                        /* LoopSeq 2 */
                        for (int i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((unsigned short) arr_23 [i_6 - 2] [i_0 + 1]))));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_3] [i_6 - 2] [i_6 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_6 - 2] [i_0 - 1] [i_0 - 1] [i_6 - 1] [6ULL]))) : ((~(arr_13 [i_7] [i_7] [i_7] [i_7] [i_7]))))))));
                            var_23 = ((/* implicit */long long int) var_3);
                        }
                        for (long long int i_8 = 2; i_8 < 15; i_8 += 4) 
                        {
                            arr_26 [i_0] [i_0] [i_3] [i_6] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [(_Bool)1] [(_Bool)1] [i_3] [i_6 - 1] [i_8 + 1] [i_8 + 1])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_8 + 1] [i_8 + 1]))))))));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) 9064370416207478190LL))));
                            var_25 = ((/* implicit */short) ((arr_13 [i_6] [i_6] [i_6] [i_8] [i_8 - 2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)49))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 2; i_9 < 16; i_9 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (long long int i_10 = 0; i_10 < 17; i_10 += 4) 
                        {
                            var_26 = ((unsigned char) (+(arr_32 [i_0] [i_1] [i_1] [i_1] [i_3] [i_1] [i_10])));
                            arr_34 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1] [7U] [8ULL] |= ((/* implicit */short) (!(((/* implicit */_Bool) arr_22 [i_9 - 2] [i_9 - 2] [i_10] [(short)10] [i_9 - 2]))));
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)76)) ? (((629388237937253044ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_30 [i_0 + 1] [i_0 + 1])) & (((/* implicit */int) var_6))));
                        }
                        var_29 = ((/* implicit */short) var_9);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 1; i_11 < 16; i_11 += 4) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_39 [(_Bool)1] [i_1] [i_3] [i_11] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_33 [i_11 + 1] [i_12] [(short)1] [i_12] [i_12]) : (arr_33 [i_11 + 1] [(short)13] [i_12] [i_12] [i_12])))) ? (((/* implicit */int) ((_Bool) (~(var_7))))) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1] [i_11 - 1]))));
                                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])) % (((/* implicit */int) var_1))))))) ? (arr_21 [i_0] [i_1] [i_11]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (((unsigned int) (signed char)116)))))));
                                arr_40 [i_0] [i_0] [i_1] [i_3] [i_1] [(unsigned char)11] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)227))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 4; i_13 < 14; i_13 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_14 = 0; i_14 < 17; i_14 += 4) 
                        {
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])) > (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])))) ? (((((/* implicit */int) arr_29 [i_3] [i_13 + 2] [i_3] [i_3])) % (((/* implicit */int) var_3)))) : ((-(((((/* implicit */int) arr_2 [i_0] [i_1])) ^ (((/* implicit */int) var_6)))))))))));
                            var_32 *= ((/* implicit */unsigned long long int) var_4);
                            arr_45 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_14] [i_1] [i_14] = ((/* implicit */short) arr_5 [i_3]);
                            var_33 ^= ((/* implicit */_Bool) arr_23 [i_0] [(unsigned short)2]);
                        }
                        /* LoopSeq 1 */
                        for (long long int i_15 = 0; i_15 < 17; i_15 += 4) 
                        {
                            arr_48 [i_0] [i_1] [i_1] [i_1] [i_3] [i_13] [i_15] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_13 - 3])) ? (arr_13 [i_0] [i_0] [i_0 - 1] [i_13 + 1] [i_13 + 2]) : (((/* implicit */unsigned long long int) 1455453989)))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_36 [i_0 + 1] [i_0 + 1] [(signed char)4] [i_13 - 3])))))));
                            arr_49 [i_0] [i_1] [9U] [i_13] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0 - 1] [i_0] [10U] [i_13 - 1])) >> (((/* implicit */int) arr_15 [i_0 + 1] [i_0 + 1] [(short)8] [i_13 + 1]))))) ? ((~(((arr_32 [i_15] [i_15] [2LL] [i_15] [(signed char)7] [i_15] [i_15]) & (((/* implicit */long long int) ((/* implicit */int) arr_2 [(_Bool)1] [8ULL]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) arr_36 [7LL] [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) ((short) var_9))) : ((-(((/* implicit */int) var_6)))))))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_16 = 0; i_16 < 17; i_16 += 4) 
                        {
                            var_34 = ((/* implicit */long long int) (+(((/* implicit */int) var_1))));
                            var_35 = ((/* implicit */short) ((((((/* implicit */int) var_3)) * (((/* implicit */int) arr_36 [i_0] [7U] [i_0 - 1] [i_1])))) >= (((/* implicit */int) arr_35 [i_0 - 1] [i_0] [i_0 - 1] [i_3] [i_13] [(short)0]))));
                        }
                    }
                }
            }
        } 
    } 
}
