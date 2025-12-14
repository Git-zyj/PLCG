/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134708
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (int i_3 = 3; i_3 < 24; i_3 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_4 = 3; i_4 < 22; i_4 += 4) 
                    {
                        var_19 = ((/* implicit */short) ((signed char) var_13));
                        var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_1)) : (var_15))) : (((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), (var_16)))))))));
                    }
                    for (unsigned int i_5 = 1; i_5 < 24; i_5 += 4) 
                    {
                        arr_14 [i_0] [i_2] [i_3] [i_5] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned int) 2147483631)) : (arr_4 [i_2]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))));
                        var_21 = ((((((/* implicit */_Bool) min((arr_4 [i_2]), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_6 [(unsigned char)11] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_18))) : (((/* implicit */long long int) var_1)))) > (((/* implicit */long long int) arr_4 [i_2])));
                        arr_15 [(_Bool)1] [i_2] [(unsigned short)13] [i_3] [i_5] [i_5] = var_7;
                    }
                    arr_16 [i_2] = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1 + 2] [i_2 - 1] [i_1 + 2] [i_3]))))), (((((/* implicit */_Bool) arr_10 [i_1 + 2] [i_2 - 1] [i_3] [i_3])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_8 [i_0] [i_1] [(signed char)8] [i_1 + 2] [(signed char)3] [i_1] [i_1]))))));
                    /* LoopSeq 1 */
                    for (signed char i_6 = 1; i_6 < 22; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) ((short) min((((/* implicit */unsigned int) arr_13 [(unsigned short)18] [i_2 - 1] [i_1 - 2])), (arr_1 [i_3 - 3]))));
                        arr_19 [i_2] [i_2] [i_2] [i_3] [i_6] [i_2] = ((/* implicit */long long int) arr_18 [2LL] [2LL] [2LL] [i_3] [i_6]);
                        arr_20 [i_2] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_0 - 3] [i_0 - 3] [i_3 + 1])), (var_7))))) * (((((/* implicit */_Bool) arr_3 [i_0 - 4] [i_2] [i_3 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_5)))));
                        arr_21 [i_0] [i_0] [21] [i_3] [i_2] = ((/* implicit */unsigned int) max((arr_11 [i_0] [5U] [i_1 - 2] [i_1]), (((/* implicit */signed char) (_Bool)1))));
                    }
                    var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)114)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (((/* implicit */int) arr_6 [i_2] [i_2]))))))))));
                    var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) ((unsigned char) var_8))))));
                }
                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (signed char)79)))))));
            }
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_27 [i_0] [i_0] [i_7] [i_0] [i_7] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_2))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (arr_17 [i_0 - 2] [i_1 + 1] [i_7 - 1])));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
                    {
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_13 [i_9] [i_1] [i_9])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-59)))))))));
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)32767))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_7 [i_0] [i_7] [i_0] [i_9]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_7] [i_8] [i_8] [i_8] [i_9]))))))) : (((arr_0 [(_Bool)1] [1ULL]) ? (arr_5 [i_0] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                        var_28 = ((((/* implicit */int) arr_11 [i_0] [i_1 - 2] [i_7 - 1] [i_9])) < (((/* implicit */int) arr_11 [23U] [i_1] [i_1] [i_1])));
                    }
                }
                for (unsigned int i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    arr_33 [(unsigned short)0] [i_1] [i_0] [i_7] [2LL] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) * (3825056814U)))))) || ((((+(((/* implicit */int) var_2)))) > (((((/* implicit */_Bool) arr_5 [i_0] [i_7] [i_10])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))))));
                    arr_34 [i_0] [i_0] [i_7] [i_7] [i_7] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((unsigned int) max((var_17), (((/* implicit */int) var_13)))))) > (arr_9 [i_0] [i_7] [i_0] [i_0] [i_0])));
                    var_29 = ((/* implicit */signed char) max((((unsigned int) (signed char)-53)), (((((/* implicit */_Bool) var_17)) ? (arr_1 [i_7 - 1]) : (arr_1 [i_7 - 1])))));
                }
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_12 = 2; i_12 < 24; i_12 += 4) 
                    {
                        var_30 = ((/* implicit */_Bool) (signed char)119);
                        arr_39 [i_7] [i_7] [i_11] = var_15;
                        arr_40 [i_0] [i_7] [i_0] [i_0] [i_0] [i_0] = var_18;
                        var_31 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)32758)) || (((/* implicit */_Bool) (short)-32767)))) ? (((((/* implicit */_Bool) (signed char)49)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28009))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_11 - 1] [i_0]))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        arr_43 [i_0] [i_0] [8U] [i_7] [i_7] [8U] = ((/* implicit */_Bool) (signed char)-70);
                        arr_44 [i_0] [i_7] = ((/* implicit */unsigned long long int) ((((var_11) + (2147483647))) >> (((var_0) - (6899889933636244731ULL)))));
                        arr_45 [i_1] [i_7] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) arr_10 [i_7 - 1] [i_7 - 1] [i_11 - 1] [i_7 - 1])) ? (var_11) : (((/* implicit */int) (signed char)-69)));
                        var_32 = ((/* implicit */int) ((long long int) var_11));
                    }
                    for (signed char i_14 = 1; i_14 < 24; i_14 += 2) 
                    {
                        var_33 = ((((/* implicit */_Bool) ((2276439521U) / (134217727U)))) || (((/* implicit */_Bool) min((min((((/* implicit */long long int) (signed char)73)), (arr_30 [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) min((var_17), (((/* implicit */int) arr_24 [(_Bool)1] [i_1] [i_7] [i_14])))))))));
                        arr_50 [i_0] [i_1] [i_7] [i_7] [i_14] = ((/* implicit */_Bool) (+(arr_46 [(unsigned char)15])));
                        arr_51 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) min((var_17), (((/* implicit */int) ((((/* implicit */int) arr_42 [i_0] [i_1] [i_7 - 1] [i_11 - 1] [i_14] [7LL])) < (((/* implicit */int) arr_42 [i_0] [i_0] [i_1] [i_7 - 1] [i_7 - 1] [(unsigned char)3])))))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_37 [i_11 - 1] [i_1 - 1] [i_11 - 1] [i_0 + 1] [i_7]), (((/* implicit */unsigned long long int) arr_28 [i_1 + 1] [i_1] [i_1] [i_1] [i_1] [i_1 - 2])))))));
                        arr_56 [i_7] [16U] [(signed char)5] [24U] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_4 [i_7]))))) >> (((((/* implicit */int) max(((signed char)116), (arr_11 [i_0 + 2] [i_7 - 1] [i_11 - 1] [i_0 + 2])))) - (106)))));
                        var_35 = var_12;
                    }
                    arr_57 [i_0] [i_7] [23LL] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-98))))) * (min((((/* implicit */int) min((((/* implicit */short) var_9)), (var_4)))), (arr_48 [i_0] [i_1 - 1] [13U] [i_0] [i_7 - 1] [i_1])))));
                }
                /* LoopSeq 1 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    var_36 = (i_7 % 2 == zero) ? (((/* implicit */unsigned short) ((((min((arr_9 [i_7 - 1] [i_7] [i_1 - 2] [i_7] [i_0]), (arr_9 [i_7 - 1] [i_7] [i_1 + 1] [i_7] [2]))) + (9223372036854775807LL))) >> (((min((((/* implicit */long long int) (signed char)-69)), (arr_9 [i_7 - 1] [i_7] [i_1 - 2] [i_7] [i_0]))) + (5184698208772249245LL)))))) : (((/* implicit */unsigned short) ((((min((arr_9 [i_7 - 1] [i_7] [i_1 - 2] [i_7] [i_0]), (arr_9 [i_7 - 1] [i_7] [i_1 + 1] [i_7] [2]))) + (9223372036854775807LL))) >> (((((min((((/* implicit */long long int) (signed char)-69)), (arr_9 [i_7 - 1] [i_7] [i_1 - 2] [i_7] [i_0]))) + (5184698208772249245LL))) - (4683342188825873658LL))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_17 = 0; i_17 < 25; i_17 += 1) 
                    {
                        arr_63 [i_7] [21U] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_18))))), (var_6)));
                        var_37 = ((/* implicit */int) (_Bool)0);
                        arr_64 [i_7] [i_1] [i_7] [5LL] [i_17] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_59 [i_0] [i_0] [i_0] [i_0 - 2] [i_0])))));
                    }
                    /* vectorizable */
                    for (long long int i_18 = 0; i_18 < 25; i_18 += 4) 
                    {
                        arr_67 [i_7] [i_16] [i_7] [i_1] [i_7] = (-(arr_4 [i_7]));
                        arr_68 [i_7] [i_7] [i_7] [5ULL] [5ULL] = ((/* implicit */signed char) var_6);
                        var_38 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2018527793U)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (signed char)-124))))) && (((/* implicit */_Bool) arr_28 [i_0 + 1] [i_7 - 1] [i_1 + 2] [i_0 + 1] [i_0] [i_0])));
                        arr_69 [i_7] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_18] [i_16] [3] [i_0] [i_1] [i_0])) ? (((/* implicit */int) arr_42 [i_7] [i_16] [i_7] [(unsigned short)18] [(unsigned short)18] [i_0])) : (((/* implicit */int) arr_53 [i_18] [(_Bool)1] [14U]))))) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_62 [i_0] [(_Bool)1] [i_0] [(_Bool)1] [i_0] [i_7] [i_18]))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_19 = 0; i_19 < 25; i_19 += 4) 
                    {
                        var_39 = ((/* implicit */long long int) ((unsigned short) (unsigned short)16));
                        var_40 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 + 1])) || (((/* implicit */_Bool) arr_60 [i_0] [i_1 + 1] [i_7 - 1] [i_19] [i_19]))));
                        var_41 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_10) ? (arr_4 [i_19]) : (((/* implicit */unsigned int) var_11))))) ? (((((/* implicit */_Bool) var_1)) ? (arr_65 [(_Bool)1] [i_1] [i_7] [i_7] [(unsigned short)0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_66 [(_Bool)1] [i_16] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)62)) <= (((/* implicit */int) (signed char)-120))))))));
                        arr_74 [i_7] [i_1] [i_7] [i_19] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) 6854755484874018649ULL)) ? (((/* implicit */int) arr_58 [18U] [18U] [18U] [18U] [(unsigned char)6])) : (((/* implicit */int) (signed char)-62))));
                    }
                }
                arr_75 [i_7] = ((/* implicit */_Bool) min(((((+(((/* implicit */int) var_9)))) ^ (((((/* implicit */int) var_6)) << (((var_16) + (1721474040))))))), (((/* implicit */int) var_12))));
            }
            var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) ((((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_42 [i_1 - 1] [i_1] [i_1 + 1] [i_1] [i_0 - 3] [i_0])))) >> (((unsigned long long int) (unsigned short)0)))))));
        }
        /* vectorizable */
        for (unsigned char i_20 = 4; i_20 < 23; i_20 += 1) 
        {
            var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_1)))) ? (var_16) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (4294967290U))))));
            arr_78 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_55 [i_0] [i_0])) * (((/* implicit */int) (signed char)116))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_11 [i_0] [i_20] [i_0 + 1] [i_20]))));
        }
        for (int i_21 = 0; i_21 < 25; i_21 += 1) 
        {
            arr_81 [i_21] [i_21] = max((4294967287U), (1230280796U));
            arr_82 [i_0] [i_21] = ((/* implicit */unsigned int) ((unsigned char) -1904887799));
            var_44 = ((/* implicit */signed char) ((long long int) ((((int) arr_5 [i_0] [i_21] [i_21])) + (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-96)))))));
        }
        var_45 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_24 [i_0 - 4] [i_0] [i_0 - 1] [i_0 - 1])))), (((((/* implicit */int) arr_24 [i_0] [i_0 - 4] [i_0 - 4] [20LL])) / (((/* implicit */int) arr_24 [(_Bool)1] [i_0 - 4] [i_0 - 1] [i_0]))))));
        /* LoopSeq 1 */
        for (int i_22 = 1; i_22 < 24; i_22 += 4) 
        {
            arr_86 [i_0] [i_22] = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned int) arr_24 [i_22 + 1] [i_22 + 1] [i_0] [i_0 - 3])), (var_1)))));
            var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((arr_22 [i_0] [18LL] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_0] [i_0] [i_0] [i_22] [i_22]))))), (((/* implicit */long long int) (~(3U))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)21))))) ? (((((var_16) + (2147483647))) << (((var_0) - (6899889933636244747ULL))))) : (((/* implicit */int) ((-1904887796) == (((/* implicit */int) (unsigned char)123)))))))) : (((18446744073709551615ULL) >> (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) var_5)) : (arr_22 [i_0] [i_0] [i_0]))) - (607099933LL)))))));
        }
        var_47 = ((/* implicit */long long int) min((((var_5) >> (((/* implicit */int) arr_66 [i_0] [i_0 - 1] [i_0])))), (((/* implicit */unsigned int) ((_Bool) var_16)))));
    }
    for (unsigned char i_23 = 0; i_23 < 19; i_23 += 2) 
    {
        var_48 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_28 [(_Bool)1] [(_Bool)1] [i_23] [i_23] [i_23] [i_23]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_23] [i_23] [i_23] [i_23] [i_23]))) == (3556410721137002451ULL)))))))));
        var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (arr_4 [i_23])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_23])))))) : (arr_4 [i_23])));
    }
    var_50 = var_14;
}
