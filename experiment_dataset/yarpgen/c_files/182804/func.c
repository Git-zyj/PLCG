/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182804
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_17 [i_1] [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_7 [i_0] [i_2]), (((/* implicit */unsigned long long int) arr_4 [i_0])))))));
                                arr_18 [i_0] [i_1] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_15 [i_1] [i_3] [i_3] [i_3] [i_3])) ? (arr_15 [i_1] [i_3] [1ULL] [i_1] [i_1]) : (arr_15 [i_1] [i_3] [i_2] [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((unsigned int) arr_15 [i_1] [i_1] [(unsigned short)7] [i_3] [i_2])))));
                                arr_19 [i_0] [i_1] [i_1] [(signed char)2] [i_3] [i_4] = ((/* implicit */long long int) arr_9 [i_0]);
                                arr_20 [i_1] [12ULL] [i_2] [i_1] [i_1] = ((/* implicit */int) arr_0 [i_0]);
                            }
                        } 
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                {
                    arr_24 [i_1] [i_1] [1LL] = ((((/* implicit */long long int) arr_4 [i_0])) + (((long long int) 3118163108695980514ULL)));
                    arr_25 [i_0] [i_1] [4U] [i_1] = ((/* implicit */unsigned char) 485986);
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            {
                                arr_32 [i_1] = ((/* implicit */short) arr_28 [i_6] [i_1] [i_5] [i_6] [(signed char)2] [i_1] [7ULL]);
                                arr_33 [i_0] [i_1] [i_5] [i_7] [i_7] = ((/* implicit */long long int) ((int) ((unsigned long long int) arr_13 [i_6] [i_1] [i_1] [i_0])));
                                arr_34 [i_0] [i_0] [i_5] [i_7] [i_5] = min((((/* implicit */long long int) ((((unsigned long long int) arr_12 [i_7] [i_1] [i_0])) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_16 [i_5]))))))), (max((((/* implicit */long long int) arr_28 [i_0] [i_5] [i_6] [i_6] [i_7] [i_0] [i_1])), ((~(arr_16 [i_0]))))));
                                arr_35 [i_0] [i_1] [i_5] [i_7] [i_7] = ((/* implicit */unsigned char) ((((long long int) arr_6 [i_0])) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_12 [15ULL] [i_1] [i_5])), (var_2))))))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
                    {
                        for (int i_10 = 0; i_10 < 18; i_10 += 3) 
                        {
                            {
                                arr_44 [i_0] [i_1] [i_0] [i_8] [i_9] [i_9] [i_10] = ((/* implicit */unsigned short) max((((/* implicit */int) max((arr_0 [i_10]), (arr_0 [i_0])))), (((((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_8] [i_9] [8U])) ? (((/* implicit */int) arr_28 [i_0] [i_1] [12LL] [i_1] [i_8] [i_8] [i_10])) : (((/* implicit */int) (unsigned short)27993))))));
                                arr_45 [i_0] [i_9] [i_8] [i_9] [i_1] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_9] [i_10]))))));
                            }
                        } 
                    } 
                    arr_46 [i_0] [i_1] [i_0] = ((/* implicit */short) 485986);
                    arr_47 [i_8] [i_1] [i_1] [i_0] = ((/* implicit */int) (+(((unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0])))))));
                    arr_48 [(_Bool)1] [0LL] [i_1] = ((/* implicit */long long int) ((short) ((_Bool) (+(arr_6 [(signed char)12])))));
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 18; i_12 += 4) 
                        {
                            {
                                arr_55 [i_1] [i_11] [i_8] [i_1] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((int) arr_38 [i_8] [i_1] [i_8] [i_8] [i_8]))), (var_11)));
                                arr_56 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_5 [i_0] [i_0]) : (arr_8 [i_12] [i_8] [i_8] [i_0]))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned char i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
                {
                    arr_59 [i_1] = ((/* implicit */short) ((arr_16 [i_1]) * (((/* implicit */long long int) ((/* implicit */int) ((arr_41 [i_1]) >= (((/* implicit */unsigned int) arr_4 [i_0]))))))));
                    arr_60 [i_13] [i_1] [i_1] = ((/* implicit */signed char) ((int) var_11));
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                arr_66 [i_0] [i_0] [(signed char)7] [i_0] [i_1] = ((long long int) ((long long int) arr_26 [5LL] [i_14] [5LL] [i_1] [2ULL]));
                                arr_67 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_0]))));
                                arr_68 [i_1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_13]))));
                            }
                        } 
                    } 
                    arr_69 [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 9U)) / (arr_40 [i_0] [i_0] [i_0] [i_13] [i_0] [i_0])));
                    arr_70 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(3955915624U)));
                }
                arr_71 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned short) arr_54 [i_0] [i_0] [i_1] [i_0] [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) var_7);
    var_14 = var_5;
    var_15 = ((/* implicit */int) var_3);
}
