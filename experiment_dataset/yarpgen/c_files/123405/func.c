/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123405
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
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (_Bool)1))));
    var_16 += ((/* implicit */signed char) (_Bool)0);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) (_Bool)1);
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)119)) || ((_Bool)0)));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) (signed char)90);
                arr_10 [i_0] [i_1 + 3] = ((/* implicit */unsigned char) -3578564307024628862LL);
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        {
                            arr_17 [i_0] [i_0] [i_4] [(_Bool)1] [i_5] [i_5] = ((/* implicit */signed char) max((((((/* implicit */int) var_12)) | (arr_12 [i_0] [(_Bool)1] [i_1 - 4] [i_4]))), (((/* implicit */int) ((unsigned short) 4883883381606967184ULL)))));
                            arr_18 [i_0] [i_1 - 4] [(unsigned char)17] [19] [i_5] [i_5] = ((/* implicit */long long int) ((((max((((/* implicit */unsigned long long int) var_7)), (4883883381606967167ULL))) + (max((((/* implicit */unsigned long long int) (unsigned char)119)), (2556159345616352445ULL))))) < (((/* implicit */unsigned long long int) max((max((((/* implicit */int) (short)-31148)), (var_10))), (((/* implicit */int) var_14)))))));
                            arr_19 [i_0] [i_0] [(_Bool)1] [i_1 - 4] [i_4] [i_5] = ((((/* implicit */int) max((((/* implicit */short) arr_4 [i_1 - 4] [i_1 - 4] [i_0])), (((short) var_5))))) - (((arr_9 [i_0] [i_0] [i_0] [i_1 - 2]) - (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_13)))))));
                            var_20 = ((/* implicit */_Bool) (-(((min((-201386840), (((/* implicit */int) var_2)))) % (((/* implicit */int) ((signed char) (short)-28743)))))));
                            /* LoopSeq 2 */
                            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
                            {
                                var_21 = ((/* implicit */unsigned int) min((((/* implicit */signed char) ((((/* implicit */int) (signed char)-113)) <= (min((arr_14 [i_0] [i_1] [i_4] [i_5]), (((/* implicit */int) arr_13 [i_0] [i_1] [i_4] [i_0]))))))), ((signed char)-98)));
                                var_22 = ((/* implicit */unsigned int) arr_21 [i_0]);
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [11] [i_1 + 1] [i_0] [i_5])) ? (min((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-28747)))), (((((/* implicit */int) arr_21 [i_0])) ^ (((/* implicit */int) var_4)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-75))))) > (7982711537138400801ULL))))));
                            }
                            /* vectorizable */
                            for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                            {
                                var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_1] [i_1 - 4] [i_1 - 4])) % (((((/* implicit */_Bool) arr_12 [i_1] [i_4] [i_5] [i_7])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))));
                                arr_26 [i_0] [i_1] [i_0] [i_5] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1 - 3] [i_1 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 3]))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (int i_8 = 2; i_8 < 10; i_8 += 2) 
    {
        arr_29 [(signed char)1] [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
        var_25 = ((/* implicit */unsigned char) min((4883883381606967184ULL), ((~(arr_23 [(signed char)6] [6] [i_8] [i_8] [i_8] [i_8 - 2] [i_8 - 2])))));
        /* LoopSeq 1 */
        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            var_26 = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_28 [i_8 - 2])) ? (((/* implicit */int) (signed char)-75)) : (0))), (((((arr_9 [i_8 + 2] [(_Bool)1] [i_9] [i_9]) + (2147483647))) >> (((((/* implicit */int) arr_31 [i_9])) - (141)))))))), ((~(4883883381606967167ULL)))));
            arr_34 [i_8] [(unsigned short)4] = ((/* implicit */long long int) ((unsigned int) (unsigned char)137));
            arr_35 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10464032536571150820ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) (short)28757))))), (max((((/* implicit */unsigned long long int) arr_7 [i_8] [i_8 + 1] [i_9])), (4575657221408423936ULL)))))) ? ((~(((/* implicit */int) max((var_7), (arr_33 [i_8] [10U])))))) : ((~((~(((/* implicit */int) var_0))))))));
        }
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_38 [i_10] &= ((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((short) 7982711537138400801ULL)), (((/* implicit */short) arr_24 [i_10] [i_10] [i_10] [i_10] [(signed char)12]))))), (max((((/* implicit */unsigned int) var_4)), (var_9)))));
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            for (signed char i_12 = 0; i_12 < 20; i_12 += 1) 
            {
                {
                    arr_45 [19LL] [i_12] = ((/* implicit */_Bool) min((min(((~(-20))), (((((/* implicit */_Bool) 4294967279U)) ? (var_10) : (((/* implicit */int) var_2)))))), (((/* implicit */int) var_5))));
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 20; i_13 += 3) 
                    {
                        for (short i_14 = 0; i_14 < 20; i_14 += 2) 
                        {
                            {
                                arr_50 [i_10] [i_11] [i_11] [i_12] [i_13] [i_14] [3LL] = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) (short)-8717)), (arr_23 [i_10] [i_11] [i_12] [i_14] [i_13] [i_14] [i_14]))), (((/* implicit */unsigned long long int) ((min((arr_36 [i_14]), (((/* implicit */unsigned int) (unsigned char)165)))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 4074816721U)) || (((/* implicit */_Bool) 18446744073709551615ULL)))))))))));
                                var_27 = ((/* implicit */long long int) ((((/* implicit */int) var_2)) >> (((arr_12 [i_10] [i_10] [i_12] [i_14]) + (1303858489)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_51 [i_10] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_10] [i_10]))) + (((((/* implicit */_Bool) arr_39 [i_10] [(short)2] [i_10])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) % (((/* implicit */int) arr_25 [i_10] [i_10] [i_10] [i_10] [i_10]))))) : (18446744073709551614ULL)))));
        var_28 = ((/* implicit */_Bool) (~(((((_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_10] [i_10] [i_10] [(unsigned char)0] [i_10] [(signed char)2] [(signed char)8])) ? (((/* implicit */int) var_5)) : (var_10)))) : (((2556159345616352457ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-68)))))))));
    }
    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) 1))));
}
