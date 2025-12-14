/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119743
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
    var_12 -= ((/* implicit */short) max((((/* implicit */unsigned int) var_10)), (max((max((752261521U), (((/* implicit */unsigned int) (unsigned char)106)))), (((/* implicit */unsigned int) ((unsigned char) var_11)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */_Bool) (unsigned short)65408);
                        var_14 = ((/* implicit */unsigned int) (short)-28107);
                    }
                } 
            } 
        } 
        var_15 *= ((/* implicit */unsigned int) var_3);
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)189))) + (((((((/* implicit */_Bool) var_9)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) >> (((((/* implicit */int) arr_5 [i_0] [i_0])) - (6664)))))));
        arr_10 [i_0] &= arr_7 [i_0] [i_0] [i_0] [i_0];
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) arr_4 [i_4] [i_4]);
        /* LoopNest 2 */
        for (signed char i_5 = 2; i_5 < 9; i_5 += 1) 
        {
            for (signed char i_6 = 1; i_6 < 10; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            {
                                arr_24 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_15 [i_4] [i_5] [i_4]) >> (((5857487499944303086ULL) - (5857487499944303076ULL)))))) ? (((long long int) arr_14 [i_4] [i_4])) : (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_4] [i_8])))))));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_14 [i_5] [i_4])) + (((/* implicit */int) var_5))));
                                arr_25 [i_5] [i_6] [i_4] [i_5] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [i_4] [i_7] [i_6 - 1] [i_4]))));
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (signed char)96)))))));
                            }
                        } 
                    } 
                    arr_26 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((short) var_9));
                    var_20 += ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) > (((unsigned int) 572727804U))));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 1; i_9 < 10; i_9 += 2) 
                    {
                        for (short i_10 = 2; i_10 < 9; i_10 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) 65520U))));
                                var_22 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((33554431U) - (33554422U)))));
                                var_23 = ((((/* implicit */_Bool) arr_20 [i_9 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_6 - 1]))) : (3105458506U));
                            }
                        } 
                    } 
                    var_24 ^= ((/* implicit */unsigned short) (signed char)83);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            for (unsigned int i_12 = 1; i_12 < 7; i_12 += 3) 
            {
                {
                    arr_37 [0ULL] [i_11] &= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)32764)) ? (arr_29 [i_12 + 1] [i_11] [10U] [i_4] [i_4]) : (arr_29 [i_12 + 2] [i_12] [(short)8] [i_4] [i_4])));
                    var_25 = var_3;
                    /* LoopSeq 4 */
                    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        var_26 = ((/* implicit */short) (+(((unsigned long long int) arr_41 [(unsigned short)7] [i_13] [i_13] [i_4]))));
                        arr_42 [(unsigned char)5] [i_4] [i_12] [i_13] [i_13] [i_4] = (~((+(((/* implicit */int) var_9)))));
                        arr_43 [i_12] [i_4] = ((/* implicit */short) (~(arr_29 [i_12 + 2] [i_12 + 3] [i_4] [i_12] [i_12 + 2])));
                    }
                    for (unsigned int i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        arr_46 [i_14] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)81))) + (var_0)))) ? (((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-1)))) : ((-(((/* implicit */int) (short)32767))))));
                        var_27 *= ((/* implicit */unsigned int) ((arr_29 [i_12] [i_12 + 3] [10ULL] [i_12] [i_12 + 4]) + (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                        var_28 = ((/* implicit */long long int) (-((+(14934148578901170555ULL)))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_18 [i_4] [i_11])) : (1152920405095219200ULL)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((752261521U) > (arr_18 [i_4] [i_4]))))));
                    }
                    for (unsigned long long int i_15 = 3; i_15 < 10; i_15 += 2) 
                    {
                        var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_35 [i_12 + 3] [i_11]))));
                        var_31 *= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_29 [i_4] [i_4] [0U] [i_12 - 1] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (9925672021761916965ULL)))));
                    }
                    for (long long int i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_17 = 2; i_17 < 9; i_17 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) 33554431U)) && (((/* implicit */_Bool) (unsigned char)60))))))));
                            arr_56 [i_17 - 2] [i_4] [i_12 + 2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)66))));
                            var_33 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_51 [i_17 + 1] [i_17] [i_12 - 1] [i_11])) && (((/* implicit */_Bool) arr_51 [i_17 - 1] [i_16] [i_12 + 3] [i_4]))));
                        }
                        arr_57 [i_4] [i_11] [i_11] [i_4] = ((/* implicit */signed char) ((arr_36 [i_12 + 4] [i_12 + 1] [i_12 - 1] [i_12 + 2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23138)))));
                        var_34 = ((/* implicit */unsigned long long int) ((((unsigned int) arr_28 [(short)1] [i_11])) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_4] [i_4])) ? (((/* implicit */int) (unsigned char)82)) : (((/* implicit */int) (short)28106)))))));
                    }
                }
            } 
        } 
        var_35 = ((/* implicit */int) arr_4 [i_4] [i_4]);
    }
    for (unsigned char i_18 = 2; i_18 < 19; i_18 += 2) 
    {
        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) arr_59 [i_18 + 2] [i_18 - 2])) ? (((/* implicit */int) ((unsigned short) var_10))) : (((((/* implicit */_Bool) arr_59 [i_18 + 1] [i_18])) ? (((/* implicit */int) arr_59 [i_18 + 2] [15ULL])) : (((/* implicit */int) (unsigned short)52579))))));
        arr_61 [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (unsigned char)8))))) > (var_1)));
        var_37 = ((/* implicit */unsigned int) max((var_37), (((/* implicit */unsigned int) 14934148578901170555ULL))));
        arr_62 [i_18 + 2] [i_18] = ((/* implicit */unsigned int) arr_58 [i_18] [18ULL]);
        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) (~((-(arr_58 [i_18 + 2] [i_18 - 1]))))))));
    }
}
