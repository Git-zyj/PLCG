/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131987
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
    var_19 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = arr_0 [i_0];
        /* LoopSeq 4 */
        for (signed char i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        {
                            var_20 = ((signed char) arr_6 [i_0] [i_1 - 1] [(signed char)8] [i_1]);
                            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_6))) + (var_13)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_5 [i_1] [i_0] [i_1]))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_0] [i_3] [i_2] [i_2] [i_0] [4LL]))) : (arr_3 [i_0] [i_0])))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */signed char) min((var_21), (arr_7 [(unsigned char)2] [(unsigned char)0])));
        }
        for (signed char i_5 = 3; i_5 < 13; i_5 += 4) 
        {
            arr_15 [8LL] [i_0] = var_9;
            var_22 = ((/* implicit */signed char) min((var_22), (((signed char) arr_3 [i_0 + 1] [10LL]))));
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_3 [(signed char)0] [(unsigned char)6])))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [(signed char)2] [i_0 - 3] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_7 [(signed char)0] [(signed char)0])))) : (((/* implicit */int) var_10)))))));
        }
        for (unsigned char i_6 = 1; i_6 < 14; i_6 += 3) 
        {
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((arr_13 [i_6 - 1]) == (arr_13 [i_6]))))));
            /* LoopNest 3 */
            for (signed char i_7 = 0; i_7 < 17; i_7 += 3) 
            {
                for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    for (long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_0 - 2] [i_0] [i_0 - 3] [i_9] [i_0 + 2])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_0])) ^ (((/* implicit */int) var_6))))) : (((long long int) var_1)))))));
                            arr_30 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_0] [i_6] [i_6 - 1] [i_8])) : (((/* implicit */int) var_8))));
                            arr_31 [i_0] [i_9] [i_6] [i_7] [i_6] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0 - 3] [i_6 + 3] [(unsigned char)6]))) * (((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)63))) : (arr_9 [i_0 - 1] [i_0])))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_11 = 0; i_11 < 17; i_11 += 4) 
            {
                arr_37 [(signed char)13] [i_0] [i_11] = arr_24 [i_0 - 1] [i_10] [i_0 - 3] [i_0] [i_11];
                /* LoopNest 2 */
                for (signed char i_12 = 4; i_12 < 13; i_12 += 4) 
                {
                    for (long long int i_13 = 0; i_13 < 17; i_13 += 1) 
                    {
                        {
                            var_26 = arr_21 [i_0 + 2] [i_0] [(signed char)11];
                            var_27 = arr_21 [i_10] [i_0] [i_12];
                            arr_42 [(unsigned char)2] [i_11] [i_11] [i_12] [(signed char)8] &= ((/* implicit */signed char) var_15);
                        }
                    } 
                } 
                var_28 = ((/* implicit */long long int) ((((/* implicit */int) arr_28 [i_0] [i_0])) & (((/* implicit */int) arr_28 [i_0] [i_10]))));
            }
            /* LoopNest 2 */
            for (signed char i_14 = 1; i_14 < 14; i_14 += 1) 
            {
                for (signed char i_15 = 0; i_15 < 17; i_15 += 1) 
                {
                    {
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */int) arr_24 [i_0 - 2] [i_14 - 1] [i_15] [i_0] [i_15])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0 + 1] [i_0])))))));
                        var_30 = ((/* implicit */signed char) (+(((/* implicit */int) var_4))));
                    }
                } 
            } 
        }
        arr_48 [i_0] [i_0] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_6 [i_0] [i_0] [(signed char)13] [i_0 + 2]))))));
    }
    for (unsigned char i_16 = 0; i_16 < 23; i_16 += 4) 
    {
        arr_51 [i_16] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_12)) ? (6323174928448764489LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))));
        var_31 = ((/* implicit */long long int) ((unsigned char) min((((/* implicit */long long int) (signed char)121)), (arr_50 [i_16] [i_16]))));
        var_32 = ((/* implicit */signed char) var_15);
        /* LoopSeq 1 */
        for (signed char i_17 = 0; i_17 < 23; i_17 += 4) 
        {
            var_33 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_53 [i_16])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_53 [i_17]))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((signed char) var_17)))))) : ((-(arr_49 [i_16])))));
            var_34 = arr_50 [i_16] [13LL];
            /* LoopNest 3 */
            for (signed char i_18 = 3; i_18 < 22; i_18 += 1) 
            {
                for (long long int i_19 = 0; i_19 < 23; i_19 += 4) 
                {
                    for (signed char i_20 = 0; i_20 < 23; i_20 += 3) 
                    {
                        {
                            arr_62 [i_16] [i_20] [i_16] [i_16] [i_16] = ((/* implicit */signed char) (+((-(((((/* implicit */int) var_9)) * (((/* implicit */int) arr_52 [(unsigned char)19] [i_17]))))))));
                            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_61 [i_16]))) / (arr_50 [i_16] [i_16]))) < (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_18 - 3] [i_17])))))))))));
                        }
                    } 
                } 
            } 
        }
    }
}
