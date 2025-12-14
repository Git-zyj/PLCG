/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141555
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (short i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
                            {
                                arr_12 [i_0] = ((/* implicit */signed char) (unsigned short)42889);
                                arr_13 [i_0] [i_1] [(signed char)9] [i_3] [i_0] [i_0] = ((/* implicit */short) arr_3 [i_4] [i_3] [i_0]);
                                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) arr_1 [i_4])))))));
                                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned short)42895)) ? (var_1) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_4))));
                            }
                            for (short i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
                            {
                                var_15 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_11 [i_1] [i_3] [i_2] [i_1] [i_0] [i_2] [i_3])) : (((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) (unsigned short)22667)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_5)))))));
                                var_16 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_2 + 1] [i_3] [i_3])) : (var_6))) >= (((/* implicit */unsigned long long int) arr_17 [i_0] [i_2 + 1] [i_3] [i_5] [i_0] [i_5] [i_5])))) ? ((+(((((/* implicit */_Bool) (short)-1)) ? (arr_9 [i_0] [i_0] [i_1] [i_2 + 1] [i_3] [i_5]) : (((/* implicit */unsigned int) arr_15 [i_1] [i_1] [i_1] [i_3] [i_0])))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 + 1] [i_2])))));
                                arr_18 [i_0] [i_3] [i_5] = ((/* implicit */_Bool) var_12);
                                var_17 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned char)11] [16])) ? (((/* implicit */unsigned long long int) arr_16 [5] [5] [(signed char)13] [i_3] [19ULL])) : (((((/* implicit */unsigned long long int) arr_4 [i_1] [i_2] [i_1])) / (var_6)))))) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [(short)0] [i_1] [4U] [i_5] [(_Bool)0] [(unsigned short)0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_7 [i_0] [i_0]))))) : (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (unsigned short)22647))))) ? ((-(((/* implicit */int) (short)-1)))) : (((/* implicit */int) arr_5 [(signed char)4] [i_1])))))));
                                arr_19 [i_5] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (unsigned short)22641))))) + ((-(2499069972U)))));
                            }
                            for (short i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
                            {
                                arr_22 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] &= ((/* implicit */unsigned int) var_6);
                                var_18 |= arr_16 [i_0] [i_0] [i_0] [i_0] [i_0];
                            }
                            var_19 = ((/* implicit */_Bool) max((var_19), ((_Bool)1)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_9 = 0; i_9 < 21; i_9 += 4) 
                            {
                                var_20 = ((/* implicit */signed char) arr_4 [i_0] [(_Bool)1] [i_9]);
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_9] [i_0] [i_1])) ? (((/* implicit */int) arr_10 [6U] [1U] [i_1] [i_0] [i_8] [i_9])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_4 [i_0] [i_7] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-21))) : (var_9)))))) : (var_5)));
                            }
                            for (unsigned int i_10 = 1; i_10 < 20; i_10 += 1) 
                            {
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_17 [i_0] [i_1] [i_7] [i_8] [i_0] [(signed char)12] [i_8]) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (var_6) : (((/* implicit */unsigned long long int) var_1))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)-8316)))))));
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_0 [i_8] [i_0])))) ? (((((/* implicit */_Bool) arr_25 [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 + 1] [i_10 - 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_25 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1])))) : (((((/* implicit */_Bool) (unsigned short)27400)) ? (arr_23 [i_0] [i_7] [i_0] [i_10]) : (((((/* implicit */_Bool) arr_25 [i_0] [(_Bool)1] [i_7] [i_0] [13U])) ? (((/* implicit */int) arr_14 [i_0] [(unsigned short)15] [(unsigned short)15] [6U] [i_0])) : (((/* implicit */int) arr_8 [13] [i_0] [13]))))))));
                            }
                            var_24 = 3742842826U;
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_11 = 3; i_11 < 19; i_11 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 21; i_12 += 3) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 21; i_13 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_7))));
                                arr_37 [i_0] [i_0] = ((/* implicit */unsigned int) (signed char)0);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */_Bool) var_5);
                }
            }
        } 
    } 
    var_27 ^= ((/* implicit */_Bool) (~(((/* implicit */int) var_11))));
    var_28 = (+(((/* implicit */int) (short)-17172)));
    var_29 = ((/* implicit */int) var_0);
}
