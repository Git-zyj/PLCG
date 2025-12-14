/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102505
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
    var_19 = ((/* implicit */short) var_18);
    var_20 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) var_17)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (+(((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_0 [i_0])))))))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (unsigned short)35237))));
        var_23 = ((/* implicit */unsigned short) arr_1 [i_0]);
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_24 = ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) % (min((((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0]))))), (min((var_2), (((/* implicit */long long int) arr_5 [i_1] [(unsigned short)12] [13LL])))))));
            arr_6 [i_1] = ((/* implicit */unsigned char) min((min((((((/* implicit */_Bool) arr_0 [8LL])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_5 [(unsigned short)7] [i_0] [3U])))), ((-(((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) var_18))));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_25 = ((/* implicit */_Bool) (unsigned char)99);
            var_26 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << ((((+(9223372036854775800LL))) - (9223372036854775774LL)))));
            var_27 = ((((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_0])) ? (var_9) : (((/* implicit */long long int) var_17)))) / ((+(537903853742814334LL))));
            arr_9 [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) arr_5 [i_0] [i_2] [(unsigned char)5])) == (((/* implicit */int) var_5)))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 1; i_3 < 12; i_3 += 4) 
            {
                for (int i_4 = 1; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_28 = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0]))));
                        var_29 = ((/* implicit */signed char) arr_12 [i_2] [i_2]);
                    }
                } 
            } 
        }
        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            arr_19 [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */int) (short)-2995)) != (((/* implicit */int) min((((((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5])) || (((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_5])))), ((!(((/* implicit */_Bool) (unsigned short)0)))))))));
            var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) min((((((/* implicit */int) arr_13 [i_0] [(unsigned char)8] [i_5] [i_5])) * (((/* implicit */int) min((arr_3 [i_0] [i_0]), (arr_7 [i_5] [10LL] [i_5])))))), (((/* implicit */int) arr_14 [i_0] [i_5] [i_5] [i_5])))))));
            /* LoopSeq 2 */
            for (unsigned int i_6 = 0; i_6 < 14; i_6 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_16))) >= (min((((/* implicit */long long int) min((((/* implicit */unsigned short) (short)-9)), (var_18)))), (arr_1 [i_6]))))))));
                            var_32 = ((/* implicit */_Bool) max((var_32), (((((/* implicit */_Bool) ((unsigned char) arr_22 [i_0] [i_5] [i_8]))) || (((/* implicit */_Bool) min((arr_22 [i_7] [i_5] [i_0]), (arr_22 [i_0] [i_7] [i_8]))))))));
                        }
                    } 
                } 
                arr_31 [i_6] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_24 [i_0] [i_5])) ^ (((/* implicit */int) (short)7))));
            }
            for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (3609527842493193919LL)))) && (((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) 407299682577263141LL))))))), (((4294967295U) >> ((((-(((/* implicit */int) arr_29 [i_0] [i_9])))) + (22531)))))));
                var_34 = ((/* implicit */signed char) arr_33 [i_0] [i_5] [i_5]);
                var_35 = ((/* implicit */unsigned char) arr_4 [i_0] [i_0]);
            }
        }
        /* LoopNest 2 */
        for (unsigned char i_10 = 4; i_10 < 13; i_10 += 1) 
        {
            for (unsigned char i_11 = 1; i_11 < 12; i_11 += 2) 
            {
                {
                    var_36 = min((min((arr_2 [i_11]), (((/* implicit */long long int) ((int) (-9223372036854775807LL - 1LL)))))), (((/* implicit */long long int) var_10)));
                    /* LoopNest 2 */
                    for (short i_12 = 2; i_12 < 13; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 1; i_13 < 13; i_13 += 2) 
                        {
                            {
                                var_37 = ((/* implicit */short) min((((/* implicit */long long int) min((min((var_15), (((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_10])))), (min(((unsigned short)6), (arr_4 [i_0] [i_10])))))), (arr_23 [i_10] [i_10 - 1] [i_11] [i_12])));
                                arr_43 [(unsigned char)4] [(unsigned char)4] [0U] [(unsigned char)12] &= ((/* implicit */int) min((((/* implicit */long long int) 2222398090U)), ((-9223372036854775807LL - 1LL))));
                                arr_44 [i_10] [i_10] [i_10 + 1] [i_10] [i_10 - 3] [i_10] = ((/* implicit */signed char) (~(arr_12 [i_10] [i_12 - 1])));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */unsigned short) min((var_38), (min(((unsigned short)10561), (((/* implicit */unsigned short) (unsigned char)6))))));
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 14; i_14 += 2) 
                    {
                        for (long long int i_15 = 3; i_15 < 13; i_15 += 3) 
                        {
                            {
                                var_39 = ((/* implicit */_Bool) max((var_39), (((((/* implicit */_Bool) arr_7 [i_14] [i_14] [i_10 - 3])) && ((!(((/* implicit */_Bool) arr_21 [i_0] [i_10 + 1] [i_10 - 3]))))))));
                                arr_50 [i_0] [i_10] [i_11] [i_0] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-121)), (((((/* implicit */_Bool) 2072569205U)) ? (((/* implicit */long long int) arr_40 [i_14] [i_10] [i_14] [i_14])) : (32767LL)))))) ? (((/* implicit */long long int) 8U)) : (min((((((/* implicit */_Bool) var_12)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)26037))))), (((/* implicit */long long int) arr_41 [i_10] [i_10]))))));
                                var_40 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) min((arr_14 [i_0] [i_10] [i_0] [i_15]), (((/* implicit */short) var_6))))) / (((/* implicit */int) min((((/* implicit */unsigned short) var_12)), ((unsigned short)896)))))));
                                var_41 = ((/* implicit */short) min((min((((/* implicit */long long int) arr_40 [i_0] [i_10] [i_10] [i_0])), (min((arr_8 [i_10] [i_10] [i_15]), (((/* implicit */long long int) var_8)))))), (min((min((arr_1 [(signed char)8]), (((/* implicit */long long int) arr_22 [i_0] [i_0] [i_0])))), (((/* implicit */long long int) ((int) var_11)))))));
                                arr_51 [i_0] [i_0] [i_15] [i_14] [i_15] [i_10] = ((/* implicit */signed char) min(((-(((((/* implicit */_Bool) var_17)) ? (arr_42 [i_0] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))), (((/* implicit */long long int) min(((+(((/* implicit */int) arr_7 [i_10] [i_10] [i_10])))), (((/* implicit */int) min((arr_16 [i_10] [i_10]), (((/* implicit */short) (signed char)56))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_42 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_7)), (((unsigned int) var_10)))) | (((/* implicit */unsigned int) (+((~(((/* implicit */int) var_4)))))))));
}
