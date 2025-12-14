/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138193
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
    var_17 = ((/* implicit */int) ((signed char) -2142978866));
    var_18 = ((/* implicit */long long int) var_12);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    var_19 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_4 [i_0] [i_0])) : (-3944822925540913644LL))));
                    arr_9 [19LL] [i_0] [i_2] = ((/* implicit */short) var_3);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 3; i_3 < 17; i_3 += 4) 
                    {
                        arr_12 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_11 [i_3 - 3] [i_3 - 3] [i_3 - 3]))));
                        arr_13 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) var_7))));
                        arr_14 [i_0] [i_0] [i_3 - 1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_0]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            arr_18 [i_0] [i_0] [i_4] [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) (unsigned char)74);
                            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) 2645693611U))));
                            var_21 = ((var_5) != (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_3 - 3] [i_0] [i_0]))));
                        }
                        arr_19 [i_0] [i_0] [i_2] [8ULL] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_7 [i_3] [i_0] [i_0] [(_Bool)1])) ? (((/* implicit */long long int) 2947061647U)) : (arr_10 [i_3] [i_2] [i_0] [i_0]))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 1; i_5 < 20; i_5 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 2) 
                        {
                            arr_26 [i_0] [i_1] [i_2] [i_0] [i_6] = ((/* implicit */unsigned int) (unsigned short)34700);
                            var_22 = ((/* implicit */unsigned long long int) ((((563315374U) / (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) - (((/* implicit */unsigned int) ((/* implicit */int) (short)27151)))));
                            arr_27 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */unsigned char) (-(arr_17 [i_5] [i_6] [i_6 + 4] [i_6 + 4] [i_6 - 1] [i_6])));
                        }
                        for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            arr_30 [i_5] [i_0] [i_1] = ((/* implicit */unsigned int) ((unsigned short) arr_24 [i_5 - 1] [i_5] [12] [i_5 + 1] [i_5] [i_5 - 1]));
                            arr_31 [i_0] [11LL] [i_2] [i_7] [i_0] = (~(((/* implicit */int) arr_7 [i_2] [i_0] [i_5 + 1] [i_7])));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)27497))))) ? (arr_15 [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1] [i_5 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0)))))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [i_5] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7949))) : (arr_3 [i_0])))) ? (((/* implicit */int) (unsigned char)226)) : (((((/* implicit */int) arr_7 [i_0] [i_0] [i_5 + 1] [i_7])) ^ (((/* implicit */int) var_0))))));
                            arr_32 [i_0] [i_0] [i_1] [i_0] [i_0] [i_7] [i_7] = (-(((/* implicit */int) (short)-27512)));
                        }
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_5 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (arr_24 [i_5 + 1] [i_1] [i_2] [i_1] [i_5 + 1] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27495)))));
                    }
                    for (short i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        arr_38 [i_8] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!((_Bool)1)))) + (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned char)234))))));
                        arr_39 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) max(((short)27497), (((/* implicit */short) ((((/* implicit */unsigned long long int) 242765368U)) != (var_11))))))), ((+(((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_8]))))))));
                    }
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_25 = ((/* implicit */unsigned char) ((((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_16)))) >= (arr_17 [i_1] [i_1] [i_1] [9LL] [i_0] [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_22 [i_9] [i_1] [i_0] [i_0])));
                    arr_43 [i_0] [i_0] [i_0] = (-(((int) ((_Bool) var_13))));
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_48 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_11 [i_1] [i_9] [i_10]);
                        arr_49 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)13] = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned short) ((int) -3730610841146491512LL))));
                    }
                }
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 21; i_11 += 1) 
                {
                    var_26 = ((((/* implicit */int) (unsigned short)31323)) / (((((/* implicit */int) (unsigned char)215)) * (((/* implicit */int) (_Bool)1)))));
                    arr_52 [i_0] [i_1] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) (short)-27496)) / (-810790814)));
                    arr_53 [i_0] [i_0] [i_0] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_1] [i_1] [i_11] [i_11] [i_1])))))));
                }
            }
        } 
    } 
}
