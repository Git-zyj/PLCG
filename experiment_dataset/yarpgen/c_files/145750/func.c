/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145750
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
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((var_6) << (((((/* implicit */int) (unsigned char)178)) - (167))))))));
    var_20 = ((/* implicit */long long int) min((var_20), ((~(((((((/* implicit */int) var_11)) != (((/* implicit */int) (short)-553)))) ? (var_5) : ((~(var_1)))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_4 [i_0 - 1] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)(-32767 - 1)))))), (((max((((/* implicit */unsigned long long int) (short)9513)), (var_2))) | (((/* implicit */unsigned long long int) ((arr_2 [i_0]) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) arr_2 [i_0 - 1])))))))));
        var_21 = ((/* implicit */unsigned int) ((short) (_Bool)0));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (~(max((15179511971562558949ULL), (((/* implicit */unsigned long long int) (_Bool)0)))))))));
        var_23 = ((/* implicit */unsigned short) (-(((((((/* implicit */long long int) ((/* implicit */int) (short)32767))) >= (-6080089752413954693LL))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) == (var_12))))))));
    }
    for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */short) max(((!((!(((/* implicit */_Bool) 4270658303U)))))), (((((/* implicit */long long int) ((/* implicit */int) var_14))) != (arr_6 [i_1])))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (_Bool)1))) - (((/* implicit */int) ((_Bool) arr_6 [i_1])))))) >= (((((/* implicit */_Bool) arr_8 [i_1])) ? (((long long int) (short)32767)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_8 [i_1]))))))));
    }
    for (short i_2 = 1; i_2 < 19; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */_Bool) max(((-(791377414570372185LL))), (((/* implicit */long long int) var_16))));
        var_25 = ((/* implicit */short) ((signed char) (short)32767));
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) arr_10 [(signed char)8]))));
    }
    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 3) 
    {
        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) arr_10 [(_Bool)1]))));
        arr_15 [i_3 - 1] = ((/* implicit */short) ((((16953029568590950217ULL) - (((/* implicit */unsigned long long int) -1554214297)))) << (((/* implicit */int) ((short) ((-4882184856124495516LL) < (0LL)))))));
        /* LoopSeq 3 */
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            var_28 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_17)), (arr_7 [i_3] [i_4])));
            arr_18 [i_3 + 1] [i_3 + 1] = ((/* implicit */long long int) arr_17 [i_3] [i_4]);
            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) max((max((((/* implicit */unsigned long long int) arr_14 [i_3 + 1])), (((arr_10 [i_4]) << (((arr_17 [i_3 + 1] [i_3 + 1]) - (9711860514353481712ULL))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >> (((707302013808907939ULL) - (707302013808907939ULL)))))))))));
            var_30 = ((/* implicit */short) ((var_6) << (((long long int) var_14))));
        }
        /* vectorizable */
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_21 [i_5] [i_5 - 1] = ((arr_13 [i_3 - 1]) == (arr_13 [i_3 + 1]));
            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((arr_16 [i_3 + 1] [i_5]) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3 + 1] [(unsigned short)8]))) : (arr_6 [i_3 - 1]))))));
        }
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    {
                        arr_28 [i_3] [i_6] [i_7] [i_8] [i_8] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_14 [i_3 - 1])) : (((((/* implicit */_Bool) 1239842362)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_26 [i_6 - 1] [i_6 - 1] [2] [i_7] [i_7] [i_7])) > (((arr_6 [i_8]) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))))));
                        arr_29 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) 707302013808907939ULL))) ? (((((/* implicit */long long int) ((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) arr_2 [i_7])))))) - (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3]))) + (arr_14 [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_3] [i_7])))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (short i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                var_32 = ((/* implicit */_Bool) max((min((arr_11 [i_6] [(_Bool)1]), (((/* implicit */unsigned long long int) arr_1 [i_6] [i_9])))), (((/* implicit */unsigned long long int) arr_20 [i_3] [i_9]))));
                /* LoopSeq 2 */
                for (short i_10 = 1; i_10 < 9; i_10 += 4) 
                {
                    var_33 = ((/* implicit */_Bool) arr_6 [i_10 - 1]);
                    arr_35 [i_3 - 1] [i_3 - 1] [i_9] [i_3 - 1] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 707302013808907939ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (10764073751673404156ULL)));
                }
                for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) 
                {
                    var_34 = ((/* implicit */unsigned long long int) arr_30 [i_3 - 1] [i_3]);
                    var_35 = ((/* implicit */_Bool) arr_33 [i_3] [i_6] [i_9] [i_6] [i_11] [i_6]);
                    arr_39 [i_9] [i_6] [i_9] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10458)) ? (((/* implicit */int) arr_20 [i_3] [i_9])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_4))))) : (((arr_20 [i_3] [i_9]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_1))))));
                    var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_3 + 1] [i_3 + 1] [i_11])) ? (((/* implicit */int) arr_31 [i_3 + 1] [i_3] [i_11])) : (((/* implicit */int) arr_31 [i_3 + 1] [i_3 + 1] [i_11]))))) || (((((/* implicit */_Bool) arr_38 [i_11] [i_6] [i_6] [i_3] [i_11])) || (((/* implicit */_Bool) var_5)))))))));
                }
                arr_40 [i_9] [i_6 - 1] = ((/* implicit */signed char) var_15);
            }
            /* vectorizable */
            for (unsigned short i_12 = 3; i_12 < 7; i_12 += 1) 
            {
                var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [0LL] [i_6 - 1])) ? (((((/* implicit */int) var_9)) << (((var_7) + (6754537613343156112LL))))) : (((/* implicit */int) ((_Bool) var_14))))))));
                var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(arr_33 [i_3 - 1] [i_12 + 2] [i_12 + 2] [i_3 - 1] [i_3 - 1] [i_3 - 1])))) / (((arr_17 [i_6 - 1] [i_3]) * (17739442059900643677ULL))))))));
                /* LoopSeq 3 */
                for (long long int i_13 = 0; i_13 < 10; i_13 += 4) 
                {
                    var_39 = ((/* implicit */short) ((((/* implicit */int) arr_19 [i_6 - 1])) != (((/* implicit */int) arr_32 [i_3] [i_3 - 1] [i_3] [i_6 - 1] [i_12 + 2]))));
                    arr_45 [i_12] [i_6] [i_12] [i_12] = ((/* implicit */signed char) arr_34 [i_12] [i_12 - 1] [i_12]);
                }
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        var_40 = ((/* implicit */unsigned long long int) ((int) arr_27 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_12]));
                        arr_52 [i_12] = ((/* implicit */unsigned char) 7391708867497964452LL);
                        var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_3 + 1] [i_3 - 1] [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_42 [i_3 + 1] [i_3 + 1] [i_3] [i_3 - 1]))))));
                    }
                    var_42 = ((/* implicit */signed char) arr_37 [i_3 - 1] [i_3] [i_3] [i_3 + 1] [i_3 + 1]);
                }
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) ((((((/* implicit */int) (signed char)-11)) + (2147483647))) << (((((/* implicit */int) arr_48 [4LL] [i_6 - 1])) - (46268))))))));
                        var_44 = ((/* implicit */unsigned char) var_9);
                    }
                    for (int i_18 = 0; i_18 < 10; i_18 += 1) 
                    {
                        var_45 = ((/* implicit */unsigned long long int) arr_43 [i_3 + 1] [i_3 - 1] [i_3] [i_12] [i_3 + 1] [i_3]);
                        var_46 = ((/* implicit */_Bool) max((var_46), ((_Bool)1)));
                        arr_61 [i_18] [(_Bool)1] [i_12] [i_16] [i_6] [i_12] [i_18] = ((/* implicit */_Bool) ((long long int) arr_11 [i_6 - 1] [i_12 + 1]));
                        var_47 = ((/* implicit */unsigned int) ((_Bool) (_Bool)0));
                    }
                    for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 4) 
                    {
                        var_48 = ((/* implicit */short) 0ULL);
                        arr_64 [i_3] [i_3] [i_3] [i_12] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_51 [i_16] [i_3 - 1] [3LL] [i_16 - 1])) << (((arr_22 [i_12 + 1] [i_16 - 1] [i_16]) - (15673045270890912388ULL)))));
                        var_49 = ((/* implicit */_Bool) arr_7 [i_3] [i_16]);
                        var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_44 [i_16 - 1])))))));
                    }
                    var_51 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_3] [i_12] [i_12])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (short)32765)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_60 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))) : (arr_13 [i_12 - 1])));
                }
                var_52 = ((/* implicit */unsigned long long int) max((var_52), (((/* implicit */unsigned long long int) (+(arr_55 [6U] [i_12 - 2]))))));
                /* LoopSeq 3 */
                for (short i_20 = 2; i_20 < 8; i_20 += 4) 
                {
                    var_53 = ((/* implicit */_Bool) min((var_53), (((/* implicit */_Bool) ((long long int) (_Bool)1)))));
                    var_54 = ((/* implicit */short) min((var_54), (((/* implicit */short) (-(((((/* implicit */_Bool) 14473461435116883706ULL)) ? (14057716139537994098ULL) : (var_18))))))));
                }
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    arr_69 [i_12] [i_12] = ((/* implicit */short) arr_59 [i_3] [i_12]);
                    var_55 = arr_16 [i_3] [i_6];
                    var_56 = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4741396237295451497ULL));
                    arr_70 [i_12] [i_6 - 1] = ((((_Bool) 4532132315676162322LL)) ? (((/* implicit */int) arr_24 [i_12])) : (((/* implicit */int) arr_38 [i_12] [i_6 - 1] [i_12] [i_21] [i_21])));
                }
                for (long long int i_22 = 0; i_22 < 10; i_22 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_23 = 2; i_23 < 8; i_23 += 1) 
                    {
                        var_57 = ((/* implicit */unsigned int) min((var_57), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_50 [i_3 - 1] [i_6] [i_6] [i_6] [i_6] [i_6 - 1])))))));
                        var_58 = ((/* implicit */unsigned int) arr_50 [i_3 - 1] [i_3 - 1] [i_6] [i_12] [i_3 - 1] [i_23]);
                        var_59 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)(-32767 - 1)))));
                    }
                    for (signed char i_24 = 0; i_24 < 10; i_24 += 1) 
                    {
                        var_60 = ((/* implicit */_Bool) min((var_60), (((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) arr_41 [(_Bool)0] [(_Bool)0]))) < (var_7))) ? (((/* implicit */unsigned long long int) arr_77 [i_6 - 1] [i_6 - 1] [i_6 - 1] [8LL] [i_6] [4ULL])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) ^ (3973282638592667909ULL))))))));
                        var_61 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [(short)8] [i_6 - 1] [i_12])) ? (((/* implicit */int) arr_31 [i_3] [i_6 - 1] [i_12])) : (((/* implicit */int) arr_31 [i_3] [i_6 - 1] [i_12]))));
                        arr_80 [i_3] [i_3] [i_3] [i_12 - 3] [i_12] [i_12 + 2] = ((/* implicit */short) ((unsigned short) var_6));
                        var_62 = ((/* implicit */_Bool) max((var_62), (((/* implicit */_Bool) ((((/* implicit */int) arr_44 [i_6 - 1])) * (((/* implicit */int) arr_31 [i_3 + 1] [i_3 + 1] [(short)6])))))));
                    }
                    var_63 = ((/* implicit */short) ((((/* implicit */_Bool) arr_75 [i_3] [i_12 + 1] [i_3] [i_3 + 1] [i_6 - 1] [i_6])) || (((/* implicit */_Bool) arr_75 [i_3] [i_12 + 1] [3LL] [i_3 + 1] [i_6 - 1] [(unsigned short)9]))));
                    var_64 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3 + 1] [i_12 + 2]))) * (var_0));
                    var_65 = ((/* implicit */unsigned long long int) min((var_65), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_22] [(_Bool)1] [i_6 - 1]))) + (arr_5 [i_22])))));
                }
            }
            var_66 = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((max((arr_24 [i_3]), (var_17))), (((/* implicit */short) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_15))))))))) == (max((max((var_18), (((/* implicit */unsigned long long int) var_15)))), (arr_75 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_6] [i_6 - 1]))));
            arr_81 [i_3] = ((/* implicit */signed char) (-((((((_Bool)0) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_26 [i_3] [i_6] [8U] [(short)8] [i_6] [i_6]))))))));
        }
        arr_82 [i_3] = ((/* implicit */int) arr_24 [i_3]);
    }
}
