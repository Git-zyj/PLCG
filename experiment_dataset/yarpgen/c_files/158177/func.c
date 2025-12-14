/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158177
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_15 [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) max(((+(((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2]))) : (var_5))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [5] [i_1])) ? (((/* implicit */unsigned int) arr_4 [i_3])) : (106555568U)))) ? (((/* implicit */int) arr_10 [i_1] [i_2] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) min((arr_12 [i_1]), (arr_12 [i_2])))))))));
                            var_16 = ((/* implicit */unsigned char) max((((/* implicit */signed char) var_8)), (((signed char) arr_1 [i_3 - 1] [i_3 - 1]))));
                            arr_16 [i_0] [i_1] [2ULL] [i_0] [i_4] = ((unsigned short) var_3);
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 2; i_5 < 14; i_5 += 3) 
                        {
                            var_17 = ((/* implicit */signed char) (+(min((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) var_12)) : (arr_18 [(signed char)0] [i_5 - 1]))), (((((/* implicit */long long int) 1U)) / (arr_11 [i_1] [i_1] [i_2] [i_1])))))));
                            var_18 = ((/* implicit */_Bool) max(((~(arr_4 [i_3 - 1]))), (((/* implicit */int) var_4))));
                            arr_19 [i_5] [i_5] [i_5] [i_5] [i_1] = ((/* implicit */short) arr_11 [i_1] [i_2] [i_3] [i_5 + 1]);
                        }
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_12 [i_3 - 1]))) ? (max((((var_7) ? (((/* implicit */int) arr_12 [i_3])) : (((/* implicit */int) var_1)))), (((/* implicit */int) (unsigned char)10)))) : (((/* implicit */int) arr_6 [i_0] [i_0]))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 1; i_6 < 14; i_6 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) ((((((/* implicit */int) var_0)) >= (((/* implicit */int) var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_2] [i_6])) ? (4188411728U) : (((/* implicit */unsigned int) arr_4 [(_Bool)1]))))) ? (max((var_15), (((/* implicit */unsigned long long int) 4188411727U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1])))))));
                        var_21 = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) max((arr_14 [i_2] [i_6 + 2]), (arr_0 [i_0])))))));
                    }
                    for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_8 = 2; i_8 < 15; i_8 += 3) 
                        {
                            arr_27 [i_8] [(signed char)5] [i_1] [(signed char)5] [i_8] [i_1] = var_14;
                            var_22 = ((/* implicit */unsigned short) arr_21 [i_0] [i_2] [i_1] [i_8]);
                            var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4188411727U))));
                        }
                        arr_28 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */short) max((((arr_21 [i_0] [i_0] [i_1] [i_7]) | (arr_21 [i_0] [i_0] [i_1] [i_7]))), (((/* implicit */long long int) max((arr_4 [i_0]), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) >= (arr_23 [i_0] [i_0])))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            arr_32 [i_1] [(short)15] [i_2] [(_Bool)1] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_9) ? (106555565U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1] [(short)0] [i_1])))))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_6 [i_0] [(signed char)12]))));
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_6))) ? (((unsigned long long int) arr_17 [i_0] [i_0] [i_2] [i_7] [i_7])) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (signed char)55)) : (((/* implicit */int) (short)-1682))));
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((+(arr_1 [i_0] [i_7])))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned short) ((unsigned char) 4294967295U))), (((unsigned short) arr_3 [i_7])))))));
                        }
                        for (signed char i_11 = 0; i_11 < 16; i_11 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)54608)) ? (1725867761) : (((/* implicit */int) (short)8191))));
                            arr_37 [i_1] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */long long int) (_Bool)1);
                            arr_38 [4] [i_1] [i_2] [i_7] [i_1] [i_11] = ((/* implicit */short) ((signed char) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) (unsigned short)65535)) - (65509))))));
                            arr_39 [9] [i_7] [i_7] [i_1] [9] [i_1] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_4 [i_7])) ? (((/* implicit */int) var_13)) : (arr_4 [i_2]))), (((/* implicit */int) ((_Bool) arr_4 [(_Bool)1])))));
                            var_28 = ((/* implicit */short) var_4);
                        }
                        var_29 = ((/* implicit */short) ((long long int) ((((unsigned int) arr_24 [i_0] [(short)2] [(signed char)11] [i_0] [i_0] [i_0])) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_26 [i_0])) : (arr_4 [(short)4])))))));
                        var_30 = ((/* implicit */short) ((((/* implicit */long long int) ((arr_7 [i_0] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) - (min((((/* implicit */long long int) arr_9 [i_1] [i_1])), ((-(arr_21 [i_0] [i_0] [i_1] [i_7])))))));
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) var_8)))))))) ? (var_6) : (var_14)));
}
