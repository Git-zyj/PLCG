/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114435
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
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0 - 1] [i_1] [i_0] [4ULL] = ((unsigned long long int) arr_8 [i_0] [i_1 - 1] [i_2] [i_3] [i_0 + 1]);
                            var_11 = ((/* implicit */int) (-(min((18446744073709551612ULL), (6ULL)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 1; i_4 < 20; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                            {
                                var_12 |= ((/* implicit */_Bool) min((arr_5 [i_1] [i_1] [i_1 - 1]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7)))))));
                                arr_19 [i_0] [i_1 + 2] = ((/* implicit */short) (-(((/* implicit */int) arr_5 [i_1 + 2] [i_1] [(short)19]))));
                                arr_20 [0] [4LL] [i_0] [3LL] [i_6] = ((unsigned long long int) (-((-(((/* implicit */int) arr_16 [8LL] [i_1 + 1] [8LL] [i_0] [i_4] [i_0 - 1] [i_5]))))));
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_2))));
                            }
                            for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 4) 
                            {
                                arr_23 [(short)15] [(_Bool)0] [i_4] [i_0] [i_4] = ((/* implicit */int) (-(max((arr_15 [i_0 + 1] [i_1 - 1] [i_4 + 1]), (arr_15 [(short)4] [i_1 - 1] [i_4 - 1])))));
                                arr_24 [(_Bool)1] [i_0] [i_5] [(short)10] [i_0] [i_0] = ((/* implicit */_Bool) 1ULL);
                                arr_25 [(short)8] [i_0] [(_Bool)1] [i_5] [i_5] = ((/* implicit */int) (-(min((((/* implicit */unsigned long long int) ((int) arr_0 [i_1] [i_0 - 1]))), (min((((/* implicit */unsigned long long int) arr_17 [i_0] [(unsigned char)5] [i_4] [i_4] [i_7 + 1] [15ULL])), (var_7)))))));
                            }
                            for (int i_8 = 0; i_8 < 21; i_8 += 3) 
                            {
                                arr_30 [i_0] [i_1] [i_0] = ((/* implicit */int) arr_4 [i_0]);
                                arr_31 [i_0] [i_1] [10LL] [i_1] [i_1] = (-((-(arr_26 [7ULL] [i_1 - 1] [i_5] [i_8]))));
                                var_14 = ((/* implicit */unsigned long long int) max((var_14), ((-(((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (545480930735660672ULL) : (var_4)))))))));
                            }
                            for (short i_9 = 2; i_9 < 20; i_9 += 2) 
                            {
                                arr_35 [12ULL] [(unsigned char)16] [i_9] [i_5] [8ULL] [8ULL] &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((long long int) arr_32 [i_9] [i_9]))) ? (((var_4) - (2826139021402607067ULL))) : (arr_28 [i_9 - 1] [i_9] [i_9] [i_0])))));
                                var_15 *= max(((-(((((/* implicit */_Bool) arr_27 [i_9])) ? (((/* implicit */int) arr_27 [i_9])) : (((/* implicit */int) var_3)))))), (((arr_2 [i_0 - 1]) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 + 1])))));
                                var_16 ^= ((/* implicit */short) 545480930735660675ULL);
                                arr_36 [i_0] [i_1 + 2] [9LL] [i_0] [i_9] = ((/* implicit */short) arr_4 [i_0]);
                                arr_37 [i_0] [i_0 + 1] [(unsigned char)12] [i_0] [(unsigned char)0] [i_0 + 1] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (-(var_9)))) ? (arr_3 [i_0]) : (((((/* implicit */_Bool) 13764014474255912447ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_1] [i_4] [6ULL]))) : (var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_9 + 1] [i_4 - 1] [i_4])) * (((/* implicit */int) arr_10 [i_9 + 1] [i_4 - 1] [3ULL])))))));
                            }
                            var_17 = arr_21 [i_0] [i_1 + 2] [i_4];
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (-((-(arr_0 [i_0 - 1] [i_1 + 2]))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) min((var_2), ((!(((/* implicit */_Bool) var_7))))));
    var_20 = 0ULL;
    var_21 = ((/* implicit */unsigned char) var_7);
}
