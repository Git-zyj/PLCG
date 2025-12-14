/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12197
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
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)39112))))), (min((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_6 [i_0])))));
                            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_3 [i_1] [i_2 - 2] [i_1])) | (((/* implicit */int) arr_3 [i_2] [i_2 + 2] [i_2 - 2])))) | (((/* implicit */int) arr_3 [i_3] [i_2 - 2] [i_2])))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 2; i_5 < 19; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 3; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (((-(((/* implicit */int) (unsigned char)77)))) < ((+(267387296)))))) : (-267387284)))));
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((max((arr_0 [i_0]), (((/* implicit */unsigned int) arr_8 [i_0] [i_0])))) << (((min((4583172868611449162ULL), (((/* implicit */unsigned long long int) (short)19813)))) - (19810ULL)))))) | (min((((/* implicit */unsigned long long int) arr_2 [i_5 + 1] [i_0] [i_4])), (max((11727684643744954107ULL), (((/* implicit */unsigned long long int) arr_13 [i_0 + 4] [i_0 + 4] [i_4] [i_5] [(signed char)2]))))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19814))) : (9114393333749130316ULL)));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((int) var_5));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_7 = 0; i_7 < 15; i_7 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            for (unsigned char i_9 = 2; i_9 < 12; i_9 += 3) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_25 [i_8] = ((/* implicit */unsigned char) arr_19 [i_9 + 3] [i_8]);
                        var_19 |= ((((/* implicit */int) (unsigned char)211)) | ((~(((/* implicit */int) arr_10 [i_7] [i_8] [i_9 + 2] [i_9] [i_10])))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_7])) ? (arr_0 [i_7]) : (arr_0 [i_7])));
    }
    /* LoopNest 2 */
    for (long long int i_11 = 1; i_11 < 9; i_11 += 1) 
    {
        for (long long int i_12 = 0; i_12 < 10; i_12 += 2) 
        {
            {
                arr_31 [i_11] [i_11] [i_11] = ((/* implicit */int) arr_29 [i_11 + 1] [1]);
                /* LoopNest 3 */
                for (long long int i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    for (int i_14 = 0; i_14 < 10; i_14 += 3) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 10; i_15 += 4) 
                        {
                            {
                                arr_40 [i_11] [i_12] [i_15] [i_14] [i_15] &= ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) max((((/* implicit */signed char) var_1)), (arr_5 [i_15] [i_13] [i_14])))) | ((-(((/* implicit */int) var_12)))))));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((0LL), (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)64)), (((((/* implicit */_Bool) (signed char)-55)) ? (742897923U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_11] [i_12] [i_11] [i_14] [i_11])))))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 10; i_17 += 3) 
                    {
                        for (unsigned long long int i_18 = 2; i_18 < 9; i_18 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) (+(13863571205098102454ULL)));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_11 - 1] [i_11 - 1])) ? (arr_39 [i_18 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_11 + 1] [i_11 + 1] [i_11 + 1])))));
                                arr_49 [i_16] [i_16] = ((/* implicit */long long int) ((unsigned short) arr_19 [i_16] [i_16]));
                                var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_18 - 2] [i_12] [i_12] [i_11])) ? (9114393333749130291ULL) : (((/* implicit */unsigned long long int) arr_23 [i_18 + 1] [i_12] [i_12] [i_11 + 1]))));
                                arr_50 [i_11] [i_16] [i_16] [i_16] [i_18] [i_18] = ((int) arr_34 [i_12] [i_16] [i_12] [i_11 - 1]);
                            }
                        } 
                    } 
                    arr_51 [i_11] [i_11] [i_11] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 8391615515363793075LL)) * (9114393333749130303ULL)));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) -7801796537552648293LL)) ? (((((/* implicit */int) var_7)) << (((((/* implicit */int) arr_28 [i_16])) - (32352))))) : (((/* implicit */int) arr_5 [i_16] [i_12] [i_16]))));
                    /* LoopNest 2 */
                    for (unsigned char i_19 = 0; i_19 < 10; i_19 += 3) 
                    {
                        for (int i_20 = 0; i_20 < 10; i_20 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */unsigned short) arr_13 [i_11 - 1] [i_16] [i_16] [i_20] [i_20]);
                                var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) arr_15 [i_11 + 1] [i_11 + 1]))));
                                arr_56 [i_16] [i_16] = ((/* implicit */long long int) var_4);
                                var_28 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_11 - 1]))) : (2688064120U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((long long int) var_3))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_21 = 0; i_21 < 10; i_21 += 4) 
                    {
                        var_29 ^= ((/* implicit */long long int) ((((/* implicit */int) arr_27 [i_12])) < (((/* implicit */int) arr_27 [i_11 + 1]))));
                        var_30 = ((/* implicit */unsigned short) (unsigned char)77);
                    }
                }
                /* vectorizable */
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_11 + 1] [i_22])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_11 + 1] [i_22])))));
                    /* LoopNest 2 */
                    for (long long int i_23 = 2; i_23 < 9; i_23 += 4) 
                    {
                        for (unsigned short i_24 = 1; i_24 < 9; i_24 += 3) 
                        {
                            {
                                var_32 ^= ((/* implicit */long long int) (+(arr_68 [i_11] [i_11] [i_11 - 1] [5U] [i_11])));
                                var_33 = ((/* implicit */long long int) ((arr_67 [i_22] [i_12] [i_23] [i_11 - 1] [(short)7]) < (arr_67 [i_22] [i_12] [i_22] [i_23 - 2] [i_24])));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
