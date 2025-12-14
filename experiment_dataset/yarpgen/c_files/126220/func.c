/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126220
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
    var_17 ^= ((/* implicit */short) ((unsigned long long int) min((((var_10) & (var_10))), ((-(var_10))))));
    var_18 = ((/* implicit */signed char) (+(((var_8) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)9605), (((/* implicit */unsigned short) (_Bool)0))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned char)4])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0])))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_1 [i_0])))))), (max((((/* implicit */unsigned long long int) ((unsigned int) arr_2 [i_0]))), (max((var_7), (((/* implicit */unsigned long long int) var_12))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 2; i_2 < 12; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 3; i_3 < 13; i_3 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned int) (+(1647305442)));
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((_Bool) arr_10 [i_2 + 2] [i_2 - 2] [i_2 - 1] [i_2 + 3] [i_2 + 3]));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            arr_18 [i_0] [(unsigned char)10] [(_Bool)1] [i_3] [i_3] = ((/* implicit */unsigned int) (+(var_16)));
                            var_21 = ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) ((arr_16 [i_0] [i_0] [i_2] [i_3] [i_5] [i_5]) >= (((/* implicit */unsigned int) 1071403607))))) : (((((/* implicit */_Bool) 687703212)) ? (((/* implicit */int) (_Bool)1)) : (687703212))));
                            var_22 = (-(((/* implicit */int) (unsigned short)28318)));
                        }
                        for (short i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */signed char) arr_19 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0]);
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) (-(((/* implicit */int) arr_14 [i_6] [i_6] [i_6] [i_6] [i_6])))))));
                        }
                        for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
                        {
                            var_25 = ((_Bool) arr_16 [i_0] [i_1] [i_2 - 1] [i_3] [i_7] [i_7]);
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((arr_8 [i_0] [i_1] [i_0] [i_3 + 2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_7] [i_3] [i_2 - 2] [i_1] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [6] [i_0] [i_7])) : (var_10))))));
                        }
                        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2 - 2])) ? ((+(arr_11 [i_0] [i_1] [i_2] [i_3 + 2]))) : (((/* implicit */unsigned int) arr_4 [i_0] [i_0])))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 1; i_8 < 14; i_8 += 3) 
                        {
                            var_28 -= ((((/* implicit */_Bool) var_11)) ? (var_7) : (var_13));
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1] [i_2 - 1])) ? (arr_4 [i_2 - 1] [i_3 - 3]) : (arr_4 [i_0] [i_3 - 1])));
                            arr_27 [i_0] [i_0] [(signed char)11] [i_0] [i_8 - 1] [i_3 - 3] [i_0] = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_2 - 1] [6] [i_0]);
                            var_30 *= ((/* implicit */unsigned short) arr_2 [i_2]);
                        }
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_2 - 2])) ? (((unsigned long long int) var_13)) : (((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                        var_32 = ((/* implicit */unsigned int) ((1945161230) - (((/* implicit */int) (unsigned char)235))));
                        /* LoopSeq 4 */
                        for (signed char i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            arr_34 [i_1] [i_1] [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) arr_22 [i_0] [i_0]);
                            var_33 = arr_9 [i_2] [i_2 + 1] [(unsigned short)2] [i_9];
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_9] [i_9])) ? (arr_31 [i_0] [i_1] [i_9] [i_9] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) (unsigned char)35)) : (((/* implicit */int) var_2)))))));
                            var_35 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)0))));
                        }
                        for (int i_12 = 0; i_12 < 15; i_12 += 3) 
                        {
                            var_36 = ((/* implicit */unsigned short) arr_3 [(unsigned short)4] [(short)13]);
                            var_37 = ((/* implicit */int) arr_33 [i_0] [8] [i_2] [i_0] [i_12] [i_2 + 3]);
                        }
                        for (unsigned int i_13 = 0; i_13 < 15; i_13 += 2) 
                        {
                            var_38 = ((/* implicit */int) var_0);
                            arr_44 [i_0] [i_1] [(signed char)3] [i_9] [i_0] = ((/* implicit */unsigned long long int) var_10);
                            var_39 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_22 [i_0] [i_0])) : (var_10)))) ? (((/* implicit */unsigned long long int) var_16)) : (((unsigned long long int) var_6))));
                        }
                        arr_45 [i_0] [i_0] = ((/* implicit */long long int) ((arr_29 [i_0] [i_1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_2 + 2])))));
                        var_40 = ((/* implicit */unsigned int) 2147483647);
                    }
                    for (short i_14 = 0; i_14 < 15; i_14 += 3) 
                    {
                        var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((signed char) arr_26 [i_2 - 2] [i_2 + 2] [i_2 + 3])))));
                        var_42 -= ((/* implicit */int) ((short) ((((/* implicit */_Bool) -687703211)) || (((/* implicit */_Bool) (unsigned char)32)))));
                        var_43 = (-(((((/* implicit */_Bool) -7943132887981408270LL)) ? (((/* implicit */int) (unsigned short)43963)) : (((/* implicit */int) var_14)))));
                        arr_48 [i_0] [i_2] [i_2] [i_14] |= ((/* implicit */unsigned int) (((+(var_11))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_35 [i_14] [i_2] [i_2] [i_2] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54655))))))));
                    }
                    var_44 = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)47)))))) / (arr_16 [i_2 + 2] [i_2 - 2] [i_2 - 1] [i_2 + 3] [i_2 + 1] [i_2 + 3]));
                }
                for (unsigned char i_15 = 0; i_15 < 15; i_15 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 1; i_16 < 11; i_16 += 1) 
                    {
                        for (unsigned short i_17 = 2; i_17 < 14; i_17 += 2) 
                        {
                            {
                                arr_58 [i_0] [i_0] [i_0] [i_0] [i_15] [i_16] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)50)), (560447494)))) ? ((((!(((/* implicit */_Bool) (unsigned short)43970)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_21 [i_0] [i_0])))) : (max((((/* implicit */long long int) (short)-26987)), (-5LL))))) : (((/* implicit */long long int) (((+(arr_11 [i_0] [i_1] [i_0] [i_17 + 1]))) >> (((((((/* implicit */_Bool) 199373399)) ? (5964009265952439736ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-96))))) - (5964009265952439719ULL))))))));
                                arr_59 [i_0] [i_1] [1LL] [i_16] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)4584)) : (((/* implicit */int) (unsigned char)112))))) ? (((/* implicit */int) (unsigned short)12288)) : (((int) (short)24059))))) ? (127U) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (signed char)95)), ((short)12516)))))));
                            }
                        } 
                    } 
                    var_45 = ((/* implicit */int) 658601912U);
                }
                /* LoopSeq 1 */
                for (int i_18 = 0; i_18 < 15; i_18 += 1) 
                {
                    var_46 += ((/* implicit */long long int) var_4);
                    var_47 = (-(((/* implicit */int) (unsigned char)154)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_67 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) ((short) arr_66 [i_0] [i_0] [i_0] [i_0])))));
                        var_48 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_23 [i_19])) ? (var_10) : (arr_12 [i_19] [i_18] [i_18] [i_0] [i_0]))));
                        var_49 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 950532415830328588LL))));
                        var_50 = ((/* implicit */_Bool) ((short) arr_29 [i_18] [i_0]));
                    }
                }
            }
        } 
    } 
}
