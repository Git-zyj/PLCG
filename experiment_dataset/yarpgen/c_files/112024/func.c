/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112024
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_10 [i_0] [i_2 + 1] = ((/* implicit */unsigned char) ((arr_0 [i_2 - 1]) <= (arr_0 [i_0])));
                        arr_11 [i_3] [i_2] [(unsigned short)11] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)251)) ? (((arr_0 [(_Bool)1]) | (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (_Bool)1)))))));
                        var_17 = ((/* implicit */int) min((var_17), (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2 + 1])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [4])) : (((/* implicit */int) var_7))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (short i_4 = 3; i_4 < 14; i_4 += 1) 
        {
            arr_15 [i_4] [i_4 - 1] [i_4 - 1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [(unsigned char)4] [i_4 - 1] [(short)9] [i_4]))) ^ (arr_2 [i_4 - 1] [(unsigned short)7] [(unsigned short)7])));
            arr_16 [i_0] [i_0] &= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [(short)9])) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) arr_13 [4ULL] [(_Bool)1] [i_0])))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) arr_5 [i_7] [i_6]);
                            arr_29 [i_8] [13] = ((/* implicit */unsigned int) (_Bool)0);
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_10))));
                        }
                    } 
                } 
                arr_30 [4ULL] &= ((/* implicit */long long int) (+(((/* implicit */int) arr_21 [3LL] [i_5] [i_6] [i_5]))));
            }
            for (short i_9 = 0; i_9 < 15; i_9 += 1) 
            {
                arr_33 [i_9] [i_5] [i_5] [i_0] = arr_24 [7ULL] [i_5] [i_0] [i_5] [i_0];
                arr_34 [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) (short)13859)) ? (((/* implicit */int) arr_17 [i_5])) : (((/* implicit */int) arr_1 [i_0]))));
                arr_35 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_0] [i_5] [i_9] [i_5] [i_5])) || (((/* implicit */_Bool) arr_27 [i_0] [i_5] [i_5] [i_0] [i_5]))));
                var_20 = (_Bool)1;
            }
            arr_36 [i_0] [i_5] [i_5] = ((/* implicit */short) ((arr_12 [i_0] [i_5]) ? (((((/* implicit */_Bool) 1991260246U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6853))) : (7841853954905336412ULL))) : (((/* implicit */unsigned long long int) arr_31 [i_0] [i_0] [i_0] [i_0]))));
            /* LoopNest 2 */
            for (signed char i_10 = 3; i_10 < 14; i_10 += 1) 
            {
                for (short i_11 = 1; i_11 < 12; i_11 += 3) 
                {
                    {
                        arr_41 [i_11] [i_10] [i_0] [i_0] [i_10] [i_0] = ((/* implicit */_Bool) arr_19 [i_0] [i_0]);
                        arr_42 [i_0] [i_10] [i_11 + 2] = ((/* implicit */signed char) (((_Bool)1) ? (arr_40 [13LL] [(unsigned short)7] [i_10 - 1] [(unsigned short)7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                    }
                } 
            } 
        }
        for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) 
        {
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_27 [i_12] [i_12] [i_0] [i_0] [i_0]))));
            /* LoopNest 2 */
            for (int i_13 = 1; i_13 < 12; i_13 += 1) 
            {
                for (signed char i_14 = 2; i_14 < 14; i_14 += 1) 
                {
                    {
                        arr_52 [i_0] [i_0] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_13 + 3] [i_13 - 1] [i_12])) / (((/* implicit */int) var_1))));
                        arr_53 [i_0] [i_0] [i_12] [i_12] = arr_14 [i_12];
                        arr_54 [(unsigned short)10] [i_12] [i_13] [i_13 + 3] [i_12] [i_12] |= ((/* implicit */_Bool) arr_8 [i_14 + 1] [(_Bool)1] [i_14 + 1] [i_14 - 1] [i_14 + 1] [i_14]);
                    }
                } 
            } 
        }
        arr_55 [i_0] = ((/* implicit */unsigned char) var_13);
        var_22 = ((/* implicit */short) var_2);
        arr_56 [i_0] [11ULL] &= ((/* implicit */short) ((arr_4 [i_0] [i_0] [i_0] [i_0]) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-96)))));
    }
    var_23 &= ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        for (unsigned long long int i_16 = 1; i_16 < 23; i_16 += 2) 
        {
            {
                arr_61 [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */int) (unsigned short)3716)) >> (((((/* implicit */int) (short)-24421)) + (24426))))) : (((/* implicit */int) (signed char)-125))));
                var_24 = ((/* implicit */short) var_5);
            }
        } 
    } 
    var_25 &= ((/* implicit */unsigned int) var_6);
}
