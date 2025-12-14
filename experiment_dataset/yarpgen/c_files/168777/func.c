/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168777
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_5 [i_1 + 1]))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_6 [i_0] [i_0] [i_0]))) ? (((/* implicit */int) (unsigned char)251)) : ((+(((/* implicit */int) var_3))))));
            }
            for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    arr_13 [i_3] = ((/* implicit */short) ((long long int) (short)511));
                    var_22 |= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_4 [i_1 + 1] [i_3] [i_3]))));
                    var_23 = ((/* implicit */signed char) arr_3 [i_0] [i_3]);
                    var_24 = ((/* implicit */short) (+(((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 1]))));
                }
                /* LoopSeq 2 */
                for (unsigned char i_5 = 3; i_5 < 12; i_5 += 4) 
                {
                    arr_16 [i_0] [i_1] [i_3] [i_0] [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_10 [i_0] [i_3] [i_1 - 1]))));
                    /* LoopSeq 2 */
                    for (long long int i_6 = 1; i_6 < 11; i_6 += 4) 
                    {
                        var_25 = ((/* implicit */short) ((((((/* implicit */int) var_12)) - (((/* implicit */int) arr_18 [i_3] [i_3] [i_3])))) * (((((/* implicit */int) arr_9 [i_3] [i_5])) % (((/* implicit */int) arr_17 [i_0] [i_3] [i_3] [4LL]))))));
                        var_26 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)4)) * (((/* implicit */int) arr_12 [i_6 + 3] [i_5 - 1] [i_1 + 1] [i_1 + 2]))));
                        arr_19 [i_3] [i_1] [i_3] [0LL] [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_5 [(unsigned char)6])))) ^ (((((/* implicit */int) arr_3 [(signed char)11] [i_1])) ^ (((/* implicit */int) (signed char)-86))))));
                    }
                    for (signed char i_7 = 4; i_7 < 13; i_7 += 2) 
                    {
                        var_27 = ((/* implicit */long long int) arr_18 [i_3] [i_1 - 2] [i_3]);
                        arr_22 [i_7 - 2] [i_3] [i_5] [(signed char)12] [i_1 + 1] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_21 [i_7 + 1] [i_1 - 1] [i_3] [(signed char)4] [i_7] [(signed char)9])) * (((/* implicit */int) (signed char)19))));
                    }
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1048575LL)) ? (((/* implicit */int) (short)-14077)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)77)) && (((/* implicit */_Bool) (unsigned char)2)))))));
                }
                for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    var_29 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)29)) * (((/* implicit */int) arr_18 [i_0] [i_1 - 1] [i_3]))));
                    arr_25 [i_3] [i_1 - 2] [i_3] [(unsigned char)12] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-30187)) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) (unsigned char)23)))) ^ (((/* implicit */int) ((signed char) var_8)))));
                }
            }
            for (signed char i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                arr_28 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) arr_21 [i_9] [i_1] [i_9] [(short)9] [i_9] [i_1 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)54)))))));
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) arr_21 [i_0] [i_1 + 1] [i_0] [i_1 + 2] [i_9] [i_0])) : (((/* implicit */int) arr_21 [(unsigned char)0] [(unsigned char)0] [i_1] [i_9] [i_9] [i_9])))))));
                arr_29 [(signed char)10] [(signed char)0] [(unsigned char)6] = ((/* implicit */signed char) ((unsigned char) arr_15 [i_1 - 1] [i_1 - 1] [2LL] [i_1 + 1]));
                var_31 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_1] [i_0] [i_0] [(unsigned char)4] [i_9])) && (((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_9] [i_9])) * (((/* implicit */int) var_7)))))));
            }
            for (signed char i_10 = 2; i_10 < 10; i_10 += 3) 
            {
                arr_34 [(unsigned char)1] [(signed char)11] [(signed char)13] = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-80)) * (((/* implicit */int) (unsigned char)4)))) * (((/* implicit */int) (unsigned char)0))));
                var_32 = ((/* implicit */unsigned char) arr_15 [i_0] [i_1] [(signed char)5] [i_10]);
            }
            arr_35 [i_0] = ((/* implicit */unsigned char) ((signed char) arr_11 [(signed char)4] [i_1 + 2] [(signed char)8] [(signed char)8] [i_1] [i_0]));
            var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_1 + 2]))));
            arr_36 [(short)12] [i_0] [i_1] = ((/* implicit */long long int) (unsigned char)247);
            arr_37 [i_0] [i_0] [i_1 + 2] = (signed char)-63;
        }
        for (signed char i_11 = 1; i_11 < 12; i_11 += 4) 
        {
            arr_40 [9LL] = ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_0] [(signed char)13]))));
            var_34 = ((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)64)), ((unsigned char)3)));
            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_7 [i_0])) && (((/* implicit */_Bool) var_2)))))) ? (((/* implicit */int) arr_20 [i_0] [i_11 + 1] [i_0] [i_11])) : (((/* implicit */int) arr_0 [i_0]))));
            var_36 = ((/* implicit */unsigned char) arr_3 [i_0] [i_11]);
        }
        var_37 -= ((unsigned char) (signed char)-67);
    }
    for (long long int i_12 = 1; i_12 < 21; i_12 += 4) 
    {
        var_38 += ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)97))))) ? (max((arr_41 [i_12]), (arr_41 [(unsigned char)7]))) : (((arr_41 [i_12]) / (arr_41 [(signed char)8]))))), (max((((((/* implicit */_Bool) (short)-22053)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_41 [i_12]))), (((/* implicit */long long int) (signed char)51))))));
        arr_43 [(unsigned char)6] &= ((/* implicit */unsigned char) min((arr_42 [(unsigned char)10]), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)75))))))))));
    }
    /* LoopSeq 1 */
    for (signed char i_13 = 3; i_13 < 20; i_13 += 1) 
    {
        var_39 = ((/* implicit */short) max(((~(((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_13 - 2] [(signed char)0])) || (((/* implicit */_Bool) (unsigned char)233))))))), (((/* implicit */int) var_18))));
        arr_46 [i_13 + 2] = ((max((arr_44 [i_13 - 3] [i_13 - 3]), (min((((/* implicit */long long int) var_8)), (arr_44 [i_13] [i_13]))))) | (((((/* implicit */_Bool) max((arr_44 [i_13] [i_13]), (((/* implicit */long long int) (signed char)74))))) ? (arr_45 [i_13 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)11))))));
    }
}
