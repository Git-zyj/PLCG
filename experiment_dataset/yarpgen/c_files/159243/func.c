/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159243
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned short) arr_6 [i_0 + 2] [i_1 - 1] [i_0] [i_1 + 1]);
                    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 4] [i_0 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0 - 4] [i_0] [i_1 - 1]))) : (576460752303423488LL)));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 16; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_12 [(short)2] [i_1] [i_0] [i_3] [13LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0 - 4] [i_1 + 2])) ? (arr_0 [i_0 - 4] [i_2]) : (arr_0 [i_0 - 4] [7ULL])));
                                arr_13 [i_0] [0] [i_0] [i_4] [i_3 - 4] [i_3] = ((/* implicit */unsigned short) ((arr_1 [i_0]) < (arr_1 [i_0])));
                                var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)21)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) -9223372036854775800LL)) ? (arr_2 [6ULL] [i_3] [i_4]) : (((/* implicit */unsigned long long int) var_7))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1278532022)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (1278532021)));
    }
    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5])) - ((+(((/* implicit */int) var_5)))))) << ((((-(arr_11 [2LL] [(_Bool)1] [i_5] [(_Bool)1] [i_5]))) - (13306564907526204856ULL))))))));
        arr_17 [i_5] [i_5] = ((/* implicit */_Bool) var_1);
    }
    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        arr_22 [i_6] = ((/* implicit */unsigned short) (signed char)5);
        /* LoopNest 3 */
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            for (long long int i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                for (short i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    {
                        arr_33 [i_6] [i_6] = ((/* implicit */unsigned long long int) var_2);
                        arr_34 [i_6] [i_7] [i_6] [(short)7] [(signed char)1] [i_8] = ((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */signed char) ((var_8) > (70368207306752ULL)))), (((signed char) arr_20 [i_6] [i_6])))))));
                        var_14 = ((/* implicit */unsigned short) -6591502051672178949LL);
                        arr_35 [i_6] [i_7] [i_8] [i_6] [i_9] = ((/* implicit */long long int) arr_26 [i_6] [i_7] [i_7]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_10 = 0; i_10 < 21; i_10 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_11 = 0; i_11 < 21; i_11 += 2) 
        {
            var_15 = ((/* implicit */long long int) (((+(((/* implicit */int) var_1)))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_37 [i_10]))))));
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                for (signed char i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    for (long long int i_14 = 0; i_14 < 21; i_14 += 1) 
                    {
                        {
                            var_16 = ((int) arr_41 [i_10] [i_10] [i_10] [i_10]);
                            arr_48 [i_10] [(_Bool)1] [(short)16] [10LL] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_39 [i_10] [i_10])))) & (((/* implicit */int) ((unsigned short) arr_38 [i_11] [i_10])))));
                            arr_49 [i_10] [i_11] [3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_10] [i_11]))) >= (((arr_38 [i_12] [i_10]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))) : (var_3)))));
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((arr_46 [(signed char)6] [i_11] [i_11] [14] [i_12] [i_13] [i_11]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_41 [(signed char)14] [(signed char)3] [(signed char)1] [(short)11])) : (((/* implicit */int) (signed char)127)))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_15 = 0; i_15 < 21; i_15 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */_Bool) ((var_5) ? (var_7) : (((/* implicit */int) (short)-22295))))) ? (var_8) : (((/* implicit */unsigned long long int) ((arr_36 [4ULL]) + (((/* implicit */int) var_5)))))))));
            arr_52 [i_10] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(-1115476513)))) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_10]))))))));
        }
        var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64146)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6591502051672178949LL)))))) : (arr_47 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]));
        var_20 = ((/* implicit */_Bool) max((var_20), ((((~(((/* implicit */int) arr_39 [14LL] [i_10])))) != (((((/* implicit */int) var_6)) * (((/* implicit */int) var_6))))))));
    }
    var_21 = ((/* implicit */unsigned short) (+(((unsigned long long int) var_0))));
}
