/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162037
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
    var_17 = ((/* implicit */_Bool) var_12);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9)))) : (((((/* implicit */_Bool) var_14)) ? (arr_4 [i_0 - 1] [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
            var_19 = max(((~(((((/* implicit */_Bool) var_13)) ? (arr_0 [5ULL] [5ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))), (max(((~(arr_4 [i_0] [i_0] [i_1]))), (min((((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0 - 1])), (var_1))))));
        }
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 9; i_2 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_14)) ? (arr_4 [i_2] [i_0 - 2] [i_0 - 2]) : (arr_4 [i_2] [i_2] [i_2]))) != (((var_13) / (((/* implicit */unsigned long long int) var_16)))))))));
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_5 [1ULL] [i_0]))) : ((+(arr_6 [i_2 - 1])))));
        }
        for (long long int i_3 = 1; i_3 < 9; i_3 += 1) /* same iter space */
        {
            arr_10 [i_0] = ((/* implicit */unsigned int) var_15);
            arr_11 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2305843009213693951ULL) - (arr_0 [i_0] [i_3])))) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) ((short) arr_7 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (max((((((/* implicit */_Bool) var_6)) ? (var_14) : (arr_7 [i_0]))), (var_14)))));
            arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_6)), ((-((~(((/* implicit */int) var_5))))))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-(3163163131457704908ULL))), (((/* implicit */unsigned long long int) ((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((var_0) | (var_0))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))) : (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))), (max((((/* implicit */unsigned long long int) (unsigned char)37)), (var_9)))))));
                        /* LoopSeq 4 */
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_23 = arr_7 [(short)8];
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((var_4) | (((/* implicit */unsigned int) (~(((/* implicit */int) arr_21 [i_0] [i_4] [i_4] [i_5] [i_6] [i_7 - 1]))))))))));
                            var_25 = ((/* implicit */unsigned char) var_1);
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0 - 1] [i_0]))) : ((-(arr_0 [i_7 - 1] [i_0 - 1])))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_3 [i_4] [i_0 - 1] [i_0]), (arr_3 [i_0 - 3] [i_0 - 3] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_3)))) : (min((arr_3 [7ULL] [i_0 - 3] [7ULL]), (((/* implicit */unsigned long long int) var_3))))));
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_15);
                            var_28 = ((/* implicit */_Bool) arr_4 [7ULL] [1ULL] [1ULL]);
                            var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 4239839785U)), (-193987661276827738LL)))), (var_13))) * (((((/* implicit */_Bool) ((var_14) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4] [i_5] [0ULL] [i_8])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((var_2) ? (arr_3 [i_4] [i_5] [i_9]) : (var_0)))))) && (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_5))))))))));
                            arr_27 [i_4] [i_4] [i_5] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (((~(arr_26 [i_0] [i_0] [i_4] [i_5] [i_0] [i_6] [i_5]))) >> (((arr_0 [i_0 + 1] [i_0 - 1]) - (15188716563130907551ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_9] [i_5] [i_0] [i_5] [i_5]))) : ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) + (var_9)))))));
                            arr_28 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) arr_22 [i_0 - 2]);
                            arr_29 [i_0] [(unsigned char)6] [i_6] = ((/* implicit */long long int) arr_21 [i_0 + 1] [i_0] [1LL] [i_6] [i_9] [i_0]);
                        }
                        for (short i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))));
                            var_32 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_19 [i_0])) : (((/* implicit */int) var_11))))));
                        }
                        var_33 = (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((long long int) (_Bool)0))) : (arr_18 [i_6] [i_5] [i_4]))));
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (short)-11250)) : (((/* implicit */int) var_2))));
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 10; i_11 += 1) 
        {
            for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 1) 
            {
                {
                    var_35 |= var_14;
                    var_36 = ((/* implicit */short) arr_5 [i_0] [i_0]);
                    arr_38 [i_0] [i_11] [i_11] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (arr_7 [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                    arr_39 [(short)0] [i_0] [i_12] = ((/* implicit */_Bool) arr_22 [i_0]);
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 3) 
                        {
                            {
                                var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_43 [i_0] [i_0] [i_0 + 1] [i_0 - 3])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))) : (arr_43 [i_0] [i_0] [i_0 - 3] [i_0 - 2])));
                                var_38 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_0 [i_0 + 1] [i_11]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_15 = 3; i_15 < 8; i_15 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_16 = 0; i_16 < 10; i_16 += 3) 
        {
            for (unsigned long long int i_17 = 1; i_17 < 8; i_17 += 2) 
            {
                {
                    var_39 = ((/* implicit */unsigned int) arr_32 [i_17] [i_17 + 2]);
                    arr_56 [i_15] [4U] [i_16] [i_17] |= (!(((/* implicit */_Bool) var_9)));
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 0; i_18 < 10; i_18 += 1) 
                    {
                        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) arr_2 [i_15] [i_15]))))) ? (arr_14 [i_17]) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
                        var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_15 - 2] [i_15 + 1] [(short)2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_7)))))));
                        var_42 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_17])))))));
                        var_43 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_4)));
                        var_44 = ((/* implicit */_Bool) (~(4177920U)));
                    }
                }
            } 
        } 
        arr_60 [i_15] [i_15 + 1] = ((/* implicit */long long int) arr_2 [i_15 - 2] [i_15 + 2]);
    }
    for (unsigned long long int i_19 = 3; i_19 < 8; i_19 += 1) /* same iter space */
    {
        arr_64 [i_19] [9ULL] = ((/* implicit */_Bool) max((max((arr_35 [i_19 - 2]), (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (var_12)))))))));
        var_45 = ((/* implicit */unsigned long long int) var_2);
        arr_65 [i_19] [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_19] [i_19] [i_19])) ? (arr_4 [i_19] [i_19 - 2] [i_19]) : ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (var_1)))))));
        var_46 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) arr_61 [i_19] [i_19])) : (arr_0 [i_19] [i_19]))) - (((((/* implicit */_Bool) arr_8 [i_19] [i_19] [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)71))) : (var_0))))) - (min((((/* implicit */unsigned long long int) (-(var_8)))), (arr_31 [0ULL] [(_Bool)0] [i_19] [i_19] [i_19])))));
    }
}
