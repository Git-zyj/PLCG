/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105018
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) max((((unsigned long long int) 410513404)), (((/* implicit */unsigned long long int) (!((_Bool)1)))))))));
        arr_2 [(short)16] |= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-122)) + (((/* implicit */int) (unsigned char)158))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_14 = ((((/* implicit */int) ((((/* implicit */int) (signed char)-10)) != (max((((/* implicit */int) arr_4 [20ULL])), (arr_1 [i_0 - 1])))))) - (((/* implicit */int) arr_0 [i_1] [i_1])));
            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) -8117160581394954182LL)) ? (((/* implicit */unsigned int) arr_1 [(_Bool)1])) : (1234628853U))), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) (signed char)-31)))))));
        }
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 19; i_4 += 4) 
                    {
                        for (short i_5 = 3; i_5 < 20; i_5 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) max(((-(((10479801718195067832ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-29777))))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_4 [i_0 - 1]))))));
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (~(((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-5)))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_3] [i_3] &= ((/* implicit */signed char) max((((/* implicit */long long int) arr_0 [i_0 + 1] [i_0 + 1])), (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))) : (-7230311940279344810LL)))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 2; i_6 < 20; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 4) 
                        {
                            {
                                arr_20 [i_2] [i_0] [2] [3U] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned short) min(((unsigned char)47), (((/* implicit */unsigned char) var_9)))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_7] [i_6] [i_0])) < (((/* implicit */int) var_11))))), (((arr_19 [i_0] [i_6] [(unsigned short)5] [i_2] [i_0]) - (arr_19 [i_0] [i_0] [i_3] [i_3] [i_3])))))));
                                arr_21 [i_0] [i_3] [i_3] [i_6] [i_7] &= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)15)), (15218749586822780068ULL)))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(819890358U)))) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)240)) ^ (((/* implicit */int) (signed char)9))))), (min((((/* implicit */unsigned int) var_3)), (1829669865U))))) : (((((/* implicit */_Bool) ((long long int) var_12))) ? (min((1153818791U), (((/* implicit */unsigned int) (unsigned short)55244)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3] [i_2] [i_0 - 1] [i_0 - 1] [i_0 + 1])))))));
                }
            } 
        } 
        arr_22 [i_0] [i_0] = ((/* implicit */_Bool) min((max((((/* implicit */long long int) (_Bool)1)), (var_2))), (((/* implicit */long long int) ((signed char) max((((/* implicit */long long int) arr_16 [i_0] [(unsigned short)2] [i_0] [i_0] [i_0] [i_0 - 1])), (var_1)))))));
    }
    for (short i_8 = 4; i_8 < 20; i_8 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_6 [i_8] [i_8] [i_8]))));
        /* LoopSeq 2 */
        for (signed char i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            var_20 &= ((/* implicit */unsigned char) ((max((min((((/* implicit */int) var_9)), (arr_7 [i_9]))), (min((arr_1 [i_8]), (((/* implicit */int) var_11)))))) >> (((((long long int) var_2)) + (2384116418917865449LL)))));
            arr_27 [i_8] = ((/* implicit */unsigned short) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)127)));
            arr_28 [i_8] |= ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_0)) ? (arr_9 [i_8 - 2] [i_8 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))))));
        }
        /* vectorizable */
        for (short i_10 = 0; i_10 < 21; i_10 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) arr_26 [i_10] [i_8 - 1]);
            arr_31 [(unsigned short)19] [i_10] [i_10] = ((/* implicit */unsigned char) ((((long long int) arr_18 [i_8 - 2] [i_8 - 2] [2U] [i_8])) ^ (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_8 + 1] [i_8])))));
            arr_32 [i_10] = ((/* implicit */_Bool) var_5);
        }
        arr_33 [i_8] = ((/* implicit */int) var_4);
    }
    for (short i_11 = 4; i_11 < 20; i_11 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */short) (((-(arr_30 [(unsigned char)18]))) + (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_11)), (((((/* implicit */_Bool) var_3)) ? (arr_3 [(unsigned char)3]) : (((/* implicit */unsigned int) arr_7 [i_11])))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 4) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_14 = 0; i_14 < 21; i_14 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) var_8))))));
                        var_24 = ((((/* implicit */_Bool) arr_37 [i_11 - 1])) ? (((/* implicit */long long int) 4294967295U)) : (var_4));
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_47 [i_11 - 4] [i_11] [i_12] [i_13] [i_14] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) (unsigned char)10))) & (((/* implicit */int) (unsigned char)247))));
                            var_25 &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_26 [i_11] [i_12])))) && (((/* implicit */_Bool) arr_30 [i_11 + 1]))));
                        }
                    }
                    for (unsigned int i_16 = 0; i_16 < 21; i_16 += 4) /* same iter space */
                    {
                        arr_50 [i_11] [i_12] [i_12] [i_16] [i_13] = ((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) arr_17 [i_13] [i_12] [i_11] [2LL] [i_11] [i_11] [i_11 + 1])))));
                        var_26 = ((/* implicit */short) min((max((17592185913344LL), (((/* implicit */long long int) (unsigned short)32540)))), (((/* implicit */long long int) (-(((/* implicit */int) arr_49 [i_11] [i_11] [i_11] [i_11])))))));
                    }
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_27 *= ((/* implicit */long long int) ((_Bool) var_7));
                        arr_54 [i_17] [5LL] [(unsigned short)17] [i_11] = ((max((var_7), (((/* implicit */long long int) var_11)))) >> (((/* implicit */int) ((arr_9 [i_12] [i_11]) >= (arr_9 [i_12] [i_17])))));
                    }
                    for (int i_18 = 2; i_18 < 18; i_18 += 2) 
                    {
                        arr_57 [i_11] [i_13] [(_Bool)1] [i_11] [i_11] = ((/* implicit */short) ((unsigned long long int) min((((/* implicit */int) ((((/* implicit */unsigned int) 524224)) <= (1104974789U)))), (524231))));
                        var_28 = ((/* implicit */_Bool) ((((((/* implicit */int) ((short) 2661647120255465258LL))) + (2147483647))) >> (((((/* implicit */int) max((arr_0 [i_11 - 4] [i_11 - 4]), (arr_0 [i_11 - 4] [i_11])))) + (29768)))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_19 = 1; i_19 < 20; i_19 += 4) /* same iter space */
                    {
                        arr_61 [i_19] = min((((long long int) arr_14 [i_19] [i_19] [i_19] [i_19] [i_19 + 1])), (((/* implicit */long long int) ((unsigned char) arr_15 [i_19 - 1] [i_19] [i_19] [i_19 - 1] [i_19 - 1]))));
                        arr_62 [i_12] [i_12] [i_19] = ((/* implicit */unsigned short) ((unsigned long long int) min((((((/* implicit */int) var_9)) - (((/* implicit */int) var_3)))), (((((/* implicit */int) (unsigned short)25171)) - (((/* implicit */int) (signed char)5)))))));
                        var_29 |= ((/* implicit */short) min((((arr_36 [i_11 - 4]) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_11 - 2]))) : (var_7))), (((/* implicit */long long int) (signed char)-5))));
                    }
                    for (long long int i_20 = 1; i_20 < 20; i_20 += 4) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */unsigned char) arr_38 [i_11 - 4])), (arr_41 [i_20 + 1] [i_11 - 2] [i_11 - 4] [i_11 - 2]))));
                        var_31 = ((/* implicit */signed char) -524237);
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_21 = 0; i_21 < 21; i_21 += 4) 
                    {
                        arr_69 [i_11] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16384))) > (2661647120255465258LL)));
                        var_32 = ((((/* implicit */int) arr_45 [i_11 + 1] [i_12])) - (((/* implicit */int) arr_45 [i_11 - 3] [16ULL])));
                    }
                    for (unsigned int i_22 = 1; i_22 < 17; i_22 += 2) 
                    {
                        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((-1028337122), (((/* implicit */int) (unsigned char)141))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)112))) / (var_4)))))) ? (((/* implicit */unsigned int) (~(arr_1 [i_22 + 4])))) : (((unsigned int) (+(var_1)))))))));
                        var_34 = ((/* implicit */long long int) 4294967282U);
                        var_35 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) arr_66 [i_11] [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_11] [i_11] [i_13] [i_22] [i_22 + 2]))) : (var_7))) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-106))))), (((/* implicit */long long int) (((((~(((/* implicit */int) arr_41 [i_11] [i_12] [(short)18] [(signed char)8])))) + (2147483647))) << (((((/* implicit */int) (signed char)34)) - (34))))))));
                        arr_72 [i_22] [i_13] [(_Bool)1] [i_22] = min((min((var_2), (((/* implicit */long long int) arr_43 [i_22] [i_11 - 1] [i_11] [i_11])))), (((/* implicit */long long int) ((((/* implicit */int) arr_43 [i_11] [i_11 - 1] [i_11] [i_11])) + (((/* implicit */int) arr_43 [i_11] [i_11 - 1] [(unsigned char)15] [i_11]))))));
                    }
                }
            } 
        } 
    }
    var_36 = ((/* implicit */unsigned int) var_10);
}
