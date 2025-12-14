/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103201
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)27469)) ^ (((/* implicit */int) arr_11 [i_0] [i_1] [i_1 - 1] [i_2] [i_3] [i_3] [i_4 - 1]))))) & (var_2)));
                                var_18 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [(short)11] [i_0] [i_1] [i_2] [i_3] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_4 - 1] [i_2 - 1])) <= (((/* implicit */int) var_14)))))) : (((unsigned long long int) -1035048182))));
                                var_19 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((-1035048182) + (2147483647))) << (((var_13) - (1292892974U)))))), (var_8))) ^ (min((((/* implicit */unsigned long long int) (unsigned char)236)), (arr_2 [i_0] [i_1 - 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_5] [i_2 - 1] [i_6] = ((arr_18 [i_0] [i_1] [i_5] [i_5] [i_6]) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_15 [i_0] [i_0] [i_2] [i_5] [i_6] [i_1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_2 - 1] [i_5] [6U] [i_6])) <= (((/* implicit */int) (signed char)83)))))) : ((+(arr_0 [i_1])))))));
                                arr_20 [i_0] [i_1] [i_2] [i_5] [i_5] = ((/* implicit */unsigned short) var_6);
                                arr_21 [(unsigned short)0] [i_1] [(unsigned short)0] [i_5] [i_5] [(short)10] [i_6] |= ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))))) - (arr_18 [i_0] [i_1] [(unsigned char)4] [i_5] [i_6])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        for (short i_8 = 0; i_8 < 25; i_8 += 4) 
        {
            for (unsigned short i_9 = 4; i_9 < 22; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        for (unsigned int i_11 = 2; i_11 < 24; i_11 += 4) 
                        {
                            {
                                arr_35 [i_11] [i_10] [i_10] [i_7] [i_7] [i_8] [i_7] = var_15;
                                var_20 = ((/* implicit */unsigned int) var_15);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 25; i_12 += 4) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 25; i_13 += 4) 
                        {
                            {
                                arr_41 [i_7] [i_8] [i_7] [i_12] [i_7] [i_13] = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_8] [i_12] [i_7]))) % (((((/* implicit */_Bool) 2071108429)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236))) : (920775926U)))))) ? (((1311963629) ^ (-1311963630))) : (((((/* implicit */_Bool) ((-1311963613) / (((/* implicit */int) (short)27501))))) ? (((/* implicit */int) var_14)) : (((arr_24 [i_7]) & (((/* implicit */int) (unsigned short)13812)))))));
                                var_21 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned int) arr_37 [i_7] [i_8] [i_9 - 2] [i_9] [(signed char)7] [i_13]))))) ? (((/* implicit */int) ((unsigned short) arr_27 [i_9 - 3] [i_9 + 3] [i_9 - 2]))) : (((((/* implicit */_Bool) -6477903405497029918LL)) ? (((/* implicit */int) (short)-31319)) : (((/* implicit */int) (unsigned short)35823))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        for (int i_15 = 0; i_15 < 25; i_15 += 4) 
                        {
                            {
                                arr_46 [i_7] [17U] [12] [i_8] [i_7] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 3753125499U)) ? (-1035048181) : (((/* implicit */int) (short)-27450)))), (((((/* implicit */int) (unsigned char)31)) + (((/* implicit */int) var_16))))))), (min((((/* implicit */unsigned long long int) arr_31 [i_9 - 2] [i_7] [i_9] [i_7] [i_7])), (var_4)))));
                                arr_47 [i_8] [i_7] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_9 - 2] [i_9 + 1] [i_14] [i_15] [i_15] [i_14])) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) arr_34 [i_7] [i_8] [i_9 + 2] [i_9 + 2] [i_7])) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (unsigned short)65291))))))) ? (3903535129U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) (unsigned short)11651)) > (((/* implicit */int) (short)-1))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_16 = 3; i_16 < 24; i_16 += 3) 
                    {
                        for (int i_17 = 0; i_17 < 25; i_17 += 3) 
                        {
                            {
                                arr_52 [3] [i_16 - 2] [i_7] = ((/* implicit */short) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3174))) | (((((/* implicit */unsigned long long int) 0U)) | (9242259562555452902ULL))))));
                                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_25 [i_8] [i_16 - 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_18 = 2; i_18 < 18; i_18 += 4) 
    {
        for (signed char i_19 = 2; i_19 < 18; i_19 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_20 = 0; i_20 < 20; i_20 += 3) 
                {
                    for (unsigned short i_21 = 3; i_21 < 19; i_21 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_18] [i_18 + 2] [i_18 + 2] [i_18 - 1])) ? (1035048181) : (var_15))))));
                            arr_63 [i_18 - 2] = ((/* implicit */_Bool) (((-(max((arr_38 [i_18] [i_18] [i_19] [i_19] [i_21 - 2]), (var_4))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-27563)) > (((/* implicit */int) (unsigned short)57818))))))));
                            var_24 = ((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_53 [i_18])))))))) != (((((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_18] [i_19] [i_20] [i_20] [i_21] [i_21 - 3]))))) / (((/* implicit */long long int) ((/* implicit */int) arr_54 [(_Bool)1] [i_20])))))));
                            arr_64 [i_18] [i_19 + 2] [i_19 + 2] [i_21] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)54577))))) - (arr_53 [i_21 + 1])))), (min((((/* implicit */unsigned long long int) arr_58 [i_18 - 2] [(short)16] [i_20])), (arr_56 [i_19 - 2] [i_19 + 1] [i_19 + 1])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 3; i_22 < 18; i_22 += 3) 
                {
                    for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                    {
                        {
                            arr_69 [i_18] [(unsigned short)17] [i_22] [i_23] |= ((/* implicit */int) ((279275953455104ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 440608854)) ? (((/* implicit */int) (short)-27470)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-119)) < (var_11)))))))));
                            arr_70 [i_19] [i_19] [i_22 - 1] [i_19] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */int) arr_22 [i_18])) < (((/* implicit */int) (unsigned short)7718))))) : (((/* implicit */int) ((((/* implicit */int) var_16)) != (((/* implicit */int) arr_30 [i_19] [i_19 + 1] [(signed char)18] [(unsigned char)16])))))))));
                            var_25 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((2428581874U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-27469)))))), (((unsigned long long int) (unsigned short)65528))))) ? ((~(max((((/* implicit */unsigned long long int) 3903535129U)), (18446464797756096511ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_19] [i_18] [i_22] [i_23 + 1]))));
                            var_26 = ((/* implicit */signed char) arr_38 [i_18 + 2] [(signed char)22] [i_19] [i_18] [i_23 + 1]);
                        }
                    } 
                } 
            }
        } 
    } 
}
