/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11071
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
    var_11 -= ((/* implicit */long long int) ((unsigned short) var_9));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((short) arr_3 [i_0] [(unsigned short)1]))), (max((((/* implicit */unsigned short) (signed char)-116)), ((unsigned short)780))))))) / (arr_1 [i_0])));
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((unsigned short) arr_3 [i_0] [i_0])), (((/* implicit */unsigned short) arr_0 [i_0])))))) > (arr_3 [i_0] [3LL]))))));
        /* LoopSeq 4 */
        for (long long int i_1 = 4; i_1 < 7; i_1 += 1) /* same iter space */
        {
            arr_7 [i_1] [i_1] = ((/* implicit */long long int) arr_2 [i_1 - 3] [i_1]);
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((_Bool) arr_2 [i_0] [i_0])))));
                arr_11 [i_0] [i_0] [i_1] = ((_Bool) (((-(arr_3 [i_0] [i_0]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_2 [i_0] [i_1])) != (arr_6 [i_0])))))));
            }
        }
        for (long long int i_3 = 4; i_3 < 7; i_3 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [0U] [i_0])) ? (arr_10 [i_3]) : (((((/* implicit */_Bool) arr_1 [i_0])) ? ((-(((/* implicit */int) arr_12 [i_0])))) : (((/* implicit */int) arr_12 [i_3 - 4]))))));
            var_15 = ((signed char) ((((/* implicit */_Bool) arr_3 [i_3 + 1] [i_3 + 3])) ? (arr_3 [i_3 + 2] [i_3 - 3]) : (arr_3 [i_3 + 3] [i_3 - 4])));
        }
        for (long long int i_4 = 4; i_4 < 7; i_4 += 1) /* same iter space */
        {
            arr_18 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [2U])) & ((-(((/* implicit */int) arr_5 [i_4 + 2] [i_0] [i_0]))))));
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                for (long long int i_6 = 2; i_6 < 9; i_6 += 2) 
                {
                    for (unsigned short i_7 = 2; i_7 < 9; i_7 += 1) 
                    {
                        {
                            var_16 = (~(min((((/* implicit */long long int) arr_19 [i_0] [i_4 - 2] [i_6 + 1])), (((arr_5 [i_0] [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0]))) : (arr_1 [1ULL]))))));
                            arr_26 [i_0] [i_0] [i_4] [i_0] [i_6] [7ULL] [i_7] = ((/* implicit */signed char) (+(max((((/* implicit */long long int) arr_22 [i_0] [i_7] [(signed char)5] [i_6])), (arr_6 [i_0])))));
                            arr_27 [i_0] [i_0] [i_5] [i_6] [2U] = max((max((((unsigned long long int) arr_16 [i_0] [i_4])), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)219)) / (((/* implicit */int) (short)-26605))))))), (((/* implicit */unsigned long long int) arr_2 [i_4] [i_5])));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_8 = 4; i_8 < 7; i_8 += 1) /* same iter space */
        {
            arr_31 [i_0] [i_8] = ((/* implicit */unsigned long long int) arr_10 [i_0]);
            arr_32 [i_8] = ((/* implicit */_Bool) max((((/* implicit */short) arr_30 [i_0] [i_0])), (((short) ((((/* implicit */int) arr_30 [i_0] [i_8])) & (((/* implicit */int) arr_30 [i_8 + 1] [4ULL])))))));
            var_17 = ((/* implicit */unsigned short) arr_14 [i_8] [i_8] [i_8 + 3]);
            arr_33 [i_8] [i_8] = ((/* implicit */unsigned short) max((((unsigned long long int) ((arr_24 [i_0] [6U] [i_8] [i_8] [i_8]) ? (arr_25 [i_0] [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0])))))), (((/* implicit */unsigned long long int) ((max((arr_8 [6LL] [6LL] [6LL] [i_0]), (((/* implicit */long long int) arr_12 [i_0])))) / (((/* implicit */long long int) ((/* implicit */int) ((short) arr_15 [i_8] [(signed char)7])))))))));
        }
        arr_34 [i_0] [i_0] &= ((/* implicit */short) arr_17 [i_0] [i_0]);
    }
    for (int i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_10 = 1; i_10 < 24; i_10 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (short i_12 = 0; i_12 < 25; i_12 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_13 = 0; i_13 < 25; i_13 += 4) 
                        {
                            var_18 = ((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_43 [i_9] [i_9] [i_11] [i_12])), (arr_45 [i_9] [i_10] [i_11] [i_12] [i_10])))), (((unsigned long long int) arr_46 [i_9] [i_10 + 1] [i_11] [i_11] [i_12] [(unsigned short)3] [i_13])))));
                            var_19 = ((/* implicit */unsigned short) min((max((((arr_39 [i_10]) - (((/* implicit */unsigned long long int) arr_41 [i_10])))), (arr_39 [i_10]))), (((unsigned long long int) max((arr_42 [i_9] [i_11]), (arr_46 [(_Bool)1] [i_10] [i_12] [i_12] [i_13] [i_12] [i_12]))))));
                            arr_48 [i_13] [i_10] [i_12] [i_13] |= ((/* implicit */_Bool) (+((-(((/* implicit */int) (short)26602))))));
                            var_20 = ((/* implicit */unsigned int) arr_41 [i_10]);
                            arr_49 [i_12] [i_10] = ((/* implicit */short) arr_44 [i_9] [i_13] [i_13]);
                        }
                        for (unsigned int i_14 = 0; i_14 < 25; i_14 += 1) 
                        {
                            arr_53 [i_10] [i_10 - 1] [(_Bool)1] [i_12] [i_14] = ((/* implicit */unsigned int) arr_51 [i_10]);
                            arr_54 [(unsigned short)10] [i_10] [i_10] [(_Bool)1] [i_14] [(_Bool)1] [(_Bool)1] = ((/* implicit */short) arr_39 [i_10]);
                            var_21 = ((/* implicit */int) (!((!(arr_35 [i_9])))));
                        }
                        var_22 += ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) arr_52 [i_9] [i_9] [i_12])) ? (arr_44 [i_9] [i_9] [12LL]) : (arr_44 [i_9] [i_10] [i_12]))))) >> (((((/* implicit */int) arr_43 [i_11] [i_10] [i_10] [i_11])) - (4717)))));
                        arr_55 [i_9] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_37 [15ULL])) ? ((+(arr_38 [i_10] [i_10 - 1]))) : (((/* implicit */long long int) ((int) min((((/* implicit */unsigned char) arr_40 [i_10] [i_11] [i_11])), (arr_46 [i_9] [i_9] [i_10 + 1] [i_10] [8ULL] [i_9] [i_12])))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
            {
                for (short i_16 = 0; i_16 < 25; i_16 += 2) 
                {
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_42 [i_17 + 1] [i_10 + 1])) ? (((/* implicit */int) arr_50 [i_17] [i_10] [i_15 - 1] [i_10] [i_9])) : (((/* implicit */int) arr_50 [i_17] [i_10] [i_16] [i_10] [i_15]))))));
                            arr_62 [i_9] [i_10 - 1] [i_10] [i_10] [i_15 - 1] [i_10] [i_17] = ((/* implicit */signed char) ((long long int) (short)-26605));
                            arr_63 [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned short) (unsigned char)47))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [2ULL] [i_15 - 1] [19LL] [i_10 - 1] [18ULL] [i_17 + 1] [i_10 - 1]))) : (((((/* implicit */_Bool) arr_39 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_10] [i_10] [i_15] [i_16]))) : (arr_47 [(_Bool)1] [(_Bool)1] [i_15 - 1] [9U] [i_16] [i_16]))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((short) max((arr_41 [i_10]), (((/* implicit */long long int) arr_42 [i_9] [i_9])))))))));
                        }
                    } 
                } 
            } 
            arr_64 [i_10] = ((/* implicit */int) ((short) min((arr_44 [i_9] [7ULL] [i_9]), (min((arr_38 [i_9] [i_9]), (((/* implicit */long long int) arr_59 [i_10] [i_10] [i_10])))))));
            arr_65 [i_9] [i_10] [i_9] = ((/* implicit */_Bool) max((((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) arr_57 [i_9] [i_10] [i_10] [i_10]))), (((int) (short)26606))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [8LL] [8LL] [(signed char)12] [8LL])) ? (((/* implicit */int) arr_40 [i_10] [i_10] [0LL])) : (((/* implicit */int) arr_40 [i_10] [i_10 - 1] [i_10 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_10] [i_10] [i_10]))) : (arr_37 [i_9])))));
            /* LoopNest 2 */
            for (unsigned short i_18 = 0; i_18 < 25; i_18 += 3) 
            {
                for (unsigned int i_19 = 1; i_19 < 24; i_19 += 2) 
                {
                    {
                        arr_71 [i_10] [i_19] [i_9] [i_9] [i_10] = ((/* implicit */signed char) ((_Bool) (((~(arr_38 [i_9] [i_9]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [(unsigned short)18] [i_10] [(unsigned short)18])) ? (((/* implicit */int) arr_61 [i_9] [i_9] [i_9] [i_19 + 1] [2U])) : (((/* implicit */int) arr_46 [i_9] [i_10] [i_10 + 1] [i_18] [i_9] [i_10] [i_10]))))))));
                        arr_72 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_9] [i_10 + 1] [i_18] [20LL])) ? (((((/* implicit */_Bool) (unsigned char)37)) ? (266850829U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_60 [i_9] [i_10] [i_18] [i_19 + 1] [i_10] [i_10])), (arr_68 [14] [i_10 + 1] [i_18] [i_10])))) && (((/* implicit */_Bool) arr_52 [i_9] [i_10] [i_9]))))))));
                    }
                } 
            } 
        }
        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
        {
            arr_77 [i_9] [i_9] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_9]))) & (min((((/* implicit */unsigned long long int) arr_36 [14ULL] [(unsigned short)4])), (max((((/* implicit */unsigned long long int) arr_60 [i_9] [i_9] [i_20] [(short)10] [0LL] [i_9])), (arr_69 [i_9] [i_9] [i_9] [i_9] [i_20]))))));
            var_24 = ((/* implicit */signed char) (-(arr_38 [i_9] [i_9])));
            var_25 += ((/* implicit */unsigned long long int) ((((min((((/* implicit */long long int) arr_46 [i_20] [9LL] [i_9] [12] [i_9] [i_9] [i_9])), (arr_45 [i_9] [i_9] [i_9] [i_9] [i_9]))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_40 [i_9] [i_9] [i_20])))))) * (max((arr_37 [i_9]), (((/* implicit */long long int) ((arr_68 [i_9] [i_9] [i_9] [i_9]) / (arr_68 [14] [i_9] [i_9] [i_9]))))))));
        }
        /* LoopNest 2 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            for (unsigned long long int i_22 = 1; i_22 < 22; i_22 += 2) 
            {
                {
                    arr_84 [i_22] [i_21] [i_22] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (-8965901895361399532LL) : (-8965901895361399546LL))));
                    arr_85 [i_22] = ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) ((((/* implicit */int) arr_83 [i_22 + 2] [i_21] [i_9])) / (((/* implicit */int) arr_50 [i_22] [i_22] [(_Bool)1] [i_22] [i_21]))))));
                    var_26 = ((/* implicit */unsigned char) arr_40 [i_22] [i_21] [i_21]);
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned short) arr_68 [i_9] [i_9] [i_9] [i_9]);
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_76 [i_9] [i_9])) ? (arr_38 [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_9] [(short)17] [i_9] [i_9]))))) + (((/* implicit */long long int) ((((/* implicit */int) arr_57 [i_9] [i_9] [i_9] [i_9])) - (((/* implicit */int) arr_57 [i_9] [i_9] [i_9] [i_9]))))))))));
    }
    for (int i_23 = 0; i_23 < 25; i_23 += 4) /* same iter space */
    {
        arr_88 [2LL] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_73 [i_23] [i_23] [i_23])) | (max((((((/* implicit */_Bool) arr_52 [i_23] [i_23] [i_23])) ? (((/* implicit */int) arr_58 [i_23] [i_23] [i_23])) : (((/* implicit */int) arr_87 [i_23])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_23])))))))));
        var_29 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_73 [i_23] [i_23] [i_23])) ? (((/* implicit */long long int) ((/* implicit */int) arr_75 [i_23]))) : (arr_37 [i_23]))))) * (((int) (short)-26592))));
        arr_89 [(_Bool)1] = ((/* implicit */long long int) min((((unsigned long long int) arr_60 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23])), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)209)) <= (((/* implicit */int) (short)26605))))) >> (((/* implicit */int) ((((/* implicit */int) arr_87 [i_23])) > (((/* implicit */int) arr_43 [i_23] [i_23] [(unsigned short)24] [i_23]))))))))));
    }
    var_30 = ((/* implicit */unsigned char) ((var_3) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_7))))))));
}
