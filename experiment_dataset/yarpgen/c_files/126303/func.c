/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126303
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((int) (unsigned char)98));
                var_14 = (-((-(arr_0 [i_0] [i_1]))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_0] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_1 [i_2] [i_0]), (arr_0 [i_3] [i_0])))) ? (var_3) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_11 [i_3] [i_1])) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) arr_10 [11U] [i_0] [i_1] [i_2] [i_3])))), (((/* implicit */int) max((var_1), (((/* implicit */unsigned char) arr_10 [i_2] [i_3] [i_3] [i_3] [i_1]))))))))));
                            arr_13 [0U] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_3 [i_2 - 1] [i_2 - 1] [i_2 + 1])), (arr_1 [i_2 - 1] [i_0])))), (max((((/* implicit */long long int) (-(((/* implicit */int) var_4))))), (var_0)))));
                            var_15 |= min(((-(arr_9 [i_0] [17U] [i_0] [i_0]))), (((/* implicit */int) (unsigned char)95)));
                            arr_14 [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */long long int) var_4);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        arr_25 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_15 [i_5 + 1] [i_7]))));
                        arr_26 [i_7] [i_7] [i_6] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_2)))) ? ((-(arr_3 [i_7] [i_7] [i_6]))) : (((/* implicit */int) ((short) arr_11 [i_5] [i_5])))));
                        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (unsigned char)98))));
                        var_17 = ((/* implicit */signed char) (+(((/* implicit */int) arr_11 [i_5 - 2] [i_5]))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        for (int i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */int) min((((((/* implicit */_Bool) max((arr_18 [i_4] [i_8]), ((unsigned char)171)))) ? (((((/* implicit */_Bool) arr_16 [i_9])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_4] [i_8] [i_6] [(signed char)0] [i_9]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)169), (var_11))))))), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4)))))))));
                                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (unsigned char)179))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        for (int i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            {
                                var_20 ^= ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)171)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)181))))))), (((long long int) max((((/* implicit */unsigned int) (unsigned char)66)), (arr_6 [i_4] [i_4] [6] [i_10])))))))));
                                var_22 ^= ((/* implicit */long long int) min((((((/* implicit */int) (unsigned char)157)) & (((/* implicit */int) (unsigned char)180)))), (((int) max((arr_6 [i_11] [i_5 - 1] [i_10] [i_10]), (((/* implicit */unsigned int) (unsigned char)75)))))));
                                arr_37 [i_4] [i_10] [i_6] [i_10] [i_4] = ((/* implicit */short) (unsigned char)198);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 11; i_13 += 2) 
                        {
                            {
                                var_23 = ((int) ((int) arr_3 [i_5] [i_5 - 1] [i_5 - 3]));
                                arr_42 [i_4] [i_4] [i_4] [i_12] [2LL] = ((/* implicit */unsigned long long int) var_11);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / ((+(((/* implicit */int) (unsigned char)179))))))) ? (((((/* implicit */_Bool) (unsigned char)74)) ? (max((((/* implicit */unsigned long long int) var_2)), (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)53)), (var_4))))))) : (((/* implicit */unsigned long long int) var_6)))))));
}
