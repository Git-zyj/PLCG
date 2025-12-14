/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113154
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (952996198U) : (((/* implicit */unsigned int) var_8)))))) + (min((((/* implicit */int) var_10)), (min((1007681730), (-1007681739)))))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) -1007681745))))) << (((var_7) - (181949285)))))) || (((/* implicit */_Bool) ((unsigned int) ((var_2) > (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) arr_6 [i_2]);
                    var_14 *= ((/* implicit */short) arr_0 [i_1 + 1]);
                    arr_9 [i_0] [i_1] [i_0] [2ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_8 [i_0] [(signed char)6]), (arr_8 [i_0] [i_1])))) ? (max((((/* implicit */unsigned long long int) ((arr_6 [i_1]) || (((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)3] [i_0] [i_0]))))), (arr_5 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 3] [i_1 + 4]))))))));
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_15 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [(_Bool)1] [i_1] [i_2] [i_2] [i_0] [i_3])) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [(signed char)2] [7LL] [i_3 + 1] [i_1 + 1])))))));
                        var_16 -= ((/* implicit */unsigned short) (~((((!(arr_6 [i_1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [3U]))) / (arr_4 [i_3] [i_3])))) : (max((arr_5 [i_0]), (((/* implicit */unsigned long long int) 2814702370U))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_17 ^= ((/* implicit */short) (unsigned char)0);
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_6 [i_4]))));
                        arr_15 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((-8370515510908246841LL), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) == (((/* implicit */int) var_1)))))) : (max((((/* implicit */unsigned int) arr_10 [0LL] [i_1 + 3] [i_1] [i_1 + 3])), (arr_4 [i_0] [i_1])))))));
                    }
                    for (short i_5 = 1; i_5 < 8; i_5 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)90))));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min((9ULL), (((/* implicit */unsigned long long int) (unsigned char)8)))))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((unsigned long long int) (-(((/* implicit */int) (unsigned char)252))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [11U])))));
                            var_22 = ((/* implicit */long long int) arr_5 [i_0]);
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */short) arr_7 [i_0] [i_0] [i_0] [i_0]);
                            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_12 [i_0] [i_0] [(signed char)7] [(_Bool)1] [i_1] [i_0]), (arr_18 [i_0] [2U] [i_1] [i_5] [9LL] [i_7])))) ? (max((0U), (arr_20 [i_5] [i_1] [i_1] [i_5] [8LL] [i_5] [i_1]))) : (((/* implicit */unsigned int) arr_17 [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [3U] [i_5 + 3] [i_1] [i_5 + 3] [i_5] [i_5]))))) : (-1203251199)));
                            var_25 = ((/* implicit */unsigned int) (unsigned char)8);
                            var_26 = ((/* implicit */signed char) max((9U), (((/* implicit */unsigned int) 1007681739))));
                            var_27 *= ((/* implicit */unsigned char) (-(((unsigned int) min((9223372036854775807LL), (((/* implicit */long long int) arr_13 [i_0] [(_Bool)1] [(_Bool)1] [4U])))))));
                        }
                        for (signed char i_8 = 2; i_8 < 11; i_8 += 1) 
                        {
                            var_28 = ((/* implicit */int) ((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [8U] [i_0])) + (arr_13 [i_0] [i_0] [i_0] [(signed char)11])));
                            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) 393658847)) || (((/* implicit */_Bool) min((max((4294967256U), (((/* implicit */unsigned int) (unsigned char)231)))), (((/* implicit */unsigned int) (short)-28829)))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_9 = 2; i_9 < 10; i_9 += 4) 
                        {
                            var_30 = ((/* implicit */signed char) ((unsigned long long int) arr_24 [i_0] [i_1] [(short)1] [i_1] [i_9] [i_9 - 2]));
                            arr_27 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_1])) && (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]))) || (((/* implicit */_Bool) ((arr_22 [i_1] [i_1] [i_2] [i_2] [i_2]) / (-9194839047690852342LL))))));
                        }
                        var_31 = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_0] [i_0]);
                        var_32 = ((/* implicit */_Bool) arr_14 [2LL] [7] [7] [i_5]);
                    }
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        var_33 = ((/* implicit */_Bool) (~(-4628186667738693641LL)));
                        /* LoopSeq 3 */
                        for (long long int i_11 = 0; i_11 < 12; i_11 += 4) 
                        {
                            arr_34 [i_1] [i_1] [i_1] [i_1] [(signed char)5] = ((/* implicit */unsigned char) arr_4 [10U] [i_2]);
                            var_34 = ((/* implicit */unsigned short) (~(arr_25 [i_2] [i_2] [i_1])));
                            arr_35 [i_11] [i_11] [i_11] [i_1] [i_11] = ((/* implicit */short) ((unsigned char) ((345412195U) > (46U))));
                            var_35 += (!(((/* implicit */_Bool) ((unsigned long long int) arr_23 [6ULL] [i_10]))));
                        }
                        for (int i_12 = 1; i_12 < 10; i_12 += 2) 
                        {
                            arr_40 [i_0] [i_0] [i_0] [i_0] [i_1] [0U] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) -393658848)), (1221184690U))))));
                            arr_41 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) arr_36 [i_1 - 2] [i_1] [i_1] [i_1 + 3] [i_1 + 1])))));
                        }
                        for (int i_13 = 0; i_13 < 12; i_13 += 2) 
                        {
                            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((unsigned int) arr_6 [4])), (((/* implicit */unsigned int) max((var_7), (((/* implicit */int) (signed char)127)))))))) && (((/* implicit */_Bool) max(((short)-26632), (((/* implicit */short) (unsigned char)243)))))));
                            arr_45 [i_0] [(_Bool)1] [i_1] [i_2] [i_10] [i_13] [i_13] = ((/* implicit */short) max((((/* implicit */unsigned int) ((_Bool) ((arr_44 [i_0] [i_0] [(_Bool)1]) ? (((/* implicit */int) arr_23 [i_0] [i_1])) : (((/* implicit */int) var_3)))))), (min((((/* implicit */unsigned int) arr_23 [i_1 + 4] [i_1])), (arr_43 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1])))));
                            var_37 = ((/* implicit */_Bool) (((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_42 [i_1]))) == (arr_22 [i_1] [1LL] [i_2] [i_2] [(short)0])))))) + (((((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_2] [i_1 - 1])) | (((/* implicit */int) arr_10 [2U] [i_1] [i_2] [i_13]))))));
                            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4018068455U)))))));
                        }
                        var_39 = ((/* implicit */long long int) -393658844);
                        arr_46 [i_1] [(unsigned char)3] [i_2] [i_10] = ((/* implicit */int) ((unsigned char) 2020339080143039273ULL));
                        var_40 = ((unsigned int) (!((!(((/* implicit */_Bool) var_2))))));
                    }
                }
            } 
        } 
    }
}
