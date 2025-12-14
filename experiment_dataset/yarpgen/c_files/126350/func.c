/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126350
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
    for (short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            arr_11 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) var_3)), (arr_2 [i_0]))))))), ((-(((/* implicit */int) arr_5 [i_3]))))));
                            arr_12 [i_1] [i_2] = ((/* implicit */short) arr_5 [i_2]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        {
                            var_11 = (((!(((/* implicit */_Bool) (unsigned short)0)))) && (((((/* implicit */_Bool) arr_15 [i_0 - 1] [i_0 + 2] [i_0 + 2])) && (((/* implicit */_Bool) (unsigned short)65526)))));
                            var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_5 [i_0 - 1])))), (((/* implicit */int) var_9)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 1) 
                {
                    for (int i_7 = 3; i_7 < 24; i_7 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) arr_24 [i_0] [19] [i_0] [i_1] [i_0 + 2] [i_0])) || (((/* implicit */_Bool) arr_17 [(signed char)9] [(unsigned short)18] [i_6] [(unsigned short)15])))) ? (((((/* implicit */int) var_10)) % (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_20 [(unsigned short)11])))), ((+((+(536870911)))))));
                            arr_25 [(unsigned short)18] [i_6] [i_6] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)1)))))))));
                            var_14 = ((/* implicit */long long int) (unsigned short)0);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) 
    {
        for (unsigned int i_9 = 2; i_9 < 21; i_9 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (short i_11 = 0; i_11 < 23; i_11 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_9])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_8)))))))));
                            var_16 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 23; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 23; i_13 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((arr_28 [i_8] [12]), (((/* implicit */unsigned int) arr_40 [i_9 - 1] [i_9] [i_9] [i_9]))))), (max((4611686018427387903ULL), (((/* implicit */unsigned long long int) arr_27 [i_9 + 1] [(unsigned char)11]))))));
                            var_18 = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) arr_30 [i_9 + 1])))));
                            var_19 *= max(((-(((/* implicit */int) arr_43 [i_9 - 2] [i_9] [i_9 + 2] [i_9 - 2])))), (((/* implicit */int) var_5)));
                            arr_44 [i_8] [i_9] [10U] [i_9] = ((/* implicit */unsigned short) arr_33 [(short)6] [i_9 - 1] [i_9 - 2]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_14 = 3; i_14 < 8; i_14 += 4) 
    {
        for (int i_15 = 0; i_15 < 10; i_15 += 4) 
        {
            for (unsigned char i_16 = 0; i_16 < 10; i_16 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        for (short i_18 = 0; i_18 < 10; i_18 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_19 [i_15] [i_17] [i_18])), (((max((2147483647), (((/* implicit */int) (short)32767)))) >> (((((/* implicit */int) var_10)) - (17452)))))));
                                var_21 = ((/* implicit */long long int) (_Bool)1);
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (short)4064))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_19 = 1; i_19 < 9; i_19 += 4) 
                    {
                        for (short i_20 = 0; i_20 < 10; i_20 += 3) 
                        {
                            {
                                var_23 = (i_14 % 2 == 0) ? (((/* implicit */signed char) ((max((arr_38 [i_19 - 1] [5ULL] [i_19] [i_14] [i_20] [i_19]), (((((/* implicit */int) arr_42 [i_14] [i_14] [i_14] [i_14])) ^ (127))))) * (((/* implicit */int) arr_37 [i_14] [(unsigned short)16] [i_16] [i_19]))))) : (((/* implicit */signed char) ((max((arr_38 [i_19 - 1] [5ULL] [i_19] [i_14] [i_20] [i_19]), (((((/* implicit */int) arr_42 [i_14] [i_14] [i_14] [i_14])) ^ (127))))) / (((/* implicit */int) arr_37 [i_14] [(unsigned short)16] [i_16] [i_19])))));
                                arr_64 [(short)6] [2LL] [i_14] [i_16] [i_14] [i_15] [5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((unsigned int) var_8)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_21 = 2; i_21 < 9; i_21 += 4) 
                    {
                        for (unsigned short i_22 = 0; i_22 < 10; i_22 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_55 [i_21] [i_21 + 1] [i_21 - 2] [8U]))))) ? ((-(((/* implicit */int) arr_55 [i_21] [i_21 - 1] [i_21 - 2] [i_21])))) : (((/* implicit */int) ((12ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))))))));
                                var_25 = ((/* implicit */signed char) arr_15 [8U] [i_16] [i_22]);
                                var_26 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((max((((/* implicit */int) var_5)), (-536870893))) / (((/* implicit */int) ((((/* implicit */_Bool) 2047ULL)) || (((/* implicit */_Bool) (signed char)-1)))))))), (max((((/* implicit */unsigned long long int) (+(2147483642)))), (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_51 [(short)2] [(short)7] [i_16]))))))));
                                var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) arr_46 [i_21]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_23 = 2; i_23 < 9; i_23 += 4) 
                    {
                        for (unsigned short i_24 = 0; i_24 < 10; i_24 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */_Bool) ((long long int) 1ULL));
                                arr_77 [i_15] [6] [(signed char)0] [(short)0] [i_24] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65527))));
                                var_29 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)32767))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
