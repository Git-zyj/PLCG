/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154395
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) arr_2 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0]))));
        arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */int) arr_1 [i_0])) : (var_1)));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            arr_8 [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (unsigned char)45))))));
            arr_9 [i_1] = ((/* implicit */unsigned int) var_3);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_12 [i_0] = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_10 [i_0] [i_2]))))));
            arr_13 [i_0] [8U] = ((/* implicit */short) (((~(659684226U))) % (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-32759)))))));
            arr_14 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)118))));
        }
        for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                arr_19 [i_0] [i_3] [i_3] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_16 [i_3]))))));
                arr_20 [(_Bool)1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-7070)) ? ((-(((/* implicit */int) arr_11 [i_0] [i_0])))) : ((-(((/* implicit */int) (unsigned char)210))))));
            }
            for (short i_5 = 1; i_5 < 10; i_5 += 3) 
            {
                arr_23 [i_0] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)211)))))) ? (var_5) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)222)))))));
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    arr_26 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) ? (arr_16 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                    arr_27 [i_0] [i_3] = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_10 [(unsigned char)4] [i_3]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 4; i_7 < 11; i_7 += 2) 
                    {
                        arr_30 [i_0] [i_0] [i_7] [i_0] [i_0] &= ((/* implicit */long long int) 8388607U);
                        arr_31 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_16 [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_5)))) : (arr_29 [i_3] [i_3] [i_5 + 2] [i_5 - 1] [i_3] [i_3] [i_5])));
                        arr_32 [i_3] [i_3] [i_5] [i_6] [i_7] = ((/* implicit */long long int) arr_18 [i_0] [i_3] [i_7 - 1] [i_5 + 2]);
                        arr_33 [i_3] [i_5] [i_5] [i_7] = ((arr_16 [i_3]) % (((/* implicit */long long int) 4286578688U)));
                        arr_34 [i_0] [i_0] [i_7] [i_5 + 2] [i_5 + 2] [i_6] [i_7 - 4] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_28 [i_3] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_10)))));
                    }
                    /* LoopSeq 3 */
                    for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        arr_38 [i_0] [(unsigned short)10] [8ULL] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [(_Bool)1] [i_3] [i_5 + 2]))) % (4080755672U)));
                        arr_39 [i_0] [i_6] [i_3] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) == (var_1))))) >= (4286578696U)));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_43 [i_0] [i_3] [i_0] [i_3] [i_0] [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                        arr_44 [i_6] [i_6] [(unsigned char)2] [i_3] [i_0] [i_6] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) -18287819)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_6] [i_0] [i_3] [i_6] [i_5 + 1] [i_6] [(unsigned char)6]))) : (arr_21 [i_6] [i_5 + 1] [i_5 + 2])));
                        arr_45 [i_9] [i_9] [i_9] [i_9] [i_3] [i_9] = ((/* implicit */_Bool) arr_25 [i_3] [i_6] [i_5] [i_6]);
                    }
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        arr_48 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) var_3);
                        arr_49 [i_3] [i_3] [i_5] [i_6] [i_6] = (!(((/* implicit */_Bool) arr_18 [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5 - 1])));
                        arr_50 [3U] [i_3] [i_5] [i_6] [i_3] = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_5 - 1]))));
                        arr_51 [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)210))));
                    }
                }
            }
            arr_52 [i_3] [i_3] = (!(((/* implicit */_Bool) 891756088U)));
        }
    }
    for (short i_11 = 1; i_11 < 9; i_11 += 4) 
    {
        arr_55 [i_11] = ((/* implicit */unsigned int) (~(min((((/* implicit */int) var_6)), ((+(((/* implicit */int) (unsigned char)110))))))));
        arr_56 [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_11 + 1] [i_11 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_9))))));
        arr_57 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(27LL)))) ? (min((arr_40 [i_11 - 1] [4U] [4U] [4U] [4U]), (((/* implicit */unsigned int) var_13)))) : ((-(var_19)))))) ? (((arr_7 [i_11 - 1]) ? (((/* implicit */int) arr_7 [i_11 + 1])) : (((/* implicit */int) arr_7 [i_11 + 1])))) : (((/* implicit */int) var_17))));
        arr_58 [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) (unsigned char)232)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [(unsigned char)10] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)161))) : (arr_54 [i_11]))))))) : ((-(((((/* implicit */_Bool) (unsigned char)174)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_3)))))));
    }
    for (unsigned long long int i_12 = 1; i_12 < 21; i_12 += 3) 
    {
        arr_61 [i_12] = ((((((var_11) == (((/* implicit */long long int) ((/* implicit */int) arr_59 [(_Bool)1]))))) ? (min((3956460362U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((var_15) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13))))))) + (((/* implicit */unsigned int) max((-400404381), (((/* implicit */int) (short)-7087))))));
        arr_62 [i_12] [i_12] = ((/* implicit */unsigned long long int) arr_60 [i_12 - 1] [i_12 - 1]);
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        arr_67 [i_13] [i_13] = ((/* implicit */_Bool) var_3);
        arr_68 [i_13] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)12)), (8191U)));
        arr_69 [i_13] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)7064)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned char)4])) ? (((/* implicit */int) arr_42 [(unsigned char)2] [i_13] [i_13] [i_13] [i_13] [i_13] [(unsigned char)2])) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) 1354502808)) : (arr_40 [i_13] [i_13] [i_13] [i_13] [i_13])))) : (max((arr_66 [i_13]), (((/* implicit */unsigned long long int) 400404364))))));
    }
    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((1844060743), (var_1)))))))));
    var_21 = ((/* implicit */unsigned int) var_15);
    var_22 = ((/* implicit */short) var_5);
    var_23 = ((/* implicit */unsigned short) min(((-(((var_15) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12)))))), (((/* implicit */int) var_6))));
}
