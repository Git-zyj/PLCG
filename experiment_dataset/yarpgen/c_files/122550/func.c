/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122550
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-17)) ? (max((arr_1 [i_1] [i_1 + 1]), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-18)), (arr_0 [i_0])))) ? (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_0 [i_0])))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_3 [i_0] [i_0] [i_1 - 1]);
                arr_7 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0]);
                var_10 &= ((/* implicit */unsigned long long int) arr_0 [(signed char)12]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 4; i_2 < 7; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            {
                arr_14 [(short)6] [i_2] = (((~(var_1))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_2] [i_2])) ^ (((/* implicit */int) arr_12 [i_2] [i_2]))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) max((((/* implicit */unsigned int) var_0)), (((((((/* implicit */_Bool) (signed char)16)) || (((/* implicit */_Bool) var_2)))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32755)))))));
                            var_12 &= ((/* implicit */short) arr_2 [i_2 - 3] [i_2 + 1]);
                            var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_15 [i_2])) & (((10455672841877659260ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                arr_19 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_4 [i_2] [i_3] [i_2])) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) var_4)))) << (((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 - 1])) ? (var_3) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_10 [i_3] [i_3] [i_2])) : (((((/* implicit */_Bool) arr_2 [i_3] [i_2 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_12 [i_2 + 2] [i_2])))))) : (-1553607855)));
                var_14 = ((/* implicit */unsigned long long int) arr_9 [i_2 - 1] [i_2 - 1]);
                arr_20 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_3])) < (((/* implicit */int) arr_18 [i_3] [i_2] [2ULL])))) ? (((/* implicit */int) (signed char)17)) : (((((/* implicit */_Bool) (short)32763)) ? (((/* implicit */int) arr_10 [i_2] [i_3] [i_3])) : (((/* implicit */int) (_Bool)0))))))) || (((((/* implicit */_Bool) ((short) arr_17 [i_2] [i_3] [1ULL] [(_Bool)1] [i_2 + 1]))) || (((/* implicit */_Bool) arr_13 [i_2]))))));
            }
        } 
    } 
    var_15 &= ((/* implicit */unsigned char) max((((((/* implicit */int) var_4)) - (((((/* implicit */int) var_2)) & (((/* implicit */int) var_7)))))), (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    for (int i_9 = 2; i_9 < 23; i_9 += 4) 
                    {
                        {
                            arr_36 [i_6] [i_6] = ((/* implicit */signed char) ((((arr_23 [i_8] [i_8]) || (((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)76)), (1748383627)))))) ? (((/* implicit */int) arr_21 [i_6])) : (((/* implicit */int) arr_30 [i_8] [i_7] [i_8] [i_9]))));
                            arr_37 [i_6] = ((/* implicit */unsigned char) arr_30 [22] [22] [i_8] [i_9]);
                            arr_38 [i_6] [i_7] [(unsigned char)8] [(unsigned char)8] [(unsigned char)8] [i_6] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_6] [i_7]))) != (-6791085797535653889LL)));
                            arr_39 [i_6] [i_7] [i_6] [i_9 + 1] [i_6] [i_7] = ((/* implicit */int) ((unsigned char) ((min((var_1), (((/* implicit */unsigned long long int) var_9)))) >> (((/* implicit */int) arr_21 [i_6])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 1) 
                        {
                            {
                                arr_48 [i_6] [(short)14] [i_10] [i_6] [i_7] [i_7] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) arr_24 [i_6])))))) ? (((((/* implicit */int) (unsigned short)40803)) + (((/* implicit */int) arr_21 [i_6])))) : (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                                var_16 = ((/* implicit */signed char) arr_33 [i_6] [i_6] [i_6] [(unsigned char)11] [i_6]);
                                arr_49 [i_6] [i_6] = (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)218)) <= (2117663939)))));
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((unsigned short) arr_24 [i_7])))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */short) (unsigned short)65472);
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 24; i_14 += 1) 
                    {
                        {
                            arr_56 [i_6] [i_13] [i_13] [i_14] [9U] [i_7] = ((/* implicit */unsigned long long int) (unsigned char)54);
                            arr_57 [i_6] [i_6] [i_7] [i_7] [i_6] [i_6] = ((/* implicit */signed char) ((((((/* implicit */int) var_5)) - (((/* implicit */int) arr_53 [i_6] [i_6])))) == (((/* implicit */int) arr_23 [i_6] [i_6]))));
                            var_19 = ((/* implicit */signed char) (+(arr_43 [i_13] [i_6])));
                            var_20 ^= ((/* implicit */int) var_7);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_15 = 1; i_15 < 23; i_15 += 3) 
                {
                    for (unsigned char i_16 = 1; i_16 < 23; i_16 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) | (((((/* implicit */_Bool) arr_33 [i_15 - 1] [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_6])) ? (((/* implicit */unsigned long long int) arr_22 [i_6] [i_16 - 1])) : (arr_33 [i_15] [i_15] [i_15] [i_15 - 1] [i_6])))));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_23 [i_6] [i_16 + 1]) ? (arr_52 [i_6] [i_6] [i_6]) : (((((/* implicit */_Bool) -7790316946497637780LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_25 [i_6] [i_6]))))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (arr_23 [i_7] [i_15 - 1]))))));
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_61 [i_6] [i_7] [i_15 - 1] [i_16 + 1]))) ^ (-6651163701306619474LL)))), (((((/* implicit */_Bool) arr_47 [i_6] [i_15 - 1] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_7] [i_15] [i_6]))) : (var_1)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((16879100612691251601ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_6] [i_6]))))))));
                            arr_64 [i_6] = ((/* implicit */unsigned int) max((((((arr_34 [i_6] [(short)22] [i_6]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_60 [i_6] [i_6] [i_15] [i_16])))) / (((/* implicit */int) var_4)))), (((/* implicit */int) (signed char)-53))));
                            var_24 = ((/* implicit */unsigned long long int) arr_22 [i_6] [i_15 + 1]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_4)))))));
}
