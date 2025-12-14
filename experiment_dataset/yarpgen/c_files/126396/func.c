/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126396
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
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) (unsigned short)57072)), (0ULL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))) : (((long long int) 18446744073709551615ULL)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) min((min((((/* implicit */int) min((arr_3 [i_0] [i_1] [i_2 + 1]), (arr_2 [i_0] [i_0])))), ((~(((/* implicit */int) var_10)))))), (((/* implicit */int) ((unsigned short) ((unsigned short) var_3))))));
                    var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14066606821005170047ULL)) ? (((((/* implicit */_Bool) 2955793762909621449LL)) ? (0ULL) : (14066606821005170047ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) -2955793762909621443LL))))))))) ? ((-(10309379885273259578ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5244)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) (unsigned short)50251)))))) && (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3 - 1] [i_3]))));
                        arr_9 [(unsigned short)18] [i_1] [i_1] [(unsigned short)17] [i_3] = ((/* implicit */unsigned long long int) ((unsigned short) (-(((unsigned long long int) arr_1 [i_0] [i_0])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            var_17 = ((/* implicit */signed char) arr_6 [i_3 - 1] [(unsigned short)15] [i_1]);
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_12 [i_2] [i_2 - 1] [i_2 + 1] [i_2] [i_3 - 2] [i_4] [i_3 - 1]))));
                            var_19 = 18446744073709551615ULL;
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16384)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4] [i_4] [8ULL]))) : (-2955793762909621457LL)))) != (((((/* implicit */_Bool) arr_10 [i_0] [(unsigned short)16] [i_0] [i_3] [i_0])) ? (arr_8 [i_0] [i_1] [i_4] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 2; i_5 < 17; i_5 += 4) 
                        {
                            arr_16 [i_5 - 2] [i_3] [i_3] [0ULL] [i_1] [i_3] [i_0] = ((/* implicit */unsigned short) 8123252805981699640LL);
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_5])) ? (((/* implicit */int) (unsigned short)8121)) : (((/* implicit */int) arr_15 [i_3] [i_3]))));
                        }
                    }
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        arr_19 [i_6] [(unsigned short)11] [i_2] [i_2] [14ULL] [i_0] &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_5 [(unsigned short)17] [i_1] [i_2 + 2] [i_6])) ? (((/* implicit */int) arr_5 [12LL] [i_1] [i_2 - 1] [(signed char)18])) : (((/* implicit */int) (unsigned short)15293)))), (((/* implicit */int) ((unsigned short) arr_5 [i_1] [i_6] [i_2 - 1] [i_1])))));
                        arr_20 [i_1] [i_0] [i_1] [i_2] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(2955793762909621443LL)))), (((((/* implicit */_Bool) (signed char)-1)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_6] [i_0] [i_2])))))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_2 + 2] [i_2 - 1]), (arr_2 [i_2 + 1] [i_2 + 1]))))) : (((((/* implicit */_Bool) (signed char)-42)) ? (-2955793762909621450LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                        var_22 = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_2 + 1])) >= (((/* implicit */int) min((arr_7 [i_2 - 1] [i_2] [i_2 + 2] [i_2 + 2] [i_2 + 1]), (arr_7 [i_2 - 1] [(unsigned short)12] [i_2 - 1] [i_2 + 2] [i_2 + 1]))))));
                    }
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned short)35242)))), (((/* implicit */int) min((arr_2 [i_0] [i_0]), ((unsigned short)1155))))))) ? (((/* implicit */int) (signed char)42)) : (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)36679)) : (((/* implicit */int) var_12)))), (((/* implicit */int) (unsigned short)62163)))))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) ((unsigned short) 18446744073709551601ULL)))) | (((/* implicit */int) var_10))));
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
    {
        for (unsigned long long int i_8 = 3; i_8 < 8; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 3; i_9 < 9; i_9 += 2) 
            {
                {
                    var_25 &= arr_26 [i_7] [i_7] [i_9];
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 2; i_10 < 7; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            {
                                arr_33 [i_9] [i_8] [i_9] [i_10] [i_11] = ((/* implicit */unsigned long long int) ((unsigned short) var_11));
                                var_26 = ((/* implicit */signed char) var_6);
                                var_27 &= (((!(((/* implicit */_Bool) (unsigned short)39425)))) ? (min((arr_12 [i_8] [i_8 + 1] [i_8] [i_9 - 2] [i_9] [i_7] [6LL]), (((/* implicit */unsigned long long int) var_0)))) : (min((arr_8 [i_10 - 1] [i_7] [i_10 - 1] [i_10 - 1]), (arr_8 [i_10 - 2] [i_7] [i_10 + 2] [i_10 + 3]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        for (unsigned long long int i_13 = 1; i_13 < 8; i_13 += 3) 
                        {
                            {
                                var_28 = var_8;
                                var_29 &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 12965173791181262497ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62142))) : (-8444125043938754064LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_14 [(unsigned short)4] [i_8] [i_12] [i_13] [i_9] [i_9] [i_7])))))) : (((2955793762909621450LL) ^ (-6167985843621192695LL))))), (((long long int) arr_6 [i_8 - 2] [i_13 - 1] [i_9 - 1]))));
                                var_30 = ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_2 [i_9 - 3] [i_13 + 1])) == (((/* implicit */int) (unsigned short)30285))))));
                            }
                        } 
                    } 
                    arr_39 [i_9] [i_8] [i_9] = ((/* implicit */unsigned short) 12240893859163624016ULL);
                }
            } 
        } 
    } 
}
