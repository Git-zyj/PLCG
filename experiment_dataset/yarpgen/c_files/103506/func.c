/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103506
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
    for (long long int i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 += ((/* implicit */long long int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))) + (var_10))));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
                var_20 = ((/* implicit */_Bool) max((var_20), (arr_1 [i_0])));
                arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    arr_9 [i_1] [i_2] = ((/* implicit */unsigned int) var_11);
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_16 [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) & (6448151739314229814LL))));
                                var_21 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)3)) != (((/* implicit */int) ((((/* implicit */int) arr_4 [i_2] [i_2] [i_1])) != (((/* implicit */int) arr_13 [i_0] [i_2])))))));
                            }
                        } 
                    } 
                    var_22 = ((unsigned short) arr_3 [i_0 + 2]);
                }
                /* vectorizable */
                for (long long int i_5 = 1; i_5 < 15; i_5 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        var_23 = ((/* implicit */long long int) min((var_23), (((((5509270368249487873LL) - (((/* implicit */long long int) ((/* implicit */int) var_13))))) / (((/* implicit */long long int) (-(((/* implicit */int) var_15)))))))));
                        arr_21 [i_6] [i_5] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) -5608680697579083437LL)) ? (((/* implicit */int) arr_8 [i_6] [i_6])) : (((/* implicit */int) var_8)))) >> (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_5] [i_0]))) & (var_6))) - (4010ULL)))));
                        arr_22 [i_6] [i_6] [i_1] [i_1] [3ULL] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [5LL] [i_0 - 2] [i_5 - 1] [i_5] [i_5])) ? (arr_20 [i_0] [i_0] [i_0 + 3] [i_5 - 1] [i_5] [i_5 + 1]) : (arr_20 [(unsigned char)2] [i_0] [i_0 - 2] [i_5 - 1] [i_6] [i_6])));
                    }
                    for (unsigned char i_7 = 3; i_7 < 13; i_7 += 2) 
                    {
                        arr_25 [i_1] [i_5] = ((/* implicit */_Bool) ((unsigned long long int) (unsigned char)142));
                        arr_26 [i_0 + 1] [i_0 + 1] [i_5] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [14ULL])))))));
                        arr_27 [i_0] [i_0 - 3] [i_5] [i_0] [i_7] [i_7] = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) arr_11 [(signed char)8])))));
                    }
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 2) 
                    {
                        arr_31 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) arr_12 [i_8]));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            var_24 += ((/* implicit */unsigned int) var_15);
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) arr_7 [i_9] [i_5]))));
                            arr_35 [i_1] [i_1] [i_1] [i_5] [i_1] [i_1] [(_Bool)1] = ((/* implicit */_Bool) (+(arr_20 [i_0] [(short)5] [(short)5] [i_5] [i_8] [(short)5])));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) arr_24 [i_8] [i_8] [i_5] [i_8] [i_8])))))) != (3997610114U)));
                        }
                        for (short i_10 = 2; i_10 < 13; i_10 += 1) 
                        {
                            var_27 = ((/* implicit */_Bool) ((unsigned int) arr_17 [i_0 + 3] [i_0 + 1] [i_5 + 1] [i_0 + 1]));
                            arr_39 [i_0] [i_5] [i_0] [i_0] [i_10] [i_1] = ((/* implicit */signed char) 2LL);
                            var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) (unsigned char)190)))));
                        }
                    }
                    arr_40 [i_0] [(unsigned char)1] [(signed char)1] = ((/* implicit */long long int) arr_19 [i_0 + 2] [i_0 + 3] [i_5 - 1] [i_5 + 1]);
                    var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7822)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)-18527)))))));
                    var_30 = ((/* implicit */unsigned int) ((signed char) (unsigned char)124));
                }
                for (long long int i_11 = 1; i_11 < 15; i_11 += 3) /* same iter space */
                {
                    arr_43 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((min((arr_42 [i_0 + 2] [i_0 + 3] [i_0 + 3] [i_11 - 1]), (arr_42 [i_0 + 2] [i_11] [i_11] [i_11 - 1]))), (((/* implicit */unsigned long long int) ((989171509U) * ((-(arr_0 [i_11]))))))));
                    var_31 = ((/* implicit */short) max((((/* implicit */int) arr_4 [i_11 + 1] [i_1] [i_0 - 1])), ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_0] [0ULL] [i_0] [i_0])))))))));
                    var_32 = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [(unsigned char)4])) - (((/* implicit */int) arr_7 [i_0 + 3] [i_11]))));
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 16; i_12 += 2) 
                    {
                        for (unsigned char i_13 = 2; i_13 < 14; i_13 += 1) 
                        {
                            {
                                arr_48 [i_13] [i_0] [i_11] [i_0] [i_13] = ((/* implicit */unsigned int) (!((((~(((/* implicit */int) arr_23 [i_13] [i_12] [i_11 - 1] [i_0] [i_0] [i_0])))) >= (((/* implicit */int) arr_15 [i_0] [i_0 - 3] [i_13] [i_0] [11LL]))))));
                                arr_49 [i_13] [i_0] [i_1] [i_11] [i_12] [14LL] = ((/* implicit */long long int) arr_7 [i_0 + 2] [i_0 + 2]);
                            }
                        } 
                    } 
                    arr_50 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_11 - 1] = ((/* implicit */long long int) var_16);
                }
            }
        } 
    } 
    var_33 = ((/* implicit */unsigned char) var_6);
    var_34 &= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_16))) + (((/* implicit */int) var_13))))) >= (var_0)));
}
