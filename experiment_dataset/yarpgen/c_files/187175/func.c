/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187175
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
    var_20 = ((/* implicit */unsigned int) var_10);
    var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_22 = ((/* implicit */_Bool) ((min((792788793521977369LL), (((/* implicit */long long int) ((((/* implicit */int) var_2)) + (var_11)))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-1))))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_4 [i_0] [(signed char)7]) : (((/* implicit */int) (unsigned short)19284)))) : (((/* implicit */int) min((var_1), ((short)-8)))))))));
            var_23 = ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) -595860526)), (7240880698368815013LL))))))) <= (((/* implicit */int) (short)-1)));
        }
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_0] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_7 [20] [20] [i_2]))));
            arr_9 [i_0] [(signed char)11] [i_0] = ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)18903)) : (((/* implicit */int) arr_5 [i_0] [i_2])));
        }
        for (unsigned short i_3 = 3; i_3 < 21; i_3 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_4 [i_3 - 1] [i_3 - 2]))))));
            arr_12 [i_3] = min((((((/* implicit */_Bool) (unsigned char)255)) ? (((var_10) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)9)))) : ((+(arr_0 [i_0]))))), ((-(((/* implicit */int) (_Bool)1)))));
            var_25 += ((/* implicit */short) ((((((/* implicit */unsigned int) ((((/* implicit */int) var_15)) / (arr_4 [(signed char)17] [(signed char)17])))) == (min((((/* implicit */unsigned int) var_11)), (var_19))))) ? (((/* implicit */long long int) ((/* implicit */int) ((-792788793521977370LL) > (((/* implicit */long long int) ((/* implicit */int) (short)-9822))))))) : (min((arr_2 [i_0] [i_3 - 2]), (arr_2 [i_0] [i_3 - 3])))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_4 = 1; i_4 < 21; i_4 += 1) 
            {
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-47)) ? (arr_2 [i_0] [10]) : (-654793599408601630LL)));
                arr_15 [i_0] [i_3] [i_3 - 3] [i_4] = ((/* implicit */int) (~(-8916648621295177183LL)));
                arr_16 [i_3] [(signed char)16] = ((/* implicit */signed char) var_17);
                arr_17 [i_0] [i_3 + 1] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_18))));
            }
            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
            {
                arr_21 [i_0] [i_3 - 1] [i_3] [i_5] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-97))))) ? (min((var_19), (((/* implicit */unsigned int) (short)-26694)))) : ((+(var_16)))))) % (-1LL)));
                arr_22 [i_3] = ((/* implicit */unsigned char) (~((~((~(((/* implicit */int) arr_5 [i_3] [i_5]))))))));
                var_27 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3 - 1] [i_3 - 3])) ? (arr_2 [i_3 + 1] [i_3 - 1]) : (((/* implicit */long long int) arr_10 [i_3 + 1] [i_3])))))));
                arr_23 [i_3] = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) arr_5 [i_0] [16U])) ? (((/* implicit */int) arr_18 [i_3] [i_3 + 1] [i_5] [0])) : (((/* implicit */int) var_12)))), (((/* implicit */int) var_2)))) & (((/* implicit */int) ((unsigned short) (unsigned short)0)))));
            }
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                {
                    for (signed char i_8 = 3; i_8 < 19; i_8 += 2) 
                    {
                        {
                            var_28 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_3 [i_0] [i_3] [i_8 - 2]))) ? ((~(min((var_9), (((/* implicit */int) (unsigned char)0)))))) : (((((((/* implicit */_Bool) (unsigned short)19294)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255)))) | (((/* implicit */int) ((((/* implicit */int) arr_24 [i_3] [i_0] [i_7] [i_8])) == (((/* implicit */int) arr_20 [i_7] [i_0] [i_0])))))))));
                            var_29 = ((/* implicit */unsigned int) 1045362165);
                            arr_32 [i_3] = ((/* implicit */unsigned short) ((int) ((int) (~(var_4)))));
                            arr_33 [i_0] [i_3] [i_6] [(short)6] [i_8 + 3] [i_0] = ((/* implicit */int) var_8);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (+(arr_30 [(_Bool)1] [i_3 - 3] [i_3] [i_3 - 3] [i_3 - 2] [i_6] [i_6]))))));
                    var_31 = ((/* implicit */unsigned char) ((int) (signed char)-50));
                }
            }
            /* vectorizable */
            for (short i_10 = 2; i_10 < 20; i_10 += 2) 
            {
                var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (((_Bool)1) ? (-792788793521977369LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-68))))))));
                /* LoopNest 2 */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (+(((/* implicit */int) arr_18 [i_0] [i_11 - 1] [i_12] [i_12])))))));
                            var_34 &= ((/* implicit */_Bool) var_1);
                            arr_44 [i_0] [i_3] = ((/* implicit */_Bool) ((unsigned char) 16403454066699788730ULL));
                            arr_45 [i_12] [i_3] [i_11] [i_3] [i_3] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_28 [i_11] [i_11] [(_Bool)1] [i_11]))));
                            var_35 = (unsigned char)8;
                        }
                    } 
                } 
            }
            arr_46 [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) max((arr_5 [i_0] [i_3]), (arr_5 [10U] [i_3 - 2]))))));
        }
        for (unsigned short i_13 = 3; i_13 < 21; i_13 += 2) /* same iter space */
        {
            var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) (+(((/* implicit */int) var_14)))))));
            arr_49 [i_0] [i_13] [(unsigned short)18] = ((/* implicit */short) ((((8031650855808295892ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_13] [i_13]))))) ? (min((arr_28 [i_13 + 1] [8U] [i_0] [8U]), (arr_28 [i_13 - 1] [i_13] [i_13 - 2] [i_13 - 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_29 [i_0] [i_0] [i_0] [(short)2] [i_0] [i_13]), (((/* implicit */unsigned short) (unsigned char)228))))))));
        }
        for (unsigned char i_14 = 4; i_14 < 21; i_14 += 4) 
        {
            var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (short)-9822))));
            arr_52 [i_14] [i_14] [i_14] = ((/* implicit */_Bool) (unsigned short)997);
            var_38 = ((/* implicit */unsigned short) max(((unsigned char)26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) arr_3 [i_14 - 4] [i_14] [i_14 - 4])))))));
        }
    }
    for (short i_15 = 1; i_15 < 19; i_15 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_16 = 2; i_16 < 19; i_16 += 1) /* same iter space */
        {
            arr_59 [i_15 + 1] [7] [i_15] &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 15937604691416916839ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_15] [i_15 + 1] [i_16 - 1] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_15 + 1] [i_15 + 1] [i_16 - 1]))) : (arr_28 [i_15] [i_15 + 1] [i_16 - 1] [(unsigned short)17]))))));
            arr_60 [i_16] = ((/* implicit */_Bool) max(((((-(((/* implicit */int) var_8)))) ^ (((/* implicit */int) max((((/* implicit */unsigned short) arr_50 [i_15] [i_16] [i_16])), (arr_47 [i_15] [i_15])))))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-10)))))));
            arr_61 [i_16 - 1] [i_16] [i_16] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) && (((((/* implicit */unsigned int) 1007532415)) < (var_13))))) ? ((((_Bool)1) ? ((-(((/* implicit */int) arr_31 [i_15 + 1])))) : (((((/* implicit */_Bool) arr_55 [i_15] [i_16 + 1])) ? (((/* implicit */int) (_Bool)1)) : (arr_57 [i_16 - 1] [(_Bool)0]))))) : (((/* implicit */int) arr_20 [i_15 - 1] [(signed char)8] [i_16 + 1]))));
            var_39 &= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_15 + 1]))))) ? (((var_13) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
            arr_62 [i_15] [i_15 - 1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (arr_2 [i_15] [i_15])));
        }
        /* vectorizable */
        for (unsigned short i_17 = 2; i_17 < 19; i_17 += 1) /* same iter space */
        {
            var_40 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_65 [i_17 - 1]))));
            arr_67 [i_15 + 1] = ((/* implicit */short) ((unsigned int) arr_1 [i_15 - 1]));
            arr_68 [i_17] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) : (18446744073709551615ULL)));
        }
        for (unsigned short i_18 = 2; i_18 < 19; i_18 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_19 = 0; i_19 < 20; i_19 += 4) 
            {
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    {
                        var_41 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-6341))));
                        arr_77 [i_20] [i_15] [10ULL] [i_15] = (+(-1));
                    }
                } 
            } 
            arr_78 [i_15] = ((/* implicit */signed char) min((((/* implicit */long long int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_75 [i_15] [i_15] [i_15] [i_15])))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)113))) > (3481521966U))))) : (min((((/* implicit */long long int) arr_39 [i_18] [i_15 + 1] [i_15 + 1])), (-792788793521977369LL)))))));
            /* LoopSeq 3 */
            for (unsigned short i_21 = 3; i_21 < 18; i_21 += 2) 
            {
                arr_81 [i_18] [i_18 + 1] [(signed char)15] [i_18 + 1] = ((/* implicit */long long int) var_14);
                arr_82 [i_21] [i_18] = ((/* implicit */unsigned char) (~(min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (-4529341106149456222LL))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) arr_69 [i_15])) : (3426917866U))))))));
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                var_42 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_47 [i_15 - 1] [i_15 + 1])) > (((/* implicit */int) arr_39 [i_15 - 1] [i_15 - 1] [i_15 - 1])))))));
                arr_86 [i_15] [i_15] [i_22] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (3030499982U))) ? (((/* implicit */long long int) (-(min((var_13), (((/* implicit */unsigned int) arr_73 [i_18 - 1] [i_18]))))))) : (-1LL)));
                /* LoopNest 2 */
                for (int i_23 = 2; i_23 < 19; i_23 += 4) 
                {
                    for (unsigned char i_24 = 0; i_24 < 20; i_24 += 1) 
                    {
                        {
                            arr_91 [i_15] [i_18] [i_24] [i_22] [i_23 - 2] [(short)17] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-12)), (9109593233416058376ULL)))) || (((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (arr_4 [i_24] [i_18]))))));
                            arr_92 [i_24] [18LL] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_84 [i_18 - 2])) >= (((/* implicit */int) arr_6 [i_18 - 1] [i_18])))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))));
                            arr_93 [i_24] [i_24] [i_23 - 2] [i_22] [i_18 + 1] [i_24] = min((((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-19788)), (5584575516099190679LL)))) ? (((/* implicit */int) (short)4307)) : (((((/* implicit */_Bool) (unsigned short)23267)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)0)))))), ((+(((/* implicit */int) var_10)))));
                            var_43 = ((/* implicit */long long int) 2856884067U);
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (signed char i_25 = 2; i_25 < 19; i_25 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_26 = 1; i_26 < 19; i_26 += 1) 
                {
                    arr_99 [(unsigned short)12] [(signed char)13] [i_25] = ((/* implicit */unsigned long long int) ((signed char) (~(((/* implicit */int) arr_6 [i_15 + 1] [i_26 + 1])))));
                    arr_100 [i_15] [(short)13] [(short)13] [i_26] = var_17;
                    /* LoopSeq 1 */
                    for (unsigned short i_27 = 0; i_27 < 20; i_27 += 2) 
                    {
                        arr_105 [i_15] [i_18 - 2] [i_25] [i_26] = ((/* implicit */short) arr_64 [i_18] [i_25] [4]);
                        arr_106 [(short)19] [i_18 - 1] [i_18 - 1] [i_18] [i_18] [(short)19] = ((/* implicit */_Bool) (+(arr_41 [(unsigned short)12] [i_18 - 1] [i_18 - 1] [i_25] [i_18 - 2])));
                    }
                    arr_107 [i_15 - 1] [i_15] [(signed char)11] [i_18] [i_25] [i_26 + 1] = ((/* implicit */short) (signed char)-70);
                    var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) 357357794))) - (((/* implicit */int) (short)-6341))));
                }
                for (unsigned int i_28 = 0; i_28 < 20; i_28 += 2) 
                {
                    arr_110 [(_Bool)1] [i_18 + 1] [i_18 + 1] [i_28] [i_25] [i_28] &= ((/* implicit */long long int) ((((var_11) / (((/* implicit */int) (unsigned short)42249)))) | (var_4)));
                    var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) ((unsigned char) ((arr_48 [i_15 + 1] [9LL]) < (var_19)))))));
                    /* LoopSeq 1 */
                    for (int i_29 = 0; i_29 < 20; i_29 += 2) 
                    {
                        arr_114 [(_Bool)1] [(_Bool)1] [i_25 + 1] [11U] [11U] = ((/* implicit */int) (unsigned short)3336);
                        var_46 = ((((((/* implicit */_Bool) (unsigned short)22084)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)69))) : (var_5))) >> (((((/* implicit */int) (unsigned char)206)) - (198))));
                        var_47 = ((/* implicit */long long int) var_14);
                        arr_115 [i_15 - 1] [i_15 - 1] [i_28] [i_28] [i_28] = ((/* implicit */unsigned char) var_14);
                    }
                }
                var_48 = ((5248180880322922484LL) != (((/* implicit */long long int) arr_101 [i_15] [i_15 - 1])));
                arr_116 [i_15] [i_25] = (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (var_4))));
            }
            arr_117 [18] [i_18] = ((var_17) ? (((int) arr_112 [(_Bool)1] [i_15 + 1] [i_15] [i_18] [i_18] [i_18])) : (((/* implicit */int) (unsigned char)168)));
        }
        arr_118 [i_15] [i_15] = ((_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (4027715670U)));
    }
}
