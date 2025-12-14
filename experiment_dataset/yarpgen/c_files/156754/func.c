/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156754
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
    var_12 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) (_Bool)0);
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 3; i_2 < 13; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 4; i_3 < 15; i_3 += 3) 
                {
                    for (unsigned char i_4 = 2; i_4 < 14; i_4 += 3) 
                    {
                        {
                            arr_16 [i_0] [i_2] = ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_3]);
                            arr_17 [(short)8] [(short)8] [i_2 - 3] = ((/* implicit */unsigned long long int) arr_3 [i_2 - 2] [i_0 - 1]);
                        }
                    } 
                } 
                arr_18 [i_0] [i_1] [i_2] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)99)) && (((/* implicit */_Bool) var_0)))))) % (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                arr_19 [(_Bool)1] [i_0 - 1] [i_0] [(_Bool)1] = ((/* implicit */short) ((arr_8 [i_0] [i_0] [i_0 - 1] [i_0]) ? (((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2 - 1]))));
            }
            for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 3) 
            {
                /* LoopSeq 2 */
                for (long long int i_6 = 3; i_6 < 15; i_6 += 3) 
                {
                    arr_28 [i_0 - 1] [i_5] [(signed char)5] [i_6 - 3] [i_6 - 1] [(unsigned char)15] = ((/* implicit */signed char) var_3);
                    arr_29 [i_0] [i_6 + 1] [(signed char)0] [i_6 - 1] [i_6] [i_6 - 1] = ((/* implicit */int) ((((var_10) != (((/* implicit */int) arr_23 [(_Bool)1] [i_5] [i_1] [(_Bool)1])))) ? (arr_24 [i_0] [i_1] [i_5] [i_1] [i_5]) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_5 [i_0 - 1] [i_1])))));
                }
                for (long long int i_7 = 1; i_7 < 15; i_7 += 3) 
                {
                    arr_33 [i_0] [i_1] [4LL] [i_5] [i_5] [i_7 - 1] &= ((/* implicit */unsigned int) var_8);
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        arr_38 [i_0] [i_0] [i_0 - 1] [2] [i_0 - 1] [i_0] &= var_11;
                        arr_39 [i_8] [i_8] [i_8] [i_8] [i_8] [2ULL] = arr_21 [(unsigned short)4] [i_8];
                        arr_40 [i_0 - 1] [i_0 - 1] [6LL] [i_0] [i_0] [i_0] = ((/* implicit */short) ((var_6) / (((/* implicit */long long int) ((int) var_5)))));
                    }
                    arr_41 [2LL] &= arr_26 [i_0 - 1] [i_0 - 1] [i_5 + 1] [i_7 - 1];
                    arr_42 [i_1] [i_1] [i_1] [i_5] = ((/* implicit */int) var_5);
                }
                arr_43 [i_0] [i_0 - 1] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_5 - 1] [i_0 - 1])) && (((((/* implicit */_Bool) arr_9 [i_0] [i_5] [i_5])) && ((_Bool)0)))));
                /* LoopNest 2 */
                for (long long int i_9 = 1; i_9 < 14; i_9 += 3) 
                {
                    for (short i_10 = 3; i_10 < 15; i_10 += 3) 
                    {
                        {
                            arr_48 [i_0] [12ULL] [i_0] [i_0 - 1] [i_0] &= ((/* implicit */long long int) arr_10 [i_9] [i_0 - 1]);
                            arr_49 [i_1] [i_1] [i_5] [i_1] [i_10 - 3] = ((/* implicit */unsigned short) ((arr_5 [i_0 - 1] [i_5 - 1]) | (arr_5 [i_0 - 1] [i_5 - 1])));
                        }
                    } 
                } 
            }
            arr_50 [i_0] [i_0] &= ((/* implicit */short) (+(((/* implicit */int) var_1))));
        }
        for (unsigned long long int i_11 = 2; i_11 < 14; i_11 += 3) 
        {
            arr_54 [(short)12] [(unsigned char)14] = ((/* implicit */long long int) var_4);
            /* LoopNest 2 */
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                for (unsigned int i_13 = 1; i_13 < 15; i_13 += 3) 
                {
                    {
                        arr_59 [(signed char)8] [i_0 - 1] [i_11] [i_11] [i_12] [i_13 + 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [(_Bool)1] [i_12] [i_12 - 1] [i_11 - 1] [i_11 + 1] [(_Bool)1]))) != (((((/* implicit */_Bool) arr_26 [i_0 - 1] [i_11] [i_11] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_0] [i_11 + 2] [(_Bool)1] [14LL]))) : (arr_37 [i_0] [14ULL] [i_12] [i_13] [i_13 - 1])))));
                        arr_60 [8] [(signed char)12] [8] [8] [i_12 - 1] [i_12 - 1] = ((/* implicit */short) arr_5 [i_0 - 1] [i_0]);
                        arr_61 [i_11] [i_11] = ((/* implicit */short) arr_55 [i_12] [i_12]);
                    }
                } 
            } 
            arr_62 [i_11] [i_0 - 1] [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_46 [i_11] [i_11] [(signed char)0] [i_11 - 2] [i_11] [i_11 - 1] [i_11 - 2]))));
            /* LoopNest 3 */
            for (unsigned int i_14 = 1; i_14 < 15; i_14 += 3) 
            {
                for (short i_15 = 1; i_15 < 14; i_15 += 3) 
                {
                    for (signed char i_16 = 0; i_16 < 16; i_16 += 3) 
                    {
                        {
                            arr_70 [2U] [i_11] [i_14] [i_16] = ((/* implicit */int) ((4193635068U) == (((/* implicit */unsigned int) (+(((/* implicit */int) var_0)))))));
                            arr_71 [i_11] [i_11] [i_11] [i_11] [i_14] [i_15 - 1] [i_11] = ((/* implicit */unsigned short) (-(arr_21 [i_11] [i_0 - 1])));
                        }
                    } 
                } 
            } 
        }
    }
    for (signed char i_17 = 3; i_17 < 18; i_17 += 3) 
    {
        arr_74 [i_17] [i_17] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (arr_73 [i_17 + 1] [i_17 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_72 [i_17] [i_17 - 1])))))))) / (((/* implicit */unsigned int) arr_72 [i_17] [i_17]))));
        arr_75 [i_17] [i_17 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_73 [i_17 + 2] [i_17 - 3]), (((/* implicit */unsigned int) var_5))))) && (((((((/* implicit */_Bool) arr_72 [i_17] [i_17])) || (((/* implicit */_Bool) (signed char)-99)))) || ((!(((/* implicit */_Bool) arr_72 [i_17] [i_17]))))))));
    }
}
