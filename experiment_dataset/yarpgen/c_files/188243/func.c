/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188243
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
    var_18 = ((/* implicit */short) ((signed char) var_17));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 10189878873566839988ULL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((((/* implicit */_Bool) ((short) var_1))) ? (((/* implicit */unsigned int) ((int) var_8))) : (((unsigned int) var_15))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_20 ^= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1))))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 - 1] [(short)7] [(short)13]))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) (_Bool)1);
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_14)), (arr_8 [i_4])))) ? (max((var_2), (((/* implicit */long long int) arr_16 [i_4] [i_3] [(signed char)3] [10ULL] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6325)))))) ? ((~(((long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) min((((unsigned char) var_14)), (((unsigned char) (short)4262))))))));
                        }
                        var_23 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) ((unsigned char) 829377757))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) max((var_17), (((/* implicit */unsigned short) var_0))))))), (((/* implicit */int) var_9))));
                        var_24 = ((/* implicit */short) 471010633);
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */short) ((unsigned char) arr_7 [i_0] [i_0] [i_0]));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 3) 
                        {
                            var_26 = ((/* implicit */short) (-(((unsigned int) (short)511))));
                            var_27 -= ((/* implicit */signed char) (-(-7119678678842452225LL)));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
                        {
                            var_28 += ((/* implicit */unsigned short) ((unsigned int) arr_20 [i_1 + 1] [i_2 - 2]));
                            var_29 = ((/* implicit */unsigned long long int) ((unsigned short) arr_22 [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_1 + 1] [i_1]));
                            var_30 -= ((/* implicit */signed char) (+(2933604410272224792ULL)));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_5] [i_5] [i_2] [i_5] [16LL]))))) ? (((((/* implicit */_Bool) var_12)) ? (arr_0 [2LL] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_2 + 2] [i_2]))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
                        {
                            var_32 = ((/* implicit */short) ((signed char) arr_6 [i_0] [i_1 - 1] [i_2 - 2]));
                            var_33 = ((/* implicit */_Bool) (+(518876492U)));
                            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) 9233761992317826794ULL))));
                        }
                        var_35 = ((/* implicit */unsigned char) ((signed char) arr_5 [i_2] [i_0]));
                        var_36 = ((/* implicit */int) var_13);
                    }
                    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 3) /* same iter space */
                    {
                        var_37 = ((/* implicit */short) max((((/* implicit */long long int) var_7)), (((long long int) arr_15 [i_9] [i_2 + 2] [i_2 + 2] [i_2 + 2] [i_9]))));
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 17; i_10 += 4) 
                        {
                            var_38 = ((short) arr_1 [14ULL]);
                            var_39 = ((/* implicit */short) (-((~(arr_7 [i_0] [(short)15] [i_10])))));
                            var_40 = ((/* implicit */unsigned long long int) ((int) arr_18 [i_9]));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            var_41 = ((/* implicit */int) ((unsigned int) min(((short)32512), (arr_15 [i_9] [(_Bool)1] [i_2 + 1] [i_2] [i_2]))));
                            var_42 = ((/* implicit */short) ((unsigned int) var_3));
                        }
                        for (unsigned char i_12 = 0; i_12 < 17; i_12 += 4) 
                        {
                            var_43 += ((/* implicit */_Bool) ((unsigned char) (unsigned short)63310));
                            var_44 = ((/* implicit */unsigned long long int) min((var_44), (max((((unsigned long long int) arr_23 [i_2 - 1] [i_2] [(short)8] [i_12] [i_12])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -853892503)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58962))))))))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_13 = 0; i_13 < 17; i_13 += 3) 
                        {
                            var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) var_6))));
                            var_46 = ((/* implicit */short) (_Bool)1);
                            var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) (~(arr_9 [i_2 - 1] [i_1 - 1]))))));
                        }
                        for (short i_14 = 0; i_14 < 17; i_14 += 1) 
                        {
                            var_48 = ((/* implicit */int) var_0);
                            var_49 -= ((/* implicit */long long int) (unsigned short)28675);
                            var_50 |= ((/* implicit */unsigned char) var_14);
                        }
                    }
                    for (unsigned char i_15 = 0; i_15 < 17; i_15 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_16 = 0; i_16 < 17; i_16 += 4) 
                        {
                            var_51 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_0] [i_2] [(unsigned char)9])) ? (((/* implicit */int) (short)-14016)) : (((/* implicit */int) (short)9))))), (3940649673949184LL)))) ? (((int) arr_20 [i_0] [i_1])) : (((/* implicit */int) var_3))));
                            var_52 = ((/* implicit */signed char) ((long long int) max(((short)-27944), (((/* implicit */short) (unsigned char)138)))));
                            var_53 += ((/* implicit */unsigned int) var_6);
                        }
                        var_54 = ((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_0] [(_Bool)1] [4ULL] [(unsigned char)14])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_2 - 2] [i_1 - 1] [i_1] [i_15] [i_1])) ? (((/* implicit */int) arr_14 [i_2 - 2] [i_1 - 1] [0] [i_15] [0])) : (((/* implicit */int) (unsigned char)4))))) : (12341673166781750836ULL)));
                        var_55 = ((/* implicit */unsigned long long int) arr_44 [i_0]);
                        var_56 += ((/* implicit */_Bool) var_7);
                    }
                    var_57 += ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) ((short) arr_4 [(unsigned short)2]))))));
                    var_58 -= ((unsigned char) min((arr_7 [16] [i_1 + 1] [i_0]), (((/* implicit */long long int) var_14))));
                    var_59 = ((/* implicit */unsigned int) 607566645);
                }
            } 
        } 
    } 
}
