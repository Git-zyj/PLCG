/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149850
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
    var_20 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (~(var_18)))) ? ((~(var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        arr_3 [15] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (signed char)-73))))));
        var_21 = ((/* implicit */signed char) ((((unsigned long long int) ((((/* implicit */_Bool) 2147483635)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_1 [(unsigned short)11])))) != (((/* implicit */unsigned long long int) var_13))));
        arr_5 [i_0] [(unsigned short)2] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0 + 2])) + (((/* implicit */int) arr_2 [i_0 - 2]))))) ? (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1]))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_12 [i_0] [0] [(unsigned char)14] &= ((unsigned long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-71))) == (arr_8 [12ULL])))), (((((/* implicit */_Bool) arr_9 [i_0] [i_1 - 2] [10U])) ? (arr_8 [i_0]) : (((/* implicit */unsigned long long int) var_17))))));
                    arr_13 [i_1] [i_1] [i_1 + 1] [i_2] = (!(((/* implicit */_Bool) arr_11 [(short)6] [(short)6] [i_2] [(_Bool)1])));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        arr_16 [11] = ((/* implicit */short) (~(((unsigned long long int) min((arr_14 [i_3]), (var_15))))));
        arr_17 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((10559819522233278031ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3]))))))))) * (((/* implicit */int) max((((/* implicit */unsigned char) arr_15 [i_3])), ((unsigned char)157))))));
        var_22 -= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((signed char) ((12802028831301826571ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-83))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */int) arr_15 [i_3])) : (((/* implicit */int) var_16))))), ((~(var_13)))))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 1; i_4 < 21; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    var_23 = ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_7)))) / (arr_18 [i_4 - 1] [i_4 + 2]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_14) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4 + 2] [i_4 + 1] [i_5]))))))));
                    var_24 = ((/* implicit */unsigned long long int) (unsigned char)144);
                }
            } 
        } 
        arr_24 [(unsigned char)1] = (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_3]))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            for (signed char i_8 = 2; i_8 < 7; i_8 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 1; i_9 < 9; i_9 += 4) 
                    {
                        /* LoopSeq 4 */
                        for (short i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            arr_36 [i_10] [2ULL] [i_7] [i_7] [i_7] [i_6] [i_6] &= ((/* implicit */unsigned int) var_17);
                            arr_37 [i_8] [9] [i_8] [i_8] = ((/* implicit */signed char) arr_9 [i_8] [i_8] [i_10]);
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 1) 
                        {
                            arr_40 [i_6] [i_7] [i_6] [i_8] [i_11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) 7093472465137395852ULL)))));
                            var_25 *= ((/* implicit */_Bool) arr_20 [i_6] [(short)21] [i_8]);
                        }
                        for (short i_12 = 0; i_12 < 10; i_12 += 1) 
                        {
                            var_26 = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((var_6), (((/* implicit */short) (_Bool)1))))), (((((((/* implicit */_Bool) 1047552)) ? (((/* implicit */unsigned long long int) arr_21 [i_6])) : (arr_23 [i_8] [i_9] [(signed char)4]))) * (((/* implicit */unsigned long long int) (-(var_15))))))));
                            arr_43 [i_6] [i_6] [i_6] [i_8] [i_8] [i_6] [i_12] = ((/* implicit */int) ((unsigned short) (-(var_17))));
                        }
                        /* vectorizable */
                        for (int i_13 = 3; i_13 < 8; i_13 += 2) 
                        {
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_35 [i_8] [i_7] [i_8] [i_7] [i_7])) ? (11353271608572155764ULL) : (((/* implicit */unsigned long long int) arr_21 [i_7]))));
                            arr_47 [i_7] |= (short)32763;
                            arr_48 [i_7] [i_7] [i_8] [i_9] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)98)) * (((/* implicit */int) arr_10 [i_9 + 1] [i_8] [11LL] [i_9 - 1]))));
                        }
                        arr_49 [i_6] [i_8] [i_8] [i_9] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) (signed char)-85)))));
                        var_28 += ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_19 [i_8 - 2])) ? (((/* implicit */unsigned long long int) var_5)) : (arr_19 [i_8 + 2])))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_14 = 0; i_14 < 10; i_14 += 3) 
                        {
                            arr_53 [i_8] [i_14] [i_9] [4] [i_8 + 3] [i_7] [i_8] = ((/* implicit */unsigned long long int) arr_33 [i_6] [i_6] [i_6] [i_9]);
                            var_29 ^= ((/* implicit */unsigned long long int) var_3);
                            var_30 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (short)-32631))) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_6]))) : (((((/* implicit */_Bool) arr_51 [i_6] [i_7] [i_7] [(_Bool)1] [i_14])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_7])))))));
                        }
                        for (int i_15 = 0; i_15 < 10; i_15 += 3) 
                        {
                            var_31 = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_2 [i_7]))))));
                            var_32 = (i_8 % 2 == zero) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(arr_44 [(_Bool)1] [i_15] [i_8] [i_8] [i_8])))) ? (((((/* implicit */_Bool) arr_44 [i_6] [i_7] [i_8 + 2] [i_8] [i_8 + 2])) ? (((/* implicit */int) arr_34 [i_8] [i_7] [(short)8] [7] [(_Bool)1] [i_8 + 2] [7])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((_Bool) arr_9 [i_8] [i_7] [i_9 - 1]))))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_6] [i_6])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */int) arr_50 [i_6] [i_7] [8] [i_8] [i_9] [i_9] [(unsigned char)6])) : (((/* implicit */int) arr_22 [i_6] [i_7] [i_9]))))))))))) : (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (~(arr_44 [(_Bool)1] [i_15] [i_8] [i_8] [i_8])))) ? (((((/* implicit */_Bool) arr_44 [i_6] [i_7] [i_8 + 2] [i_8] [i_8 + 2])) ? (((/* implicit */int) arr_34 [i_8] [i_7] [(short)8] [7] [(_Bool)1] [i_8 + 2] [7])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((_Bool) arr_9 [i_8] [i_7] [i_9 - 1]))))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_6] [i_6])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */int) arr_50 [i_6] [i_7] [8] [i_8] [i_9] [i_9] [(unsigned char)6])) : (((/* implicit */int) arr_22 [i_6] [i_7] [i_9])))))))))));
                            arr_56 [i_6] [i_6] [i_6] [i_6] [i_8] [i_8] [i_15] = ((/* implicit */signed char) var_6);
                            arr_57 [i_8] = ((/* implicit */int) arr_11 [i_6] [i_7] [i_7] [i_9]);
                        }
                    }
                    /* LoopSeq 4 */
                    for (unsigned short i_16 = 3; i_16 < 7; i_16 += 1) 
                    {
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_41 [i_6] [i_16 - 1] [i_8 + 1] [i_8 + 1] [i_6])) / (arr_14 [i_16 + 2])))), (arr_55 [i_6] [(_Bool)1]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_17 = 0; i_17 < 10; i_17 += 4) 
                        {
                            var_34 *= ((/* implicit */short) (~(((/* implicit */int) arr_63 [i_8 - 2] [i_16] [i_16 + 1] [i_16 - 1]))));
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? ((-(var_11))) : (((/* implicit */long long int) arr_21 [i_6]))));
                            arr_65 [3ULL] [3ULL] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) 8654915312809664966LL);
                        }
                    }
                    for (int i_18 = 2; i_18 < 9; i_18 += 4) 
                    {
                        arr_68 [i_6] [i_6] [i_18] [(unsigned short)4] [0ULL] |= (((!(((/* implicit */_Bool) ((short) arr_25 [i_6] [i_8]))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_16)) != (((/* implicit */int) arr_30 [i_6] [i_6] [(signed char)8] [i_18])))) ? (((((/* implicit */_Bool) arr_45 [i_6] [i_7] [i_8] [i_18] [(signed char)1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_59 [i_6]))) : (((/* implicit */long long int) arr_55 [(signed char)4] [i_8 - 2]))))) : (min((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_50 [i_8] [i_8] [i_8 + 3] [i_8] [(short)4] [(signed char)9] [i_8])) > (((/* implicit */int) (_Bool)0))))))));
                        var_36 += ((/* implicit */unsigned long long int) (short)2171);
                    }
                    for (long long int i_19 = 0; i_19 < 10; i_19 += 1) /* same iter space */
                    {
                        arr_71 [i_8] [i_6] [i_6] [i_19] = ((/* implicit */int) arr_70 [i_8] [i_7]);
                        arr_72 [i_8] [i_7] [i_7] [i_19] = ((/* implicit */_Bool) var_1);
                    }
                    for (long long int i_20 = 0; i_20 < 10; i_20 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_58 [i_7] [i_7] [i_8] [i_20]))) != (min((((/* implicit */long long int) arr_35 [i_7] [(_Bool)1] [i_7] [i_7] [i_7])), (var_11)))))) >> (((((((/* implicit */unsigned long long int) arr_42 [i_8 - 1] [i_20] [i_20] [i_20] [i_20])) ^ (min((var_4), (var_4))))) - (8802866048421872567ULL))))))));
                        var_38 = ((/* implicit */_Bool) min((max((arr_69 [i_8 - 1]), (((/* implicit */unsigned short) (signed char)72)))), (min((arr_69 [i_8 + 1]), (arr_69 [i_8 - 1])))));
                        var_39 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) / (((/* implicit */int) arr_7 [i_6] [i_7] [11ULL]))))) ? (((arr_74 [i_7] [(signed char)1] [i_7] [i_7] [i_7]) << (((((/* implicit */int) var_7)) - (30204))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)77)))))), (16ULL)));
                        var_40 = ((/* implicit */int) (~(-8738391176775855460LL)));
                        arr_75 [i_6] [i_8] [(_Bool)1] [i_6] = ((/* implicit */unsigned long long int) var_18);
                    }
                    var_41 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned char) (+(var_5))))), (7093472465137395852ULL)));
                    var_42 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_6] [i_6] [i_7] [i_6] [i_7])) ? (arr_19 [i_8]) : (((/* implicit */unsigned long long int) var_18))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_6] [i_6] [i_8] [i_8] [i_8 + 1])) ? (((((/* implicit */_Bool) -2147483646)) ? (((/* implicit */int) arr_22 [i_6] [i_7] [i_6])) : (((/* implicit */int) (signed char)-106)))) : (((/* implicit */int) (!((_Bool)1))))))));
                }
            } 
        } 
        var_43 = ((/* implicit */_Bool) ((unsigned long long int) (+(((/* implicit */int) (signed char)0)))));
        var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) (~((((-(((/* implicit */int) arr_63 [i_6] [i_6] [i_6] [i_6])))) >> (((min((((/* implicit */unsigned long long int) (signed char)-106)), (var_14))) - (11676421632413760279ULL))))))))));
    }
}
