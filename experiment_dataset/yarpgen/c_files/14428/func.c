/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14428
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) var_5))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((-3356263695911905825LL) < (var_2)))), (var_10))))) | (((long long int) ((((/* implicit */int) var_0)) < (((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_7 [i_1] [(_Bool)1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0]))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        arr_12 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) (unsigned char)127))))));
                        arr_13 [i_3] [i_3] [i_3] [(unsigned char)6] [i_1] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) min((-3356263695911905820LL), (((/* implicit */long long int) arr_1 [i_2] [11LL]))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_16 [(_Bool)1] [(unsigned char)4] [(_Bool)1] [(unsigned char)3] = max((((/* implicit */long long int) (_Bool)0)), (-6356092278036923122LL));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned char) (~(((arr_9 [11LL] [11LL]) | (arr_5 [i_0])))));
                            var_16 ^= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [(unsigned char)12])) ? ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (3356263695911905819LL))) : (min((((/* implicit */long long int) var_9)), (var_2))))), (((((/* implicit */_Bool) ((var_7) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (((arr_10 [i_4] [i_4] [i_4] [i_4]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                            arr_19 [i_0] [i_5] [i_0] [i_0] [i_5] = arr_3 [i_0];
                            var_17 = ((/* implicit */_Bool) var_11);
                        }
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            arr_24 [i_0] [i_1] [i_0] [i_4] [i_0] = ((/* implicit */_Bool) (((!(arr_15 [i_0] [i_1] [i_2] [i_4]))) ? (((/* implicit */int) arr_23 [(_Bool)1] [i_1])) : (((/* implicit */int) arr_0 [9LL] [9LL]))));
                            var_18 = ((/* implicit */unsigned char) ((_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_4])))));
                        }
                        arr_25 [i_4] [i_2] [1LL] [i_0] = ((/* implicit */unsigned char) ((max((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1]))) * (var_7))), (((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_0] [12LL]))))))) * (((/* implicit */long long int) max((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_6 [i_0])))), ((-(((/* implicit */int) (_Bool)1)))))))));
                    }
                    var_19 = ((/* implicit */unsigned char) var_2);
                }
                for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    arr_30 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) -5509678990944227243LL))))) : (((/* implicit */int) (unsigned char)211)))) == (((((/* implicit */int) arr_17 [i_0] [i_1] [i_7])) - (((/* implicit */int) var_9))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            arr_37 [i_9] [11LL] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_36 [i_8] [i_0] [i_0] [i_0]))));
                            arr_38 [i_0] [i_9] [(unsigned char)8] [(unsigned char)8] [i_9] [i_9] [(unsigned char)8] = ((/* implicit */long long int) ((((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0])) & ((~(((/* implicit */int) var_8))))));
                        }
                        arr_39 [i_0] [4LL] [i_7] [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_1))) ? (((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_0] [0LL] [i_8])) : (((((/* implicit */int) var_8)) & (((/* implicit */int) arr_23 [i_0] [i_0]))))));
                    }
                    for (long long int i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        arr_43 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) max((((((/* implicit */int) var_12)) | (((/* implicit */int) ((_Bool) arr_0 [i_7] [i_0]))))), (((/* implicit */int) arr_8 [i_1]))));
                        var_20 -= ((/* implicit */_Bool) (-(min((((/* implicit */long long int) ((var_0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))), (min((-7300758469143228725LL), (((/* implicit */long long int) var_0))))))));
                    }
                    arr_44 [i_0] = ((/* implicit */unsigned char) ((((_Bool) var_3)) ? (((((/* implicit */_Bool) max((var_2), (-7300758469143228727LL)))) ? (max((((/* implicit */long long int) (_Bool)1)), (arr_10 [5LL] [i_1] [i_1] [5LL]))) : (((/* implicit */long long int) (~(((/* implicit */int) var_10))))))) : (((var_4) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_9))))) : (var_6)))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_12 = 1; i_12 < 13; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 3; i_13 < 11; i_13 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) max((var_21), (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_14 [i_0] [10LL] [i_13 + 1] [i_12 + 1])) : (((/* implicit */int) var_10)))) <= (((((/* implicit */int) arr_17 [i_13 + 4] [(unsigned char)1] [i_12 + 2])) & (((/* implicit */int) arr_17 [i_13 - 2] [i_1] [i_12 - 1]))))))));
                                var_22 = var_10;
                            }
                        } 
                    } 
                    arr_53 [i_11] [i_1] [i_0] = -1LL;
                    arr_54 [i_1] [i_1] [3LL] = (!(((/* implicit */_Bool) min((arr_42 [i_0] [i_0] [(_Bool)0] [(_Bool)0] [i_1] [(_Bool)1]), (arr_42 [i_0] [i_0] [i_0] [8LL] [i_0] [i_0])))));
                }
                var_23 = ((/* implicit */unsigned char) 7300758469143228713LL);
                arr_55 [i_0] = ((/* implicit */_Bool) min(((~(min((arr_45 [i_1] [i_0] [i_0]), (((/* implicit */long long int) var_12)))))), (((/* implicit */long long int) (((((-(((/* implicit */int) arr_27 [i_0] [i_0] [i_1])))) + (2147483647))) >> (((/* implicit */int) arr_27 [i_0] [i_1] [i_0])))))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_14 = 0; i_14 < 13; i_14 += 2) 
    {
        var_25 = ((/* implicit */_Bool) (((_Bool)1) ? (-9223372036854775806LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)238)))));
        arr_58 [(unsigned char)8] = ((arr_34 [i_14]) | (arr_34 [i_14]));
    }
}
