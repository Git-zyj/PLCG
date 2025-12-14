/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173361
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
    /* LoopSeq 4 */
    for (int i_0 = 2; i_0 < 12; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_0 [i_0])) != (max((((/* implicit */unsigned long long int) var_11)), (max((((/* implicit */unsigned long long int) 0U)), (var_17)))))));
        var_21 = ((/* implicit */long long int) (+((-(var_9)))));
        var_22 = ((/* implicit */short) arr_0 [i_0]);
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) min((((var_14) ^ (((/* implicit */unsigned long long int) (~(arr_0 [(signed char)10])))))), (((/* implicit */unsigned long long int) 2U)))))));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_24 = ((/* implicit */unsigned long long int) max((arr_5 [i_1] [i_1]), (arr_3 [i_1])));
        var_25 = ((/* implicit */signed char) ((((/* implicit */int) ((((unsigned int) 4294967295U)) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))) < (((/* implicit */int) (signed char)-35))));
    }
    for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    {
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_5])) ? (((/* implicit */int) arr_7 [i_5])) : (((/* implicit */int) arr_13 [i_2] [4U] [i_4]))));
                        var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4294967295U))));
                        var_28 -= ((/* implicit */signed char) 6865236190738675210ULL);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_6 = 1; i_6 < 9; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    {
                        var_29 = ((/* implicit */int) (((~(((/* implicit */int) var_0)))) > (((/* implicit */int) arr_9 [i_6 - 1] [i_6 + 1] [i_2]))));
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_6 + 2] [i_6 - 1] [i_2])) && (((/* implicit */_Bool) arr_15 [1U] [1U] [i_2] [i_6]))));
                        arr_24 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) 11581507882970876406ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) >= (arr_12 [i_6 + 1] [i_7]))))) : (((((/* implicit */_Bool) arr_16 [i_2] [7ULL] [3LL] [i_2] [7LL])) ? (arr_15 [i_2] [i_3] [i_2] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-111)))))));
                    }
                } 
            } 
            var_31 = ((/* implicit */signed char) (!(((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2] [i_3] [i_3])) || (((/* implicit */_Bool) var_14))))));
            var_32 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (signed char)6))) ? (11581507882970876405ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */int) arr_20 [i_3])) : (((/* implicit */int) (unsigned char)192)))))));
        }
        for (int i_8 = 2; i_8 < 8; i_8 += 1) 
        {
            var_33 = ((/* implicit */signed char) var_9);
            var_34 = ((/* implicit */signed char) max((var_34), (var_5)));
        }
        for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            arr_30 [i_2] [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_23 [i_2] [i_2] [i_9] [i_9] [i_9] [i_9])) ^ (var_7)));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_10 = 2; i_10 < 9; i_10 += 1) 
            {
                var_35 = ((((/* implicit */_Bool) arr_9 [(signed char)10] [i_10 + 2] [i_2])) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-18577)) || (((/* implicit */_Bool) var_14))))) : (((/* implicit */int) arr_13 [i_2] [i_2] [i_10 - 1])));
                var_36 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_9] [i_10 - 1])) && (((/* implicit */_Bool) 3263364948591426737ULL))));
            }
            /* vectorizable */
            for (long long int i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                var_37 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_15 [i_9] [i_9] [i_9] [i_9])) < (arr_12 [i_9] [i_11])));
                var_38 *= ((/* implicit */signed char) ((arr_5 [i_2] [i_9]) - (arr_5 [i_2] [i_11])));
            }
            /* LoopNest 3 */
            for (signed char i_12 = 0; i_12 < 11; i_12 += 4) 
            {
                for (long long int i_13 = 2; i_13 < 10; i_13 += 2) 
                {
                    for (short i_14 = 1; i_14 < 10; i_14 += 4) 
                    {
                        {
                            arr_43 [(signed char)5] [(signed char)8] [i_13 - 1] [i_13] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_23 [i_12] [i_12] [i_12] [8LL] [8LL] [i_2]) ^ (4294967279U))) != (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-29), ((signed char)-101))))))))) >= ((~(((((/* implicit */_Bool) var_2)) ? (arr_36 [i_2]) : (((/* implicit */unsigned long long int) arr_5 [i_13] [i_14]))))))));
                            var_39 = ((/* implicit */signed char) max((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967279U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)31))))), (arr_27 [i_2] [i_14 - 1]))), (((((((/* implicit */_Bool) (short)-1)) && (((/* implicit */_Bool) arr_14 [i_12] [i_14])))) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [8LL] [i_13])))))));
                            arr_44 [i_2] [6] [3] [(unsigned char)0] [i_12] [(signed char)6] [i_14 + 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) 4294967283U))) * (((unsigned long long int) ((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [(signed char)7]))))))));
                        }
                    } 
                } 
            } 
            arr_45 [(signed char)0] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((9891134433681121729ULL), (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_2] [i_9] [i_9]))) == (arr_36 [i_2]))))) : (((5582777257634189330ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))))) ? ((+(min((arr_38 [i_2]), (((/* implicit */unsigned long long int) arr_26 [i_2])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [3] [i_2] [i_9] [i_9] [i_9] [i_9]))))))));
            /* LoopNest 2 */
            for (short i_15 = 0; i_15 < 11; i_15 += 3) 
            {
                for (signed char i_16 = 1; i_16 < 10; i_16 += 2) 
                {
                    {
                        var_40 -= ((/* implicit */unsigned long long int) arr_9 [i_2] [2LL] [i_9]);
                        var_41 = ((/* implicit */signed char) arr_9 [i_2] [i_9] [i_2]);
                        var_42 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(var_16)))))))));
                    }
                } 
            } 
        }
        for (short i_17 = 0; i_17 < 11; i_17 += 4) 
        {
            arr_55 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((max((arr_36 [i_2]), (((/* implicit */unsigned long long int) var_15)))) > (((((/* implicit */_Bool) arr_17 [i_2] [i_17] [i_17] [i_17] [i_17])) ? (arr_36 [i_2]) : (15183379125118124879ULL)))));
            arr_56 [i_2] [i_2] [(signed char)10] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) -1)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1537664081)) ? (-1537664085) : (((/* implicit */int) (short)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_2])) || (((/* implicit */_Bool) -9)))))) : (19711980586961471ULL)))));
        }
        arr_57 [i_2] [i_2] = ((/* implicit */signed char) (((-(10463380629303407550ULL))) * (max((max((((/* implicit */unsigned long long int) 4001547117U)), (var_1))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_41 [i_2] [i_2] [i_2] [i_2] [i_2])), (2068502353U))))))));
        var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [(signed char)1] [i_2])) || (((/* implicit */_Bool) (~(((/* implicit */int) ((arr_53 [i_2] [(signed char)6] [i_2]) == (974286266))))))))))));
    }
    for (short i_18 = 0; i_18 < 15; i_18 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_19 = 0; i_19 < 15; i_19 += 4) 
        {
            for (long long int i_20 = 2; i_20 < 13; i_20 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_21 = 0; i_21 < 15; i_21 += 1) 
                    {
                        arr_71 [i_21] [i_19] [i_20] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_20 + 2] [i_20 + 1] [i_20 + 2])) ? (((/* implicit */unsigned long long int) 4294967270U)) : (var_17)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_20 - 2] [i_19] [i_20 - 1] [i_21])) ? (((/* implicit */int) arr_67 [i_20 - 1] [i_19] [i_20] [(unsigned char)1])) : (((/* implicit */int) arr_63 [i_20 + 1])))))));
                        arr_72 [i_18] [i_19] [i_21] = (+(max((((arr_5 [i_18] [i_18]) / (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) ((4793531338823599289LL) < (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
                        /* LoopSeq 1 */
                        for (signed char i_22 = 0; i_22 < 15; i_22 += 3) 
                        {
                            var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -278851453)) ? (arr_68 [i_18] [(short)11] [i_21] [i_21]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_19])))))) ? ((+(8589934591ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_70 [i_21] [(unsigned char)14] [9ULL] [0] [i_21] [i_22])))))))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 11581507882970876400ULL)))) ? (arr_73 [0U] [i_20 + 1] [i_20 - 1] [i_20] [i_20 + 2]) : (max((((/* implicit */unsigned int) (short)-12976)), (4294967279U)))))) : (arr_65 [i_18] [i_19] [i_20 - 1])));
                            var_45 &= (-(((((/* implicit */_Bool) 2753106555058356937ULL)) ? ((+(arr_68 [i_18] [i_19] [i_20] [i_22]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_18]))))));
                            var_46 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_67 [i_20] [i_20 - 1] [i_20 - 1] [10LL])) >= (((/* implicit */int) arr_67 [i_19] [i_20 + 1] [i_20 + 1] [i_19])))) ? ((-(((/* implicit */int) (signed char)109)))) : ((~(((/* implicit */int) arr_67 [i_20 + 1] [i_20 + 1] [i_20 - 1] [9LL]))))));
                        }
                    }
                    arr_75 [i_18] [i_19] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((9257724097393446026ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_70 [i_20] [i_18] [i_20] [i_20] [i_19] [i_20])) ? (((/* implicit */int) (short)-12984)) : (((/* implicit */int) var_0)))))))) || (((/* implicit */_Bool) ((((unsigned int) (signed char)77)) / (3251519072U))))));
                    arr_76 [i_18] [i_18] = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((arr_69 [i_20]), (var_0)))) ? (((((/* implicit */unsigned long long int) var_15)) ^ (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_70 [i_18] [i_19] [i_20 - 1] [i_20] [i_18] [i_19]))))) < (((/* implicit */unsigned long long int) (~(var_11))))));
                }
            } 
        } 
        var_47 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) arr_61 [i_18])) ? (var_11) : (arr_3 [i_18]))) : (((/* implicit */long long int) ((((/* implicit */int) (short)-25073)) ^ (((/* implicit */int) arr_62 [i_18] [i_18])))))))) ? (((/* implicit */long long int) (+(min((arr_73 [i_18] [3U] [i_18] [(signed char)1] [i_18]), (3094711593U)))))) : (((((long long int) 4503599627370495LL)) ^ (((/* implicit */long long int) ((/* implicit */int) min((arr_69 [i_18]), ((signed char)85)))))))));
        arr_77 [i_18] [i_18] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) + (2147483647))) << (((var_1) - (9355920333956809203ULL)))))) ? ((~(535586313U))) : (((/* implicit */unsigned int) (~(-1))))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)-79)), (arr_67 [i_18] [i_18] [i_18] [i_18])))), ((~(var_1))))));
    }
    var_48 = ((/* implicit */int) (signed char)-78);
    var_49 = ((/* implicit */signed char) min((var_49), (((/* implicit */signed char) (~(((((/* implicit */_Bool) 1043448237U)) ? (2199023255551ULL) : (min((0ULL), (((/* implicit */unsigned long long int) -3386915291282121947LL)))))))))));
    var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? ((~(((var_15) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)5376)))));
}
