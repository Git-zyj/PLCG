/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110904
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
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */short) (+(max(((-(arr_3 [i_0]))), (((/* implicit */long long int) max((arr_5 [i_0] [i_2]), (((/* implicit */unsigned char) var_10)))))))));
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((-915306555), (((/* implicit */int) (unsigned short)62848))))), (max((((/* implicit */unsigned long long int) min((arr_2 [i_0] [i_0]), (((/* implicit */short) var_2))))), ((~(arr_4 [i_0] [i_1] [i_2] [i_2])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 8; i_3 += 2) 
        {
            for (long long int i_4 = 1; i_4 < 9; i_4 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) max((min(((+(arr_4 [i_3] [i_3] [i_3] [i_3]))), (((/* implicit */unsigned long long int) (+(arr_12 [i_0] [i_3] [i_0])))))), (((/* implicit */unsigned long long int) max(((unsigned short)7442), (((/* implicit */unsigned short) (short)3584)))))));
                    /* LoopSeq 1 */
                    for (int i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        var_17 *= ((/* implicit */unsigned char) max((5714402236403673183ULL), (((/* implicit */unsigned long long int) (unsigned short)65523))));
                        var_18 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min(((unsigned short)47795), (((/* implicit */unsigned short) (signed char)-74))))), (10099444589957256729ULL)));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            arr_17 [i_6] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */unsigned int) (~(18446744073709551611ULL)));
                            var_19 = ((/* implicit */long long int) min(((-(((/* implicit */int) (!(((/* implicit */_Bool) 5ULL))))))), (max((((/* implicit */int) var_14)), ((-(((/* implicit */int) var_7))))))));
                        }
                        var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) min((var_12), (var_12))))));
                    }
                    var_21 = ((/* implicit */unsigned char) (-(max((5ULL), (arr_15 [i_0] [i_0])))));
                }
            } 
        } 
    }
    for (long long int i_7 = 3; i_7 < 12; i_7 += 4) 
    {
        arr_20 [i_7] = ((/* implicit */short) max((18446744073709551611ULL), (((/* implicit */unsigned long long int) (unsigned char)170))));
        arr_21 [i_7] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) 480U)), (18446744073709551604ULL))), (min((18446744073709551611ULL), (((/* implicit */unsigned long long int) arr_18 [i_7] [i_7 - 3]))))));
        arr_22 [10] |= ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) 1974129375U)), (5ULL))), (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)13))))), (12903584671442587424ULL)))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 1; i_8 < 14; i_8 += 4) 
    {
        arr_26 [i_8] [i_8] = ((/* implicit */_Bool) (+(576443160117379072LL)));
        arr_27 [i_8] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)49659))));
        var_22 = (~(((/* implicit */int) arr_23 [i_8 - 1])));
        arr_28 [i_8] [i_8] = (!(((/* implicit */_Bool) (unsigned short)65523)));
    }
    var_23 = ((/* implicit */short) var_11);
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 4; i_9 < 8; i_9 += 2) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (short i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 9; i_12 += 3) 
                    {
                        for (short i_13 = 0; i_13 < 10; i_13 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */int) max((((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_11)))), (min((((/* implicit */int) var_2)), (arr_37 [i_9])))))), (max((min((((/* implicit */unsigned long long int) (signed char)13)), (4ULL))), (((/* implicit */unsigned long long int) (unsigned char)0))))));
                                arr_43 [i_9] [i_9] [i_12] [i_12] [i_9] [i_9] [i_9] |= ((/* implicit */unsigned int) max((min((max((((/* implicit */unsigned long long int) var_1)), (arr_15 [i_13] [i_13]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_29 [i_10])), (arr_0 [i_11])))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)12)))))));
                                var_25 = ((/* implicit */long long int) max((min((10653211825988681811ULL), (((/* implicit */unsigned long long int) (unsigned short)0)))), (min((((/* implicit */unsigned long long int) (unsigned char)228)), (12270121375183477199ULL)))));
                                arr_44 [i_9] [i_10] [i_10] [i_9] [i_11] [i_9] [i_13] = ((/* implicit */unsigned short) max(((~(min((var_9), (((/* implicit */long long int) (signed char)-13)))))), (max((arr_1 [i_9 + 2] [i_13]), (((/* implicit */long long int) arr_2 [i_9] [i_12 - 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        for (unsigned char i_15 = 1; i_15 < 8; i_15 += 2) 
                        {
                            {
                                arr_51 [i_14] [i_14] [i_15] = ((/* implicit */int) (+(min((max((0ULL), (13867286829929130445ULL))), (((/* implicit */unsigned long long int) max(((unsigned char)243), (((/* implicit */unsigned char) (_Bool)1)))))))));
                                var_26 = ((/* implicit */int) max((2618992307U), (max((1U), (((/* implicit */unsigned int) (unsigned char)0))))));
                                arr_52 [i_14] [i_10] [i_11] [i_14] [i_14] [i_15] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)21)), (4294967287U)))), ((~(max((((/* implicit */unsigned long long int) arr_10 [i_11] [i_10])), (var_4)))))));
                                var_27 -= ((/* implicit */unsigned short) max((max((arr_14 [i_9] [i_10] [i_9] [i_14] [i_15 + 2]), (arr_14 [i_15] [i_15] [i_15] [i_15] [i_15 - 1]))), (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)45096)), (-1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 10; i_16 += 3) 
                    {
                        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                        {
                            {
                                var_28 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2116552307))))))))));
                                arr_58 [i_16] [i_16] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 12903584671442587433ULL))))), (max((((/* implicit */unsigned long long int) (unsigned char)30)), (18446744073709551615ULL)))));
                                var_29 = ((/* implicit */unsigned char) (~((-(2320837930U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
