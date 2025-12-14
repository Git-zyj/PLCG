/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109318
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)56)), ((unsigned char)160))))) - (((4097929305467523984LL) / (arr_0 [i_1 - 1])))))) ? (((((/* implicit */long long int) arr_4 [i_0] [i_1 - 1])) / (var_5))) : (arr_3 [i_0]))))));
                arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_4 [6LL] [i_1]))) ? (((/* implicit */long long int) ((2488129677U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_1 + 2])))))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((((/* implicit */_Bool) (signed char)0)) ? (-5836265755112952696LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-21974)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 4) 
                {
                    for (long long int i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned char) min(((+(((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) (signed char)54)) : (((/* implicit */int) (unsigned char)245)))))), (((/* implicit */int) arr_9 [i_0] [i_1] [3U] [i_1 + 2] [(_Bool)1]))));
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                            {
                                var_13 = ((/* implicit */long long int) (unsigned short)4062);
                                var_14 = ((/* implicit */unsigned char) ((((((long long int) arr_2 [i_0] [i_1 - 1] [i_0])) + (9223372036854775807LL))) >> (((((/* implicit */int) ((unsigned char) -265666726))) - (75)))));
                            }
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_1 [i_1 - 1])))) | (((long long int) var_2))))) ? (max((min((7463210882560730904LL), (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */long long int) (signed char)-82)))) : (((/* implicit */long long int) 33554424U)))))));
                            arr_14 [i_0] [5LL] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 2] [i_3 - 2])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29525))))));
                            arr_15 [i_3 + 1] [i_2] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((int) var_4))))) * ((+(min((var_6), (((/* implicit */long long int) arr_12 [i_0] [4U] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_0] [i_1]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            {
                arr_22 [i_6] [i_6] [17] = ((/* implicit */unsigned long long int) arr_16 [i_5] [i_6]);
                /* LoopNest 3 */
                for (unsigned int i_7 = 3; i_7 < 20; i_7 += 4) 
                {
                    for (short i_8 = 2; i_8 < 18; i_8 += 2) 
                    {
                        for (int i_9 = 4; i_9 < 20; i_9 += 4) 
                        {
                            {
                                var_16 = var_6;
                                arr_32 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) var_5);
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_29 [i_5] [(short)0] [(short)0] [i_5] [i_6])) ? (min(((~(arr_19 [i_5] [i_6]))), (((/* implicit */long long int) ((var_2) >> (((((/* implicit */int) (unsigned char)90)) - (75)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 265666731)) ? (((((/* implicit */int) arr_31 [i_6] [i_6] [i_6] [i_6] [i_6] [i_5])) << (((-7463210882560730890LL) + (7463210882560730899LL))))) : (((/* implicit */int) (short)19696)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) || (((((((/* implicit */_Bool) -7128930274613848615LL)) && (((/* implicit */_Bool) (signed char)-72)))) && (((((/* implicit */_Bool) (unsigned char)166)) || (((/* implicit */_Bool) -8181385676127805045LL))))))));
    var_19 = ((/* implicit */unsigned char) var_2);
}
