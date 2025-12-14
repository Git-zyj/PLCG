/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133180
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
    var_20 *= ((/* implicit */signed char) var_16);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_21 = ((/* implicit */long long int) arr_1 [i_0]);
        var_22 = ((/* implicit */signed char) max((((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0])))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)115))))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_2 = 4; i_2 < 15; i_2 += 3) 
            {
                arr_6 [i_0] [i_2] [i_2] = ((/* implicit */signed char) arr_2 [i_0] [0LL] [i_2]);
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    arr_10 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_8 [i_2 - 2] [i_3 + 1] [i_2 - 2] [i_2 - 2]);
                    var_23 = ((/* implicit */short) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) arr_1 [i_0]))));
                    var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                }
                arr_11 [i_2] [i_1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_16))))));
            }
            for (int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                var_25 = ((/* implicit */_Bool) ((long long int) arr_8 [i_0] [i_0] [i_0] [i_0]));
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (((arr_7 [i_0] [i_1] [i_0] [i_0] [i_4] [i_1]) & (arr_7 [i_0] [i_0] [i_0] [(unsigned short)0] [i_1] [i_4]))))))));
            }
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                arr_18 [i_0] [(short)3] = ((/* implicit */short) (-(max((var_4), (((/* implicit */long long int) (short)1919))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    for (short i_7 = 1; i_7 < 15; i_7 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_3 [i_0] [i_6])) ? (var_7) : (var_14)))));
                            var_28 &= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(var_4)))) ? (arr_17 [i_0] [15LL]) : (((((/* implicit */_Bool) var_10)) ? (var_18) : (var_13)))))));
                            arr_23 [i_0] [i_0] &= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_7 + 1] [i_5]))) | (max((arr_2 [i_0] [i_1] [i_6]), (((/* implicit */unsigned int) var_15))))))), (arr_0 [i_6])));
                            var_29 = ((/* implicit */long long int) arr_1 [(unsigned short)11]);
                        }
                    } 
                } 
                arr_24 [i_0] [i_1] [i_5] &= ((/* implicit */int) ((long long int) max((((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (short)22))))), ((-(((/* implicit */int) var_15)))))));
                arr_25 [i_0] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? ((+(arr_17 [i_0] [i_0]))) : (max((((/* implicit */long long int) (unsigned short)63864)), (max((var_14), (-5801683888040608388LL)))))));
                var_30 = ((/* implicit */signed char) (~((((-(3354336413U))) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
            }
            /* vectorizable */
            for (short i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                var_31 = 0LL;
                var_32 = ((/* implicit */signed char) ((arr_2 [i_0] [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)36)))));
                var_33 = ((/* implicit */long long int) var_1);
                arr_29 [i_0] [14LL] = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) var_0))));
            }
            arr_30 [i_0] [i_1] [i_1] &= max((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_1])) ? (arr_9 [i_0] [i_0] [14LL] [i_1]) : (arr_9 [i_0] [i_0] [i_0] [i_1]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1] [i_1]))))));
            var_34 = ((/* implicit */short) (((-(arr_16 [i_1] [i_1] [i_0] [i_0]))) + (((/* implicit */long long int) arr_28 [i_0] [i_0] [i_1] [i_0]))));
        }
        for (unsigned char i_9 = 1; i_9 < 15; i_9 += 1) /* same iter space */
        {
            arr_33 [i_0] [i_0] [i_9] &= ((/* implicit */long long int) (short)12690);
            var_35 *= ((/* implicit */unsigned long long int) ((max((arr_17 [i_9 + 1] [i_9 + 2]), (var_14))) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_9 + 2] [i_9 + 1]))))))));
            var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)0))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (var_13))))))), (((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_9])) ? (var_18) : (((/* implicit */long long int) var_10)))) | ((+(-17LL))))))))));
            var_37 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((var_10) / (((/* implicit */int) (unsigned char)209))))) / (((((/* implicit */_Bool) arr_22 [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (short)3)))))));
        }
        for (unsigned char i_10 = 1; i_10 < 15; i_10 += 1) /* same iter space */
        {
            arr_37 [i_10] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(var_10)))) + ((+(var_16)))));
            arr_38 [i_10] = ((/* implicit */signed char) (+(arr_9 [i_0] [i_0] [i_0] [i_10])));
            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)6634)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [8U] [8U] [i_10 - 1])) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)-1)), (arr_35 [i_10])))) : (((/* implicit */int) arr_1 [5LL]))))) : (arr_36 [i_10 + 1] [i_10 + 1])));
        }
        var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) (signed char)-10))));
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 17; i_11 += 3) 
        {
            for (short i_12 = 2; i_12 < 15; i_12 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 17; i_13 += 2) 
                    {
                        for (int i_14 = 0; i_14 < 17; i_14 += 1) 
                        {
                            {
                                var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [2LL] [8LL] [i_12] [2LL]))) : (var_2)))) ? (var_2) : (arr_19 [i_0] [i_11] [i_12] [i_11])))) ? (max((arr_22 [i_12 + 1] [i_0] [i_11] [i_13]), (-8874026952570155609LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_11])))));
                                arr_48 [i_0] [7LL] [i_12] [i_11] [(short)1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */int) max(((unsigned short)23675), (arr_43 [i_0] [i_0] [i_0] [i_0])))), ((-(((/* implicit */int) var_1))))))), (18446744073709551615ULL)));
                                var_41 = (!(((/* implicit */_Bool) arr_36 [(signed char)15] [4LL])));
                                var_42 = ((/* implicit */signed char) arr_8 [i_13] [i_13] [(short)10] [i_13]);
                            }
                        } 
                    } 
                    arr_49 [i_11] = max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_42 [i_12 - 1] [i_11] [i_12] [i_12])) ? (var_10) : (arr_42 [i_12 - 1] [i_11] [i_12] [i_12])))), (var_7));
                    var_43 *= ((/* implicit */unsigned char) arr_21 [i_12 - 1] [i_0]);
                    var_44 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((7390642553817965001LL), (arr_22 [i_0] [i_0] [i_0] [i_12]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) -1LL)))))))) ? (max((((/* implicit */int) (signed char)119)), (arr_42 [i_11] [i_12] [i_11] [i_12]))) : (((/* implicit */int) ((((arr_2 [i_0] [i_11] [i_12]) << (((/* implicit */int) arr_31 [i_0])))) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4ULL)))))))))));
                }
            } 
        } 
    }
    for (signed char i_15 = 2; i_15 < 19; i_15 += 4) 
    {
        arr_54 [i_15] = ((/* implicit */unsigned int) 0);
        var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_7) * (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((((/* implicit */_Bool) arr_51 [i_15 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)23675)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))));
        arr_55 [16LL] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_50 [i_15 - 2] [i_15]), (((/* implicit */unsigned long long int) arr_52 [i_15 - 1]))))))))) * (((((/* implicit */_Bool) ((short) var_7))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) : (var_2)))));
    }
    for (unsigned int i_16 = 0; i_16 < 24; i_16 += 1) 
    {
        var_46 = ((/* implicit */long long int) var_10);
        var_47 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_57 [i_16] [i_16])))) - (((((/* implicit */int) arr_57 [i_16] [i_16])) | (((/* implicit */int) arr_57 [i_16] [i_16]))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_17 = 0; i_17 < 19; i_17 += 4) 
    {
        arr_61 [(signed char)18] &= ((/* implicit */signed char) (~(arr_59 [i_17])));
        var_48 = ((/* implicit */unsigned char) arr_58 [(unsigned short)16]);
        var_49 = ((/* implicit */long long int) (+(var_12)));
    }
}
