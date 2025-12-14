/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147979
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
    var_13 = ((/* implicit */unsigned short) ((long long int) ((unsigned char) (+(var_10)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 &= ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_3), (((/* implicit */long long int) 776448261)))))))), (((unsigned char) ((((/* implicit */_Bool) (unsigned short)36522)) ? (11853299479133907506ULL) : (((/* implicit */unsigned long long int) 1440811117)))))));
                arr_6 [(_Bool)1] [i_0] [i_1] &= ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) <= (((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0])))));
                var_15 += ((/* implicit */int) (short)-8649);
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
    {
        var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 11853299479133907483ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_2]))));
        var_17 = ((/* implicit */unsigned long long int) arr_1 [i_2] [i_2]);
        arr_11 [11] = ((/* implicit */long long int) arr_8 [i_2] [(signed char)1]);
    }
    for (long long int i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) (~(var_5)));
        arr_15 [i_3] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (arr_5 [(signed char)11] [i_3] [13LL]) : (var_3))));
        arr_16 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_3] [(_Bool)1])) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 6593444594575644131ULL)) ? (((/* implicit */unsigned int) var_10)) : (1849710365U)))))) : (((((/* implicit */_Bool) arr_8 [i_3] [10LL])) ? (6593444594575644107ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [i_3])))))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) (+((~(6911539144736009067LL)))));
                    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (signed char)-88))));
                    var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_21 [i_3] [i_3]) : (((/* implicit */int) (signed char)-88))))), (((((/* implicit */_Bool) 3693826640U)) ? (6593444594575644101ULL) : (6593444594575644107ULL)))))) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((-7LL) * (((/* implicit */long long int) arr_3 [i_5] [i_4] [i_5]))))) ? (((((/* implicit */int) arr_0 [(unsigned char)6])) / (var_1))) : (((/* implicit */int) arr_0 [i_3])))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((arr_5 [i_6] [i_6] [i_6]) == (((/* implicit */long long int) var_7)))))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_6] [i_6])) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) (short)1023))))) ? (((/* implicit */unsigned long long int) arr_5 [i_6] [i_6] [(unsigned char)7])) : (((((/* implicit */_Bool) arr_18 [14ULL] [14ULL] [i_6])) ? (11853299479133907496ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_6])))))));
    }
    for (long long int i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_8 = 4; i_8 < 12; i_8 += 4) 
        {
            for (unsigned char i_9 = 3; i_9 < 13; i_9 += 4) 
            {
                {
                    arr_32 [i_8] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) (unsigned char)255)) ? (5442545741947870427ULL) : (((/* implicit */unsigned long long int) 601140656U))))));
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 16; i_10 += 4) 
                    {
                        for (short i_11 = 0; i_11 < 16; i_11 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3663662768299246821LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)33)) ? (116742625U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24)))))) : (min((min((((/* implicit */unsigned long long int) 601140679U)), (6593444594575644110ULL))), (11853299479133907511ULL)))));
                                arr_40 [i_9] [i_9] [(unsigned char)2] [i_7] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_27 [i_7] [i_7])))) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) arr_9 [i_8]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_47 [i_7] [i_7] [10LL] [i_7] [i_7] = ((/* implicit */long long int) arr_34 [(unsigned short)4] [i_8] [i_9]);
                                var_25 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) arr_42 [i_7] [2U] [i_9] [i_12]))) ? (((/* implicit */unsigned int) ((((-57390677) + (2147483647))) >> (((arr_33 [i_7]) - (17894782997797715050ULL)))))) : (max((var_7), (((/* implicit */unsigned int) var_10))))))) ? (((/* implicit */int) max(((unsigned char)192), ((unsigned char)169)))) : (((/* implicit */int) (unsigned char)41))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_48 [i_7] = ((/* implicit */int) arr_35 [i_7] [i_7] [i_7] [i_7] [i_7]);
        arr_49 [i_7] = ((/* implicit */unsigned int) (+(max((arr_19 [4] [i_7] [i_7]), (arr_19 [i_7] [i_7] [i_7])))));
        arr_50 [(unsigned char)5] = ((/* implicit */unsigned int) ((int) ((var_2) ? (((/* implicit */int) arr_17 [i_7])) : (((/* implicit */int) (unsigned char)64)))));
    }
    var_26 = ((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)24125))) == (8720732068080572683LL)))), (var_0))))));
}
