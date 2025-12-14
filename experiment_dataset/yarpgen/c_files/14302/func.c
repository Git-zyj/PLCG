/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14302
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
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */short) (+(((min((arr_4 [(unsigned char)16] [i_2] [19U]), (-307141546))) / (((/* implicit */int) arr_12 [i_4 + 3] [i_4 + 2] [i_4 + 1] [i_4 - 1] [i_4]))))));
                                arr_13 [i_4] = ((/* implicit */short) ((((/* implicit */int) (short)-18687)) * (((((/* implicit */int) arr_9 [i_0] [i_0] [(short)0] [(short)0] [i_4 + 2])) >> (((((/* implicit */int) arr_9 [5ULL] [i_0] [5ULL] [5ULL] [i_4 + 3])) - (3207)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        for (signed char i_6 = 3; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_1] [(short)2] [i_5] [i_6] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */int) (unsigned short)4632)) : (((/* implicit */int) var_11))))) ? (((arr_4 [11U] [i_5] [i_5]) | (((/* implicit */int) var_3)))) : (((/* implicit */int) ((unsigned char) var_8))))) % ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2] [(short)13] [(short)13])) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))))))));
                                arr_19 [i_0] [(short)11] [i_5] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */int) ((((/* implicit */int) arr_10 [i_6] [i_5] [i_0])) > (((/* implicit */int) arr_2 [18U]))))) * (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_6 - 2] [i_5]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
    {
        for (short i_8 = 1; i_8 < 8; i_8 += 3) 
        {
            for (unsigned short i_9 = 1; i_9 < 6; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 3; i_10 < 8; i_10 += 4) 
                    {
                        for (short i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            {
                                arr_34 [i_8] [i_8] [i_9 - 1] [i_10 - 3] [i_11] = ((/* implicit */unsigned int) min(((+(arr_5 [i_10] [i_10] [i_10 - 3]))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65531)) ? ((~(((/* implicit */int) arr_9 [i_8] [(unsigned short)12] [i_9 + 3] [i_8] [12])))) : (((/* implicit */int) (unsigned short)4632)))))));
                                arr_35 [(unsigned char)4] [i_8] [(unsigned char)4] [i_8] [(short)3] = ((/* implicit */unsigned long long int) max((min((min((arr_20 [i_7] [i_8 + 1]), (arr_29 [i_7] [i_7] [i_7] [7U]))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (235541135U))))), (((/* implicit */unsigned int) var_11))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        for (signed char i_13 = 3; i_13 < 9; i_13 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_36 [i_8] [i_7] [i_8 + 1] [i_13 - 1] [i_13 + 1])) >= (((/* implicit */int) arr_30 [i_8] [i_9 + 3] [(short)8] [i_9] [i_9 + 4] [i_9 + 4]))))) >> ((((+(((/* implicit */int) ((unsigned short) arr_25 [i_8] [i_8] [i_8]))))) - (19124)))));
                                var_17 = ((/* implicit */unsigned char) ((unsigned long long int) (-(arr_22 [i_8 + 1] [i_9 + 3] [i_8]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 10; i_14 += 2) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 10; i_15 += 2) 
                        {
                            {
                                arr_48 [i_8] = ((/* implicit */unsigned int) ((unsigned long long int) arr_3 [i_15] [i_15]));
                                arr_49 [i_7] [i_7] [i_7] [i_8] = ((/* implicit */unsigned char) (unsigned short)4649);
                                arr_50 [i_7] [i_8] [(signed char)4] = ((/* implicit */unsigned char) min((((var_1) & (((/* implicit */unsigned long long int) ((unsigned int) 17))))), (((/* implicit */unsigned long long int) ((_Bool) arr_9 [(_Bool)1] [22ULL] [i_9] [i_14] [i_8])))));
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_29 [i_7] [i_7] [i_9 - 1] [i_14]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 1; i_16 < 7; i_16 += 4) 
                    {
                        for (unsigned int i_17 = 3; i_17 < 7; i_17 += 1) 
                        {
                            {
                                arr_56 [i_8] [i_8] = ((short) ((((int) var_14)) / (((/* implicit */int) var_11))));
                                arr_57 [i_7] [i_7] [i_8] [(unsigned char)1] [(short)7] [i_7] = ((/* implicit */short) min((((((/* implicit */int) arr_54 [8ULL] [9U] [i_9 - 1] [i_8 + 1])) & (((/* implicit */int) arr_54 [i_7] [(short)1] [i_9] [i_8 - 1])))), (((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_24 [i_8] [i_8]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_18 = 0; i_18 < 11; i_18 += 1) 
    {
        for (signed char i_19 = 2; i_19 < 10; i_19 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_20 = 4; i_20 < 10; i_20 += 1) 
                {
                    for (unsigned char i_21 = 0; i_21 < 11; i_21 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)60887))));
                            arr_68 [i_18] [i_18] [i_18] [(unsigned char)9] [(short)6] [10] = ((/* implicit */short) (~(((/* implicit */int) var_7))));
                            arr_69 [i_18] [i_18] [i_18] [(_Bool)1] = ((/* implicit */long long int) arr_2 [i_18]);
                            arr_70 [i_19] [(unsigned short)4] [i_19] = ((/* implicit */unsigned long long int) var_3);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_22 = 3; i_22 < 9; i_22 += 2) 
                {
                    for (unsigned char i_23 = 0; i_23 < 11; i_23 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) ((int) ((((/* implicit */long long int) 14U)) ^ (arr_6 [i_19] [i_19] [i_19 + 1]))));
                            var_21 = ((/* implicit */unsigned int) ((min((arr_72 [i_22 - 3] [i_19 - 1]), (arr_72 [i_22 + 2] [i_19 - 1]))) == (((/* implicit */int) ((arr_72 [i_22 - 2] [i_19 + 1]) > (arr_72 [i_22 - 1] [i_19 + 1]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_24 = 0; i_24 < 11; i_24 += 2) 
                {
                    for (unsigned short i_25 = 0; i_25 < 11; i_25 += 4) 
                    {
                        {
                            arr_83 [1] [1] = ((/* implicit */unsigned short) max((((/* implicit */short) ((((/* implicit */_Bool) -961300827)) || (((/* implicit */_Bool) var_8))))), (min((var_7), (arr_74 [(signed char)10] [i_19 + 1] [i_19 + 1] [i_19 + 1])))));
                            arr_84 [i_18] [i_18] [i_18] [(signed char)0] = max((((((/* implicit */_Bool) arr_72 [i_18] [i_19 - 1])) ? (arr_72 [i_18] [i_19 - 1]) : (arr_72 [i_18] [i_19 + 1]))), (((arr_72 [i_19] [i_19 - 2]) / (arr_72 [9LL] [i_19 - 1]))));
                            arr_85 [i_18] [i_18] [(short)5] = ((/* implicit */long long int) arr_14 [i_19 + 1] [i_19 + 1] [(unsigned char)8] [i_19 + 1]);
                        }
                    } 
                } 
            }
        } 
    } 
}
