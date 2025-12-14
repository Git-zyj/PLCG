/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169199
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
    var_16 = (~(var_1));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = max((max((arr_1 [i_0]), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) min((arr_1 [i_0]), (7250984028688202607ULL)))) ? (((unsigned long long int) arr_1 [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((0ULL) <= (11565026817351316598ULL))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 4; i_1 < 8; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = 14776789402699665812ULL;
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [6ULL]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551607ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1])))))));
        arr_9 [i_1 - 1] = ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [3ULL])) ? (arr_1 [i_1]) : (arr_4 [2ULL])));
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_17 = ((((/* implicit */_Bool) arr_11 [i_1 + 2] [i_2] [i_1 - 3])) ? (((((/* implicit */_Bool) 7250984028688202607ULL)) ? (var_0) : (6053747900186907945ULL))) : (7100411453397017039ULL));
            arr_12 [i_1] = arr_1 [5ULL];
        }
        for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 1) 
            {
                arr_20 [i_4] = arr_16 [i_4] [i_3] [i_3] [i_4 - 1];
                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551607ULL))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                arr_24 [i_5] [i_3] [i_1 - 3] [i_1 - 3] = ((((/* implicit */_Bool) arr_16 [4ULL] [i_1 - 2] [i_1 - 1] [4ULL])) ? (arr_16 [4ULL] [i_1 - 2] [i_1 - 1] [4ULL]) : (16760882550907427003ULL));
                arr_25 [i_1] [i_1] = ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (16998318018950097811ULL) : (18446744073709551593ULL)));
            }
            for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    var_19 = arr_15 [i_6];
                    var_20 = ((((/* implicit */_Bool) ((unsigned long long int) var_10))) ? (arr_21 [i_1]) : (arr_15 [i_7]));
                    var_21 = ((((/* implicit */_Bool) (+(arr_28 [i_1] [i_3] [i_3] [i_7] [4ULL] [i_6])))) ? (arr_1 [i_6]) : (arr_10 [i_1 - 3] [i_6 - 2]));
                }
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    var_22 = ((((28ULL) | (arr_13 [i_1 - 1]))) | (18424995903576376761ULL));
                    arr_33 [i_1] [i_3] [i_6] [i_8] [i_6] [i_3] = 18446744073709551603ULL;
                    arr_34 [6ULL] [i_3] [i_6] [4ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_1 + 1]))));
                }
                var_23 = ((unsigned long long int) arr_21 [i_1 - 1]);
            }
            var_24 = ((arr_17 [3ULL] [i_1 - 4] [i_1 - 3] [i_1 + 2]) / (((var_14) + (var_2))));
            arr_35 [i_3] = ((((/* implicit */_Bool) 17940461622219821336ULL)) ? (arr_27 [i_1 + 2]) : ((-(arr_23 [9ULL] [i_3] [i_3]))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
        {
            arr_38 [i_1] [i_9] = ((unsigned long long int) arr_37 [i_1 - 2]);
            var_25 = ((arr_5 [i_1 - 2]) & (arr_36 [i_1 - 2] [i_9]));
            arr_39 [i_9] = arr_22 [i_1 + 2] [i_1 - 4] [i_1 + 1];
        }
        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_11 = 1; i_11 < 6; i_11 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 1) 
                {
                    var_26 = 7250984028688202621ULL;
                    var_27 = (+(arr_45 [i_1] [i_1 + 2] [i_11 - 1]));
                    arr_48 [i_1] [i_1] [i_1] [i_1 + 1] [i_11] [i_1] = arr_17 [2ULL] [i_10] [i_11 + 1] [i_12];
                    arr_49 [i_10] [i_10] [8ULL] [i_10] [i_10] [i_11] = ((((/* implicit */_Bool) 11195760045021349011ULL)) ? (arr_18 [5ULL] [i_11 + 3] [i_11]) : (((((/* implicit */_Bool) 3226997631434009663ULL)) ? (7712939461115395503ULL) : (506282451489730271ULL))));
                }
                for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    arr_52 [i_11] [i_10] = ((arr_6 [i_1 - 3] [i_11 + 4]) + (arr_6 [i_1 + 2] [i_11 + 3]));
                    var_28 = ((((/* implicit */_Bool) arr_14 [i_1 - 1])) ? (arr_15 [i_11 + 2]) : (arr_50 [i_1 - 4] [i_1 - 4] [i_11] [i_1 - 4]));
                    arr_53 [i_1] [i_11] [i_11 + 1] [i_13] = ((arr_13 [i_10]) | (arr_13 [i_1 - 3]));
                }
                arr_54 [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) 7250984028688202605ULL)) || (((/* implicit */_Bool) var_5)))))));
                var_29 = ((((/* implicit */_Bool) 1497858160611175825ULL)) ? (68652367872ULL) : (arr_30 [i_1 - 3] [5ULL] [i_1 - 3] [i_11] [i_11 + 2] [i_11]));
            }
            arr_55 [i_1] [i_10] = arr_19 [i_1 - 2] [i_10] [i_10];
            var_30 = ((((/* implicit */_Bool) arr_14 [i_1 - 4])) ? (arr_41 [i_1 - 3] [i_1 - 3]) : (arr_41 [i_1 - 3] [i_1 - 3]));
            arr_56 [i_10] [i_10] [i_1 - 3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17940461622219821326ULL)) ? (var_4) : (arr_47 [8ULL] [i_10] [i_10] [8ULL] [8ULL])))) ? ((~(5105132862242363222ULL))) : ((~(arr_47 [i_1] [i_1] [i_1 + 2] [i_1 + 1] [i_1 + 2]))));
        }
    }
    for (unsigned long long int i_14 = 4; i_14 < 19; i_14 += 2) 
    {
        var_31 = arr_58 [i_14] [i_14];
        /* LoopSeq 1 */
        for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 2) 
        {
            arr_62 [i_15] [i_15] [7ULL] = ((((/* implicit */_Bool) arr_61 [i_14 - 2] [i_14 + 1] [i_14 - 4])) ? (((((/* implicit */_Bool) 10733804612594156138ULL)) ? (arr_58 [i_14 - 2] [i_14 - 3]) : (arr_58 [i_14 + 2] [i_14 - 3]))) : (((unsigned long long int) (-(arr_61 [i_14] [0ULL] [i_15])))));
            var_32 = var_13;
            arr_63 [i_14] [i_15] = arr_60 [i_14 - 1] [i_14] [i_14];
        }
        arr_64 [i_14 - 3] [i_14] = arr_59 [i_14];
        arr_65 [i_14] = ((((/* implicit */_Bool) arr_57 [i_14])) ? (13213166153765891112ULL) : (18446744073709551612ULL));
        /* LoopNest 2 */
        for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 2) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 21; i_17 += 2) 
            {
                {
                    arr_70 [i_16] [i_14] = ((((/* implicit */_Bool) ((arr_60 [i_14] [i_14 - 4] [i_14]) % (arr_60 [i_17] [i_14 - 4] [i_14])))) ? (max((((unsigned long long int) var_14)), (((unsigned long long int) 11195760045021348990ULL)))) : (((unsigned long long int) ((arr_69 [i_14 - 1] [i_17] [i_17] [i_17]) ^ (14971909361447970546ULL)))));
                    arr_71 [i_17] [i_14] [i_14] [i_14] = ((((/* implicit */_Bool) max((7250984028688202592ULL), (arr_68 [i_14 + 1] [i_14 - 4] [i_14 - 1] [i_14])))) ? (((((/* implicit */_Bool) arr_68 [i_14 + 1] [i_14 - 4] [i_14 - 1] [i_17])) ? (arr_68 [i_14 + 1] [i_14 - 4] [i_14 - 1] [i_16]) : (16760882550907427025ULL))) : ((-(arr_60 [i_14 + 1] [i_14 - 4] [i_14 - 1]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 3) 
                    {
                        for (unsigned long long int i_19 = 0; i_19 < 21; i_19 += 2) 
                        {
                            {
                                var_33 = max((((unsigned long long int) arr_66 [i_14 + 1] [i_16] [i_17])), (((unsigned long long int) ((10480372133768460597ULL) < (506282451489730283ULL)))));
                                arr_77 [i_14 + 2] [i_16] [i_17] [i_18] [i_19] = max((var_4), (min((((((/* implicit */_Bool) var_7)) ? (var_6) : (9ULL))), (13286756246283073134ULL))));
                                var_34 = ((((/* implicit */_Bool) (~(arr_67 [i_14 + 1] [i_14 - 2] [i_14 - 4])))) ? (((arr_67 [5ULL] [i_14 - 2] [i_14 - 3]) / (((arr_74 [i_16] [i_18] [i_17] [i_16] [i_14 - 2]) % (arr_67 [i_19] [i_18] [i_17]))))) : (((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_68 [i_14] [i_16] [i_16] [i_18]) : (6158085382378308848ULL)))));
                                var_35 = (~(var_3));
                                arr_78 [i_17] [i_14] [11ULL] [11ULL] [i_14] = min((((arr_69 [i_19] [i_18] [i_17] [i_16]) * (arr_59 [i_16]))), (min((arr_59 [i_18]), (arr_75 [i_14 + 2] [i_16] [i_17]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
