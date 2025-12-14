/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164687
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
    var_17 = var_7;
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */int) var_11)), (((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_2 [i_0])))))));
        var_19 = ((/* implicit */unsigned short) var_12);
        arr_3 [i_0] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) arr_2 [6LL])))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_8)))))) : (((((/* implicit */_Bool) var_3)) ? (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))) : (min((((/* implicit */unsigned long long int) var_3)), (arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_20 = ((/* implicit */long long int) (-(((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)768)))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (unsigned short i_3 = 2; i_3 < 23; i_3 += 2) 
            {
                {
                    var_21 = ((/* implicit */int) max((var_21), ((~(((/* implicit */int) var_16))))));
                    arr_12 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) (+(arr_7 [i_3] [i_1] [i_3 - 2])));
                }
            } 
        } 
        var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */long long int) arr_7 [i_1] [i_1] [i_1])) | (var_8))) : (((/* implicit */long long int) ((arr_4 [i_1]) % (arr_4 [i_1]))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            for (long long int i_5 = 1; i_5 < 22; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            arr_26 [i_7] [i_6] [i_5] [i_5] [i_5] [i_4] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)768)) ? (((/* implicit */int) (short)19942)) : (((/* implicit */int) (signed char)-2))))));
                            var_23 ^= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_25 [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_16))))));
                            arr_27 [i_1] [i_1] [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) (((-(((/* implicit */int) (unsigned short)768)))) > ((+(arr_25 [i_5])))));
                        }
                        for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            arr_30 [i_1] [i_5] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1]))))));
                            var_24 = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1])) - (((/* implicit */int) arr_24 [i_1] [i_4] [i_1] [i_5]))))));
                        }
                        /* LoopSeq 4 */
                        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            var_25 += ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_31 [i_1] [i_1] [i_1] [i_1] [i_1]))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_9)))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) 32767)) : (4827502456675096073ULL)));
                        }
                        for (long long int i_10 = 1; i_10 < 24; i_10 += 1) 
                        {
                            arr_35 [i_1] [i_5] [i_4] [i_6] [i_6] = ((/* implicit */short) arr_10 [i_5 - 1] [i_6]);
                            arr_36 [i_10] [i_10] [i_6] [i_10] [i_5] = arr_10 [i_1] [i_10 + 1];
                            var_27 = ((/* implicit */short) arr_23 [i_4] [i_4] [i_5 + 3] [i_10] [i_6]);
                        }
                        for (long long int i_11 = 2; i_11 < 21; i_11 += 3) 
                        {
                            arr_40 [i_5] [3] [i_5] [i_6] [15LL] [3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_11 + 1] [i_11 - 1] [(unsigned char)23] [i_11] [i_5])) ? (arr_32 [i_11] [i_11 + 2] [i_11 + 2] [i_11] [i_5]) : (arr_32 [i_11] [i_11 - 1] [i_11] [i_11 - 1] [i_5])));
                            var_28 ^= ((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1] [i_6]);
                            var_29 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) -587544779)) & (-4857674767629861974LL)));
                            arr_41 [i_1] [i_5] [i_4] [i_4] [i_5] [i_6] [i_11] = ((/* implicit */long long int) ((arr_13 [i_4]) / (((((/* implicit */int) (signed char)2)) & (587544779)))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 25; i_12 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_45 [i_5])) ? (((((/* implicit */_Bool) arr_22 [i_6] [i_12] [i_5 + 3] [i_6] [22ULL] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1]))) : (arr_31 [i_1] [i_1] [i_5] [(_Bool)0] [i_12]))) : (arr_32 [i_5] [(signed char)11] [i_12] [i_12] [i_5])));
                            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) var_2))));
                        }
                    }
                } 
            } 
        } 
    }
    for (short i_13 = 1; i_13 < 12; i_13 += 2) 
    {
        arr_48 [(unsigned short)3] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_19 [i_13] [i_13 + 2] [i_13] [(short)4]), (arr_19 [i_13] [i_13 + 2] [i_13 + 1] [24ULL])))) ? (((((/* implicit */_Bool) ((unsigned char) var_10))) ? (min((((/* implicit */unsigned long long int) arr_16 [(unsigned short)8])), (var_2))) : (((var_1) | (((/* implicit */unsigned long long int) var_9)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
        /* LoopNest 2 */
        for (signed char i_14 = 4; i_14 < 11; i_14 += 4) 
        {
            for (int i_15 = 2; i_15 < 12; i_15 += 4) 
            {
                {
                    arr_53 [i_13 - 1] [i_13 - 1] = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_22 [i_13] [i_14 + 3] [i_15 + 1] [i_14] [i_15 + 1] [i_14])), ((-(max((var_7), (((/* implicit */unsigned long long int) var_6))))))));
                    var_32 = ((/* implicit */unsigned int) max((var_32), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_13 + 3] [i_14 - 1] [i_15 + 2] [i_13 + 3] [i_15 - 1])) ? (((/* implicit */int) (short)-28845)) : (((/* implicit */int) (signed char)8))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967279U)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned char)170))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)2))) : (379584144U)))))));
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (+(3689048951U)))) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (short)-9392)))) : (((/* implicit */int) max((arr_42 [i_13 + 1] [i_14 + 3] [i_14 + 3]), (((/* implicit */unsigned char) ((signed char) arr_32 [i_14] [i_14 - 4] [i_14] [(unsigned short)2] [i_14]))))))));
                    arr_54 [i_13] [i_14] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1555328606U)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (unsigned short)0))));
                    var_34 = ((/* implicit */unsigned long long int) arr_50 [(signed char)8] [i_14 + 2] [i_15 - 1]);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_16 = 0; i_16 < 15; i_16 += 1) 
        {
            for (signed char i_17 = 0; i_17 < 15; i_17 += 3) 
            {
                for (unsigned char i_18 = 0; i_18 < 15; i_18 += 3) 
                {
                    {
                        var_35 += ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) (+(arr_4 [i_13])))) % (arr_20 [i_18] [i_17] [10] [i_13] [i_13])))));
                        arr_64 [i_16] [i_16] = arr_20 [i_16] [i_16] [i_16] [i_16] [i_16];
                    }
                } 
            } 
        } 
    }
}
