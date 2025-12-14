/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145279
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
    var_11 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (var_6)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) ^ (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (11094233386011882888ULL))))));
        arr_2 [i_0] = ((/* implicit */int) ((unsigned char) (~(arr_0 [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_13 += ((/* implicit */long long int) ((unsigned char) arr_3 [i_1]));
        var_14 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1542127430)) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) arr_0 [i_1]))))) ? (((((/* implicit */_Bool) var_10)) ? (arr_4 [i_1]) : (max((((/* implicit */int) (unsigned char)243)), (arr_4 [i_1]))))) : (((/* implicit */int) (unsigned char)245)));
        var_15 = ((/* implicit */signed char) ((unsigned int) max((arr_0 [i_1]), (-1602297814))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_1 [i_1])))) ? (((/* implicit */int) ((_Bool) arr_1 [i_1]))) : (((/* implicit */int) ((signed char) arr_1 [i_1]))))))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 1; i_2 < 17; i_2 += 1) 
        {
            arr_7 [i_2] [i_2] = (((-(((/* implicit */int) arr_1 [i_2 - 1])))) ^ (((int) arr_1 [i_2 + 1])));
            var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_1]))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    {
                        arr_15 [i_1] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) arr_14 [i_2 + 1] [i_2] [i_2])));
                        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_10 [i_1] [i_2 - 1] [4] [i_2 + 1]) & (arr_13 [6ULL] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])))) ? (((((/* implicit */_Bool) arr_13 [12] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1])) ? (arr_10 [i_1] [i_1] [(signed char)8] [i_2 - 1]) : (arr_10 [i_1] [i_2] [4U] [i_2 - 1]))) : (((((/* implicit */unsigned long long int) 0LL)) ^ (arr_13 [2LL] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 + 1]))))))));
                        var_19 = (~(max((((/* implicit */unsigned long long int) arr_9 [i_1] [i_2] [i_3] [i_2])), (arr_13 [i_2] [i_2 - 1] [i_3] [i_4] [i_2 + 1] [i_2 - 1]))));
                    }
                } 
            } 
            arr_16 [i_2] [i_2] [i_1] = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_1 [i_1])), (arr_13 [i_2] [i_1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1]))) & (min((((/* implicit */unsigned long long int) var_9)), (arr_13 [i_2] [i_1] [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1])))));
        }
        for (int i_5 = 2; i_5 < 15; i_5 += 2) 
        {
            arr_20 [i_5] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_5 + 3] [i_5 + 2])) ? (((/* implicit */int) arr_6 [i_5 + 1] [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_5 - 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_3 [i_5])) && (((/* implicit */_Bool) 11090319042325843194ULL))))))) : ((-(((((/* implicit */_Bool) var_1)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)13)))))))));
            var_20 = ((/* implicit */unsigned int) arr_18 [i_5] [i_5] [i_5]);
            var_21 = ((/* implicit */unsigned short) arr_14 [i_5 + 3] [i_5] [i_5 - 2]);
            arr_21 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_7)) - (arr_17 [i_1])))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_5 + 3] [i_5 - 2])) : (var_7))) : (((((/* implicit */int) arr_1 [i_1])) + (var_7)))))), (arr_19 [i_5])));
        }
        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            arr_25 [i_6] [i_1] [i_6] = ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) (unsigned short)16779)))));
            arr_26 [i_1] [i_6] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) ((short) ((((/* implicit */long long int) var_0)) ^ (-1LL)))));
        }
    }
    var_22 = ((/* implicit */unsigned int) ((unsigned long long int) var_3));
    /* LoopNest 2 */
    for (signed char i_7 = 4; i_7 < 15; i_7 += 2) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_28 [i_7 - 1] [9U])) ? (arr_28 [i_7 - 3] [i_7]) : (arr_28 [i_7 + 1] [i_7]))), (((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_7]))))))))));
                /* LoopSeq 1 */
                for (int i_9 = 2; i_9 < 15; i_9 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 1; i_10 < 14; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 1; i_11 < 15; i_11 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_7] [i_9 - 2] [i_9])) ? (((/* implicit */int) arr_5 [i_7] [i_9 + 1] [i_9 + 1])) : (((/* implicit */int) arr_5 [i_7] [i_9 + 1] [i_9])))) ^ ((-(((/* implicit */int) arr_5 [i_7] [i_9 + 1] [i_8]))))));
                                arr_39 [i_7] = ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) arr_8 [i_7] [i_8])))))) ? (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)12))) : (2795025979U))))) : (min((arr_3 [i_10 + 2]), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_1)), (arr_6 [i_11 + 1] [i_10] [i_8])))))));
                                var_25 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_7 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_33 [i_7] [i_7 - 2] [i_7] [i_7 + 1] [i_7])))) ? (arr_8 [i_9 + 1] [i_7 - 1]) : ((~(((/* implicit */int) var_10))))))));
                            }
                        } 
                    } 
                    arr_40 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) (-(max((max((arr_33 [i_7] [i_7] [i_7] [5LL] [i_7]), (((/* implicit */unsigned long long int) 635219504U)))), (arr_33 [i_7] [i_8] [i_8] [i_9] [(unsigned char)3])))));
                    arr_41 [i_7] [i_7] [i_9] [i_7] = ((/* implicit */signed char) var_3);
                }
                arr_42 [i_8] [i_7] |= ((/* implicit */signed char) ((unsigned int) (~(arr_3 [i_7 - 1]))));
                arr_43 [i_7] [i_8] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_7 - 3] [i_7 - 3])) ^ (((/* implicit */int) min((arr_31 [i_7 - 4] [i_7] [i_7 - 1]), (((/* implicit */unsigned short) arr_38 [i_7] [i_8] [i_8] [i_7] [i_7 - 4])))))))) && (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_5 [i_7] [i_7] [i_8])) && ((_Bool)0))))));
            }
        } 
    } 
}
