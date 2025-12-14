/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103824
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
    var_16 = ((/* implicit */unsigned long long int) (+(((unsigned int) var_9))));
    var_17 = ((/* implicit */long long int) ((var_7) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_9)))) : (min((((/* implicit */unsigned int) var_3)), (3239356438U)))));
    var_18 = ((/* implicit */short) var_3);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) 1667638357U);
        arr_4 [i_0] = ((short) max((var_0), (arr_1 [i_0] [i_0])));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_2 [i_0]), (arr_2 [i_0])))) ? (-8422244439836617330LL) : (((/* implicit */long long int) ((/* implicit */int) (short)14336))))))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)36652)), (9223372036854775804LL)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((1055610826U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-32767))))))))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (3239356438U) : (3239356433U)))) : (min((((/* implicit */unsigned long long int) arr_1 [i_1] [(signed char)0])), (arr_6 [i_1])))))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(arr_1 [i_1] [(_Bool)1])))), (arr_6 [i_1]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            for (unsigned char i_3 = 1; i_3 < 12; i_3 += 3) 
            {
                {
                    var_22 = ((/* implicit */long long int) max((1073741312), (((/* implicit */int) var_4))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            {
                                arr_17 [(signed char)7] [i_2] [i_4] [i_3] [i_1] [i_2] [i_1] = ((/* implicit */signed char) (+((-(((/* implicit */int) ((signed char) arr_1 [i_2] [i_2])))))));
                                var_23 = ((/* implicit */signed char) (+(7673850166679926070ULL)));
                            }
                        } 
                    } 
                    arr_18 [i_2] [(unsigned char)2] [i_2] [(unsigned char)2] = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11U)) ? (((/* implicit */int) arr_9 [i_1] [i_2] [i_2] [i_2])) : (((/* implicit */int) (unsigned char)154))))), (max((13462864258427616900ULL), (((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [i_2] [i_1])))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned int) arr_15 [i_7]);
                        arr_27 [i_6] = ((/* implicit */unsigned char) min((arr_8 [i_1] [i_8]), (((((((/* implicit */int) (short)20324)) == (((/* implicit */int) var_14)))) ? (((/* implicit */unsigned int) arr_14 [i_1] [i_1] [i_6] [i_6])) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_8]))) * (1055750409U)))))));
                        var_25 -= ((/* implicit */_Bool) arr_2 [i_8]);
                    }
                } 
            } 
        } 
    }
    for (long long int i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
    {
        var_26 ^= ((/* implicit */unsigned char) 8731989304934834669LL);
        arr_32 [i_9] [i_9] = ((/* implicit */signed char) var_11);
        var_27 = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) (short)-11202))));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 10; i_10 += 3) 
        {
            for (unsigned short i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                for (signed char i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    {
                        var_28 ^= ((/* implicit */unsigned short) (_Bool)1);
                        var_29 = ((/* implicit */short) (-(((/* implicit */int) (signed char)-91))));
                        arr_41 [i_9] [i_9] [(unsigned char)5] [i_9] [i_12] = ((/* implicit */short) var_0);
                        var_30 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_9] [i_9]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)204))) : (max((((/* implicit */long long int) arr_39 [i_9] [5U] [i_9] [5U] [7])), (arr_22 [i_11])))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_13 = 0; i_13 < 10; i_13 += 3) /* same iter space */
    {
        var_31 = ((/* implicit */short) (~((+(var_5)))));
        arr_45 [i_13] = min((((/* implicit */long long int) ((arr_22 [i_13]) > (((/* implicit */long long int) var_0))))), ((~(((arr_43 [i_13] [i_13]) & (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
    }
}
