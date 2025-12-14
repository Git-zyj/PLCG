/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169790
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
    var_10 = ((/* implicit */int) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned char) arr_0 [i_0]);
                /* LoopSeq 4 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 13; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) (-(arr_6 [i_0 - 1] [i_0 - 3])));
                                arr_16 [i_4] [i_4] [i_4 - 1] [i_4] [i_4] [i_4] &= ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0 - 1]))));
                                var_12 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [11U] [i_2] [i_2])) ? (var_5) : (((/* implicit */int) var_8))))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)197)) < (((/* implicit */int) (_Bool)1)))))));
                                arr_17 [i_0] [i_0] [i_0] [i_4] [i_0] |= ((/* implicit */_Bool) -1151046279);
                            }
                        } 
                    } 
                    arr_18 [(unsigned short)10] |= ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (arr_11 [(short)2] [i_1 + 2] [(short)2] [i_2] [i_0 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)102)))));
                    var_13 = ((/* implicit */unsigned short) (short)19616);
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_14 = ((/* implicit */int) min((((min((var_2), (((/* implicit */unsigned long long int) var_4)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5]))))), (((/* implicit */unsigned long long int) ((2147483647) - (((/* implicit */int) (unsigned char)153)))))));
                    arr_22 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((min(((~(2147483647))), (((((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0] [i_5])) - (((/* implicit */int) arr_8 [i_0] [i_0 - 2] [i_1] [i_5])))))) % (((((/* implicit */_Bool) ((unsigned char) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */int) (signed char)-41)) : ((~(arr_20 [i_0 - 2] [i_0] [(unsigned char)4])))))));
                    var_15 = ((/* implicit */unsigned char) ((var_3) % (((unsigned long long int) 1076482115))));
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_0])) ? (min((((/* implicit */int) (unsigned char)146)), ((~(((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)33473)) - (((/* implicit */int) (unsigned char)99))))) ? (var_6) : (((((/* implicit */int) (unsigned char)241)) * (((/* implicit */int) arr_21 [i_5] [i_0] [i_0] [0U]))))))));
                }
                for (long long int i_6 = 1; i_6 < 13; i_6 += 3) 
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_5)) / (var_0)))) || (min(((_Bool)1), (arr_24 [i_1 + 1])))));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 1; i_7 < 12; i_7 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            var_18 += ((/* implicit */unsigned int) min((((((/* implicit */int) ((signed char) (unsigned char)185))) + (((int) var_2)))), (((((/* implicit */_Bool) arr_8 [4] [4] [4] [i_7 + 2])) ? (((((/* implicit */int) (signed char)(-127 - 1))) - (((/* implicit */int) arr_14 [i_8] [i_7 + 1] [(_Bool)1] [(_Bool)1] [i_0] [i_0])))) : (((/* implicit */int) arr_3 [i_8]))))));
                            var_19 = ((/* implicit */long long int) var_6);
                            var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((arr_20 [i_6 - 1] [(unsigned short)10] [(unsigned short)10]) | (((/* implicit */int) var_8))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115))) : (max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)159))) != (4294967284U)))), (var_4)))));
                        }
                        for (short i_9 = 1; i_9 < 12; i_9 += 3) 
                        {
                            arr_32 [i_9] [i_0 - 3] [i_0] [i_1 + 1] [i_0 - 3] = (i_0 % 2 == 0) ? (((/* implicit */signed char) min(((+((-(((/* implicit */int) (short)14919)))))), (((((/* implicit */int) var_9)) << (((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (arr_11 [i_0] [i_0] [i_6] [(unsigned short)11] [i_7] [i_6]))) - (603111190U)))))))) : (((/* implicit */signed char) min(((+((-(((/* implicit */int) (short)14919)))))), (((((/* implicit */int) var_9)) << (((((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (arr_11 [i_0] [i_0] [i_6] [(unsigned short)11] [i_7] [i_6]))) - (603111190U))) - (75876938U))))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? ((+(((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_7] [i_1]))) : (arr_5 [i_0 - 2] [i_0 - 2] [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_20 [i_0 - 1] [i_1 + 2] [i_9 + 2]))))));
                            var_22 = ((/* implicit */unsigned short) min((var_1), (((/* implicit */short) ((_Bool) arr_9 [i_0] [i_1 + 1])))));
                            var_23 = ((/* implicit */long long int) (+(var_5)));
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(arr_11 [i_0] [i_0] [i_0] [i_0] [i_7 + 1] [i_9])));
                        }
                        for (short i_10 = 0; i_10 < 14; i_10 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned short) min((arr_19 [i_0 - 2] [i_7 - 1]), (((/* implicit */unsigned long long int) ((unsigned int) var_5)))));
                            var_25 = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (var_4));
                            var_26 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) (unsigned char)41)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_3)))));
                            var_27 = ((/* implicit */unsigned char) var_1);
                            var_28 = ((/* implicit */long long int) ((int) (-(var_4))));
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 10; i_11 += 2) 
                        {
                            arr_39 [i_0] [i_1] [i_1] [i_1] [(signed char)9] = ((/* implicit */int) (((-(((/* implicit */int) max(((unsigned char)111), ((unsigned char)127)))))) == (((/* implicit */int) (!(((/* implicit */_Bool) (short)-1302)))))));
                            var_29 = ((/* implicit */unsigned short) (+(min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_9))))));
                            var_30 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (arr_5 [0LL] [i_6] [0LL]))))));
                        }
                        var_31 = ((/* implicit */long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))))), (var_7)));
                        var_32 = ((/* implicit */unsigned char) max(((-(2241728486U))), (((/* implicit */unsigned int) (+(arr_36 [i_0] [i_0] [i_6] [i_7 + 2] [i_7 + 2]))))));
                    }
                }
                for (long long int i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    var_33 += ((/* implicit */unsigned short) (+(((/* implicit */int) arr_3 [i_1]))));
                    /* LoopSeq 4 */
                    for (long long int i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_14 = 0; i_14 < 14; i_14 += 4) 
                        {
                            var_34 = ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_8 [i_0] [i_0 - 2] [i_0] [i_0]))))));
                            var_35 = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_0])) ? (((/* implicit */int) (unsigned char)102)) : (var_6)))))));
                            var_36 -= ((/* implicit */short) var_5);
                            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((int) (signed char)98))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_0] [i_0 - 3] [i_0] [i_0 + 1] [i_0 - 3] [i_0]))) : (((unsigned int) -3789412777470104435LL))));
                            var_38 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 50133210600470643ULL)) ? (-1840904027) : (arr_1 [i_0] [i_0 + 1])))) ? (max((arr_28 [i_0] [i_0] [i_12] [i_13] [i_12]), (arr_28 [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_0])) || (((/* implicit */_Bool) arr_48 [i_0]))))))));
                        }
                        var_39 += ((/* implicit */_Bool) ((min((((/* implicit */int) (_Bool)0)), (var_6))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 3212841293U)))))));
                        var_40 = ((/* implicit */_Bool) ((unsigned short) (~((((_Bool)0) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42482))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_15 = 2; i_15 < 11; i_15 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_41 = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_52 [i_1] [i_0] [i_1] [i_1 - 1] [i_1 - 1] [i_1])) > (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */long long int) 1082126008U))))));
                            var_42 = ((/* implicit */signed char) ((long long int) arr_11 [i_0] [i_0 - 1] [i_1 - 1] [i_15 + 1] [i_15] [i_15]));
                            var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_48 [i_0])) : (((int) var_5))));
                            arr_55 [i_16] [(unsigned short)1] [i_0] [i_12] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_15 + 1])) ? (arr_1 [i_0] [i_1]) : (((/* implicit */int) (unsigned char)126))));
                        }
                        for (unsigned long long int i_17 = 1; i_17 < 13; i_17 += 2) 
                        {
                            arr_59 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_1);
                            var_44 = ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
                            var_45 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_29 [i_15] [i_1] [i_1] [i_15] [i_17 + 1] [i_12]))));
                        }
                        var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [7] [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (14ULL)))) : (((/* implicit */int) arr_25 [i_0] [i_0 - 1] [i_0]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_18 = 0; i_18 < 14; i_18 += 3) /* same iter space */
                    {
                        var_47 = ((/* implicit */unsigned short) ((unsigned long long int) arr_24 [i_0]));
                        arr_62 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_34 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_1 + 1]))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_19 = 0; i_19 < 14; i_19 += 3) /* same iter space */
                    {
                        var_48 = ((/* implicit */_Bool) arr_6 [3ULL] [i_19]);
                        var_49 = ((/* implicit */int) arr_28 [i_19] [i_19] [i_19] [i_19] [8U]);
                        var_50 = ((/* implicit */unsigned long long int) (-(1767650033U)));
                    }
                }
                arr_66 [i_0] [i_1] = ((/* implicit */signed char) ((_Bool) arr_10 [i_1] [i_0]));
            }
        } 
    } 
}
