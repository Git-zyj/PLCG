/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100166
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 ^= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_4 [i_2 - 1] [i_1 - 1] [i_2]))))) && (((/* implicit */_Bool) arr_4 [i_1 - 1] [i_2 - 1] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) min((min((arr_3 [i_0]), (((/* implicit */unsigned char) arr_8 [i_0] [i_1] [i_0] [i_1])))), (var_7))))) : (((long long int) (unsigned char)164)));
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) * (max((((/* implicit */long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) (unsigned char)92))))), (((long long int) (unsigned short)20571)))))))));
                        arr_11 [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 910498920300584731ULL)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (18115797352728630421ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_1])))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            var_20 = var_14;
                            var_21 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_16 [i_1] [i_4] [i_0] [i_1] [i_1])))) % (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_3 [i_1])))))));
                        }
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)140)) ? (395895238U) : (arr_1 [i_1 - 1] [i_1 - 1])))) ? (((long long int) arr_17 [i_0] [i_0] [i_1 + 1] [i_2 - 1] [i_4])) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_3 [i_1])))))))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */short) arr_16 [i_1 + 1] [i_2 - 1] [i_2 - 1] [i_4] [i_1])), (arr_5 [i_1 + 1])))) - (((/* implicit */int) ((var_0) <= (((/* implicit */int) arr_2 [i_1] [i_1])))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
                    {
                        var_24 -= ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]);
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (~((-(arr_1 [i_1 - 1] [i_2 - 1]))))))));
                        var_26 = ((/* implicit */unsigned int) arr_9 [i_1] [i_1] [i_2]);
                    }
                    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
                    {
                        arr_23 [i_0] [i_0] &= ((/* implicit */short) (((~(((/* implicit */int) arr_17 [i_1 - 1] [i_1 - 1] [i_1] [i_1] [i_1])))) & (((((((/* implicit */int) (signed char)-79)) + (2147483647))) << (((((/* implicit */int) arr_17 [i_1] [i_1 - 1] [i_1] [i_1] [i_1])) - (93)))))));
                        arr_24 [i_7] [i_1] [i_2] [i_1 - 1] [i_1] [i_0] = max((((/* implicit */unsigned long long int) (short)-32767)), (18115797352728630421ULL));
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_28 [i_0] [i_1] [i_2] [i_1] [i_8] [i_1] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (-(330946720980921194ULL))))) ? ((~(arr_12 [i_1 + 1] [i_2 - 1] [i_1] [i_2] [i_7] [i_8]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? ((-(((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) arr_22 [i_1 - 1] [i_7] [i_8])))))));
                            arr_29 [i_1] = ((/* implicit */long long int) var_9);
                            arr_30 [i_0] [i_1 + 1] [i_2] [i_1] [i_7] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) arr_3 [i_1])), (arr_12 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_0])))));
                            arr_31 [i_8] [i_1] [i_2 - 1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (short)-29255);
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            arr_34 [i_0] [i_1 - 1] [i_1] [i_7] [i_7] = ((/* implicit */_Bool) arr_27 [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                            arr_35 [i_0] [i_1] [i_2 - 1] [i_1] [i_1] = ((/* implicit */long long int) (!(((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 + 1] [i_1]))) != (var_15)))));
                            var_27 = ((/* implicit */unsigned short) min(((unsigned char)91), (min(((unsigned char)178), (((/* implicit */unsigned char) (signed char)17))))));
                        }
                    }
                    var_28 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_2 - 1] [i_1])) ? (((/* implicit */int) arr_13 [i_1 - 1] [i_1] [i_1 - 1] [i_2 - 1])) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_1 - 1] [i_2 - 1]))))) ? (((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_1 - 1] [i_2 - 1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)21605)) ? (arr_9 [i_1] [i_2 - 1] [i_1]) : (((/* implicit */int) arr_3 [i_1]))))));
                    arr_36 [i_1] [i_0] [i_2 - 1] [i_2 - 1] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)40449), (((/* implicit */unsigned short) arr_18 [i_0] [i_1] [i_2] [i_1 + 1]))))) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (min((((/* implicit */int) (short)-29236)), (1397122670)))))) | (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38337))) ^ (arr_12 [i_0] [i_1 + 1] [i_1] [i_0] [i_0] [i_2]))), ((~(8471865681921989958ULL))))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned char) max((((((var_2) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) << (((((3281916396718025882LL) - (((/* implicit */long long int) ((/* implicit */int) var_2))))) - (3281916396718025871LL))))), (((/* implicit */unsigned long long int) ((unsigned char) var_0)))));
    var_30 = ((/* implicit */unsigned short) var_6);
}
