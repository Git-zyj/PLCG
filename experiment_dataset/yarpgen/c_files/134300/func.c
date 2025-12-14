/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134300
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
    var_16 = ((/* implicit */signed char) ((int) ((short) (short)-28202)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = min(((-(((/* implicit */int) ((short) arr_1 [i_0]))))), (((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) (signed char)99))) != (max((var_8), (((/* implicit */long long int) arr_1 [i_0]))))))));
                arr_5 [i_0] [i_1] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_0 - 2] [i_0 + 1])))) * (((long long int) -1407513323)));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        arr_13 [i_0] = ((/* implicit */signed char) ((2561275846U) << (((1490770335538465007ULL) - (1490770335538464989ULL)))));
                        arr_14 [(short)2] [i_1] [i_1] [i_3] [i_3] [i_1] = arr_6 [i_3] [i_0 - 2] [i_3];
                        arr_15 [i_0] [9U] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((arr_10 [i_0 - 1] [i_0 + 3] [i_3] [i_3]) ? (((/* implicit */int) arr_6 [i_0 - 3] [i_0] [i_0])) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_11 [i_0 + 2] [i_0 + 2] [i_2] [i_3]))))));
                    }
                    arr_16 [i_0 - 2] [i_0] [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_1 [i_0]))))));
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    arr_19 [i_0] = ((/* implicit */long long int) arr_12 [i_0 - 1] [i_0] [i_0]);
                    /* LoopSeq 4 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        arr_22 [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1490770335538464996ULL))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            arr_25 [i_0] [i_0] [i_1] [i_4] [i_1] [i_5] [i_6] = ((/* implicit */unsigned short) 787274028U);
                            arr_26 [i_0] [i_1] [i_4] [i_6] = ((/* implicit */unsigned char) ((short) (signed char)-77));
                            arr_27 [i_0] = ((((((/* implicit */long long int) ((/* implicit */int) arr_11 [(_Bool)1] [i_1] [(_Bool)1] [(_Bool)1]))) ^ (var_9))) | (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 2] [i_0 - 1]))));
                            arr_28 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-100)) || (((/* implicit */_Bool) arr_7 [i_0] [i_4] [i_5] [i_0])))))) == (arr_7 [i_0] [i_0 - 2] [i_0 - 3] [i_0])));
                        }
                    }
                    for (short i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        arr_31 [i_7] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)131))) ? (6075219311749469960ULL) : (((unsigned long long int) (_Bool)1))));
                        arr_32 [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_0]))));
                        arr_33 [i_0 - 3] [8ULL] [9U] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)0))))) && (((/* implicit */_Bool) (~(var_6))))));
                        arr_34 [i_1] [i_4] [i_4] [i_7] [i_4] [i_4] = ((/* implicit */unsigned char) (short)26746);
                        /* LoopSeq 1 */
                        for (long long int i_8 = 2; i_8 < 9; i_8 += 4) 
                        {
                            arr_37 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)30)) < (((/* implicit */int) (signed char)-35))));
                            arr_38 [i_8] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64)))));
                        }
                    }
                    for (signed char i_9 = 3; i_9 < 9; i_9 += 4) 
                    {
                        arr_41 [(signed char)3] [i_0] [i_0] = ((/* implicit */signed char) ((short) arr_20 [i_0 - 3] [i_9 - 3] [i_9 - 1] [(short)3] [(short)3]));
                        /* LoopSeq 2 */
                        for (short i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            arr_46 [i_4] &= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) (short)-32508)) : (((/* implicit */int) (signed char)20))));
                            arr_47 [(short)4] [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-10)) ? (arr_20 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_9 - 2] [i_9 - 3]) : (arr_20 [i_0 + 2] [i_0 + 3] [i_0 + 2] [i_9 - 3] [i_9 + 1])));
                        }
                        for (signed char i_11 = 1; i_11 < 8; i_11 += 3) 
                        {
                            arr_51 [i_0] [i_1] [i_4] [(signed char)2] [i_11] [i_0] = ((/* implicit */unsigned char) ((arr_9 [i_11 + 2] [i_11]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1))));
                            arr_52 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_36 [i_0] [i_0 - 1] [i_0] [(short)0] [i_0])) < (arr_50 [i_0] [i_1] [i_4] [(short)6] [i_9] [i_11 + 2])))) >= (((/* implicit */int) arr_11 [i_11 + 2] [i_9 - 3] [i_9 - 2] [i_0 - 2]))));
                        }
                        /* LoopSeq 1 */
                        for (short i_12 = 1; i_12 < 9; i_12 += 1) 
                        {
                            arr_55 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))) ^ ((+(var_14)))));
                            arr_56 [i_0] = ((/* implicit */int) (short)916);
                            arr_57 [i_1] [i_4] [i_4] = ((/* implicit */int) (+(arr_43 [i_9] [i_9] [i_9 - 1] [i_9] [i_9 - 1] [i_9 - 3] [i_9 - 1])));
                        }
                    }
                    for (signed char i_13 = 2; i_13 < 8; i_13 += 3) 
                    {
                        arr_61 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) arr_17 [i_0] [i_0] [i_0] [i_13 - 1]));
                        arr_62 [i_0] [4U] [i_0] [i_13] = ((/* implicit */unsigned long long int) var_10);
                    }
                }
                for (signed char i_14 = 2; i_14 < 9; i_14 += 3) 
                {
                    arr_66 [(unsigned short)4] [i_0] [i_1] [i_14] = ((/* implicit */_Bool) ((((/* implicit */int) max((arr_58 [i_14] [i_0] [i_14] [i_14 - 2] [i_14]), (((/* implicit */short) (signed char)116))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_58 [i_14] [i_0] [i_14 + 1] [i_14 - 2] [i_14 + 1])))))));
                    /* LoopSeq 2 */
                    for (long long int i_15 = 0; i_15 < 10; i_15 += 2) 
                    {
                        arr_70 [i_15] [i_15] [i_15] [i_15] |= ((/* implicit */unsigned char) ((-2700142359557910156LL) / (((/* implicit */long long int) 2625477087U))));
                        arr_71 [i_15] [i_0] [i_0] [1U] = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) arr_6 [i_0] [i_14] [i_0])))));
                        arr_72 [i_0] [i_0] [i_15] [i_0 + 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) * (((/* implicit */int) (unsigned char)0))))) ? (1442827974U) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (_Bool)1))))))));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        arr_75 [i_0] [i_16] [3] [i_16] = ((/* implicit */_Bool) 6096834526286408251ULL);
                        arr_76 [i_0] [i_1] [i_0] [i_16] = ((/* implicit */int) (short)-10460);
                    }
                }
                for (unsigned char i_17 = 1; i_17 < 9; i_17 += 2) 
                {
                    arr_80 [i_0] [i_0] = ((/* implicit */signed char) max((((unsigned int) arr_50 [i_0] [i_17] [i_0] [i_17 - 1] [i_17 - 1] [i_17 + 1])), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-77)) | (arr_50 [i_1] [i_1] [i_17 - 1] [i_17 - 1] [i_17 + 1] [i_17 - 1]))))));
                    arr_81 [i_0] [i_1] [i_0 + 3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_2)))) ^ (min((804260950U), (((/* implicit */unsigned int) var_4))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_58 [i_0] [i_0] [i_17] [i_0 - 3] [i_17 + 1]))))) : (min((((/* implicit */unsigned long long int) var_7)), (((unsigned long long int) var_2))))));
                }
                arr_82 [i_0] [i_0] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0 - 1] [i_0] [i_0] [(signed char)1]))))) == ((+(((/* implicit */int) arr_18 [i_0 - 2] [i_0] [i_0] [i_0 + 2]))))));
                arr_83 [i_0] [(unsigned short)6] [i_0] |= (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_15)) : (-763085955))));
            }
        } 
    } 
}
