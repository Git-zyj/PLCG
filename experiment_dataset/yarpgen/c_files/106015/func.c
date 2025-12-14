/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106015
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
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    var_18 |= ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) arr_0 [i_0 - 2])), (2605312503U))) == (((/* implicit */unsigned int) var_3))));
                    arr_7 [i_1] = ((/* implicit */unsigned short) (unsigned char)169);
                    var_19 = ((/* implicit */signed char) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1 + 3])) && (((/* implicit */_Bool) arr_0 [i_0 + 1]))))), (min((var_9), (((/* implicit */unsigned char) arr_6 [i_0 - 1] [i_1 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [(signed char)8] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)116)), ((unsigned char)87)));
                                arr_14 [i_0] [i_3] [i_4] = ((/* implicit */short) ((unsigned short) max(((unsigned char)160), (arr_3 [i_0 - 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 1; i_5 < 22; i_5 += 3) 
    {
        for (unsigned char i_6 = 1; i_6 < 22; i_6 += 3) 
        {
            for (short i_7 = 1; i_7 < 22; i_7 += 3) 
            {
                {
                    var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6] [i_7 + 1]))) & (max((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-18))))), (367479796U)))));
                    var_21 = ((/* implicit */short) ((int) arr_17 [i_5 + 1]));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 2; i_9 < 22; i_9 += 4) 
                        {
                            {
                                arr_27 [i_5 - 1] [i_6 + 1] [i_7 + 1] [i_8] [i_9] = ((/* implicit */unsigned char) 4294967295U);
                                var_22 += ((/* implicit */unsigned short) 2654430506U);
                                var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2605312520U))));
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_5 - 1] [i_5 - 1] [i_6 + 1] [i_6 + 1] [i_7 + 1] [i_9 - 2] [i_9 + 1])) ? (((/* implicit */int) arr_25 [i_5 + 1] [i_5 + 1] [i_6 - 1] [i_6 + 1] [i_7 + 1] [i_9 + 1] [i_9 - 1])) : (((/* implicit */int) arr_25 [i_5 - 1] [i_5 - 1] [i_6 + 1] [i_6 - 1] [i_7 + 1] [i_9 - 1] [i_9 - 1]))))) ? (((((/* implicit */_Bool) arr_25 [i_5 + 1] [i_5 + 1] [i_6 - 1] [i_6 + 1] [i_7 + 1] [i_9 - 1] [i_9 - 2])) ? (3927487496U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_5 + 1] [i_5 - 1] [i_6 - 1] [i_6 - 1] [i_7 + 1] [i_9 - 1] [i_9 + 1]))))) : ((+(4294967295U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 3) 
    {
        for (unsigned int i_11 = 0; i_11 < 15; i_11 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 15; i_12 += 3) 
                {
                    for (int i_13 = 0; i_13 < 15; i_13 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 1247759786)) * (var_0)))) ? (((((/* implicit */_Bool) arr_12 [i_10] [i_11] [i_10] [i_10 - 1] [i_10])) ? (arr_12 [i_10 - 1] [2ULL] [16U] [i_10 - 1] [i_10]) : (arr_12 [i_10] [i_11] [i_12] [i_10 - 1] [i_10]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) >= (((/* implicit */int) ((((/* implicit */_Bool) 1247759786)) || (((/* implicit */_Bool) (-2147483647 - 1))))))))))));
                            arr_41 [i_13] [10ULL] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1689654773U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1689654801U))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_14 = 3; i_14 < 14; i_14 += 4) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 4) 
                    {
                        for (signed char i_16 = 0; i_16 < 15; i_16 += 1) 
                        {
                            {
                                var_27 *= ((/* implicit */unsigned int) (unsigned short)57845);
                                var_28 *= ((/* implicit */unsigned char) (-(((arr_51 [i_10 + 1] [i_15]) * (arr_51 [i_10 - 1] [i_11])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 15; i_17 += 2) 
                {
                    for (int i_18 = 0; i_18 < 15; i_18 += 2) 
                    {
                        {
                            var_29 += ((/* implicit */unsigned int) min((((/* implicit */int) max((((unsigned char) 17965541929838326699ULL)), (((/* implicit */unsigned char) (((_Bool)1) || (((/* implicit */_Bool) var_17)))))))), (min((((((/* implicit */_Bool) arr_54 [i_10 + 1] [i_10] [i_10] [i_10])) ? (((/* implicit */int) (unsigned short)7320)) : (((/* implicit */int) arr_33 [i_18] [i_11] [i_11] [i_10])))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) != (4927506865445961609ULL))))))));
                            var_30 = -1203294934;
                            var_31 = min((((((/* implicit */_Bool) -6924208837353367631LL)) ? (arr_23 [i_10 - 1] [i_11] [i_17] [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))))), ((+(arr_23 [i_10 + 1] [(short)2] [i_17] [i_18]))));
                            var_32 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [12] [i_10 + 1] [i_17] [i_17] [i_17] [i_17] [i_17]))) : (((((/* implicit */_Bool) (short)-21278)) ? (arr_19 [11U] [i_17] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) var_15))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8887759723572366237ULL)) ? (-650242256) : (1247759804)))) ? (max((6924208837353367611LL), (((/* implicit */long long int) arr_16 [i_10])))) : (((/* implicit */long long int) var_14))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_19 = 1; i_19 < 18; i_19 += 1) 
    {
        for (unsigned int i_20 = 0; i_20 < 20; i_20 += 2) 
        {
            for (int i_21 = 0; i_21 < 20; i_21 += 1) 
            {
                {
                    arr_64 [i_19] = ((/* implicit */int) (((!(((/* implicit */_Bool) min((0U), (((/* implicit */unsigned int) 1247759781))))))) ? (min((((arr_19 [i_19] [7U] [7U]) / (((/* implicit */long long int) ((/* implicit */int) var_15))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2033836577)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (unsigned short)28695))))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_19] [(signed char)8] [i_21] [i_19] [i_19 - 1])) && (((((/* implicit */_Bool) arr_19 [i_19] [i_19] [i_19])) || (((/* implicit */_Bool) arr_18 [i_19] [i_19]))))))))));
                    /* LoopNest 2 */
                    for (int i_22 = 2; i_22 < 19; i_22 += 2) 
                    {
                        for (signed char i_23 = 0; i_23 < 20; i_23 += 2) 
                        {
                            {
                                var_33 = ((/* implicit */_Bool) arr_24 [i_22] [i_22 + 1] [i_22 - 2] [i_22] [i_22]);
                                var_34 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_68 [i_19 - 1])) ? (((/* implicit */unsigned long long int) max((4294967289U), (((/* implicit */unsigned int) (short)-21278))))) : (((((/* implicit */unsigned long long int) arr_66 [15])) & (arr_15 [i_23]))))), (min((max((((/* implicit */unsigned long long int) -6924208837353367634LL)), (8860746700804319123ULL))), (((var_4) | (var_10)))))));
                                arr_70 [i_19 - 1] [i_19] [(_Bool)1] [(_Bool)1] [i_22] [i_19] [(_Bool)1] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_24 [i_19 + 1] [i_19 + 2] [(unsigned short)18] [i_22 - 2] [i_22 - 2])) < (((/* implicit */int) arr_24 [i_19 + 2] [i_19 - 1] [i_20] [i_22 - 1] [i_22 + 1])))) ? ((-(((/* implicit */int) (short)32754)))) : (((/* implicit */int) max(((signed char)66), (((/* implicit */signed char) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
