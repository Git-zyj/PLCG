/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147171
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
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) arr_0 [(signed char)17]);
                    var_14 = ((/* implicit */int) (!(((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (short)-7680))))) != (var_4)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        arr_11 [i_2] [i_2] [i_3] = (~(((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_0])));
                        arr_12 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) (unsigned char)237);
                        arr_13 [i_0] [(_Bool)1] [i_1] [0U] [i_2] [i_3] = ((arr_3 [i_0 + 1]) ? (((int) (!(arr_1 [i_1] [i_2])))) : ((-(((/* implicit */int) ((unsigned short) (signed char)-13))))));
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0 + 2] [i_0 - 3] [i_2 - 1] [i_2])) ? ((~(((2575015054U) >> (((((/* implicit */int) arr_8 [8ULL])) - (35097))))))) : (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) < (arr_9 [i_0] [10LL] [i_2 - 3] [i_2])))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_6 [i_0] [i_0])))))))));
                        var_16 = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) 8388607U)))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_4 = 2; i_4 < 11; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            {
                                var_17 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_29 [i_8] [i_4] [(_Bool)1] [i_5] [i_4])) ? (2575015051U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4] [i_5] [i_6])))))))));
                                arr_30 [i_8] [i_5] [i_5] = 2575015054U;
                                var_18 = ((/* implicit */int) min((var_18), ((-(((/* implicit */int) ((arr_9 [i_4 - 2] [6] [i_4] [i_6]) != (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                            }
                        } 
                    } 
                    arr_31 [i_5] [i_5] [i_5] [i_5] = ((int) (~(2575015054U)));
                    arr_32 [7U] [i_5] [i_4] = ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4 - 1] [i_4 - 1]))) + (1719952245U))), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_27 [i_4] [i_4] [i_5] [13] [i_6])) >= (((/* implicit */int) (unsigned char)22))))) <= (min((-4), (((/* implicit */int) arr_1 [i_5] [i_4])))))))));
                    arr_33 [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4] [i_4])))))) != (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((/* implicit */int) arr_17 [i_4]))))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_10 [i_6] [i_5] [(unsigned short)0] [i_4]))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_14 [5U] [i_4 - 1])), (var_11))))))));
                }
            } 
        } 
        var_19 -= ((/* implicit */short) var_1);
    }
    for (unsigned char i_9 = 0; i_9 < 15; i_9 += 4) 
    {
        arr_37 [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_18 [i_9]))));
        arr_38 [i_9] [0] = ((/* implicit */_Bool) arr_10 [i_9] [16ULL] [i_9] [i_9]);
        arr_39 [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) -9033698806553369807LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_9] [i_9]))) / (1719952239U)))) : (((((/* implicit */unsigned long long int) -6027635573798242870LL)) | (arr_10 [12U] [16LL] [i_9] [11])))));
        /* LoopSeq 3 */
        for (signed char i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            var_20 |= ((/* implicit */unsigned long long int) (+((+(2147483647)))));
            arr_43 [i_10] [(_Bool)1] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [14ULL] [i_9] [i_9] [i_10])) ? (var_7) : (min((max((-9223372036854775791LL), (((/* implicit */long long int) arr_9 [12LL] [i_10] [12LL] [i_9])))), (((/* implicit */long long int) ((short) 17141326126054013713ULL)))))));
        }
        for (unsigned char i_11 = 1; i_11 < 13; i_11 += 3) /* same iter space */
        {
            arr_48 [14] [14] [i_9] = min((((arr_3 [(unsigned char)15]) ? (var_4) : (((long long int) var_6)))), (((/* implicit */long long int) var_8)));
            var_21 = max((max((((((/* implicit */_Bool) -6265150290242123913LL)) ? (((/* implicit */long long int) 1221196444)) : (var_4))), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-71))))))), (var_7));
        }
        for (unsigned char i_12 = 1; i_12 < 13; i_12 += 3) /* same iter space */
        {
            arr_52 [i_9] [i_9] &= ((/* implicit */long long int) ((((((/* implicit */int) arr_27 [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_12 + 1] [i_12 + 1])) != (((/* implicit */int) arr_27 [i_12 + 1] [i_12 + 2] [i_12 + 2] [i_12 + 2] [i_12 - 1])))) ? (((((/* implicit */_Bool) (short)511)) ? (((/* implicit */int) arr_27 [i_12 - 1] [i_12 + 2] [i_12 - 1] [i_12 - 1] [i_12 - 1])) : (((/* implicit */int) arr_27 [i_12 + 1] [i_12 - 1] [i_12 + 2] [i_12 + 2] [i_12 + 2])))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_27 [i_12 + 2] [i_12 - 1] [i_12 - 1] [i_12 + 1] [i_12 + 1])), (var_3))))));
            arr_53 [i_9] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) 1194541215))))), (((((/* implicit */_Bool) arr_20 [i_12 - 1] [i_9])) ? (arr_20 [i_12 - 1] [11LL]) : (arr_20 [i_12 - 1] [i_12])))));
            /* LoopNest 2 */
            for (signed char i_13 = 0; i_13 < 15; i_13 += 4) 
            {
                for (unsigned long long int i_14 = 1; i_14 < 11; i_14 += 3) 
                {
                    {
                        var_22 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_50 [i_12 - 1] [i_12 + 1] [i_12 + 1])) <= (((/* implicit */int) arr_50 [i_12 - 1] [i_12 + 1] [i_12 + 2]))))) <= (((/* implicit */int) arr_50 [i_12 + 2] [i_12 - 1] [i_12 + 1]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_15 = 1; i_15 < 11; i_15 += 3) 
                        {
                            arr_60 [i_15] [i_14] [i_14] [i_13] [i_12] [i_9] = ((/* implicit */unsigned short) (~(arr_10 [i_9] [i_9] [i_9] [i_9])));
                            var_23 = ((unsigned short) ((((/* implicit */_Bool) arr_51 [i_9] [i_14 + 2])) ? ((((-2147483647 - 1)) | (((/* implicit */int) arr_36 [i_9])))) : (((/* implicit */int) (unsigned char)42))));
                            arr_61 [(_Bool)1] [i_12] [i_13] [i_14] [7LL] [i_15] = ((/* implicit */int) ((((unsigned long long int) arr_51 [i_9] [i_9])) != (17141326126054013734ULL)));
                            arr_62 [i_9] [i_12] [i_13] [(signed char)12] [13U] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_57 [i_15 + 4] [i_15] [i_15] [i_15] [i_15 + 4] [i_15])) ^ (((/* implicit */int) arr_17 [i_15 + 1]))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_2)), (arr_6 [i_9] [i_9])))) : ((~(((/* implicit */int) (unsigned char)253)))))), (((/* implicit */int) arr_58 [i_9] [i_9] [i_12] [i_13] [i_14] [11] [i_15 - 1]))));
                            arr_63 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(((/* implicit */int) (short)2130))))) ? (arr_41 [i_13]) : (((/* implicit */unsigned long long int) var_11)))) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) < (arr_0 [i_12])))))))));
                        }
                    }
                } 
            } 
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (short)-2125))));
        }
    }
    var_25 = ((/* implicit */signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))))), (7703324103644279028LL)));
}
