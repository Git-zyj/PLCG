/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170896
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
    var_16 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_0] = ((/* implicit */signed char) arr_2 [i_1] [(unsigned char)8]);
                var_17 = ((/* implicit */long long int) arr_0 [9]);
                var_18 ^= ((/* implicit */long long int) arr_2 [i_0] [i_1]);
                arr_5 [(signed char)3] [i_1] = ((/* implicit */short) arr_3 [i_0] [(unsigned short)2]);
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) arr_1 [i_0]);
                                arr_14 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3 + 3] [i_3 - 1] [i_3 + 2] [i_3])))))));
                                arr_15 [i_1] = ((/* implicit */unsigned short) (+(arr_8 [i_1])));
                                arr_16 [(signed char)2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_3] [i_3 + 4] [i_4]))))));
                                var_20 -= ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_7 [i_3 + 3] [i_0]))))));
                            }
                        } 
                    } 
                    var_21 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_12 [i_0] [(short)0] [i_1] [i_1] [i_0])))))))));
                }
                for (long long int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        var_22 -= ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_13 [i_6] [i_5] [i_1] [(unsigned char)5] [i_0]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_7 = 2; i_7 < 11; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned short) arr_2 [i_1] [i_1]);
                            var_24 = ((/* implicit */unsigned int) (-(arr_22 [i_7 - 2] [i_7 - 1] [i_7] [i_1] [i_7 - 2])));
                            var_25 -= ((/* implicit */unsigned int) (-(arr_22 [i_7 - 1] [i_5] [i_7] [i_5] [i_7 - 1])));
                        }
                    }
                    for (unsigned int i_8 = 1; i_8 < 9; i_8 += 4) /* same iter space */
                    {
                        var_26 ^= ((/* implicit */short) arr_11 [i_8] [i_5] [i_0] [i_0] [i_5] [i_0]);
                        arr_27 [i_0] [i_1] [i_0] = arr_26 [i_0] [i_0] [i_5] [i_1];
                        var_27 = ((/* implicit */long long int) arr_19 [11LL] [(_Bool)1]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            arr_30 [i_1] [i_1] [i_1] [6] [i_1] [i_1] = arr_10 [i_8 + 1] [i_8] [i_9] [5];
                            var_28 = ((/* implicit */unsigned short) arr_11 [i_8 + 2] [i_1] [i_8 + 3] [i_8] [i_8 + 3] [i_9 - 1]);
                            var_29 = ((/* implicit */unsigned short) arr_25 [i_9] [i_8] [i_5] [i_1] [i_0]);
                            var_30 = ((/* implicit */unsigned long long int) arr_22 [i_0] [i_9] [i_8 + 3] [i_1] [i_9]);
                        }
                        for (unsigned int i_10 = 1; i_10 < 10; i_10 += 4) 
                        {
                            var_31 ^= ((/* implicit */unsigned short) arr_31 [i_0] [(unsigned char)1] [i_5] [i_8] [6U]);
                            var_32 = ((/* implicit */_Bool) arr_12 [i_1] [i_10 - 1] [i_10 - 1] [i_8 - 1] [i_1]);
                            arr_34 [i_1] [i_8 + 3] [i_5] [i_1] [i_1] = ((/* implicit */long long int) (!(arr_13 [i_10] [i_10 + 2] [i_10 + 1] [(_Bool)1] [i_10])));
                        }
                    }
                    for (unsigned int i_11 = 1; i_11 < 9; i_11 += 4) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned long long int) arr_26 [(signed char)11] [i_11 + 3] [(signed char)3] [i_1]);
                        var_34 = ((/* implicit */unsigned int) min((var_34), ((~((+(arr_0 [i_0])))))));
                        var_35 = ((/* implicit */int) arr_37 [i_1]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_12 = 0; i_12 < 12; i_12 += 2) 
                        {
                            var_36 |= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_33 [i_12] [i_11 + 2] [5LL] [i_11 + 1] [i_11 + 1]))));
                            var_37 -= ((/* implicit */unsigned short) arr_18 [i_12] [i_12] [i_11 + 2] [i_11]);
                        }
                    }
                    /* LoopSeq 3 */
                    for (signed char i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        var_38 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1])))))));
                        var_39 = ((/* implicit */unsigned short) min((var_39), (((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0])))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        arr_47 [(_Bool)1] [i_1] [i_5] [i_14] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_14] [i_1] [i_1]))));
                        arr_48 [i_0] [i_0] [i_1] [i_5] [i_1] = (!(((/* implicit */_Bool) arr_10 [(_Bool)1] [i_1] [i_1] [i_1])));
                    }
                    /* vectorizable */
                    for (unsigned short i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_16 = 0; i_16 < 12; i_16 += 2) 
                        {
                            var_40 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1]))));
                            arr_54 [i_0] [i_1] [i_5] [i_1] [(_Bool)1] [i_16] [(_Bool)1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_39 [i_1]))));
                        }
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                        {
                            var_41 = ((/* implicit */_Bool) max((var_41), (((/* implicit */_Bool) arr_25 [9] [9U] [(unsigned char)6] [i_1] [(unsigned short)1]))));
                            arr_57 [i_0] [(_Bool)1] [5] [i_5] [i_15] [i_1] = ((/* implicit */unsigned int) arr_18 [i_15] [i_5] [i_1] [8U]);
                            var_42 = ((/* implicit */_Bool) (+((+(arr_12 [i_0] [i_0] [i_0] [9LL] [i_1])))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                        {
                            var_43 ^= (!(((/* implicit */_Bool) arr_59 [(short)6] [(short)6] [i_5] [i_15] [(_Bool)0] [i_0])));
                            var_44 = (~(((/* implicit */int) arr_25 [(short)8] [i_1] [3U] [i_1] [i_1])));
                        }
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                        {
                            var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)5061)))))));
                            var_46 -= ((/* implicit */signed char) arr_58 [i_0] [i_1] [i_5] [i_15] [i_19] [i_5] [i_0]);
                            arr_64 [(unsigned char)8] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_0] [(_Bool)1] [i_15]))));
                        }
                        arr_65 [i_1] = ((/* implicit */short) (~(arr_24 [i_15] [i_1] [i_0])));
                        var_47 = ((/* implicit */unsigned char) arr_19 [i_1] [i_5]);
                        var_48 = ((/* implicit */unsigned short) min((var_48), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_2 [i_0] [i_1])))))));
                    }
                    var_49 ^= ((/* implicit */_Bool) arr_59 [i_5] [i_5] [(short)3] [(short)3] [(_Bool)1] [4LL]);
                }
            }
        } 
    } 
}
