/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130380
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
    var_15 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 2; i_2 < 23; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 22; i_4 += 4) 
                        {
                            {
                                arr_13 [(short)18] [i_1] = ((/* implicit */short) arr_1 [i_4 + 1]);
                                arr_14 [(short)16] [i_3] [i_1] [(_Bool)1] [i_1] [i_1] [(signed char)15] = ((/* implicit */_Bool) arr_9 [i_4] [(unsigned short)7] [i_0] [i_1] [i_0]);
                                arr_15 [i_4 + 2] [i_2] [i_2] [i_2] [4U] &= ((/* implicit */int) max((((/* implicit */short) ((signed char) arr_3 [i_2 + 1] [i_2]))), (min((arr_3 [i_2 - 2] [i_2]), (arr_3 [i_2 + 1] [i_2])))));
                                var_16 = ((/* implicit */long long int) max((((((/* implicit */int) arr_6 [i_2] [23] [i_2 - 2] [i_2])) << (((((/* implicit */int) (signed char)27)) - (5))))), ((-(((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 23; i_5 += 3) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_21 [i_0] [i_1] [i_2] [i_5] [i_5] [i_6] = ((/* implicit */unsigned short) arr_9 [i_0] [(_Bool)1] [i_2] [i_5] [i_6]);
                                arr_22 [i_0] [i_1] [i_0] [i_5] [6LL] [i_6] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(var_14)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [2ULL] [i_2] [i_0] [10U] [i_2] [i_2] [i_0])) && (((/* implicit */_Bool) arr_11 [i_2 + 1] [i_2] [i_2] [i_5] [i_6]))))) : (((/* implicit */int) arr_11 [i_0] [i_6] [i_5 - 1] [i_6] [i_6])))) << (((((/* implicit */int) arr_20 [i_0] [i_1] [i_2 + 1] [i_1] [i_5] [i_6] [i_6])) - (66)))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 1; i_7 < 23; i_7 += 3) 
                {
                    var_17 &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_6))) && (((/* implicit */_Bool) arr_5 [i_0] [i_7 - 1] [i_7]))));
                    arr_25 [i_0] [i_0] [20U] &= ((/* implicit */int) ((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_7] [(unsigned char)6])))))) : (arr_0 [i_7 - 1])));
                    arr_26 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_7] [i_7] [i_7] [i_7 + 1] [i_7 - 1])) ? (arr_9 [i_0] [19ULL] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112)))));
                }
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (long long int i_10 = 1; i_10 < 22; i_10 += 1) 
                            {
                                arr_33 [i_1] [i_1] [i_8] [(short)17] [i_10] = ((/* implicit */signed char) (~(((/* implicit */int) arr_24 [i_10 + 2] [i_10 + 2] [i_10 + 1]))));
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_1] [i_10] [10U] [i_10 - 1])) <= (((/* implicit */int) (unsigned short)29790)))))));
                                var_19 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)87))));
                                var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_10] [i_10 + 2] [i_10 + 1] [i_10] [i_10] [20U] [10])) + (((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) arr_30 [(signed char)14] [i_1] [i_1] [i_1] [(signed char)18])))))));
                            }
                            arr_34 [19] [i_1] [i_0] = ((/* implicit */unsigned int) (+(var_3)));
                            /* LoopSeq 2 */
                            for (unsigned int i_11 = 1; i_11 < 20; i_11 += 4) 
                            {
                                var_21 = ((/* implicit */int) ((unsigned short) ((unsigned long long int) (_Bool)1)));
                                arr_38 [i_9] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_27 [i_8] [i_1] [i_0])) && (((/* implicit */_Bool) 702869095)))))) ? (((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)17565))))), (arr_32 [i_0] [i_1] [i_0] [i_9] [i_11 + 2] [(unsigned short)5] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_1])))))));
                            }
                            for (int i_12 = 1; i_12 < 22; i_12 += 4) 
                            {
                                var_22 = arr_12 [i_12 + 1] [i_12 + 1] [i_8] [i_9] [i_12];
                                arr_41 [i_1] [i_1] [i_12 + 2] [i_9] [i_1] = min((1020U), (((/* implicit */unsigned int) (short)-7281)));
                                arr_42 [i_1] [22ULL] [i_8] [i_9] [i_12] = ((/* implicit */short) max((max((((/* implicit */unsigned long long int) var_12)), (arr_36 [i_0] [(unsigned char)6] [i_0] [i_12 + 2] [i_12 + 1] [i_0]))), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_1] [i_1] [i_9]))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
