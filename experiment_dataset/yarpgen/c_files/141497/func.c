/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141497
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
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (+(min((arr_6 [i_1] [i_0 + 1] [i_0 - 3] [i_0 + 1]), (((/* implicit */unsigned int) -1995640050)))))))));
                                arr_10 [i_0 - 3] [i_1] [i_0 - 3] [i_0] = ((/* implicit */short) (-(1904454282)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned short) -1904454272);
                                var_16 = ((/* implicit */_Bool) var_10);
                                arr_17 [i_0] [6] [i_2] [i_1] [i_0] = ((/* implicit */int) arr_15 [i_6 + 1] [i_2 - 1] [(unsigned char)7] [i_0 - 2] [i_1 - 3]);
                                arr_18 [i_0] [(signed char)4] [i_1] [i_2] [i_0] [6] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (signed char)-28)))));
                            }
                        } 
                    } 
                    arr_19 [i_0] = ((/* implicit */_Bool) ((int) (unsigned short)7700));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        for (int i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_9 = 3; i_9 < 19; i_9 += 2) 
                {
                    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(1904454298)))) ? (((((/* implicit */_Bool) ((unsigned short) var_11))) ? ((-(arr_32 [i_10]))) : (((/* implicit */unsigned long long int) ((int) arr_25 [(unsigned char)14]))))) : (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */int) arr_27 [i_9 + 3] [i_9 - 3] [i_9] [i_9 + 2]))))))))));
                            arr_33 [i_8] [i_8] [12U] = ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (1904454271))), (-1995640038))), (((int) arr_27 [i_9 - 2] [i_9 + 3] [i_9 + 3] [i_9 - 1]))));
                            arr_34 [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) arr_23 [i_10]);
                            var_18 &= ((/* implicit */signed char) (-(((unsigned int) 1995640033))));
                            arr_35 [i_8] [i_8] [i_9 - 3] [i_10] [i_8] [i_7] = ((/* implicit */unsigned char) 4294967295U);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_11 = 0; i_11 < 22; i_11 += 3) 
                {
                    for (long long int i_12 = 0; i_12 < 22; i_12 += 4) 
                    {
                        for (unsigned int i_13 = 2; i_13 < 21; i_13 += 3) 
                        {
                            {
                                arr_42 [i_11] [i_8] [i_8] [i_12] [i_13 - 2] [i_13] = ((/* implicit */unsigned char) 1995640049);
                                var_19 = ((max(((!(((/* implicit */_Bool) arr_37 [i_8] [i_8] [i_11])))), (((((/* implicit */_Bool) arr_37 [i_7] [i_12] [i_13])) && (((/* implicit */_Bool) (unsigned short)45203)))))) ? (((((/* implicit */_Bool) (+(12659558550301519788ULL)))) ? (((unsigned long long int) (_Bool)0)) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_31 [9] [i_11]), (arr_31 [i_13] [i_8]))))))) : (((/* implicit */unsigned long long int) 1904454298)));
                                var_20 = ((/* implicit */_Bool) 1995640057);
                                arr_43 [i_7] [i_8] = ((/* implicit */long long int) var_5);
                                arr_44 [(unsigned char)9] [i_7] [i_8] [(_Bool)1] [i_12] [i_13] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_38 [i_7] [i_8] [i_11] [i_12] [17])), (((unsigned short) ((12659558550301519807ULL) > (((/* implicit */unsigned long long int) 1904454271)))))));
                            }
                        } 
                    } 
                } 
                arr_45 [i_8] [i_8] [i_8] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_37 [i_7] [i_7] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (unsigned short)45178)) + (var_7))))), (((/* implicit */int) (unsigned short)20369))));
                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((unsigned int) (unsigned char)47)))));
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    for (int i_15 = 0; i_15 < 22; i_15 += 4) 
                    {
                        {
                            arr_52 [i_14] &= ((/* implicit */int) ((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20333)))));
                            arr_53 [i_8] = var_12;
                        }
                    } 
                } 
            }
        } 
    } 
}
