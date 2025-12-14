/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105560
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
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */short) arr_2 [i_1] [i_1] [i_3]);
                            arr_12 [i_0] [i_1 + 1] [i_2] [i_1] = ((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_1]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 19; i_5 += 2) 
                    {
                        {
                            arr_19 [i_1] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((int) ((_Bool) arr_2 [i_1] [i_4] [5])));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned short i_6 = 3; i_6 < 20; i_6 += 2) 
                            {
                                var_15 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (arr_10 [i_0] [i_6 + 1] [i_1] [i_4 + 1]))) & (((/* implicit */long long int) arr_4 [i_1 - 1] [i_1]))));
                                arr_22 [i_0] [(unsigned short)18] [i_5] [i_0] [(unsigned short)18] [i_6] &= ((((/* implicit */_Bool) arr_5 [i_5] [i_0])) ? (arr_5 [i_5] [14]) : (arr_5 [i_5] [i_0]));
                                arr_23 [i_0] [i_0] [i_0] [i_1] = ((unsigned short) ((((/* implicit */_Bool) 2839034559581857750ULL)) && (arr_3 [i_0] [i_0] [i_4 + 1])));
                            }
                            arr_24 [i_5] [i_1 + 2] [i_5] [i_5] [i_1 - 1] [i_1 + 2] &= ((int) arr_8 [i_0] [i_1] [(unsigned short)6] [i_5]);
                            arr_25 [(_Bool)1] [i_5] [i_4] &= ((/* implicit */unsigned long long int) arr_13 [i_0] [i_1 + 2] [i_4] [i_5]);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_7 = 2; i_7 < 19; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 3; i_8 < 18; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_16 [i_7 - 2] [i_1])) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_7])) > (((/* implicit */int) (unsigned short)65535))))))) : (((((/* implicit */_Bool) arr_32 [i_1 + 1] [i_1 + 2] [i_1] [i_7 + 1] [i_8 + 2] [i_8 + 3])) ? (arr_32 [i_1 - 1] [i_1 + 1] [i_1] [i_7 - 2] [i_8 + 2] [i_8 - 1]) : (((/* implicit */int) (_Bool)1))))));
                                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((long long int) arr_3 [i_0] [i_0] [i_0])))));
                                arr_34 [i_0] [(short)20] [(_Bool)1] [i_1 + 2] [i_1] [i_8] [i_9] = ((((/* implicit */int) arr_8 [i_1] [i_8 - 3] [i_1] [i_1])) / ((+(arr_6 [i_0] [i_1]))));
                                var_18 += ((/* implicit */int) ((unsigned char) arr_21 [i_0] [i_1] [i_7 + 2] [i_7] [i_8] [i_8]));
                            }
                        } 
                    } 
                } 
                var_19 &= ((/* implicit */unsigned short) ((_Bool) ((arr_15 [i_1 + 2] [9ULL] [i_1 + 1]) == (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1])) || (((/* implicit */_Bool) var_4))))))));
                var_20 += ((/* implicit */int) ((((/* implicit */unsigned long long int) (~((((_Bool)1) ? (arr_11 [i_0] [i_1] [i_1] [i_1 + 2] [(_Bool)1]) : (((/* implicit */int) arr_31 [12U] [(unsigned char)4] [i_0]))))))) == (arr_0 [i_0] [i_1])));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((var_3) ? ((+(((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20310))) : (17994026095873852473ULL))))) : (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))))))));
}
