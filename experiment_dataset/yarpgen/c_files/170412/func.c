/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170412
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [12ULL] [3U] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) arr_0 [9ULL])) : (((/* implicit */int) arr_0 [(_Bool)0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_19)) & (var_8)))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (var_16))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (short)15360)) ? (arr_3 [i_0]) : (arr_1 [i_1]))))), (arr_7 [i_0] [i_0])));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            arr_15 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0]))) : (3053186782970525997ULL)));
                            arr_16 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (signed char)-77)) : (((/* implicit */int) (signed char)63))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            var_20 += ((/* implicit */long long int) var_12);
                            arr_20 [i_1] = ((/* implicit */_Bool) (~(arr_1 [i_3])));
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2]))));
                        }
                        /* LoopSeq 2 */
                        for (short i_6 = 2; i_6 < 23; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_2))));
                            arr_23 [i_6] [i_1] [i_2] [(signed char)21] [i_1] [(signed char)21] = ((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) - (((/* implicit */int) (signed char)11))));
                            var_23 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_17 [i_0] [0U] [i_6 - 1] [i_6 - 1] [i_0] [i_2] [i_2])))) >= (((((/* implicit */int) arr_17 [i_0] [i_6] [i_6 + 1] [i_0] [i_6] [i_2] [i_6])) - (((/* implicit */int) arr_17 [i_0] [i_0] [i_6 - 2] [i_1] [i_0] [i_3] [i_1]))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            arr_27 [i_0] [i_1] [i_1] [i_2] [i_3] [i_2] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_22 [i_0] [i_0] [i_2] [i_3] [i_7] [i_1] [i_0])) : (((/* implicit */int) max((arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_22 [i_7] [i_3] [i_3] [i_3] [i_2] [(short)23] [i_0]))))));
                            var_24 = ((/* implicit */_Bool) (unsigned char)200);
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_25 += ((((((/* implicit */int) arr_7 [i_2] [i_8])) != (((/* implicit */int) arr_19 [i_8] [i_2] [i_2] [i_1] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2]))) : (arr_1 [i_8]));
                        var_26 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (var_11) : (((/* implicit */int) arr_18 [i_8] [i_8] [i_8] [i_1] [i_2])))));
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) arr_21 [i_1] [i_2]))));
                    }
                    for (signed char i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        arr_32 [i_0] [i_1] [i_2] [i_9] = ((/* implicit */unsigned short) (-(max((6952461122523860217ULL), (((/* implicit */unsigned long long int) (signed char)76))))));
                        var_28 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)76)) / (((/* implicit */int) var_18))))), (arr_2 [i_2])));
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (signed char)76))));
                    }
                }
            }
        } 
    } 
    var_30 ^= ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)24)))) - (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_18))))))) ? (max((var_15), (0))) : (((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_0))))) ? (min((((/* implicit */int) (unsigned char)188)), (-1148553562))) : (((/* implicit */int) ((((/* implicit */int) (signed char)32)) != (var_15)))))));
    var_31 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)63)), (((((/* implicit */int) (_Bool)1)) - (((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (unsigned char)149)) : (var_1)))))));
}
