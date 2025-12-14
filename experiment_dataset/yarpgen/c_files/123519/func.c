/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123519
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
    var_18 = ((/* implicit */unsigned char) max((var_7), (((/* implicit */signed char) (((+(((/* implicit */int) var_4)))) > (((/* implicit */int) (signed char)127)))))));
    var_19 ^= ((/* implicit */signed char) max((1532576519979968782ULL), (((/* implicit */unsigned long long int) (unsigned short)65535))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) (unsigned char)163);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])) && (((/* implicit */_Bool) (signed char)92))));
            /* LoopSeq 3 */
            for (short i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                var_22 = ((/* implicit */unsigned int) var_11);
                var_23 = ((/* implicit */unsigned short) ((24576U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_0 - 1])))));
                arr_8 [i_0] [i_1] [i_2] [10] = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) var_0)) : (-1593285978)))) : (((unsigned long long int) 1652728933U))));
                var_24 = ((/* implicit */unsigned int) max((var_24), (var_6)));
                /* LoopNest 2 */
                for (unsigned char i_3 = 2; i_3 < 9; i_3 += 3) 
                {
                    for (unsigned short i_4 = 2; i_4 < 10; i_4 += 3) 
                    {
                        {
                            arr_13 [i_3] [i_3] [i_2] [7ULL] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (9762968185374773040ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16384)))))) ? (((var_15) >> (((arr_6 [i_0]) - (16251808071433681648ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32)))));
                            var_25 = ((/* implicit */_Bool) (+(-9223372036854775806LL)));
                        }
                    } 
                } 
            }
            for (short i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                arr_16 [i_0] [i_1] [i_5] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 1388935608)) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44101)))))));
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_0 + 3])))))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_27 &= ((/* implicit */_Bool) (unsigned char)163);
                /* LoopNest 2 */
                for (unsigned short i_7 = 2; i_7 < 8; i_7 += 3) 
                {
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        {
                            arr_26 [i_0] [2U] [i_6] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1886866633U)) && (((/* implicit */_Bool) arr_18 [i_7] [i_7] [i_7] [i_7]))));
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((9223372036854775807LL) == (((/* implicit */long long int) var_14)))))) > (((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_7] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)189))) : (2841451658408561649ULL)))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
            }
            var_30 = ((/* implicit */int) ((unsigned short) (_Bool)0));
        }
    }
    /* LoopNest 3 */
    for (short i_9 = 1; i_9 < 12; i_9 += 1) 
    {
        for (signed char i_10 = 2; i_10 < 12; i_10 += 4) 
        {
            for (unsigned char i_11 = 4; i_11 < 13; i_11 += 1) 
            {
                {
                    arr_37 [10] [i_9] [i_9] [i_9] = (+(((/* implicit */int) (signed char)-77)));
                    /* LoopSeq 3 */
                    for (int i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        arr_41 [i_9] [i_9] [(unsigned short)7] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)87)), (((((/* implicit */_Bool) 428401878)) ? (((/* implicit */long long int) 26U)) : (7748120440078867833LL)))));
                        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((min((((/* implicit */int) (unsigned short)8447)), (var_17))) | ((+(((/* implicit */int) (unsigned char)0))))))) ? (((arr_38 [i_11] [i_11 - 2] [i_11 - 1] [i_9] [i_11]) / (((2685406408U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_9] [(unsigned char)11] [(signed char)8]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)57065)) : (((/* implicit */int) arr_33 [i_9] [i_12] [i_9])))))));
                        arr_42 [i_10] [i_9] [i_12] = ((/* implicit */signed char) max((max((var_5), (((/* implicit */unsigned long long int) arr_27 [i_9])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_9])) > (((/* implicit */int) arr_27 [i_9])))))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 14; i_13 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_14 = 2; i_14 < 12; i_14 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(max((arr_43 [i_9] [i_9] [i_13] [i_14]), (((/* implicit */int) (unsigned char)240))))))) ? (((((/* implicit */_Bool) arr_35 [i_9 + 2] [i_10 - 2] [i_14 - 2])) ? (((/* implicit */int) arr_35 [i_9 + 1] [i_10 + 1] [i_14 - 1])) : (((/* implicit */int) arr_35 [i_9 + 2] [i_10 - 1] [i_14 - 1])))) : (((/* implicit */int) arr_30 [(signed char)13] [i_14]))));
                            var_33 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) 347115772U))) > (((/* implicit */int) max((((/* implicit */unsigned char) arr_33 [i_10] [i_9 + 1] [i_9])), ((unsigned char)61))))));
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 14; i_15 += 4) 
                        {
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (signed char)87))) && (((/* implicit */_Bool) arr_38 [i_9] [i_11 - 2] [i_15] [i_9] [i_15]))));
                            var_35 = ((/* implicit */unsigned char) (short)12341);
                            var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((arr_28 [i_11 - 4] [11]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)26656))))))));
                        }
                        var_37 = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_9] [i_9] [i_9]))) ^ (4294942688U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_47 [i_10 - 2] [i_10] [i_10] [i_10] [(short)5])) == (((/* implicit */int) arr_47 [i_10 + 2] [(unsigned char)5] [(signed char)1] [i_10] [i_9])))))));
                        arr_51 [(unsigned char)2] [i_10] [i_11] [i_9] = (short)-26656;
                    }
                    /* vectorizable */
                    for (short i_16 = 0; i_16 < 14; i_16 += 1) 
                    {
                        var_38 = -162165203;
                        var_39 = ((/* implicit */long long int) min((var_39), (((/* implicit */long long int) (short)21697))));
                        var_40 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)21434))));
                        var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_11 - 2] [i_11 - 3] [i_11 - 1] [i_11 - 4])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_32 [i_11 + 1] [i_11 - 2] [i_9])));
                    }
                    arr_54 [i_9] [i_10] [i_9] = ((/* implicit */unsigned char) 3231911410843027129LL);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_17 = 3; i_17 < 13; i_17 += 2) 
                    {
                        var_42 = ((/* implicit */int) max((var_42), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_17)) ^ (-1LL)))) ? ((~(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned char)32)))))))));
                        var_43 = ((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) var_0)))));
                        /* LoopSeq 1 */
                        for (unsigned short i_18 = 0; i_18 < 14; i_18 += 1) 
                        {
                            arr_61 [i_18] [i_18] [i_18] [i_9] [i_11] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_9])) ? (2345812397983815645LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) && (((/* implicit */_Bool) var_8))));
                            arr_62 [(_Bool)1] [(signed char)10] [i_9] [i_9] [i_9] [i_11] = ((unsigned char) arr_28 [i_17 - 3] [i_17]);
                            var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))) : (18446744073709551615ULL)));
                        }
                        arr_63 [i_9] [(unsigned char)0] [i_11] [i_17] = ((/* implicit */unsigned int) ((((_Bool) arr_52 [i_9] [i_9])) ? (((/* implicit */int) arr_57 [i_11 + 1] [(unsigned char)2] [i_11] [i_10] [i_9] [13])) : (((/* implicit */int) ((unsigned char) arr_44 [i_9] [i_11] [i_10] [i_9])))));
                        var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [(_Bool)1] [i_9] [i_9] [i_9 - 1] [(_Bool)1] [1LL])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_8))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_19 = 0; i_19 < 14; i_19 += 3) 
                    {
                        for (short i_20 = 3; i_20 < 13; i_20 += 2) 
                        {
                            {
                                var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) (unsigned char)186))) ? (((/* implicit */int) (unsigned short)4012)) : (((/* implicit */int) var_13))));
                                var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_60 [i_10 + 1] [i_10])) * (((/* implicit */int) arr_60 [i_10 + 1] [i_10]))))) ? (((((/* implicit */int) arr_60 [i_10 + 2] [i_10])) / (-1091231186))) : (((/* implicit */int) ((unsigned short) arr_60 [i_10 + 1] [i_10])))));
                                var_48 = ((/* implicit */unsigned char) var_17);
                                var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) 8380416))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_50 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_7)))), (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (var_0))))));
}
