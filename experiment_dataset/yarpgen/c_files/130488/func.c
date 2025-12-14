/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130488
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
    var_16 = ((/* implicit */signed char) min((((var_0) - (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_12))))), (((/* implicit */unsigned long long int) var_15))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        arr_10 [i_2] [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)62643)) + (-1300762767)));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            arr_14 [i_2] [i_1 - 3] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) (unsigned short)2893)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_3 [i_0] [i_1])))) : (((/* implicit */int) arr_5 [i_1 - 3] [i_1 - 2] [i_1 - 2] [i_1 - 1]))));
                            var_18 = ((/* implicit */unsigned short) arr_2 [i_3] [i_2]);
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [6ULL] [i_1])) ? (((/* implicit */int) ((signed char) var_10))) : (((/* implicit */int) arr_3 [i_1 + 4] [i_1 + 4]))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            arr_18 [i_1] [i_2] [(unsigned short)9] = ((/* implicit */int) (signed char)80);
                            var_20 = ((/* implicit */int) (~(arr_8 [i_0] [(unsigned short)0] [i_2] [i_3] [i_2] [i_3])));
                            var_21 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_3 [i_0] [i_3])))) ? (((/* implicit */int) arr_13 [i_2] [i_1] [i_2] [i_3] [10ULL])) : (((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 3] [i_1 - 1] [i_1 + 2]))));
                        }
                    }
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((arr_8 [i_1 - 3] [16U] [i_1] [i_1 + 1] [16U] [i_0]) + (arr_8 [i_1 - 3] [0ULL] [i_1] [i_1 + 1] [0ULL] [i_1]))))));
                        arr_23 [i_0] [i_1 + 2] [i_1] [i_2] [i_2] [7] = ((/* implicit */unsigned short) ((arr_16 [i_2] [i_1] [i_1 + 4] [i_1] [i_1 + 3]) | (arr_16 [i_2] [i_1] [i_1] [i_1] [i_1 + 1])));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 1; i_7 < 20; i_7 += 3) 
                    {
                        for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            {
                                var_23 ^= ((/* implicit */unsigned short) arr_2 [i_7 + 2] [i_7]);
                                var_24 = ((/* implicit */signed char) arr_19 [6U] [i_1] [i_7] [i_8]);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((((/* implicit */_Bool) arr_12 [18ULL])) ? (((/* implicit */unsigned long long int) arr_27 [(unsigned short)2] [i_1 + 2] [i_1 + 4] [i_2] [(unsigned short)2])) : (arr_1 [i_1 + 4] [i_1 - 1])))));
                    var_26 = ((/* implicit */unsigned short) arr_11 [i_1] [i_1] [i_1] [i_2] [i_2] [i_1 - 2]);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 2; i_10 < 20; i_10 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_10] [12ULL] [i_10] [i_2] [12ULL] [i_1 + 4])) && (((/* implicit */_Bool) -2147483636)))))));
                                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (unsigned short)17618))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_34 [i_0] [i_0] [(signed char)8] [i_0] [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) arr_20 [i_0] [(unsigned short)4] [(unsigned short)4])) : (((((/* implicit */_Bool) 10755345407916275613ULL)) ? (var_11) : (((/* implicit */unsigned long long int) var_6))))));
        var_30 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_11 [i_0] [i_0] [i_0] [(unsigned short)18] [i_0] [i_0]) : (((/* implicit */int) arr_25 [i_0] [4U] [i_0] [i_0])))));
        var_31 = ((unsigned short) arr_20 [i_0] [16] [i_0]);
    }
}
