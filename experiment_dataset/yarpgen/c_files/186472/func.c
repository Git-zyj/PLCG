/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186472
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
    var_10 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */long long int) var_0)), (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_5))))))))), (min((((/* implicit */unsigned long long int) var_9)), (max((5057879356415250012ULL), (((/* implicit */unsigned long long int) var_0))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_0]))))), (max((((/* implicit */unsigned long long int) var_4)), (17697056027974927324ULL))))), (((/* implicit */unsigned long long int) var_5))));
                var_11 = ((/* implicit */unsigned int) (!(((((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1] [i_0 - 2])) == (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1] [i_0 - 2]))))));
                var_12 = (!(((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) 3819298170U)), (749688045734624286ULL)))))));
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) min((((var_9) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1] [i_0])) / (((/* implicit */int) arr_2 [i_0] [i_1] [i_1]))))) : (((17697056027974927307ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */unsigned long long int) max((arr_1 [i_0 - 1] [i_0 + 1]), (arr_1 [i_0 - 2] [i_0 - 1]))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (signed char i_2 = 3; i_2 < 14; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_6 [i_2 - 3]) ? (((/* implicit */int) arr_8 [i_2 - 1])) : (((/* implicit */int) arr_7 [i_2 - 3]))))) ? (((((((/* implicit */_Bool) arr_9 [i_2 + 2])) && (((/* implicit */_Bool) arr_8 [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 + 1]))) : (((((/* implicit */_Bool) 11760952355433031022ULL)) ? (17697056027974927308ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (max((((17697056027974927323ULL) + (((/* implicit */unsigned long long int) arr_9 [i_2])))), (((/* implicit */unsigned long long int) arr_8 [i_2 - 1]))))));
        /* LoopNest 3 */
        for (unsigned long long int i_3 = 3; i_3 < 16; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    {
                        arr_19 [i_5] [i_3] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_14 [i_3 + 1] [i_2 + 1] [i_2])), (max((min((((/* implicit */unsigned long long int) var_5)), (18426023714836134121ULL))), (((/* implicit */unsigned long long int) arr_18 [i_2 + 2] [i_3 - 1] [i_3 - 2]))))));
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 749688045734624272ULL)) || (((/* implicit */_Bool) 17697056027974927299ULL)))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_8 [i_3 + 1])), (arr_16 [i_2 - 2])))) : (((((/* implicit */unsigned long long int) arr_9 [i_2 - 2])) & (arr_11 [i_3] [i_3 - 1] [i_3 + 1])))));
                        var_14 = ((/* implicit */unsigned short) max((max((var_8), (((/* implicit */signed char) arr_7 [i_2 + 3])))), (((/* implicit */signed char) min((arr_7 [i_2 + 3]), (arr_7 [i_2 + 3]))))));
                    }
                } 
            } 
        } 
        arr_20 [i_2 + 3] = ((/* implicit */int) ((arr_18 [i_2] [i_2] [i_2]) > (min((arr_18 [i_2 + 1] [i_2] [i_2 + 3]), (((/* implicit */unsigned int) var_7))))));
    }
    for (long long int i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_6]))) < ((~(arr_9 [i_6]))))))));
        var_16 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((arr_14 [i_6] [i_6] [i_6]) % (((/* implicit */long long int) ((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_14 [i_6] [1U] [i_6])) : (17697056027974927336ULL)))));
    }
    for (long long int i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
    {
        var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(min((3153490074U), (((/* implicit */unsigned int) var_4))))))) ? (min((arr_15 [i_7] [i_7] [i_7] [i_7]), (((/* implicit */unsigned int) arr_0 [i_7])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_22 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))) >= (17697056027974927328ULL)))))));
        var_18 = (-((-(arr_16 [i_7]))));
        arr_25 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((10912137152974519107ULL) == (((/* implicit */unsigned long long int) arr_15 [i_7] [i_7] [i_7] [i_7])))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_17 [3] [i_7] [i_7] [i_7]) : (((/* implicit */long long int) arr_9 [i_7]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_7] [i_7]))) : (((var_6) << (((/* implicit */int) var_4))))))));
        arr_26 [i_7] [i_7] = ((/* implicit */unsigned int) max((min((arr_11 [i_7] [i_7] [i_7]), (17697056027974927316ULL))), (((arr_11 [i_7] [i_7] [i_7]) / (arr_11 [i_7] [i_7] [i_7])))));
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 7; i_8 += 4) 
        {
            for (int i_9 = 0; i_9 < 10; i_9 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) (((-(arr_16 [i_8 - 1]))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_7] [i_8 + 2] [i_8 + 2]))))))));
                    arr_32 [i_7] &= max((arr_9 [i_8 + 1]), (arr_9 [i_7]));
                    arr_33 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 749688045734624291ULL)) || (((/* implicit */_Bool) var_3))))), (((((/* implicit */_Bool) arr_3 [i_9])) ? (17697056027974927307ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_8])))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_9] [i_9])) ? (arr_16 [i_8]) : (arr_14 [i_7] [i_8] [i_9])))), (min((5902572657996230453ULL), (((/* implicit */unsigned long long int) (unsigned char)45)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-1)) | (((/* implicit */int) var_3))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_8 + 1])))))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((arr_36 [i_10]) ? (arr_16 [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_10])))))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 12544171415713321146ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) 749688045734624285ULL)) || (((/* implicit */_Bool) arr_11 [i_10] [i_10] [i_10]))))) : (arr_13 [i_10])));
        arr_37 [i_10] [6LL] = ((((/* implicit */int) arr_6 [i_10])) << (((((/* implicit */int) arr_8 [i_10])) - (88))));
        var_22 = ((/* implicit */_Bool) arr_16 [i_10]);
    }
    /* LoopSeq 3 */
    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 1) 
    {
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((+(arr_18 [i_11] [i_11] [i_11]))) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56478))))))) + (((18446744073709551607ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_11])))))));
        var_24 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_6 [i_11])) - (arr_13 [i_11]))) + (((/* implicit */int) arr_6 [i_11]))));
    }
    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_13 = 0; i_13 < 10; i_13 += 4) 
        {
            arr_48 [i_12] [i_13] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) arr_44 [i_12 + 1]))))));
            var_25 = min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_21 [i_12 + 1])) * (((/* implicit */int) arr_21 [i_13]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_12 + 1] [i_12 + 1]))) / (min((((/* implicit */unsigned long long int) var_4)), (8795343643676895151ULL))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_14 = 0; i_14 < 10; i_14 += 4) 
            {
                /* LoopSeq 4 */
                for (unsigned short i_15 = 0; i_15 < 10; i_15 += 1) 
                {
                    var_26 = ((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_12 + 1]))));
                    arr_56 [i_12] [i_12] [i_14] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)224))) == (((arr_38 [i_14]) >> (((arr_17 [i_12] [i_12] [i_14] [i_15]) + (1190956545711941461LL)))))));
                    var_27 = ((/* implicit */long long int) ((arr_35 [i_12 + 1]) ? (((/* implicit */int) arr_35 [i_12 + 1])) : (((/* implicit */int) arr_35 [i_12 + 1]))));
                    var_28 = ((/* implicit */long long int) (+(arr_18 [i_12 + 1] [i_13] [i_15])));
                }
                for (signed char i_16 = 0; i_16 < 10; i_16 += 2) 
                {
                    var_29 = ((/* implicit */unsigned long long int) (signed char)41);
                    var_30 = (+(arr_29 [i_12 + 1]));
                    var_31 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_29 [i_12])) ? (arr_46 [i_16] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_16] [i_14] [i_13] [i_12]))))) >> (((/* implicit */int) arr_7 [i_14]))));
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_12 + 1]))) > (arr_40 [i_12 + 1] [i_12])));
                }
                for (long long int i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    var_33 = ((/* implicit */_Bool) max((var_33), (((((/* implicit */int) arr_61 [i_12] [i_13] [i_14] [i_17])) != ((-(((/* implicit */int) var_9))))))));
                    var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) arr_41 [i_13]))));
                    arr_62 [i_12] [i_13] [(_Bool)1] [i_12] [(_Bool)1] [i_17] = ((/* implicit */unsigned long long int) ((arr_38 [i_12 + 1]) >= (arr_38 [i_12 + 1])));
                    arr_63 [i_12] [i_13] [i_14] [i_17] = ((/* implicit */unsigned short) (-(((17697056027974927323ULL) % (arr_40 [i_12 + 1] [i_12])))));
                }
                for (int i_18 = 0; i_18 < 10; i_18 += 4) 
                {
                    arr_68 [i_12] [i_12] = ((/* implicit */unsigned short) ((var_7) ? (((/* implicit */int) arr_1 [i_12 + 1] [i_12 + 1])) : (((/* implicit */int) arr_1 [i_12 + 1] [i_12 + 1]))));
                    var_35 += ((/* implicit */unsigned int) (~(arr_13 [i_13])));
                    /* LoopSeq 1 */
                    for (unsigned short i_19 = 1; i_19 < 7; i_19 += 3) 
                    {
                        var_36 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 20720358873417515ULL)) ? (((/* implicit */int) arr_57 [i_19] [i_14])) : (((/* implicit */int) arr_49 [i_12] [i_12] [i_12] [2ULL])))) >= (((/* implicit */int) arr_61 [i_19] [i_19 + 2] [i_12 + 1] [i_12 + 1]))));
                        var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_66 [i_19 + 3] [i_12] [i_12 + 1] [i_12 + 1] [i_12] [i_12])) || (((/* implicit */_Bool) 17697056027974927318ULL))));
                        arr_71 [i_12] [i_18] [i_14] [i_13] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_13]))) : (749688045734624292ULL)))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) var_5))));
                    }
                }
                /* LoopNest 2 */
                for (signed char i_20 = 0; i_20 < 10; i_20 += 1) 
                {
                    for (long long int i_21 = 4; i_21 < 8; i_21 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_60 [i_12] [i_13] [i_14] [i_20] [i_21 - 3])) ? (((/* implicit */int) arr_49 [i_21] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_49 [i_12 + 1] [i_12] [i_14] [i_20]))));
                            arr_79 [i_12] [i_12] [i_14] [i_20] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_12])) ? (2190677382855923375ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_14])))));
                        }
                    } 
                } 
            }
            var_39 = ((/* implicit */unsigned short) (((-(arr_40 [i_12 + 1] [i_12]))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(6ULL)))) ? (((/* implicit */int) arr_2 [i_12 + 1] [i_12 + 1] [i_12 + 1])) : (((/* implicit */int) arr_65 [i_13] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12] [i_12 + 1])))))));
        }
        arr_80 [i_12] [(unsigned short)8] &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_57 [i_12 + 1] [i_12 + 1])) ? (((/* implicit */int) arr_74 [i_12] [i_12 + 1] [i_12 + 1] [(signed char)3] [i_12 + 1])) : (((/* implicit */int) arr_57 [i_12 + 1] [i_12 + 1])))), (((/* implicit */int) max((arr_69 [i_12] [i_12] [i_12] [i_12] [3ULL] [i_12 + 1] [i_12 + 1]), (((/* implicit */unsigned char) var_8)))))));
    }
    /* vectorizable */
    for (signed char i_22 = 2; i_22 < 10; i_22 += 3) 
    {
        var_40 -= ((/* implicit */unsigned int) arr_11 [14U] [(unsigned short)6] [i_22]);
        arr_84 [(_Bool)1] = ((/* implicit */int) arr_12 [5LL] [i_22]);
        var_41 = ((/* implicit */long long int) (((((_Bool)1) ? (18426023714836134121ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) >= (((/* implicit */unsigned long long int) arr_18 [i_22] [i_22] [i_22]))));
        var_42 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [(unsigned short)10] [i_22] [i_22])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_17 [i_22 - 2] [(unsigned char)12] [i_22] [i_22 + 1])));
        var_43 = ((/* implicit */unsigned int) ((arr_11 [16LL] [i_22 + 2] [i_22]) - (arr_11 [(unsigned short)16] [i_22 + 2] [i_22 + 1])));
    }
    var_44 = ((/* implicit */unsigned char) var_4);
}
