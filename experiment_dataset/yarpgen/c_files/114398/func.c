/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114398
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */_Bool) (signed char)105);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    var_11 = ((/* implicit */signed char) (short)-19042);
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (~(arr_5 [i_2 - 1] [i_1] [i_0])));
                }
                var_12 *= (!(((((/* implicit */_Bool) (signed char)-105)) && (((/* implicit */_Bool) 3805529635U)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 4; i_4 < 24; i_4 += 1) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_20 [i_3] [i_4] = ((/* implicit */signed char) arr_16 [i_4 - 2]);
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        arr_25 [i_3] [i_3] [i_3] [17U] [i_3] = ((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_13 [i_3 + 2])))));
                        arr_26 [i_3] [i_6] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_17 [i_3 + 2])) : (((/* implicit */int) arr_17 [i_3 + 2]))));
                        var_13 = ((/* implicit */unsigned int) ((int) arr_12 [i_3 + 1]));
                    }
                    var_14 = ((/* implicit */signed char) var_4);
                    var_15 = ((/* implicit */unsigned int) arr_16 [i_5]);
                    var_16 = ((/* implicit */long long int) (short)-19042);
                }
                for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 2; i_9 < 22; i_9 += 3) 
                        {
                            {
                                arr_34 [i_3] [(short)9] [i_3] [(signed char)13] [(signed char)13] = ((/* implicit */_Bool) (short)19034);
                                arr_35 [i_3] = ((/* implicit */long long int) ((((((/* implicit */int) ((signed char) var_3))) + (2147483647))) << (((((((/* implicit */_Bool) 2093056U)) ? ((-(arr_16 [i_4]))) : (((/* implicit */long long int) ((var_5) * (((/* implicit */unsigned int) arr_30 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_7] [i_8] [i_9]))))))) - (3169643914455565915LL)))));
                                arr_36 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [3ULL] = ((/* implicit */unsigned char) (~(864691128455135232LL)));
                                arr_37 [i_3 + 1] [i_4] [i_3] [i_8] [i_9] = ((/* implicit */unsigned short) var_8);
                                var_17 = ((/* implicit */int) ((unsigned char) var_7));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        for (int i_11 = 1; i_11 < 24; i_11 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((int) 4294967286U))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_3] [i_3] [i_3] [i_10] [i_11]))) : (22U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (short)19042))) ? (((/* implicit */int) ((var_2) < (((/* implicit */unsigned long long int) 1758309413))))) : (((/* implicit */int) arr_19 [i_11] [i_7 + 2] [i_7 + 2] [i_3])))))));
                                var_19 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (short)19034))) && (((/* implicit */_Bool) ((int) (signed char)83)))));
                                var_20 = ((/* implicit */int) min((max((((/* implicit */unsigned int) (signed char)-96)), (4292874223U))), (((/* implicit */unsigned int) (~((+(((/* implicit */int) (signed char)-56)))))))));
                            }
                        } 
                    } 
                    arr_43 [i_3] = ((signed char) min((((arr_28 [19] [i_4]) & (((/* implicit */unsigned long long int) 0LL)))), (((/* implicit */unsigned long long int) ((unsigned char) var_8)))));
                }
                /* vectorizable */
                for (int i_12 = 0; i_12 < 25; i_12 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_14 = 2; i_14 < 23; i_14 += 2) 
                        {
                            arr_51 [i_14] [i_4] [i_3] = ((((/* implicit */_Bool) 3678750580U)) ? (6745639868491135010LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)107))));
                            var_21 = ((/* implicit */unsigned long long int) var_7);
                        }
                        var_22 ^= ((/* implicit */unsigned long long int) ((4292874232U) * (4294967286U)));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-106))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))) : (arr_15 [(short)6]))))));
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((((/* implicit */_Bool) arr_32 [i_3 + 1] [i_13 - 1] [i_4 - 2])) ? (arr_32 [i_3 - 1] [i_13 - 1] [i_4 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1632809443587229727LL)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : ((((_Bool)1) ? (((/* implicit */long long int) 3063641448U)) : (arr_29 [i_3] [i_3])))));
                    }
                    for (short i_15 = 1; i_15 < 23; i_15 += 4) 
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_28 [i_4 - 1] [i_15 + 2])) ? (((/* implicit */unsigned long long int) var_9)) : (var_0)));
                        arr_54 [i_15 + 1] [i_3] [i_3] [21U] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_15 - 1] [i_15 - 1] [i_15] [i_15 + 2] [i_15]))) : (var_2)));
                        arr_55 [i_3] = ((/* implicit */_Bool) (~((+(((/* implicit */int) var_3))))));
                        arr_56 [i_15 + 2] [i_3] [i_4] [i_3] [10LL] = ((/* implicit */int) (signed char)-96);
                    }
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(2093081U)))) ? (((arr_28 [i_3] [8ULL]) * (((/* implicit */unsigned long long int) 5439845578759627603LL)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-115)))))));
                }
                for (int i_16 = 0; i_16 < 25; i_16 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_17 = 3; i_17 < 22; i_17 += 3) 
                    {
                        for (int i_18 = 4; i_18 < 22; i_18 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (10U)));
                                var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)136))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_19 = 1; i_19 < 24; i_19 += 1) 
                    {
                        for (signed char i_20 = 0; i_20 < 25; i_20 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned int) (+(arr_60 [i_20] [i_20] [i_20] [i_19] [i_16] [i_4 - 1])));
                                arr_69 [i_3 + 2] [i_4] [(short)23] [i_16] [i_3] [i_19 + 1] [i_4] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_1))))) && (((/* implicit */_Bool) var_8)))));
                            }
                        } 
                    } 
                }
                arr_70 [i_3] [i_4] [(unsigned char)11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_7)) ? (min((arr_50 [i_3 - 1] [i_4] [i_3] [i_4] [i_4 - 1]), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) min((0), (((/* implicit */int) (short)19063))))))) : (((/* implicit */long long int) ((/* implicit */int) min(((signed char)-111), ((signed char)127)))))));
            }
        } 
    } 
}
