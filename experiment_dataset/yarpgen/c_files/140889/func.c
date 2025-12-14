/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140889
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(10591859058946982307ULL)))) ? (var_6) : (((/* implicit */unsigned long long int) -357767912))))) ? (((min((var_0), (((/* implicit */unsigned long long int) var_7)))) >> (((((((/* implicit */_Bool) 10591859058946982307ULL)) ? (((/* implicit */int) (unsigned short)45472)) : (((/* implicit */int) (short)0)))) - (45471))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))), (max((var_13), (var_9))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        var_21 = ((/* implicit */short) (+((-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0]))))))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_1 [(short)12]))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0 - 2])) : (((((/* implicit */int) arr_0 [i_0 + 1])) / (((/* implicit */int) arr_0 [i_0 - 2]))))));
        var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned short)52795)) ? (4091139709941438489ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))))) < (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0 - 2])))) / (((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */short) arr_0 [i_0]))))))))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 3; i_1 < 14; i_1 += 2) 
    {
        for (long long int i_2 = 2; i_2 < 12; i_2 += 4) 
        {
            {
                var_25 = max((min((arr_2 [i_1 - 1] [i_2 - 2]), (arr_2 [i_1 - 1] [i_1 - 1]))), (((((/* implicit */_Bool) arr_2 [i_2 + 3] [i_2 + 1])) ? (arr_2 [i_2 + 3] [i_1 - 3]) : (arr_2 [i_1] [i_2 - 1]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 1) 
                {
                    var_26 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1])) ? (arr_6 [i_1 - 2] [i_1 - 1]) : (arr_2 [i_1] [(unsigned char)1]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_3 + 1]))))))))));
                    arr_10 [i_1] [i_1] [i_1] = arr_4 [i_1] [5ULL] [i_1];
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    var_27 = ((/* implicit */short) ((arr_7 [i_4] [i_1 - 2] [i_2 - 2]) / (arr_7 [i_1] [i_1 - 1] [i_2 - 1])));
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
                    {
                        var_28 ^= ((/* implicit */short) ((14355604363768113125ULL) / (((/* implicit */unsigned long long int) arr_4 [i_2] [i_2 - 2] [i_2 + 2]))));
                        var_29 &= arr_13 [i_2] [i_5];
                        /* LoopSeq 1 */
                        for (signed char i_6 = 3; i_6 < 14; i_6 += 4) 
                        {
                            var_30 |= ((/* implicit */short) ((((/* implicit */int) arr_5 [i_2 + 3] [i_2 + 3] [i_2])) % (((/* implicit */int) arr_5 [i_2 - 2] [i_2 - 1] [i_2]))));
                            var_31 ^= (~(arr_17 [i_1 - 3] [i_1 - 3] [i_4] [i_1 - 3] [i_6 - 1] [i_1 - 3]));
                            var_32 ^= ((/* implicit */int) arr_2 [12U] [12U]);
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 2; i_7 < 12; i_7 += 2) 
                        {
                            var_33 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2 - 2] [i_4]))));
                            var_34 ^= ((/* implicit */long long int) (-(arr_19 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1] [i_5])));
                            var_35 = ((/* implicit */unsigned short) ((arr_14 [i_1 - 3] [i_1] [i_1 + 1] [i_1 - 1]) > (arr_14 [i_2] [i_1] [i_4] [i_5])));
                        }
                        for (unsigned char i_8 = 2; i_8 < 14; i_8 += 3) 
                        {
                            arr_25 [i_1] [i_2] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-15491)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20))) : (7854885014762569324ULL))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_9 [i_1 + 1] [i_2 + 3] [4ULL])))))));
                            var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_1 - 1] [i_2 + 1] [i_1]))));
                            var_37 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_4 [i_4] [i_4] [i_2 + 3]) / (arr_17 [i_1] [i_5] [6ULL] [6ULL] [i_4] [i_1])))) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_4]))) : (arr_19 [i_1 - 2] [8U] [8U] [4LL] [i_1] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1 - 2] [i_1 - 2] [i_1 + 1] [2ULL] [i_1] [i_2])))));
                            arr_26 [i_2] [(signed char)0] [i_1] [i_2 - 2] [3ULL] [i_2 - 1] [i_2 - 1] = ((/* implicit */short) ((((/* implicit */long long int) arr_15 [i_2] [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 2] [i_2 + 3])) & (arr_14 [i_2 - 2] [i_1] [i_2] [i_2 - 1])));
                        }
                    }
                    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 4) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned int) (-(((arr_19 [i_1 + 1] [i_1] [i_2 + 2] [0] [i_4] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1 - 3] [11])))))));
                        var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_2 + 3] [i_2 + 1] [i_1])) ? (((/* implicit */int) arr_5 [i_2 + 3] [i_2 + 3] [i_1])) : (((/* implicit */int) arr_5 [i_2 - 2] [i_2 + 1] [i_1]))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) 
                    {
                        var_40 = ((/* implicit */signed char) (-(arr_7 [i_2 - 2] [i_2 - 2] [i_2 + 1])));
                        var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_2 + 2] [6U] [i_4])) / (((/* implicit */int) arr_9 [i_2 + 3] [i_2] [i_10])))))));
                        arr_33 [2ULL] [10ULL] [i_1] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_24 [i_2 - 2] [i_1] [i_4] [7ULL] [i_1 - 1])) < (((((/* implicit */int) arr_28 [i_1] [i_2] [i_1] [i_4] [i_10])) % (((/* implicit */int) arr_13 [i_1] [i_1]))))));
                        arr_34 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1 + 1] [i_1 - 2] [i_1] [i_2] [i_2 + 1] [i_1]))) % (arr_6 [i_1 + 1] [i_1 - 2])));
                    }
                }
                for (int i_11 = 0; i_11 < 15; i_11 += 1) 
                {
                    var_42 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_21 [i_2 - 2] [i_2] [i_2 + 2] [i_2 + 2])) ? (((/* implicit */int) arr_21 [i_2 - 2] [i_2 - 2] [0U] [i_2 - 2])) : (((/* implicit */int) arr_21 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 2]))))));
                    arr_37 [i_1] [i_1] [i_11] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) 10591859058946982297ULL)) ? (10591859058946982286ULL) : (((/* implicit */unsigned long long int) 3731212031U))));
                }
                arr_38 [i_1] [i_2] [i_2 + 1] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1 - 3] [i_2 + 2] [i_1]))))) - (((((/* implicit */_Bool) arr_13 [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_8 [i_1 - 3] [i_2 + 3])) : (((/* implicit */int) arr_8 [i_1 - 1] [i_2 - 1]))))));
                var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-17092)) / (((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) arr_24 [i_1] [i_2] [i_2] [i_2 + 2] [i_2])) : (((/* implicit */int) (unsigned short)1023))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_22 [i_1 + 1] [i_1] [i_2 - 1] [i_2] [i_2 - 2]), (arr_22 [i_1 - 1] [(unsigned char)13] [i_2 + 2] [i_2] [i_2 + 3]))))) : (((((/* implicit */_Bool) arr_11 [i_2 - 2] [i_2 + 3] [i_2])) ? (arr_11 [i_2 + 1] [i_2 + 3] [i_2]) : (arr_11 [i_2 + 2] [i_2 - 1] [i_2]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_12 = 0; i_12 < 10; i_12 += 1) 
    {
        for (short i_13 = 0; i_13 < 10; i_13 += 2) 
        {
            {
                var_44 = ((/* implicit */int) arr_11 [(unsigned short)0] [i_13] [i_13]);
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 8; i_14 += 2) 
                {
                    for (unsigned int i_15 = 0; i_15 < 10; i_15 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((12ULL), (((/* implicit */unsigned long long int) (unsigned char)247))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_12] [i_13]))))) : (((/* implicit */int) arr_18 [i_12] [i_14] [i_14] [i_14] [i_14 + 2] [i_13]))))) ? (((((/* implicit */_Bool) (-(arr_14 [i_12] [i_14] [i_14 + 1] [i_15])))) ? (((((/* implicit */_Bool) arr_43 [i_12] [i_15])) ? (arr_3 [i_13]) : (((/* implicit */unsigned int) arr_39 [6ULL])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 255775911U)))))))) : (((((((/* implicit */_Bool) arr_2 [14] [13LL])) || (((/* implicit */_Bool) arr_40 [i_14])))) ? (((((/* implicit */_Bool) (short)-2553)) ? (2445032211U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)83))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_12] [i_13])) ? (arr_39 [i_12]) : (((/* implicit */int) arr_23 [i_12] [3] [i_12] [(short)8] [i_15])))))))));
                            arr_52 [i_12] [i_12] [i_13] [i_12] [8] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_12 [i_14] [i_13] [i_14]), (((/* implicit */int) arr_13 [(unsigned char)4] [i_14]))))) ? (((((/* implicit */_Bool) arr_16 [i_12] [i_13])) ? (((/* implicit */int) arr_18 [i_12] [i_12] [i_12] [i_12] [i_12] [i_14])) : (arr_15 [i_12] [i_13] [i_14] [8LL] [i_13] [i_14 + 1]))) : (((((/* implicit */_Bool) arr_40 [8ULL])) ? (((/* implicit */int) arr_9 [i_12] [(unsigned short)14] [i_12])) : (((/* implicit */int) arr_40 [0U]))))))) ? (((((/* implicit */_Bool) arr_9 [i_14 + 2] [i_14] [i_14 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_13] [i_14] [i_14] [i_13] [i_12] [i_13])))))) : (min((((/* implicit */long long int) arr_49 [i_12] [(short)3] [i_12] [i_12] [i_12] [i_12])), (arr_44 [i_12]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_14 - 1] [i_14 + 1] [i_14 - 1])) ? (arr_35 [i_14 + 2] [i_14 + 2] [i_14 - 1]) : (arr_35 [i_14 - 2] [i_14 - 1] [i_14 + 2]))))));
                            var_46 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (unsigned char)120))))));
                        }
                    } 
                } 
                arr_53 [i_12] [i_12] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_12] [i_13] [i_12] [i_12] [i_12]))) * (((((/* implicit */_Bool) arr_45 [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(short)12] [i_13] [i_13]))) : (arr_2 [i_12] [6ULL]))))), (((/* implicit */unsigned long long int) arr_31 [i_12] [i_12] [i_13] [i_12] [i_12] [i_12]))));
            }
        } 
    } 
    var_47 = ((/* implicit */unsigned char) min((var_47), (((/* implicit */unsigned char) max((4091139709941438490ULL), (7854885014762569318ULL))))));
}
