/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116931
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        arr_11 [(unsigned char)18] [i_1] [i_2] [i_3] [i_3] [i_0] = ((/* implicit */int) ((3377699720527872ULL) / (max((0ULL), (((/* implicit */unsigned long long int) arr_9 [i_3 - 1] [i_3] [i_3] [i_3 + 1] [i_3 - 1] [i_3 + 1]))))));
                        var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_9) + (((/* implicit */unsigned long long int) arr_1 [i_3 + 1] [i_3 - 1]))))) ? (((((/* implicit */_Bool) arr_1 [i_3 - 1] [i_3 + 1])) ? (arr_1 [i_3 + 1] [i_3 - 1]) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) (signed char)-35)) ? (arr_1 [i_3 - 1] [i_3 + 1]) : (arr_1 [i_3 + 1] [i_3 + 1])))));
                        var_20 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) var_16)) <= (arr_4 [i_0] [i_0])))) : (((((/* implicit */int) var_2)) * (((/* implicit */int) var_16))))))) ? (((((/* implicit */_Bool) max((var_6), (arr_4 [i_1] [i_1])))) ? (((-594971463) / (((/* implicit */int) (unsigned short)17364)))) : (((/* implicit */int) ((594971463) != (((/* implicit */int) var_15))))))) : (max((((/* implicit */int) var_11)), (max((var_13), (((/* implicit */int) var_12)))))));
                        arr_12 [i_3] [(_Bool)1] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)29179)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_3 + 1] [i_3]))) : (2118947755333858133ULL))) | ((~(((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])) ? (var_9) : (var_7)))))));
                    }
                    for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        var_21 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_4] [i_2] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))));
                        arr_15 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_13 [i_4]) ? (((/* implicit */unsigned long long int) arr_2 [i_1])) : (18446744073709551609ULL)))) && (((/* implicit */_Bool) ((arr_2 [i_0]) - (((/* implicit */int) (unsigned short)43609)))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_10))) ? (3849012068414073995ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)28)) || ((_Bool)1)))))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (18050450031192187773ULL))))));
                            arr_22 [i_0] [i_0] [(signed char)22] [i_0] [i_6] = ((/* implicit */int) 9506206125028827384ULL);
                            arr_23 [i_0] [i_0] [(unsigned short)3] [i_0] [i_6] = ((/* implicit */_Bool) (unsigned short)45707);
                        }
                        for (signed char i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned long long int) 850217146)))) >= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_13)) : (var_9))))) ? (((((/* implicit */_Bool) -1606028343)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_7] [i_5] [i_7] [i_7])) : (((/* implicit */int) arr_5 [i_1] [i_1] [i_7])))) : ((((-(((/* implicit */int) (unsigned char)44)))) & (((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-32767))))))));
                            var_24 *= ((/* implicit */signed char) var_9);
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_7] [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) << ((((((-2147483647 - 1)) - (-2147483636))) + (15))))) == (var_10)))));
                            var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_5])) ? (arr_16 [i_0] [i_2] [i_7]) : (arr_16 [(_Bool)1] [i_2] [11]))) / (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0])) ? (arr_16 [i_0] [i_0] [i_0]) : (arr_16 [i_0] [i_1] [i_5])))));
                        }
                        for (signed char i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_29 [i_0] [(unsigned short)2] [i_2] [7ULL] [i_2] [(unsigned short)2])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) ? (11964861117869981034ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [i_0] [i_8])) & (((/* implicit */int) arr_9 [i_8] [20] [i_2] [i_0] [i_1] [i_0])))))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((((/* implicit */int) var_18)) ^ (((/* implicit */int) var_3)))))) : (((/* implicit */int) var_14)))))));
                            arr_30 [i_8] = ((/* implicit */unsigned long long int) var_16);
                        }
                        arr_31 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_2] [i_1]))));
                    }
                    arr_32 [i_0] [i_2] = ((/* implicit */_Bool) var_9);
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (unsigned char)70))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        for (unsigned long long int i_13 = 1; i_13 < 22; i_13 += 2) 
                        {
                            {
                                arr_46 [i_10] = 201326592;
                                var_28 ^= (+(((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) arr_45 [i_13 + 1] [i_13 - 1]))))));
                                var_29 += ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) var_10)), (var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_13 + 2] [16] [(short)6] [i_13 + 2] [i_13 + 2] [i_13 + 2])) ? (max((-1786473975), (-1))) : (((/* implicit */int) (signed char)35)))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */_Bool) arr_41 [i_9] [i_10]);
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((((/* implicit */int) var_14)) & (-586925302))) == (((/* implicit */int) var_0)))))));
    var_32 |= ((/* implicit */unsigned short) var_0);
}
