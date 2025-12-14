/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187981
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
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) arr_3 [i_1] [0LL]);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_4 = 3; i_4 < 12; i_4 += 1) 
                        {
                            var_19 ^= ((/* implicit */short) (!(arr_9 [(unsigned char)2] [i_4 + 1] [i_2] [i_1])));
                            arr_12 [i_0] [i_1] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_7 [i_0] [i_3 + 1] [i_2] [i_0 + 1] [i_4]))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_17 [i_5] [i_1] [i_2] [i_1] [i_0 + 1] = ((/* implicit */short) (+(((int) (_Bool)0))));
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_14 [i_0 + 1] [i_1] [i_1] [i_2] [i_0 + 1] [i_3] [i_5]))));
                            arr_18 [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_0))) ? ((((_Bool)1) ? (2654748869U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16936))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_13)))))));
                        }
                        var_21 += ((/* implicit */long long int) var_7);
                        var_22 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)45616)) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (unsigned short)65535))));
                    }
                    for (short i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        var_23 = ((/* implicit */signed char) max((((/* implicit */int) arr_9 [i_0] [i_1] [(short)1] [i_6])), (((((/* implicit */int) var_12)) << (((-2147483639) - (-2147483642)))))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            var_24 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6] [i_1]))) * (max((((/* implicit */unsigned int) (_Bool)1)), (243211956U)))))));
                            arr_26 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */long long int) -2109620120)) + (-3555227695611598914LL)))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)-12408)))) / (((((/* implicit */_Bool) arr_7 [i_0] [1U] [i_0 - 1] [i_0] [i_0 + 1])) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) var_0))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) == ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_2] [i_8]))) : (307924903295873576LL)))));
                        /* LoopSeq 3 */
                        for (short i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            var_26 = ((/* implicit */long long int) arr_3 [i_0] [(signed char)12]);
                            var_27 = ((/* implicit */long long int) ((arr_14 [i_0] [i_0] [i_2] [(signed char)13] [i_9] [i_8] [3ULL]) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) var_1))))));
                        }
                        for (short i_10 = 0; i_10 < 15; i_10 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((unsigned short) arr_21 [i_0 + 1] [i_1] [3LL] [(_Bool)1]));
                            arr_35 [i_0] [i_0] [7LL] [i_2] [(_Bool)1] [i_8] [7LL] = ((/* implicit */short) ((arr_1 [i_0 - 1]) << (((arr_1 [i_0 - 1]) - (3969852549995695112ULL)))));
                            arr_36 [i_0] = ((/* implicit */_Bool) var_17);
                            var_29 = ((/* implicit */int) min((var_29), (((((/* implicit */int) arr_28 [i_0 - 1] [i_1] [i_2])) / (((/* implicit */int) arr_3 [i_0 - 1] [i_1]))))));
                        }
                        for (unsigned short i_11 = 2; i_11 < 13; i_11 += 2) 
                        {
                            arr_39 [i_0] [i_1] [i_0] [2LL] [i_11] = ((/* implicit */signed char) arr_14 [i_8] [i_1] [i_2] [i_8] [3U] [i_2] [i_8]);
                            var_30 |= ((/* implicit */signed char) (~(((/* implicit */int) (short)22902))));
                        }
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) var_15))));
}
