/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182803
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
    for (signed char i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        var_11 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [2])) || (((/* implicit */_Bool) -1660858220)))))) % (min((arr_1 [(short)10]), (((/* implicit */unsigned long long int) (unsigned char)112))))));
        var_12 |= ((/* implicit */short) arr_0 [i_0 - 2] [i_0 - 3]);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_13 = ((/* implicit */int) (unsigned char)255);
            var_14 = var_5;
            arr_5 [8] |= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_9)), ((+(arr_1 [14ULL])))));
        }
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        arr_9 [i_2] [0ULL] = ((((/* implicit */_Bool) var_1)) ? (3102652017206788708ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))));
        arr_10 [i_2] [i_2] = ((/* implicit */int) arr_7 [i_2] [i_2]);
    }
    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                {
                    arr_19 [i_4] [12U] [i_4] = ((/* implicit */unsigned long long int) arr_7 [i_4] [i_3]);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        for (short i_7 = 4; i_7 < 14; i_7 += 2) 
                        {
                            {
                                arr_25 [i_4] = ((/* implicit */unsigned char) ((long long int) (~(var_5))));
                                arr_26 [i_7] [i_4] [i_6] [i_5] [i_5] [i_4] [10LL] = min((-1660858220), (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_7 - 3] [7ULL] [i_7] [i_7 - 4] [i_7]))))));
                                var_15 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_24 [i_7 - 2] [i_5] [i_7 + 1] [i_7 - 2] [i_7 - 2] [i_7 - 1] [i_7 - 4]), (((/* implicit */unsigned long long int) var_8)))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) min((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_0 [i_3] [i_5])))), (((/* implicit */int) var_9))));
                    arr_27 [i_5] [(unsigned short)4] [i_5] |= ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_1)))) ^ (var_0))) < (((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [i_3]) == (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [3U] [i_4])), (arr_15 [i_5] [i_5])))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            for (unsigned long long int i_9 = 4; i_9 < 14; i_9 += 2) 
            {
                {
                    arr_33 [i_3] [i_3] [i_8] [i_9 - 3] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) /* same iter space */
                    {
                        arr_38 [i_3] [i_3] [(unsigned short)4] [i_9 - 3] [i_10] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)71))));
                        arr_39 [i_10] [i_10] [i_9] [(_Bool)1] [(unsigned short)14] [i_3] = ((/* implicit */unsigned long long int) arr_16 [(_Bool)1] [i_8] [(_Bool)1] [i_10]);
                    }
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1575551253)) ? (((/* implicit */unsigned int) arr_35 [i_11] [i_3] [i_3])) : (arr_8 [i_9 - 4]))))));
                        arr_43 [i_11] [4LL] [8ULL] [i_11] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_42 [i_11] [i_9] [i_9] [i_8] [14LL])) && (((/* implicit */_Bool) var_9))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((8726151784334539498ULL) >> (((((/* implicit */int) (short)-1)) + (47)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (arr_29 [i_3] [i_8])))) : ((+(4611686018427387904ULL))))))));
                        var_19 += ((/* implicit */unsigned short) (+(arr_8 [i_9 - 4])));
                        var_20 = ((/* implicit */signed char) arr_6 [(_Bool)1]);
                    }
                    var_21 = ((/* implicit */unsigned short) ((((unsigned long long int) arr_11 [i_9 - 1])) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 1891582467114731964LL))))));
                }
            } 
        } 
    }
    var_22 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (var_6)))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_9))) : (var_3)));
    /* LoopNest 3 */
    for (long long int i_13 = 0; i_13 < 16; i_13 += 3) 
    {
        for (unsigned int i_14 = 3; i_14 < 13; i_14 += 3) 
        {
            for (unsigned short i_15 = 3; i_15 < 12; i_15 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_16 = 4; i_16 < 14; i_16 += 1) 
                    {
                        arr_58 [i_16 + 2] [i_16] [i_16] [i_16] [i_14 - 1] [i_13] = ((/* implicit */unsigned short) var_0);
                        arr_59 [i_16] [i_15] [i_14] [i_16] = ((/* implicit */unsigned char) (unsigned short)65092);
                    }
                    for (unsigned long long int i_17 = 1; i_17 < 15; i_17 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((~(var_5))), (((/* implicit */long long int) (-(((/* implicit */int) var_4))))))))));
                        arr_63 [i_13] [i_13] [i_15 + 4] [i_17] = (-(((var_5) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_14 - 3] [i_15 + 4]))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 3) 
                    {
                        arr_68 [i_18] [i_14] [i_18] = ((/* implicit */long long int) var_8);
                        arr_69 [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_62 [i_13] [i_14] [i_15] [i_18] [i_18] [i_18]) >> (((var_3) - (17570362063004488271ULL)))))) ? (((/* implicit */int) var_8)) : (arr_56 [i_13] [i_14 - 3] [(signed char)10] [i_18])));
                        arr_70 [i_13] [i_14] [i_18] = ((/* implicit */unsigned char) ((arr_60 [i_15 + 1] [i_15] [i_15] [i_18]) ? ((~(arr_8 [i_13]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                        var_24 -= ((/* implicit */unsigned char) (+(arr_64 [i_14 + 2] [i_14] [i_15 + 2] [0] [i_15] [0])));
                        var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_57 [i_14 - 3] [i_14 - 2] [13U]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_19 = 0; i_19 < 16; i_19 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_66 [i_14 - 2] [i_14 + 3] [i_15 + 4] [(short)4]))));
                        arr_73 [i_13] [5LL] [i_15] [i_19] = ((/* implicit */unsigned char) ((unsigned long long int) 4294967295U));
                        var_27 = (!(((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_8)))));
                    }
                    var_28 = ((/* implicit */_Bool) max((min((4554008523099173621ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_13] [i_14 - 3] [i_15])))))), (((((/* implicit */long long int) ((/* implicit */int) arr_60 [i_15] [i_14 - 1] [i_13] [i_13]))) * (var_5))))))));
                }
            } 
        } 
    } 
}
