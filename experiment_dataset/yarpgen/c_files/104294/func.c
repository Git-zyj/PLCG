/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104294
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
    var_10 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) (+(var_7)))) == (var_1))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32445)))))) : (((var_2) - (((/* implicit */long long int) ((unsigned int) var_1)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_4 [i_0] &= ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_3 [i_0])), (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 19; i_2 += 4) 
            {
                {
                    var_11 |= ((/* implicit */short) var_3);
                    arr_12 [3] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (~(arr_5 [i_2] [i_1] [i_0])))) ? (-1497196122) : (((/* implicit */int) (signed char)63))))));
                    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_2 + 1] [i_2 + 2] [(unsigned short)5])) / (((/* implicit */int) arr_11 [i_2 + 1] [i_2 + 2] [8U]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_10 [i_2 + 1] [i_2 + 2] [i_1]), ((signed char)63))))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2 + 1] [i_2 + 2] [i_2 + 1]))) : (var_0)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (short i_4 = 1; i_4 < 20; i_4 += 4) 
        {
            for (unsigned int i_5 = 4; i_5 < 20; i_5 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned char i_6 = 2; i_6 < 17; i_6 += 4) /* same iter space */
                    {
                        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((unsigned long long int) var_8)))));
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned char) var_5);
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3]))) <= (391736041982348295LL)))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5 - 2] [i_6] [i_5 - 2] [i_3]))) >= (2461646660224650609ULL)))))))));
                            arr_26 [i_3] [i_4 - 1] [(short)2] [i_6] [(signed char)4] |= ((/* implicit */unsigned short) arr_23 [i_3] [i_3]);
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_3])) || (((/* implicit */_Bool) var_3))))) << (((/* implicit */int) arr_22 [i_3] [i_3] [i_5 - 3] [i_6] [i_6 + 3]))));
                        }
                        for (short i_8 = 3; i_8 < 20; i_8 += 4) 
                        {
                            arr_30 [i_3] [3ULL] [i_5] [i_5] [(signed char)1] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)67))));
                            var_17 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_6] [i_6 + 4] [i_5] [i_5 - 2] [2U] [i_5] [i_5 - 4]))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6]))) % (var_0)))));
                            arr_31 [i_3] [i_4 + 1] [i_5 - 3] [i_6] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)49)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)191))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)64512)))))));
                        }
                        arr_32 [i_5] [i_5] [i_5] [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_14 [i_5 - 1])) ? (33521664U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_3] [i_3] [i_3] [(unsigned short)11] [i_4 + 1] [(unsigned short)3] [(unsigned short)18]))))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_3] [(unsigned char)13] [(_Bool)1])))));
                    }
                    for (unsigned char i_9 = 2; i_9 < 17; i_9 += 4) /* same iter space */
                    {
                        arr_36 [i_3] [i_3] [i_3] [(short)8] [i_9] [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4003098650U)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-63)))))) : (var_3)));
                        var_18 &= ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_9 [20LL] [20LL] [i_5] [i_9]))) | (var_2))) << ((((~(var_5))) - (3997841681U)))));
                        arr_37 [14ULL] [i_9] [i_5 - 2] [i_3] [17U] [(unsigned short)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_3] [i_3] [18U] [i_3] [i_3] [i_3])) ^ (((/* implicit */int) arr_13 [(unsigned short)3]))))) ? (((/* implicit */long long int) ((unsigned int) var_6))) : (var_2)));
                    }
                    for (unsigned char i_10 = 2; i_10 < 17; i_10 += 4) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned char i_11 = 0; i_11 < 21; i_11 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [i_11] [(unsigned short)15] [(_Bool)1] [i_3]))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_3])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)32635)) >= (((/* implicit */int) arr_35 [(unsigned short)17] [(unsigned short)17] [i_5] [(unsigned short)17] [i_11]))))) : ((~(((/* implicit */int) arr_20 [i_3] [i_3] [i_5]))))));
                        }
                        for (int i_12 = 4; i_12 < 20; i_12 += 3) 
                        {
                            arr_45 [i_3] [i_3] [(unsigned short)17] [i_10 - 2] [i_12] [5] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_7)))) ? (((((/* implicit */_Bool) var_0)) ? (2251799813684736ULL) : (var_0))) : (var_6)));
                            arr_46 [i_3] [i_4 + 1] [i_4 + 1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_5)))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_4 + 1] [i_4] [13ULL] [i_4 + 1] [(unsigned short)6] [i_10 - 1] [(short)6])))));
                            arr_47 [i_3] [i_5] [i_3] [i_12] = ((short) ((((/* implicit */int) (unsigned char)147)) * (((/* implicit */int) (signed char)63))));
                            var_22 = ((/* implicit */unsigned int) arr_14 [i_3]);
                        }
                        for (short i_13 = 3; i_13 < 18; i_13 += 1) 
                        {
                            arr_52 [i_3] [i_3] [(short)3] [i_3] [5U] [i_3] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_35 [i_3] [(_Bool)1] [i_5] [i_3] [i_13])) : (((/* implicit */int) var_4))))));
                            var_23 = ((/* implicit */int) (+(var_9)));
                            arr_53 [i_13 + 2] [i_13] [i_13 + 2] [i_3] [i_13 - 1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3] [i_13])) ? (arr_39 [i_3] [i_3] [(_Bool)1] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-65)))))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 1) 
                        {
                            arr_56 [i_3] [15U] [i_3] [i_3] [i_3] [(short)0] = ((int) ((((/* implicit */_Bool) (unsigned char)134)) ? (arr_48 [i_3] [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)63)))));
                            var_24 = ((/* implicit */unsigned char) (signed char)79);
                        }
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_3])) - (((/* implicit */int) (signed char)-53))))))))));
                        var_26 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_4] [(unsigned short)16] [(signed char)14] [i_10 + 3])) >= (((/* implicit */int) (unsigned char)147))));
                    }
                    for (unsigned char i_15 = 2; i_15 < 17; i_15 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) arr_42 [i_4 + 1] [i_15 + 1]))));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)65))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)39))) : (var_6)));
                        /* LoopSeq 1 */
                        for (long long int i_16 = 0; i_16 < 21; i_16 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned int) var_4);
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (3930344414U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_3] [i_3] [(_Bool)1] [i_15] [(unsigned short)4] [i_16])) << ((((~(var_2))) + (3564934175459038882LL)))));
                            var_32 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_2)))) ? ((-(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [(_Bool)1] [(unsigned char)8] [i_15])))));
                        }
                        var_33 = (-(((/* implicit */int) arr_25 [i_15] [i_15 + 4] [1ULL] [i_15 + 2] [i_15])));
                        /* LoopSeq 2 */
                        for (unsigned short i_17 = 1; i_17 < 20; i_17 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) arr_61 [i_17 + 1] [i_15 + 2] [i_5] [i_3] [i_3]))) <= (((/* implicit */int) (unsigned char)105))));
                            var_35 = (!(((/* implicit */_Bool) var_9)));
                        }
                        for (int i_18 = 2; i_18 < 18; i_18 += 4) 
                        {
                            arr_67 [i_3] [i_3] [i_4] [i_15] [i_18 - 2] [i_4] [(unsigned char)1] = ((/* implicit */_Bool) (signed char)76);
                            var_36 |= ((/* implicit */int) ((signed char) arr_59 [i_3] [i_4 - 1] [i_5 - 2] [i_4 - 1] [8LL]));
                            arr_68 [i_3] [(unsigned char)14] [i_18] [i_15 - 2] [i_15 - 2] = ((/* implicit */short) (((~(((/* implicit */int) arr_10 [12U] [12U] [(short)21])))) | (((/* implicit */int) var_8))));
                            var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((unsigned int) var_7)))));
                            arr_69 [(short)1] [9U] [i_18] [i_3] [18ULL] [i_18 + 3] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_7) | (var_5)))) ? (arr_49 [i_18 - 1] [8U] [i_18] [i_18 - 2] [i_18 - 2] [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)150)))));
                        }
                    }
                    arr_70 [i_5 - 3] [i_3] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 0U)) / (arr_61 [i_5 + 1] [i_4] [i_5] [i_4] [i_5 - 4])));
                }
            } 
        } 
        arr_71 [i_3] [i_3] = ((/* implicit */unsigned char) 2064384U);
        arr_72 [i_3] = arr_3 [i_3];
    }
    /* vectorizable */
    for (unsigned int i_19 = 0; i_19 < 12; i_19 += 1) 
    {
        arr_75 [i_19] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */unsigned long long int) var_5)) : (var_6)))));
        arr_76 [10] = ((/* implicit */unsigned short) var_7);
    }
    var_38 |= ((/* implicit */unsigned int) var_2);
}
