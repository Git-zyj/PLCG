/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142537
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (((~(arr_4 [i_0]))) | (((arr_4 [i_1]) ^ (arr_4 [19])))));
                /* LoopSeq 2 */
                for (short i_2 = 2; i_2 < 19; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (signed char i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_14 += ((/* implicit */unsigned char) arr_3 [i_3 + 1] [i_3 + 1] [i_2]);
                                var_15 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_3 + 1] [i_3] [i_3 + 1] [i_4 + 2])))))) + (min((arr_13 [i_1] [i_1] [i_3 + 1] [i_4] [i_4] [i_4 - 2]), (arr_13 [i_0] [i_0] [i_3 + 1] [i_3] [i_3 + 1] [i_4 + 2])))));
                                var_16 = ((/* implicit */signed char) (-(((/* implicit */int) min((arr_12 [i_4 + 2] [i_3 + 1] [i_2 + 2] [(signed char)5] [i_0] [i_0]), (arr_12 [i_0] [i_1] [i_1] [i_0] [i_4 - 1] [i_2 - 2]))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_9 [i_2 + 2] [i_1])))) ? ((+((~(var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_6 [i_2 + 2] [i_2 + 1] [i_2 + 3]))))));
                    arr_14 [i_0] [i_0] [i_0] [(unsigned char)10] = ((/* implicit */short) min(((~(((/* implicit */int) arr_8 [i_2 + 2] [i_2 - 1] [i_2 + 2])))), ((~(((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 2] [i_2 + 2] [i_2 + 3] [i_2 - 1] [i_2 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((long long int) arr_16 [i_1] [i_2 - 1] [i_5] [i_1]));
                                var_19 = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)29054)) ? (((/* implicit */int) (short)29054)) : (((/* implicit */int) (short)29054))))) ^ ((+(arr_13 [i_0] [i_1] [i_1] [i_1] [i_5] [7LL])))))));
                                var_20 &= min((((((/* implicit */int) (short)-29054)) ^ (((/* implicit */int) (short)-29050)))), (arr_17 [i_0] [i_2] [i_2 - 2]));
                                var_21 += ((/* implicit */short) (!(((/* implicit */_Bool) (+((-(arr_17 [i_0] [i_0] [i_0]))))))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_2 + 2] [i_2 + 3] [i_2 + 3]), (arr_2 [i_2 - 2] [i_2 - 1] [i_2 + 1])))) ? (((/* implicit */int) max((arr_2 [i_2 - 2] [i_2 - 1] [i_2 + 1]), (arr_2 [i_2 - 1] [i_2 - 2] [i_2 + 1])))) : (((/* implicit */int) arr_2 [i_2 + 3] [i_2 + 3] [i_2 + 2]))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (short i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        for (short i_9 = 2; i_9 < 21; i_9 += 2) 
                        {
                            {
                                arr_26 [i_0] [i_1] [4LL] [i_9 + 1] = ((/* implicit */short) arr_25 [i_9] [i_0] [i_0] [i_0] [i_0]);
                                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_8] [i_9 + 1] [i_9 - 2] [i_9 + 1] [i_9 + 1] [i_9 - 1])) ? (((/* implicit */int) arr_10 [i_7] [i_9 + 1] [(short)10] [i_9] [i_9] [i_9 - 2])) : (arr_15 [i_9 - 2] [i_9 - 2] [i_9 + 1]))))));
                                arr_27 [i_0] [i_8] [i_8] [i_7] [(signed char)4] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_9 - 2] [i_9 + 1] [i_9 - 1])) ? (((/* implicit */int) arr_2 [i_9 + 1] [i_9 + 1] [i_9 - 1])) : (((/* implicit */int) arr_2 [i_9 - 1] [i_9 - 2] [i_9 - 1]))));
                                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (+(arr_25 [i_0] [i_1] [i_1] [9] [i_9]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 3; i_10 < 19; i_10 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_0] [i_10 - 2] [i_10 - 1] [(_Bool)1]))));
                        /* LoopSeq 1 */
                        for (long long int i_11 = 0; i_11 < 22; i_11 += 2) 
                        {
                            arr_33 [i_0] [i_0] [i_0] [i_1] [(_Bool)1] [i_10] [i_11] = ((/* implicit */signed char) (~(arr_25 [i_10 - 2] [i_10 - 2] [i_7] [i_11] [i_7])));
                            arr_34 [i_0] [i_1] [i_7] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_11 [i_10] [i_10] [i_10 - 2] [(short)11] [i_10 + 1] [i_10 - 2] [(short)11]) ? (((/* implicit */int) arr_11 [i_11] [i_11] [i_11] [i_10 + 1] [i_10 + 1] [i_10 - 3] [i_1])) : (((/* implicit */int) arr_11 [i_10] [i_11] [i_10 - 1] [i_10] [i_10 - 2] [i_10 - 1] [i_1]))));
                        }
                        var_26 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0] [(short)12] [i_7] [12] [i_10] [i_10 + 2] [i_10 - 3]))));
                    }
                }
            }
        } 
    } 
    var_27 = (!(((/* implicit */_Bool) var_1)));
}
