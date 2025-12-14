/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137699
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
    var_12 &= ((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) -840316756)) ? (1189028811U) : (3105938507U)))) >= (var_2))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */short) max((var_13), (((short) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_3 + 1] [i_4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))))));
                                var_14 -= ((/* implicit */unsigned int) ((((var_10) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
                                var_15 -= ((/* implicit */unsigned int) (+(((/* implicit */int) ((var_10) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 2) 
                    {
                        var_16 = ((/* implicit */int) arr_2 [5LL] [i_0]);
                        arr_15 [i_0] [i_0] [(signed char)0] = ((/* implicit */unsigned int) var_9);
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_6) : (var_6)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_14 [(unsigned short)13] [6]))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned int) var_8)) : (var_5)))));
                    }
                    for (signed char i_6 = 2; i_6 < 14; i_6 += 3) 
                    {
                        arr_18 [i_0] [(signed char)4] [(signed char)4] [i_2] [i_6] [i_6] = ((/* implicit */short) ((unsigned char) (-(3105938524U))));
                        var_18 |= ((/* implicit */int) ((unsigned char) var_7));
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_6)))) ? (((arr_2 [i_2] [i_1]) ? (3835928119906986102ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(short)7] [i_1] [i_2] [(unsigned char)9]))))) : (((/* implicit */unsigned long long int) ((long long int) var_2)))));
                    }
                }
                for (short i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) var_6))))))) % (((unsigned int) var_10))))));
                    arr_23 [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_10) + (min((((/* implicit */unsigned long long int) 3122814155478550138LL)), (5869323267900021605ULL))))))));
                }
                for (unsigned long long int i_8 = 1; i_8 < 14; i_8 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_8] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (short)23012)), (774135261)));
                    var_21 = ((/* implicit */signed char) (unsigned short)13264);
                }
                for (unsigned long long int i_9 = 1; i_9 < 14; i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 3; i_11 < 14; i_11 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) 3105938525U);
                                var_23 = ((/* implicit */unsigned long long int) -3122814155478550139LL);
                                arr_36 [11U] [11U] [11U] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)204)) < (((/* implicit */int) var_9))))) : (((/* implicit */int) ((unsigned char) 13500220639311192621ULL)))))));
                                var_24 = ((/* implicit */signed char) ((long long int) (signed char)-93));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        for (int i_13 = 0; i_13 < 15; i_13 += 3) 
                        {
                            {
                                arr_43 [i_13] [i_1] [i_13] [i_12] [i_13] [i_12] [i_9 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_13] [i_1] [i_9]))) * (((5869323267900021605ULL) / (var_6)))))) ? ((~(((((/* implicit */_Bool) 1189028770U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)193))) : (var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                                arr_44 [i_13] [i_12] [i_9] [3LL] [i_0] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */unsigned long long int) min((774135261), (((/* implicit */int) var_7))))) | (18281247360804855300ULL))) : ((~(min((((/* implicit */unsigned long long int) var_7)), (var_6)))))));
                                arr_45 [i_0] [i_1] [i_0] [i_1] [i_12] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) var_1)))))) ? (max((((/* implicit */unsigned long long int) (+(var_2)))), (((unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) var_11))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) var_9))));
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((-6304584601551370055LL) + (6304584601551370057LL))))))))), (5869323267900021605ULL))))));
                }
                var_27 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_3)), ((-(((var_11) - (((/* implicit */unsigned int) -495881852))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)54775)) && (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (var_11)))))), (max((((((/* implicit */_Bool) -3122814155478550141LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_10))), (((/* implicit */unsigned long long int) var_5))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_14 = 3; i_14 < 10; i_14 += 1) 
    {
        var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_10) : (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) >= (arr_27 [(signed char)9] [i_14] [i_14] [i_14]))))) : (15U));
        arr_48 [i_14] = ((/* implicit */unsigned short) arr_21 [7]);
        arr_49 [i_14 - 1] [i_14] = ((/* implicit */_Bool) (~(495881852)));
    }
    /* vectorizable */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_16 = 4; i_16 < 20; i_16 += 2) 
        {
            var_30 = ((/* implicit */int) (-(var_5)));
            arr_54 [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (((unsigned int) arr_53 [i_15] [i_15]))));
        }
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_2)));
    }
}
