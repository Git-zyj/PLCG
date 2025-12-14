/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164407
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [(unsigned short)6] [i_3])) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)22187))))) ? (((/* implicit */int) max((var_0), (((/* implicit */short) (unsigned char)78))))) : (((/* implicit */int) arr_2 [i_1] [i_2] [i_3])))))));
                        var_13 += ((/* implicit */short) min((((((/* implicit */_Bool) min((1484661038), (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_2)))) : (var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_1 [i_1]))) ? (((/* implicit */int) var_3)) : (max((var_11), (arr_1 [3U]))))))));
                    }
                } 
            } 
        } 
        arr_10 [i_0] [(short)14] = ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (max((((/* implicit */int) ((signed char) arr_7 [i_0] [i_0] [(short)13] [i_0]))), (((((/* implicit */int) var_7)) - (((/* implicit */int) (unsigned char)177)))))) : (((/* implicit */int) var_10)));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 1; i_6 < 16; i_6 += 4) 
                    {
                        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) arr_16 [i_0] [i_4] [i_5])) : (((/* implicit */int) arr_4 [i_5] [i_4] [i_0])))))) ? (((/* implicit */int) ((signed char) arr_16 [(unsigned char)15] [(unsigned short)3] [i_5]))) : (((/* implicit */int) arr_11 [i_4] [(signed char)2] [i_6])))))));
                        arr_19 [i_0] [i_0] [i_4] [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) var_1);
                        arr_20 [i_6] [i_5] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_5 [i_6 - 1] [i_6] [i_6 + 1] [i_6])) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) arr_6 [i_5] [i_5] [i_6 + 1] [i_6]))))));
                        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) ((arr_15 [i_5] [i_4]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115)))))) ^ (((/* implicit */int) (unsigned char)138)))))))));
                    }
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_4] [i_5])) + (((/* implicit */int) ((signed char) (short)-12470)))))) ? (((/* implicit */int) arr_0 [i_5] [i_0])) : (((/* implicit */int) var_2))));
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 16; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            {
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((~(((/* implicit */int) arr_0 [(short)16] [i_8])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)177)) | ((-(((/* implicit */int) arr_18 [i_0] [i_0] [i_7 - 1] [i_0])))))))));
                                var_18 = ((/* implicit */unsigned short) var_11);
                                arr_28 [i_7] [i_4] = ((signed char) (~(arr_1 [i_7 - 1])));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_9 = 0; i_9 < 20; i_9 += 3) 
    {
        arr_31 [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-22187)))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_9] [i_9])))))) ? (max((var_11), ((-(((/* implicit */int) var_8)))))) : (((/* implicit */int) var_2))));
        var_19 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_30 [i_9] [i_9])) : (((/* implicit */int) arr_30 [i_9] [i_9]))))));
        /* LoopNest 3 */
        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            for (short i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                for (unsigned short i_12 = 2; i_12 < 19; i_12 += 1) 
                {
                    {
                        arr_40 [i_9] [i_9] [i_10] [i_11] [i_12 - 2] [i_12] = ((/* implicit */short) ((((/* implicit */int) max((var_3), (((/* implicit */unsigned short) arr_38 [i_9] [(unsigned char)18] [i_10] [i_9] [i_12 - 1] [i_12]))))) / (((((/* implicit */int) arr_30 [i_9] [i_9])) % (((/* implicit */int) var_1))))));
                        var_20 = ((/* implicit */_Bool) (short)-1989);
                        var_21 = ((/* implicit */short) (~(min(((~(((/* implicit */int) var_9)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_13 = 0; i_13 < 20; i_13 += 2) 
                        {
                            arr_43 [i_13] [i_9] [i_11] [i_11] [i_9] [i_9] = ((/* implicit */_Bool) (-((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_10]))) | (arr_36 [i_11] [i_11])))))));
                            arr_44 [i_10] [i_10] [(unsigned short)2] [i_11] [i_9] [i_13] [i_11] = ((/* implicit */unsigned long long int) var_0);
                            arr_45 [i_9] [i_11] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)30908)), (var_11)))) ? (((((/* implicit */_Bool) (short)1963)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_37 [i_9])))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_37 [14])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_9] [i_11] [i_9])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)32762))))))))));
                        }
                        for (signed char i_14 = 0; i_14 < 20; i_14 += 4) 
                        {
                            var_22 = ((/* implicit */short) max((var_6), (((/* implicit */long long int) min(((+(((/* implicit */int) var_4)))), (((/* implicit */int) (_Bool)0)))))));
                            arr_48 [i_9] [i_14] [i_11] [i_12] [i_10] [i_11] = ((/* implicit */unsigned long long int) var_2);
                        }
                        for (short i_15 = 0; i_15 < 20; i_15 += 1) 
                        {
                            arr_52 [i_9] [i_11] [i_11] [i_11] [i_11] [(unsigned short)15] [i_11] = ((/* implicit */signed char) var_1);
                            arr_53 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_37 [i_9])) : (((/* implicit */int) arr_37 [i_12 - 2])))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_16 = 0; i_16 < 20; i_16 += 3) 
                        {
                            var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_49 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_12 + 1] [i_12 - 2] [i_12 + 1] [i_12] [i_11])))))) : (min((min((var_6), (((/* implicit */long long int) arr_32 [i_9] [i_10] [i_11])))), (((/* implicit */long long int) var_11))))));
                            arr_56 [i_9] [i_9] [i_9] [i_9] = var_0;
                            arr_57 [i_9] [i_16] [(unsigned short)16] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(arr_38 [i_12] [i_12 + 1] [i_12] [i_12 - 2] [i_12 - 1] [i_12 + 1])))) != (((/* implicit */int) var_1))));
                        }
                        for (unsigned int i_17 = 0; i_17 < 20; i_17 += 1) 
                        {
                            arr_60 [i_17] [i_9] [i_17] [(unsigned short)1] [i_11] [i_9] [i_9] = ((/* implicit */signed char) ((unsigned char) var_6));
                            var_24 *= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_5)), (arr_58 [i_10] [i_11])))) ? (((/* implicit */unsigned long long int) -1047682890)) : (((((/* implicit */_Bool) arr_42 [i_9] [i_10] [i_11] [i_11] [i_12 + 1] [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_36 [i_9] [i_10])))))));
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (unsigned short)0))));
                        }
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (9223372036854775807LL) : (var_6)))))));
    var_27 = ((/* implicit */short) ((_Bool) var_6));
    var_28 |= ((/* implicit */unsigned int) var_7);
}
