/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105374
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
    var_11 = ((/* implicit */signed char) (((+(max((var_0), (((/* implicit */int) var_3)))))) + (((/* implicit */int) (signed char)-110))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */int) ((_Bool) arr_3 [i_0 - 1] [i_0 + 2]));
                    arr_9 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) var_7);
                    arr_10 [i_0 + 2] [0U] [i_2] [i_2] = arr_5 [2] [(unsigned char)4] [i_2] [(unsigned char)4];
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 20; i_3 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                    {
                        arr_18 [i_0] [5LL] [5LL] [18ULL] [i_4] [i_4] = ((/* implicit */signed char) (((_Bool)0) ? (7LL) : (((/* implicit */long long int) 31U))));
                        arr_19 [(short)6] [i_0] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0 + 2] [i_3 - 1]))) % (arr_11 [i_3 + 1] [i_1] [i_0 - 1] [i_4])));
                        arr_20 [(_Bool)1] [i_1] [(signed char)4] = ((/* implicit */_Bool) arr_5 [i_3 + 1] [i_3 + 1] [i_0 + 2] [i_0 + 2]);
                        arr_21 [i_0 - 1] [i_0 - 1] [i_0] [i_4] [0LL] [3U] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (unsigned char)107))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        arr_24 [i_3] [10ULL] = ((/* implicit */signed char) ((arr_16 [i_0] [i_0] [i_0] [i_0 - 1]) << (((arr_16 [i_0] [i_0] [i_0] [i_0 + 2]) - (1342114853U)))));
                        arr_25 [i_0 - 1] [i_0 - 1] [(unsigned char)0] [i_3] [i_5] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_12 [i_0 + 2] [i_3 - 2] [i_5])))) ? (((/* implicit */unsigned int) var_0)) : (arr_7 [(unsigned char)5] [i_1] [i_1] [(unsigned char)5])));
                    }
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        arr_28 [i_6] [i_1] [i_3] = ((/* implicit */long long int) (~(arr_5 [i_0] [i_3] [i_0] [i_0])));
                        arr_29 [(unsigned char)18] = ((/* implicit */unsigned char) arr_15 [i_0] [(signed char)1] [i_3] [i_0] [i_0] [(signed char)1]);
                        arr_30 [i_0] [(unsigned short)9] [2LL] = ((/* implicit */signed char) ((arr_3 [i_0 - 1] [i_0 + 2]) / (arr_3 [i_0 - 1] [11LL])));
                        arr_31 [i_0] [i_1] [i_3] [(unsigned char)13] [(_Bool)1] = ((/* implicit */int) var_3);
                        arr_32 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (+(arr_12 [i_0 + 2] [i_0 - 1] [i_0 + 2])));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 3; i_7 < 20; i_7 += 1) 
                    {
                        arr_36 [i_0] [19ULL] [19ULL] [(unsigned char)7] [i_7] = arr_7 [i_0 + 2] [(unsigned short)3] [(_Bool)1] [i_0];
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_41 [i_0 + 2] [i_0 + 1] [i_0] [i_0 + 2] [i_0 + 2] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) var_2));
                            arr_42 [8U] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_27 [i_3 - 2] [(signed char)11] [i_7] [i_7]))));
                            arr_43 [i_0 - 1] [i_8] [i_3] [i_3] [i_8] [(unsigned char)4] [i_7] = ((/* implicit */unsigned long long int) arr_26 [i_0] [i_1] [i_1] [i_3 + 1] [i_7] [i_8]);
                            arr_44 [i_0 + 2] [i_0] [16U] = ((/* implicit */signed char) var_4);
                        }
                        for (signed char i_9 = 2; i_9 < 20; i_9 += 1) 
                        {
                            arr_47 [i_0 + 1] [i_1] [i_1] [i_3 - 1] [(unsigned char)6] [i_7] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65510)) ? (arr_16 [i_7 - 3] [(unsigned char)16] [i_0 + 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_33 [(short)19] [i_1] [i_3] [i_1] [i_9]))))));
                            arr_48 [i_7 - 2] [i_7 - 2] [i_3] [i_9] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((var_4) & (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) | (((/* implicit */unsigned int) (~(((/* implicit */int) arr_22 [i_9] [i_7 + 1] [i_3] [i_1] [i_0 - 1])))))));
                            arr_49 [i_9] [i_9] [i_3] [i_9] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_9 + 1]))));
                            arr_50 [i_0 + 1] [i_0] [i_0 + 2] [4U] [i_0 + 2] [i_7 + 1] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_9))));
                            arr_51 [i_0] [i_1] [i_3 + 1] [2U] [i_9] = ((/* implicit */signed char) (-(((((/* implicit */int) (signed char)31)) - (((/* implicit */int) (_Bool)0))))));
                        }
                        for (unsigned long long int i_10 = 1; i_10 < 18; i_10 += 3) 
                        {
                            arr_54 [i_10] [i_0 + 1] [i_0 + 1] [i_3 - 2] [i_3 - 2] [i_10 + 2] = ((/* implicit */_Bool) (-(((/* implicit */int) var_6))));
                            arr_55 [i_10] [(_Bool)1] [i_10] [i_1] [i_0] = ((((/* implicit */_Bool) (signed char)-62)) && (((/* implicit */_Bool) 2099340636U)));
                            arr_56 [i_10 + 1] [(unsigned short)0] [i_7 + 1] [(signed char)20] [i_3 - 1] [(unsigned short)0] [i_0 - 1] = ((/* implicit */_Bool) ((signed char) ((unsigned short) arr_40 [i_0])));
                        }
                    }
                    for (unsigned short i_11 = 4; i_11 < 17; i_11 += 4) 
                    {
                        arr_61 [i_11] [i_11] [i_3] [i_1] [(unsigned short)0] [i_0] = ((/* implicit */unsigned short) 710610017018438011LL);
                        arr_62 [i_1] [i_11] [i_11] [i_3 - 1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1805000282U)) ? (7814150062460568503ULL) : (((/* implicit */unsigned long long int) -888160445))));
                        arr_63 [i_0] [i_0] [i_3 + 1] [i_11] = ((/* implicit */signed char) arr_4 [i_1] [i_1] [i_11]);
                    }
                    /* LoopNest 2 */
                    for (long long int i_12 = 1; i_12 < 17; i_12 += 2) 
                    {
                        for (signed char i_13 = 0; i_13 < 21; i_13 += 3) 
                        {
                            {
                                arr_69 [i_13] [i_12 - 1] [(unsigned short)5] [i_1] [i_1] [(signed char)1] [i_0 + 1] = ((/* implicit */unsigned short) var_3);
                                arr_70 [i_13] [i_13] [i_12 + 2] [10U] [14U] [i_1] [i_0 + 1] = var_2;
                                arr_71 [i_13] [i_3] [i_3] [i_3] [i_1] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [(short)11] [i_1] [i_3] [i_12] [i_12] [i_12] [i_13])) ? (((/* implicit */int) arr_33 [i_12 + 1] [i_3 + 1] [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) arr_60 [i_0] [i_1] [i_1] [(unsigned char)4]))));
                                arr_72 [i_13] [i_12] [(_Bool)0] [i_1] [(_Bool)0] = ((/* implicit */signed char) ((arr_13 [i_13] [i_13] [i_3 - 1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3 + 1] [i_12 + 2] [i_0 + 1])))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_14 = 1; i_14 < 20; i_14 += 4) 
                {
                    arr_75 [9U] [i_14] [i_14 + 1] [i_0] = ((/* implicit */unsigned char) arr_66 [i_0] [i_1] [i_14 - 1] [i_1] [(short)8]);
                    arr_76 [i_0 - 1] [i_1] [i_1] = ((/* implicit */unsigned int) var_9);
                }
                arr_77 [20U] [i_0 + 2] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_16 [i_0 + 2] [i_0] [(unsigned char)6] [i_0]), (arr_16 [i_0 - 1] [i_1] [i_1] [i_1]))))));
                arr_78 [i_1] [i_1] [i_0 + 2] = ((/* implicit */signed char) var_7);
            }
        } 
    } 
}
