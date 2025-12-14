/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112769
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [12LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])) ? (arr_2 [i_0] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1])))));
        var_17 ^= ((/* implicit */int) ((arr_0 [i_0]) / (((/* implicit */long long int) var_13))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                for (unsigned int i_3 = 1; i_3 < 18; i_3 += 2) 
                {
                    {
                        arr_11 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((_Bool) arr_3 [i_3 + 2] [i_2]));
                        arr_12 [i_1] [i_3] [i_1] [(_Bool)1] = ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_2] [12U] [i_2 - 3])));
                    }
                } 
            } 
        } 
        var_18 ^= ((((/* implicit */int) var_11)) / (((/* implicit */int) arr_6 [i_0 - 1] [i_0])));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (~(((arr_14 [i_4 - 1]) >> (((((/* implicit */int) var_3)) - (211))))))))));
        arr_16 [i_4] = ((((((/* implicit */_Bool) arr_6 [i_4 - 1] [i_4])) && (((/* implicit */_Bool) arr_6 [i_4 - 1] [i_4 - 1])))) && (((/* implicit */_Bool) min((arr_6 [i_4 - 1] [(_Bool)1]), (arr_6 [i_4 - 1] [i_4 - 1])))));
        var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [(unsigned char)15] [(unsigned char)15])) >> (((var_12) - (150105426)))))) && (((/* implicit */_Bool) ((unsigned long long int) var_8))))))) < (arr_9 [i_4 - 1] [(unsigned char)6])))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_21 = arr_18 [i_5] [i_5];
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5] [i_5]))) < (((((/* implicit */_Bool) arr_18 [i_5] [i_5])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6] [24U]))) < (((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6] [i_6])))))))), (((((long long int) var_2)) * (((/* implicit */long long int) ((var_11) ? (((/* implicit */int) arr_18 [(unsigned char)14] [21])) : (((/* implicit */int) arr_17 [i_6])))))))));
        arr_22 [i_6] [i_6] = ((/* implicit */unsigned int) (((_Bool)1) ? (7367921863233370792ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
        arr_23 [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [17U] [(_Bool)1])) + (((/* implicit */int) arr_18 [i_6] [i_6]))))) ? (min((3ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_17 [i_6])) : (var_14)))) ? (((/* implicit */int) (!(arr_17 [(_Bool)1])))) : (((((/* implicit */_Bool) arr_18 [i_6] [i_6])) ? (((/* implicit */int) arr_20 [i_6] [i_6])) : (((/* implicit */int) arr_19 [i_6] [(_Bool)1])))))))));
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 23; i_7 += 1) 
        {
            for (long long int i_8 = 3; i_8 < 23; i_8 += 2) 
            {
                {
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_27 [i_8] [i_7]))));
                    arr_32 [i_6] = (!(min((((((/* implicit */int) var_8)) > (((/* implicit */int) var_8)))), (arr_19 [i_8 - 3] [i_8]))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        arr_37 [i_6] [i_6] [i_6] [i_6] [i_6] = arr_30 [i_8 - 1] [i_9];
                        /* LoopSeq 2 */
                        for (signed char i_10 = 2; i_10 < 24; i_10 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_39 [i_10] [i_9] [i_8] [i_7] [i_10] [i_10])))))));
                            var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) == (arr_38 [i_10] [i_10] [i_10 + 1] [i_10 + 1] [i_10 + 1])));
                        }
                        for (unsigned char i_11 = 0; i_11 < 25; i_11 += 2) 
                        {
                            arr_44 [i_6] [i_6] [i_6] = ((/* implicit */signed char) (~(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)-95))))));
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((arr_43 [i_7 - 1] [i_8 + 1] [i_11] [i_8 - 3] [i_8] [4] [i_8]) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-108)))))))))));
                        }
                    }
                    for (long long int i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_13 = 0; i_13 < 25; i_13 += 1) 
                        {
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) min(((~(((/* implicit */int) arr_25 [i_8 + 2] [i_8 + 2])))), ((~(((((/* implicit */int) arr_19 [i_12] [(_Bool)1])) | (((/* implicit */int) var_2)))))))))));
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) min((arr_25 [i_6] [i_6]), (arr_25 [i_7] [i_12])))))), (((/* implicit */int) min((((signed char) var_6)), (((signed char) arr_40 [i_6] [24U] [6] [i_8] [24U] [i_12] [i_13]))))))))));
                        }
                        arr_50 [i_6] [i_7] [i_7] [i_6] [i_12] = ((/* implicit */unsigned long long int) ((((((arr_27 [i_7] [9]) || (var_11))) ? (((/* implicit */unsigned int) min((var_12), (((/* implicit */int) arr_18 [i_7] [i_12]))))) : (var_13))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_6] [i_6] [i_6] [i_6] [i_6])))));
                        arr_51 [3U] [i_6] [i_8] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_42 [i_8 - 1])) < (((((/* implicit */_Bool) 32767U)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (unsigned char)227)))))) ? (((((/* implicit */_Bool) arr_26 [i_7 - 2])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) arr_18 [i_6] [i_6])) ? (((/* implicit */unsigned int) var_14)) : (arr_31 [17U] [(_Bool)1] [i_6] [i_6]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_18 [i_7] [i_7 - 2]), (arr_18 [i_6] [i_7 + 1])))))));
                        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 3752622972U)) ? (((/* implicit */int) arr_48 [5U] [i_7 - 1] [i_8] [i_7 + 2] [i_12])) : (-1449722207)))) ? (((long long int) (unsigned char)247)) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
                        arr_52 [(signed char)0] [23ULL] [i_8] [i_6] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_39 [i_6] [i_6] [i_8 - 2] [(_Bool)1] [i_8] [i_8 - 1])) < (((/* implicit */int) min((((/* implicit */unsigned char) arr_29 [i_12] [i_8 + 1] [i_6])), (var_5)))))))) <= (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_40 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) ^ (arr_34 [i_6] [i_6] [i_6] [21])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [8U] [0U] [i_8] [8U] [4U]))) | (var_9))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned int i_15 = 2; i_15 < 23; i_15 += 3) 
                        {
                            {
                                arr_59 [(_Bool)1] [(_Bool)1] [i_6] [i_8] [i_14] [i_15 + 1] = min((((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_55 [i_6] [i_8 + 1] [i_6] [i_6])))), (((((/* implicit */_Bool) arr_35 [(_Bool)1])) ? (((/* implicit */int) arr_18 [i_8] [i_8])) : (((/* implicit */int) arr_19 [(unsigned char)24] [i_15]))))))), ((~(((((/* implicit */_Bool) arr_36 [i_8] [i_6] [i_8] [(unsigned char)0])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_6] [i_7 + 2]))))))));
                                var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_16)) ? (max((((/* implicit */unsigned int) arr_36 [i_7 + 1] [i_8] [(unsigned char)18] [i_15])), (arr_31 [i_6] [i_6] [i_15] [i_15]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) arr_45 [(_Bool)1])))))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_16 = 0; i_16 < 25; i_16 += 3) 
                    {
                        arr_63 [i_7 + 1] [i_6] [i_16] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_36 [i_6] [12U] [i_6] [i_16])))) + ((~(((/* implicit */int) arr_19 [i_6] [(_Bool)1]))))))) / ((((!(((/* implicit */_Bool) arr_56 [i_6] [23ULL] [i_7] [i_8] [i_7] [i_16])))) ? (((/* implicit */unsigned long long int) arr_41 [i_8] [i_8 + 2] [i_8 - 2] [i_8 + 1] [i_8 - 2])) : ((+(var_9)))))));
                        /* LoopSeq 2 */
                        for (int i_17 = 0; i_17 < 25; i_17 += 1) 
                        {
                            arr_66 [i_6] [i_7] [i_6] = ((/* implicit */unsigned int) ((_Bool) min((arr_47 [i_8 - 3] [i_8 - 1] [i_8 - 3] [i_6]), (arr_47 [i_8 + 2] [i_8] [i_8 - 1] [i_6]))));
                            var_31 = ((/* implicit */unsigned long long int) var_16);
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((unsigned int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_16]))))), (var_9)))))));
                            arr_67 [i_6] [i_7] [i_17] [i_16] [i_6] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_6) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [6] [i_16] [(_Bool)1]))))))))) & (((((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned int) arr_18 [i_7] [i_7]))))) ^ (((((/* implicit */_Bool) 4769697412079382209LL)) ? (((/* implicit */unsigned long long int) 939358628U)) : (18446744073709551613ULL)))))));
                        }
                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 25; i_18 += 2) 
                        {
                            var_33 = (-((+(((/* implicit */int) var_5)))));
                            var_34 = ((/* implicit */unsigned char) (-(arr_46 [(signed char)24] [i_8] [i_16] [i_18])));
                            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_8] [i_8] [i_8 + 2] [i_18] [(signed char)6])) || (((/* implicit */_Bool) arr_41 [i_6] [i_8] [i_8 - 2] [22U] [i_6])))))));
                            arr_70 [11LL] [11LL] [i_6] [i_16] [(_Bool)1] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) arr_42 [i_8])) ^ (var_0))));
                        }
                        arr_71 [i_6] = ((/* implicit */_Bool) max((min((arr_18 [3] [i_7 + 2]), (arr_18 [i_6] [i_7 + 2]))), (min((arr_18 [(_Bool)1] [i_7 + 2]), (arr_18 [i_7] [i_7 + 2])))));
                        var_36 = ((/* implicit */int) (-(4769697412079382210LL)));
                    }
                }
            } 
        } 
    }
    var_37 = ((/* implicit */signed char) (+(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_1)) >= (var_15))))) | (((long long int) var_14))))));
}
