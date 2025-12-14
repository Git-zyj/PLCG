/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128043
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = var_5;
        arr_3 [i_0] = ((/* implicit */long long int) (((_Bool)1) ? (18446744073709551602ULL) : (18446744073709551574ULL)));
        var_15 += ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) == (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) min((2147483632), (((/* implicit */int) (_Bool)1))))) : (18446744073709551612ULL)))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        arr_6 [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (arr_5 [i_1])))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (18446744073709551600ULL) : (var_1))) : (min((arr_5 [i_1]), (arr_5 [i_1])))));
        arr_7 [i_1] [(unsigned short)6] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) * (((arr_5 [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) min((min((arr_5 [i_3]), (arr_5 [i_2]))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)227)) ^ (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned long long int) -2147483647)) + (18446744073709551591ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(unsigned char)2] [(unsigned char)11])))))));
                    var_17 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-70)), (2143289344)))) / (min((var_6), (((/* implicit */unsigned int) arr_10 [(unsigned short)5] [i_1] [i_1]))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */short) (((~(((/* implicit */int) (unsigned char)200)))) % (((/* implicit */int) var_10))));
    }
    for (short i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) var_9)) / (arr_11 [i_4] [i_4] [(short)11]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) && (arr_12 [i_4]))))))) ? (((/* implicit */int) ((((/* implicit */int) (short)29647)) != (((/* implicit */int) (short)1920))))) : (((/* implicit */int) arr_10 [i_4] [i_4] [i_4]))));
        arr_14 [i_4] = ((/* implicit */unsigned char) (((~(arr_5 [i_4]))) ^ (min((arr_11 [i_4] [i_4] [i_4]), (((/* implicit */unsigned long long int) var_4))))));
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                for (unsigned short i_7 = 0; i_7 < 13; i_7 += 1) 
                {
                    {
                        arr_25 [i_4] [i_4] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_12 [i_5])), (((((/* implicit */_Bool) (+(-125412434)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_23 [i_7] [i_5] [i_6] [i_5] [i_4]))))) : (min((arr_15 [i_4] [i_4]), (((/* implicit */unsigned long long int) var_4))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_30 [i_4] [i_5] [i_6] [i_4] [i_8] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
                            arr_31 [i_4] [i_5] [i_4] [(_Bool)1] [i_7] [i_8] [i_8] = ((/* implicit */unsigned short) var_10);
                            arr_32 [i_4] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))));
                            arr_33 [i_4] [i_5] [i_6] [i_4] [i_8] = var_14;
                        }
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((18446744073709551601ULL), (17953720092419821116ULL)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551599ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) arr_16 [(short)10] [i_5] [(short)10])) : (((/* implicit */int) ((signed char) 951190773)))))));
                            arr_36 [i_4] = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_12 [(unsigned char)11])), (((var_0) ? (arr_15 [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_7))))))))));
                            arr_37 [i_4] [i_4] [i_4] [i_4] [(short)0] [(unsigned char)8] [i_9] = ((/* implicit */long long int) ((18446744073709551613ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50)))));
                        }
                        arr_38 [i_4] [i_7] [(unsigned char)1] [i_5] [i_4] = ((/* implicit */int) min((min((arr_23 [(unsigned short)6] [i_6] [i_5] [i_5] [i_4]), (arr_23 [(signed char)3] [i_6] [i_5] [(_Bool)1] [i_4]))), (arr_23 [i_6] [i_6] [i_5] [(unsigned char)11] [(unsigned char)6])));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */unsigned long long int) var_9);
}
