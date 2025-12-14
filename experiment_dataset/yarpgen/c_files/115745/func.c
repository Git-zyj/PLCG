/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115745
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1]))));
        arr_2 [i_0] = ((/* implicit */unsigned short) 2957347233U);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 1])) ? (var_3) : (arr_3 [i_0 - 1] [i_0 - 1]))))));
                        var_16 = ((/* implicit */unsigned int) (-(arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_2 - 1])));
                    }
                } 
            } 
        } 
        arr_10 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 1337620063U)) ? (2957347251U) : (8U)));
    }
    for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
    {
        var_17 |= ((/* implicit */long long int) max((((((/* implicit */_Bool) var_0)) ? (max((arr_11 [i_4]), (((/* implicit */unsigned int) arr_12 [i_4])))) : (0U))), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) min((arr_12 [i_4]), (arr_12 [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
        var_18 = ((/* implicit */short) (+(((/* implicit */int) arr_12 [i_4]))));
        var_19 = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) + (((/* implicit */int) (signed char)48))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4]))) + (arr_11 [i_4])))))));
        var_20 = ((((/* implicit */_Bool) arr_11 [i_4])) ? (((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4]))) : (((unsigned int) arr_13 [i_4])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_13 [i_4]) == (((/* implicit */long long int) arr_11 [i_4])))))));
    }
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_5]))));
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned char) arr_15 [i_5]);
        var_22 &= ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_15 [i_5])) : (((/* implicit */int) arr_15 [i_5])));
        var_23 = ((/* implicit */signed char) (+(((/* implicit */int) arr_14 [i_5] [i_5]))));
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned int) ((_Bool) arr_17 [i_5]));
    }
    var_24 = ((/* implicit */int) max((var_24), ((~(((((/* implicit */_Bool) 1304653675U)) ? (var_8) : (min((1968946221), (((/* implicit */int) (signed char)-83))))))))));
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 1LL)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))) ^ (max((var_8), ((~(((/* implicit */int) var_10))))))));
    /* LoopSeq 4 */
    for (int i_6 = 0; i_6 < 14; i_6 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
        {
            var_26 -= ((/* implicit */unsigned short) -305295946);
            var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((arr_8 [i_7] [i_7] [i_6] [i_6]) >= (arr_8 [i_6] [i_6] [i_6] [i_6]))))));
            var_28 = ((/* implicit */signed char) (+(var_12)));
            arr_25 [i_7] = ((/* implicit */long long int) (+(((/* implicit */int) min((arr_15 [i_6]), (arr_15 [i_6]))))));
        }
        for (signed char i_8 = 2; i_8 < 11; i_8 += 4) 
        {
            arr_28 [3] &= ((/* implicit */unsigned short) (+((~((~(((/* implicit */int) arr_1 [4ULL] [i_8 - 2]))))))));
            var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_16 [i_6] [i_8 - 1])))) ? (((/* implicit */long long int) ((arr_23 [i_8 + 3] [i_8 - 1]) - (((/* implicit */unsigned int) -1345972278))))) : (((((/* implicit */_Bool) arr_23 [i_8 - 1] [i_8 - 2])) ? (arr_9 [(signed char)5] [(unsigned short)5] [i_6] [i_8 - 2] [i_8]) : (arr_9 [10LL] [i_8] [(unsigned short)5] [i_8 - 2] [i_8])))));
        }
        /* LoopNest 2 */
        for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                {
                    arr_33 [i_9] [i_9] = ((/* implicit */unsigned char) var_0);
                    arr_34 [i_6] [9U] [9U] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_13 [i_6])))) ? (((/* implicit */int) (!(((_Bool) var_10))))) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_6] [i_9] [i_9])), (arr_26 [i_9]))))));
                    var_30 = ((/* implicit */int) ((unsigned int) (+(max((2359187671U), (((/* implicit */unsigned int) -1968946220)))))));
                    arr_35 [i_9] = ((/* implicit */signed char) var_13);
                    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 8U))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(short)0] [(short)0] [i_10]))) : (arr_27 [i_9] [i_9] [i_6])))))))));
                }
            } 
        } 
    }
    for (long long int i_11 = 1; i_11 < 18; i_11 += 1) 
    {
        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) var_8))));
        arr_38 [i_11] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_11 [i_11 - 1]), (((/* implicit */unsigned int) arr_12 [i_11 - 1])))))));
        var_33 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) arr_13 [i_11 + 1])))));
    }
    for (long long int i_12 = 3; i_12 < 8; i_12 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 10; i_13 += 2) 
        {
            for (signed char i_14 = 0; i_14 < 10; i_14 += 4) 
            {
                {
                    arr_48 [i_12] [i_12] [i_12] [i_12 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_12 - 3])) ? (min((((/* implicit */unsigned int) arr_17 [i_12])), (((unsigned int) 8U)))) : (2880261510U)));
                    arr_49 [2LL] [9LL] [9LL] [i_14] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_21 [i_12 + 1] [i_12 - 3])), (((((/* implicit */_Bool) arr_0 [i_12 + 1])) ? (arr_46 [i_12 - 1] [8U] [i_14] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((2066052517U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(_Bool)1])))))))))));
                }
            } 
        } 
        var_34 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1515511449U)) ? (4360081226096762817LL) : (((/* implicit */long long int) 8355840U))));
    }
    for (long long int i_15 = 0; i_15 < 22; i_15 += 4) 
    {
        arr_52 [i_15] [i_15] = ((/* implicit */unsigned int) min((((/* implicit */int) (signed char)73)), (min(((~(((/* implicit */int) arr_15 [i_15])))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_14 [i_15] [i_15])), (var_7))))))));
        /* LoopNest 2 */
        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
        {
            for (long long int i_17 = 0; i_17 < 22; i_17 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 4; i_18 < 20; i_18 += 4) 
                    {
                        for (signed char i_19 = 2; i_19 < 20; i_19 += 1) 
                        {
                            {
                                var_35 = ((/* implicit */int) var_9);
                                var_36 = ((/* implicit */int) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_20 = 0; i_20 < 22; i_20 += 4) 
                    {
                        var_37 = ((/* implicit */signed char) ((int) ((int) arr_15 [i_16])));
                        arr_69 [i_15] [12] [i_15] [i_15] = ((/* implicit */unsigned int) max(((-(max((var_5), (((/* implicit */int) arr_59 [i_15] [i_17])))))), (((/* implicit */int) ((unsigned short) arr_12 [i_16 - 1])))));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_17]))))) ? ((+(arr_63 [(short)4] [i_17] [(short)4] [i_16 - 1] [i_21] [i_21]))) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)0))))))))));
                        var_39 *= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_56 [(_Bool)1] [i_15])) ? (((/* implicit */int) arr_17 [i_15])) : (((/* implicit */int) arr_17 [i_17]))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_22 = 0; i_22 < 22; i_22 += 4) 
                        {
                            var_40 -= ((/* implicit */int) ((((/* implicit */int) arr_71 [i_15] [i_16 - 1] [i_17])) <= (((/* implicit */int) arr_71 [i_15] [i_16 - 1] [i_17]))));
                            var_41 = ((/* implicit */unsigned long long int) var_6);
                        }
                        for (unsigned char i_23 = 0; i_23 < 22; i_23 += 2) 
                        {
                            var_42 &= ((/* implicit */_Bool) var_8);
                            var_43 ^= ((/* implicit */unsigned int) min(((~(arr_62 [i_15] [i_16] [i_17] [i_23]))), (((/* implicit */int) arr_14 [i_15] [i_16]))));
                        }
                        for (unsigned short i_24 = 1; i_24 < 21; i_24 += 4) 
                        {
                            var_44 = ((/* implicit */unsigned short) ((unsigned int) 8355840U));
                            var_45 += ((/* implicit */signed char) ((unsigned long long int) (~(((((/* implicit */_Bool) var_3)) ? (arr_13 [i_21]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                            var_46 = ((/* implicit */unsigned short) min((var_46), (((/* implicit */unsigned short) (+(((int) arr_57 [i_24 + 1])))))));
                            arr_79 [(signed char)18] [i_16] [i_16 - 1] [19U] [i_16] [i_21] [17U] = ((/* implicit */signed char) (-((~(((/* implicit */int) arr_14 [i_15] [i_16]))))));
                        }
                        arr_80 [i_21] [i_17] [i_17] [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) ((signed char) arr_62 [i_16] [i_16] [i_16] [i_16 - 1]));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_25 = 4; i_25 < 21; i_25 += 4) 
                    {
                        for (unsigned short i_26 = 0; i_26 < 22; i_26 += 4) 
                        {
                            {
                                var_47 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? (20) : (((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) 1U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))) : (14ULL))));
                                var_48 += ((/* implicit */unsigned int) max((min((((/* implicit */int) arr_61 [i_16 - 1] [i_16 - 1] [i_16 - 1] [i_25 - 1])), (arr_62 [i_25] [i_25 + 1] [i_16 - 1] [(signed char)5]))), ((~(((/* implicit */int) arr_53 [i_15] [i_16 - 1]))))));
                                var_49 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) var_5)), (var_11)))))), (min((14ULL), (((/* implicit */unsigned long long int) 2066052517U))))));
                                var_50 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) arr_72 [i_16 - 1] [i_25] [i_25 - 3])), (((unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) var_1))));
                                var_51 = ((/* implicit */short) (~((-(arr_55 [i_25 - 1] [i_25 - 1] [i_16 - 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_52 = ((/* implicit */long long int) max((var_52), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_60 [i_15] [3LL] [i_15] [i_15] [3LL] [i_15])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_65 [i_15] [i_15] [i_15])) : (((/* implicit */int) var_2))))))) ? (((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (arr_74 [i_15] [i_15] [i_15] [i_15] [i_15])))) ? (((arr_56 [i_15] [i_15]) * (((/* implicit */long long int) ((/* implicit */int) arr_65 [(signed char)12] [i_15] [i_15]))))) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) << (((arr_63 [i_15] [i_15] [i_15] [i_15] [(signed char)0] [i_15]) - (678435284839453749LL)))))))) : (((min((((/* implicit */long long int) (signed char)75)), (0LL))) % (((/* implicit */long long int) ((((/* implicit */_Bool) -9223372036854775795LL)) ? (2957347258U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))))))));
    }
    var_53 &= ((/* implicit */unsigned short) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) 6U)))))))));
}
