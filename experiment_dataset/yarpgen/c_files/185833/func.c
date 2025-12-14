/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185833
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
    var_20 ^= ((/* implicit */short) (!(((/* implicit */_Bool) var_19))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((2199022731264ULL), (9223231299366420480ULL)))) || (max(((!((_Bool)1))), ((!(((/* implicit */_Bool) arr_1 [14ULL] [i_1]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((/* implicit */int) (!((_Bool)1)))) << (((((/* implicit */int) max((arr_10 [i_3 + 1] [i_0 + 1]), (arr_10 [i_3 + 2] [i_0 + 1])))) + (48)))));
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) arr_1 [i_0 + 1] [i_0]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) (~(arr_12 [i_0 + 1] [i_1] [i_2] [i_5] [i_0] [i_0] [i_2])));
                        arr_18 [i_5] [i_2] [i_2] [i_0 + 1] = ((/* implicit */unsigned char) ((signed char) arr_6 [2U] [i_0 + 1] [i_2]));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        arr_21 [i_2] [i_2] = ((/* implicit */short) (+(((/* implicit */int) arr_5 [i_0] [i_0]))));
                        var_25 = ((/* implicit */short) max((max((arr_15 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_2]), (arr_15 [i_0 + 1] [14ULL] [i_0 + 1] [i_0 + 1] [i_2]))), (arr_15 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_2])));
                        var_26 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_0] [i_0 + 1] [i_0] [i_1])) & (((/* implicit */int) (short)32767))))) == (max((((/* implicit */unsigned int) arr_8 [i_0 + 1])), (arr_1 [i_0 + 1] [i_0 + 1])))));
                        arr_22 [i_0] [i_2] [i_6] = ((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [i_0] [i_0]);
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        arr_26 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((short) arr_2 [i_0 + 1]));
                        var_27 = ((/* implicit */unsigned long long int) (-((-(11U)))));
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_2] [i_1] [i_2] [i_1])) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) arr_5 [i_0 + 1] [i_7 - 1]))));
                    }
                    arr_27 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_2] [i_1] [i_2] [i_2]))))) && (((/* implicit */_Bool) arr_16 [i_2] [i_1] [i_1] [(short)13]))));
                    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (-(((((/* implicit */_Bool) arr_11 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1]))) : (11U))))))));
                }
                for (short i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_13 [(short)0] [i_0] [i_0 + 1] [1U] [i_8]))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 4; i_9 < 15; i_9 += 2) 
                    {
                        for (short i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */_Bool) arr_11 [i_1]);
                                var_32 = ((/* implicit */short) ((10U) * (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_11 = 1; i_11 < 15; i_11 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 2; i_12 < 16; i_12 += 2) 
                    {
                        for (short i_13 = 0; i_13 < 17; i_13 += 2) 
                        {
                            {
                                var_33 ^= ((/* implicit */signed char) arr_32 [i_0] [i_0] [i_0] [i_0]);
                                arr_44 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_7 [i_13] [i_12] [i_11] [i_1]);
                                var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) arr_11 [i_1]))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned char) arr_35 [i_0] [i_0] [(signed char)16] [i_1] [i_1] [i_11 + 2] [(signed char)16]);
                    /* LoopNest 2 */
                    for (short i_14 = 2; i_14 < 16; i_14 += 2) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 17; i_15 += 2) 
                        {
                            {
                                arr_51 [(short)7] [i_11 + 1] [i_11] [i_11] = ((/* implicit */unsigned long long int) arr_11 [i_1]);
                                arr_52 [i_0 + 1] [i_0 + 1] [i_0] [(short)0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_46 [i_15] [(_Bool)1] [i_11 - 1] [i_0])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_14 - 1] [i_1] [i_11] [i_14 - 2] [i_15]))))) : (max(((~(var_4))), (((/* implicit */unsigned long long int) arr_12 [i_0 + 1] [i_0] [i_0] [i_11 + 1] [i_14] [i_14 - 1] [i_1]))))));
                            }
                        } 
                    } 
                }
                var_36 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_42 [(_Bool)1] [i_1]))) <= (((/* implicit */int) ((((/* implicit */int) arr_15 [i_1] [i_1] [i_0 + 1] [i_0] [i_1])) >= (((/* implicit */int) arr_15 [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1] [i_1])))))));
                var_37 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_1] [i_1]))));
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned char) 0ULL);
}
