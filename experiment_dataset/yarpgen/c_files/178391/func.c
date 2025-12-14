/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178391
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [i_1] [i_1] = max((arr_1 [i_1 - 1]), (((/* implicit */unsigned int) (unsigned char)79)));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 3; i_2 < 9; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_12 [i_1] [i_3] = ((/* implicit */int) arr_5 [i_1]);
                                arr_13 [(unsigned char)4] [i_1] [i_4] = arr_10 [i_1] [i_1] [i_1] [i_1] [i_1 + 1];
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        arr_17 [7ULL] [i_1] [i_2] [i_2] = ((/* implicit */signed char) var_9);
                        arr_18 [i_1] [i_5] [i_5] [i_0] = ((/* implicit */_Bool) arr_3 [i_0] [i_1]);
                    }
                    for (short i_6 = 1; i_6 < 10; i_6 += 4) 
                    {
                        arr_21 [i_1] [i_2 - 3] [(unsigned char)1] [i_0] [i_1] = ((/* implicit */unsigned char) arr_14 [i_0] [i_0] [i_0] [i_0]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            arr_26 [i_0] [i_1] [i_1] [i_6] [i_1] [i_2 + 2] [i_7 + 1] = ((/* implicit */unsigned long long int) ((_Bool) arr_22 [i_7] [i_6] [i_2] [i_2 + 4] [i_1] [i_0]));
                            arr_27 [i_7 + 1] [i_6] [i_1] [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_1]);
                            arr_28 [i_7] [i_7 + 1] [i_1] [i_1] [i_1 - 1] [i_0] = ((/* implicit */long long int) var_4);
                            arr_29 [(unsigned char)12] [i_1] [i_2] [i_2] [i_6] [i_0] [i_7 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_2 + 1] [12])) ? (((/* implicit */int) arr_14 [i_1] [i_2 + 4] [(short)12] [i_7 + 1])) : (((/* implicit */int) (short)-4825))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            arr_32 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned long long int) ((((/* implicit */int) arr_19 [i_0] [i_2] [i_6])) > (arr_6 [i_1] [i_2 + 3] [i_1] [i_1])))));
                            arr_33 [(unsigned short)7] [i_1] [i_0] [2ULL] [i_1 + 1] [i_1] [i_0] = ((/* implicit */unsigned short) (short)-25883);
                            arr_34 [i_0] [i_1 + 1] [i_2] [i_1] [i_8] = ((/* implicit */signed char) arr_7 [i_1] [12ULL]);
                            arr_35 [i_0] [i_0] [i_6 + 3] = ((/* implicit */int) ((unsigned long long int) ((unsigned char) ((((/* implicit */int) (unsigned short)28931)) * (((/* implicit */int) (short)29878))))));
                        }
                    }
                    for (int i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        arr_39 [(signed char)6] [i_0] [i_2] [i_1 - 1] [i_0] [i_0] = ((/* implicit */long long int) (+(min((((/* implicit */int) ((unsigned char) arr_1 [i_0]))), ((~(((/* implicit */int) (short)-29153))))))));
                        arr_40 [i_0] [i_0] [i_1] [i_0] [i_9] = ((/* implicit */unsigned long long int) max((((unsigned int) -1760739497)), (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_0] [i_0]))));
                        arr_41 [i_9] [i_1] [(_Bool)1] [i_9] [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_20 [i_1] [i_0] [i_0] [(unsigned short)6])) ? (arr_24 [i_0] [2ULL] [i_0] [i_2 - 1] [i_9]) : (((/* implicit */long long int) arr_23 [i_0] [i_1] [i_2] [i_9] [i_9])))), (((/* implicit */long long int) arr_38 [i_0])))))));
                        arr_42 [i_1] [i_1] [i_2] [10U] = ((/* implicit */int) max((min((((/* implicit */long long int) max(((short)29159), (((/* implicit */short) (unsigned char)7))))), (min((arr_7 [i_1] [i_9]), (((/* implicit */long long int) -1789455959)))))), (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) arr_11 [i_9] [i_1] [5ULL] [i_1] [i_0])) == (arr_23 [i_0] [i_1 + 1] [i_2] [2ULL] [i_2 + 3])))), (arr_23 [i_0] [i_0] [i_0] [(unsigned char)8] [i_0]))))));
                    }
                    arr_43 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((arr_24 [i_0] [i_0] [i_1] [(unsigned char)12] [i_2]) - (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2 + 4] [i_1] [i_1 + 1] [i_1] [i_0])))));
                }
                for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) 
                {
                    arr_47 [i_10] [i_0] [i_0] [(_Bool)1] |= ((/* implicit */unsigned long long int) max((max((1789455971), (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), ((unsigned short)36605)))))), ((-(((/* implicit */int) arr_46 [i_0] [i_1 - 1]))))));
                    arr_48 [i_10] [i_1] [i_10] [0] |= ((/* implicit */int) (!(((/* implicit */_Bool) 1023ULL))));
                    arr_49 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_10] [i_10] [(unsigned char)0] [i_1 - 1] [i_0] [(signed char)10])) ? (((/* implicit */int) arr_19 [i_10] [i_1 - 1] [i_0])) : (((/* implicit */int) arr_46 [i_1] [i_1 - 1]))));
                    arr_50 [i_0] [i_1 - 1] [i_1] [i_10] = ((/* implicit */unsigned short) min((((/* implicit */int) (short)7707)), (-1789455966)));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_11 = 2; i_11 < 7; i_11 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_12 = 0; i_12 < 11; i_12 += 4) 
        {
            for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) 
            {
                for (short i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    {
                        arr_62 [i_11] [i_11] = min((arr_19 [3U] [(unsigned char)12] [i_13]), (arr_19 [(_Bool)1] [i_13] [i_14]));
                        arr_63 [8U] [5ULL] [2ULL] [i_11] = ((/* implicit */unsigned long long int) arr_59 [i_11]);
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_15 = 0; i_15 < 11; i_15 += 3) 
        {
            arr_68 [i_11] [i_11] [i_11] = ((/* implicit */int) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)29159)) ? (arr_0 [i_15] [i_11]) : (arr_23 [i_15] [i_15] [i_11] [i_11 + 2] [i_11])))), (((long long int) 17294921553534014893ULL)))) >= (max((((/* implicit */long long int) max((arr_38 [i_11]), (((/* implicit */int) arr_55 [(short)6] [i_11 - 2] [i_11]))))), (arr_7 [i_11] [i_11 + 4])))));
            arr_69 [i_11] [i_11] = ((/* implicit */_Bool) arr_22 [i_11 + 4] [i_11 + 3] [i_11] [i_11] [i_11] [(signed char)0]);
            /* LoopNest 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (short i_17 = 0; i_17 < 11; i_17 += 4) 
                {
                    {
                        arr_76 [i_16] [i_15] [(signed char)0] [i_11] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_11] [7] [0U] [7] [8ULL] [i_15])) ? (arr_65 [(short)1] [i_11]) : (2047481082)))) ? (((/* implicit */long long int) arr_38 [i_16])) : (((((/* implicit */_Bool) arr_10 [i_11] [i_16] [i_16] [i_15] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_11] [i_11]))) : (-3676989322721576797LL))))), (((/* implicit */long long int) (~(max((1789455964), (arr_45 [0ULL] [12LL] [0ULL] [(signed char)1]))))))));
                        arr_77 [i_17] [i_11] [i_11] [i_11 + 4] = ((/* implicit */int) ((min((((((/* implicit */long long int) -2047481097)) / (arr_58 [i_17] [i_15]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */int) (unsigned short)36596)) : (((/* implicit */int) arr_59 [i_11]))))))) ^ (arr_8 [i_11] [i_15] [4] [i_15] [i_17] [i_15])));
                        arr_78 [i_11 - 1] [(short)1] [4] [i_11] [i_11 - 1] = ((/* implicit */unsigned char) arr_55 [i_15] [i_15] [i_11]);
                    }
                } 
            } 
        }
    }
}
