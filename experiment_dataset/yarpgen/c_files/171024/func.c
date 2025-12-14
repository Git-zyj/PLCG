/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171024
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
    var_10 = var_5;
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_0 [i_0] [i_0])));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_9))));
        arr_4 [i_0] = ((/* implicit */unsigned int) var_4);
        arr_5 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0]))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) / (386914249U))))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */short) (-(3530394068U)));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) max((arr_7 [i_1] [(signed char)1]), (max((arr_7 [i_1] [i_1]), (arr_7 [i_1] [i_1])))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            var_11 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_7 [i_2] [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2]))) : ((~(arr_7 [i_2] [i_2])))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            arr_24 [i_2] [i_2] [i_4] [i_5] [i_6] = ((/* implicit */short) arr_19 [i_2] [i_2] [i_2] [i_2]);
                            var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((arr_17 [i_2] [i_4] [i_3] [10]) ? (((((/* implicit */_Bool) arr_0 [i_4] [(short)10])) ? (((/* implicit */int) arr_6 [i_4])) : (((/* implicit */int) (short)29594)))) : (((arr_16 [i_2]) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) (unsigned char)179)))))))));
                            arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_10 [(short)3])) : (((/* implicit */int) arr_11 [i_6]))))) && (((/* implicit */_Bool) (short)11619))));
                            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (((-(((/* implicit */int) (short)3622)))) / ((((_Bool)1) ? (((/* implicit */int) (short)3622)) : (((/* implicit */int) arr_12 [i_6] [i_5] [i_4])))))))));
                        }
                        arr_26 [i_2] [(unsigned short)5] [i_4] = (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_3] [i_3])) : (((/* implicit */int) (short)-3622)))));
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_2] [i_2] [8] [i_7] [8] [i_7])) ? (arr_13 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7] [(short)0] [i_2] [i_2]))))))));
            arr_30 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16524)) ? (((/* implicit */int) (unsigned short)38352)) : (((/* implicit */int) (short)-607))));
            var_15 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_6 [i_7]))))));
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (int i_9 = 1; i_9 < 10; i_9 += 1) 
                {
                    {
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2] [3ULL] [i_7] [3ULL])) ? (764573213U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_29 [i_2] [i_2])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)179)) || (((/* implicit */_Bool) (short)-3622))))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) 764573234U))));
                            var_18 += ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_9 + 1])) ? (((/* implicit */int) arr_23 [i_9 + 1])) : (((/* implicit */int) arr_23 [i_9 - 1]))));
                            arr_41 [6ULL] [6ULL] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)29994)) / (((/* implicit */int) arr_17 [i_10] [i_2] [i_2] [i_2]))))) ? (((/* implicit */int) arr_15 [i_9 + 1] [i_9 - 1] [i_9 + 1] [(unsigned short)10])) : (((arr_31 [i_10] [i_2] [i_2] [i_2]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)48996))))));
                        }
                    }
                } 
            } 
            arr_42 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_35 [i_7] [i_2]);
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_12 = 2; i_12 < 10; i_12 += 3) 
            {
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    for (int i_14 = 0; i_14 < 11; i_14 += 4) 
                    {
                        {
                            arr_52 [i_11] [i_11] [i_11] [(short)4] [i_11] = ((/* implicit */unsigned char) var_6);
                            var_19 = ((/* implicit */_Bool) (signed char)66);
                        }
                    } 
                } 
                arr_53 [i_11] = ((/* implicit */short) ((arr_31 [i_2] [(unsigned short)8] [i_2] [i_12 + 1]) ? (((/* implicit */int) arr_31 [i_12] [i_11] [i_12] [i_12 - 2])) : (((/* implicit */int) (short)-3624))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_12 + 1])) ? (((/* implicit */int) arr_14 [i_12 - 2])) : (((/* implicit */int) arr_14 [i_12 + 1]))));
            }
            var_21 = (!(((/* implicit */_Bool) 16702853870671395377ULL)));
        }
        var_22 -= ((/* implicit */signed char) ((((((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_2])) < (((/* implicit */int) arr_47 [i_2] [i_2] [i_2] [i_2] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */_Bool) (signed char)66)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-25)))))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_2] [i_2])) / (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))));
    }
    var_24 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 713394909U))));
}
