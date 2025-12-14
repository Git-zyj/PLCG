/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11138
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
    var_11 = ((/* implicit */signed char) min((((/* implicit */short) var_9)), (var_5)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            {
                var_12 *= ((/* implicit */unsigned long long int) var_6);
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) arr_8 [i_2] [i_3 + 1] [(short)8]);
                                var_14 = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_3 + 2]))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (var_2)));
                    arr_12 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) 1804650054))));
                    var_16 *= ((/* implicit */unsigned long long int) (~(min(((~(-1804650047))), (var_8)))));
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
                {
                    arr_16 [i_0] [i_0] [i_1 + 3] [i_5] = ((/* implicit */short) -1804650055);
                    var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_10 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_9 [11U] [i_1 + 1] [11U])))) && (((/* implicit */_Bool) var_7))));
                    var_18 = (i_5 % 2 == zero) ? (((/* implicit */unsigned int) ((arr_14 [i_5] [i_1 + 2] [i_1 + 3] [i_5]) >> (((var_6) + (1475832509)))))) : (((/* implicit */unsigned int) ((((arr_14 [i_5] [i_1 + 2] [i_1 + 3] [i_5]) + (2147483647))) >> (((var_6) + (1475832509))))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-105)))))));
                                var_20 = ((/* implicit */int) ((((((/* implicit */int) (signed char)-105)) >= (arr_0 [i_5]))) ? (((arr_18 [7] [7] [i_5] [7] [i_7]) ? (arr_9 [i_7] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_1 - 3] [i_5] [i_6])) ^ (1804650070))))));
                                arr_23 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13524)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)114))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [0] [i_1 + 2] [i_7])) ? (((/* implicit */int) arr_21 [9U] [i_5] [i_5] [i_6] [10LL])) : (((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                    var_21 *= ((/* implicit */unsigned char) arr_7 [i_0] [i_1 - 4] [i_1 - 1] [i_1 - 1]);
                }
                /* LoopNest 3 */
                for (int i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        for (long long int i_10 = 1; i_10 < 12; i_10 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((18446744073709551602ULL) ^ (((/* implicit */unsigned long long int) -2071700617199963617LL))))) ? (max((1804650069), (var_1))) : (((/* implicit */int) ((unsigned char) (unsigned short)19)))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18363)))));
                                arr_31 [i_1] [i_9] [8ULL] [8ULL] [8ULL] &= ((/* implicit */signed char) 1205349436906442168ULL);
                                var_23 = ((/* implicit */int) max((((8875725806977637885ULL) ^ (((((/* implicit */_Bool) 1340449014)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_28 [7U] [i_9] [i_8] [(short)12]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1]))) * (var_3)))) ? (4237221096U) : ((+(2499586176U))))))));
                                var_24 = ((/* implicit */short) arr_26 [i_10 + 1] [i_10 - 1] [i_10 + 1] [9U]);
                                arr_32 [i_8] [(short)11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_13 [i_0] [i_9] [i_10 + 1])), (-1804650059))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_11 = 0; i_11 < 13; i_11 += 3) 
                {
                    for (int i_12 = 1; i_12 < 11; i_12 += 3) 
                    {
                        for (unsigned int i_13 = 1; i_13 < 11; i_13 += 1) 
                        {
                            {
                                arr_39 [i_11] [6] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_22 [i_11] [i_1 + 1]))))) ? (((((/* implicit */unsigned long long int) 4294967288U)) ^ (arr_9 [i_0] [(signed char)8] [(signed char)8]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                                var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1340449014)) ? (((/* implicit */int) ((0U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_11] [i_1 - 1])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_12 + 1])))))))) == (((((/* implicit */unsigned long long int) 2671770069U)) | (((((/* implicit */_Bool) arr_0 [0LL])) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))));
                                var_26 = ((/* implicit */signed char) 8875725806977637869ULL);
                                arr_40 [(unsigned short)11] [i_11] [i_12 + 2] [i_11] [i_11] [i_11] [i_0] = (-9223372036854775807LL - 1LL);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 = (+(((((((/* implicit */int) (signed char)104)) % (((/* implicit */int) var_4)))) / (var_8))));
}
