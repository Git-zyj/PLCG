/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167281
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
    var_10 = ((/* implicit */unsigned short) var_2);
    var_11 = var_6;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_12 -= ((/* implicit */unsigned char) ((min((((((/* implicit */unsigned long long int) 33554176LL)) < (var_0))), ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_0] [(signed char)13]))) : (var_9)))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_1 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
                var_13 = ((/* implicit */unsigned short) (~(min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (short)6371)) | (((/* implicit */int) (_Bool)1))))))));
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    var_14 ^= ((/* implicit */short) (-(((/* implicit */int) var_4))));
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) min((((/* implicit */int) arr_5 [i_1])), ((~((~(((/* implicit */int) arr_3 [i_0] [i_0] [i_2])))))))))));
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        arr_8 [i_0] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_0]), (arr_5 [i_0]))))) != (arr_4 [i_3] [i_2] [3LL] [i_0]))))));
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((var_2) << (((var_1) - (17277630218673002562ULL))))) * (min((var_1), ((-(arr_1 [i_0] [i_0]))))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        for (short i_5 = 1; i_5 < 15; i_5 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) max((var_18), (min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | (-3797141962609539220LL))), (((/* implicit */long long int) (!(var_5))))))));
                                arr_14 [i_0] [1ULL] [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_12 [1LL] [i_1] [i_5 - 1] [i_5 + 4] [i_5 - 1] [i_5]))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)4092)) - (((/* implicit */int) (unsigned short)52948))))) || (((var_0) != (var_2)))));
                            }
                        } 
                    } 
                }
                for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    arr_18 [i_0] [13ULL] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_8)) + (max((var_2), (var_2)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [8LL]))) - (18047426233720782916ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41919)))));
                    var_20 ^= ((long long int) ((((/* implicit */_Bool) min((-33554176LL), (arr_9 [(short)10] [i_1] [i_6] [i_6])))) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_6])) : (((/* implicit */int) var_6))));
                    /* LoopSeq 1 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned char) min((((long long int) arr_1 [i_1] [i_6])), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_1)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)9486))) < (arr_21 [i_0] [i_1])))) : (((/* implicit */int) arr_15 [i_1] [i_1] [i_6])))))));
                        arr_23 [i_6] [i_1] [i_6] [i_6] [i_6] |= ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) -3797141962609539220LL)))));
                    }
                    var_22 = ((/* implicit */unsigned char) 33554176LL);
                    var_23 -= max((min((((((/* implicit */_Bool) var_1)) ? (arr_16 [i_0] [i_1] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (arr_0 [i_0] [i_0]))), (((/* implicit */long long int) ((_Bool) ((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                }
                for (long long int i_8 = 1; i_8 < 18; i_8 += 3) 
                {
                    var_24 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (_Bool)1)), (((long long int) ((((((/* implicit */int) (short)-22)) + (2147483647))) << (((/* implicit */int) (_Bool)0)))))));
                    arr_26 [i_0] [(unsigned char)15] [i_8] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0] [i_8 + 1] [i_0])) / (((/* implicit */int) var_7))))) || (((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_8] [3LL] [i_8 - 1] [i_1])))));
                    arr_27 [5LL] [i_8] [i_1] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_4)), (var_9)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_8 - 1] [(unsigned char)0] [i_8 + 1] [i_8 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_8 - 1] [i_8] [i_8 + 1] [i_8 + 1]) != (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
                    var_25 += ((/* implicit */_Bool) var_2);
                    arr_28 [i_0] [i_1] [i_8] [i_8] = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) ((2209576002773160540LL) | (((/* implicit */long long int) ((/* implicit */int) arr_15 [(unsigned short)1] [i_1] [i_1])))))))));
                }
                arr_29 [5LL] [i_1] = ((/* implicit */unsigned long long int) (~(arr_21 [i_0] [i_1])));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_10 = 0; i_10 < 20; i_10 += 2) 
        {
            arr_34 [i_9] = ((/* implicit */signed char) arr_31 [i_10]);
            var_26 -= ((/* implicit */signed char) (+((((!(((/* implicit */_Bool) (unsigned short)9478)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_30 [i_9])))));
            arr_35 [i_9] [i_9] = (((-(min((var_3), (((/* implicit */unsigned long long int) (short)(-32767 - 1))))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1020))));
        }
        for (unsigned short i_11 = 0; i_11 < 20; i_11 += 3) 
        {
            arr_39 [10LL] [10LL] |= ((/* implicit */unsigned short) (_Bool)1);
            var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((_Bool) max((((((/* implicit */int) var_4)) & (((/* implicit */int) arr_36 [i_9] [(unsigned short)4])))), (((/* implicit */int) arr_38 [i_9] [i_9] [i_11]))))))));
            var_28 -= (_Bool)1;
        }
        /* LoopNest 3 */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (long long int i_14 = 0; i_14 < 20; i_14 += 4) 
                {
                    {
                        arr_51 [3LL] [i_13] [(_Bool)1] = ((/* implicit */long long int) var_1);
                        arr_52 [i_9] [i_14] = ((/* implicit */_Bool) var_4);
                    }
                } 
            } 
        } 
    }
    for (long long int i_15 = 0; i_15 < 16; i_15 += 4) 
    {
        var_29 = ((/* implicit */_Bool) ((((arr_45 [(_Bool)0]) && (((/* implicit */_Bool) var_2)))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_6)))) : (((((/* implicit */int) arr_10 [i_15])) * (((/* implicit */int) arr_10 [i_15]))))));
        arr_55 [4LL] = ((/* implicit */unsigned long long int) arr_45 [i_15]);
    }
}
