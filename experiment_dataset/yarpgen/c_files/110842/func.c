/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110842
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_0 [i_0 - 1])))) : ((-(((((/* implicit */_Bool) var_4)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((unsigned int) 1648360209));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 4; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 4; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) arr_10 [i_3] [i_0]))));
                                arr_16 [i_0 + 2] [i_0 + 2] [i_0 + 2] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(short)7])) ? (((/* implicit */long long int) var_12)) : (arr_11 [i_1] [i_2] [i_3] [i_4])))) ? (((/* implicit */unsigned long long int) arr_11 [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_0])) : (var_4))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0 + 3] [i_0] [i_1] [i_2 - 4] [i_4])))));
                                var_17 = ((/* implicit */_Bool) min((min((((/* implicit */long long int) min((arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4]), (((/* implicit */unsigned char) arr_7 [i_0]))))), (max((((/* implicit */long long int) var_13)), (2763142203424335642LL))))), (((long long int) (unsigned char)217))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_0] [i_2] |= ((/* implicit */long long int) arr_12 [(_Bool)1]);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 2; i_6 < 13; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((unsigned short) (-(arr_20 [i_0] [i_0] [i_6 + 1] [i_2 - 3])))))));
                                arr_22 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((unsigned char) arr_9 [i_0] [i_1] [i_5] [i_5]));
                                var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0 - 3]))))), (arr_20 [i_6] [i_1] [i_1] [11ULL])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 1; i_7 < 13; i_7 += 4) 
                    {
                        for (signed char i_8 = 3; i_8 < 11; i_8 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_24 [i_0] [i_1] [i_1] [i_7 - 1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_8] [i_7 - 1] [i_1]))))));
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) max((((((/* implicit */_Bool) arr_21 [i_8 + 3] [i_8] [i_8] [i_8] [i_8 - 1])) ? (((int) arr_24 [i_2] [i_7] [i_2] [i_1] [i_1] [(_Bool)1])) : (((/* implicit */int) arr_5 [i_2 - 4] [i_8])))), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0)))))))));
                                arr_28 [i_7] [i_1] [i_7] [i_2] [i_8] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(arr_4 [8LL]))) << (((((/* implicit */int) (short)-6691)) + (6705)))))) ? (arr_12 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_11))))));
                                var_22 = (+(((/* implicit */int) ((signed char) arr_27 [i_7] [i_1] [i_1] [i_2] [i_7 + 1] [i_7] [i_8 + 3]))));
                                var_23 = ((/* implicit */short) arr_6 [i_0 + 2] [i_7 - 1]);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_19 [i_1] [i_1] [i_1] [(_Bool)1]))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_0 - 1] [i_2 - 3] [i_0 - 1] [0ULL] [i_2 - 2]))))) : (arr_8 [i_0] [i_1])));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 3; i_9 < 10; i_9 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) -2005219351)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12))) : (1300682906U)));
        arr_31 [i_9 + 2] [i_9 + 2] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) arr_29 [i_9 - 3])))));
    }
    var_26 += ((/* implicit */unsigned char) ((unsigned int) ((var_3) ? (var_4) : (min((((/* implicit */unsigned long long int) 2147483643)), (var_4))))));
    /* LoopNest 2 */
    for (int i_10 = 3; i_10 < 16; i_10 += 4) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            {
                arr_38 [(unsigned char)10] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_34 [i_11] [i_10])) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) arr_35 [i_10])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [(_Bool)1])) ? (((/* implicit */int) arr_35 [i_10])) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) arr_33 [i_10])) ? (arr_36 [i_11]) : (((/* implicit */unsigned long long int) arr_37 [i_10] [i_11] [i_11])))))) : (min((17671364705513330565ULL), (arr_33 [i_10 + 1])))));
                /* LoopSeq 1 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_42 [i_10 - 3] [(short)5] [i_12] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_12])) ? (arr_39 [i_10]) : (arr_32 [i_10])))) ? (min((arr_33 [i_10]), (((/* implicit */unsigned long long int) -2147483639)))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (7949945195352538535ULL)))))) ? (((((/* implicit */_Bool) arr_32 [i_10 - 3])) ? (arr_37 [i_10] [4] [i_12]) : (((/* implicit */int) arr_35 [i_10])))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_34 [15ULL] [i_11])), (arr_39 [i_10])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_12] [i_10] [(unsigned short)4]))))) : (min((((/* implicit */int) arr_35 [i_10])), (arr_37 [i_10] [(signed char)14] [11])))))));
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (arr_33 [i_10 + 1])));
                }
                /* LoopSeq 1 */
                for (int i_13 = 0; i_13 < 18; i_13 += 2) 
                {
                    var_28 = min((var_14), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_10] [i_10] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_39 [i_10])))) ? (((((/* implicit */_Bool) (short)-31574)) ? (arr_39 [i_10]) : (((/* implicit */unsigned int) arr_43 [i_10] [i_11] [i_11] [i_13])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_40 [i_13] [i_11])))))));
                    arr_45 [i_10] [i_11] [i_13] = ((/* implicit */long long int) var_4);
                }
                var_29 += ((/* implicit */short) (+(2147483647)));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 2; i_15 < 15; i_15 += 3) 
                    {
                        for (int i_16 = 1; i_16 < 15; i_16 += 2) 
                        {
                            {
                                arr_53 [i_10] [i_11] [i_14] [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) arr_39 [i_10])) ? (((/* implicit */int) ((arr_44 [3LL] [3LL] [i_14]) == (((/* implicit */long long int) ((/* implicit */int) var_6)))))) : (arr_43 [i_14 + 1] [i_14 + 1] [i_14] [i_14 + 1])));
                                var_30 = ((/* implicit */unsigned long long int) arr_37 [(unsigned char)17] [i_11] [i_10]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (unsigned int i_18 = 1; i_18 < 16; i_18 += 3) 
                        {
                            {
                                var_31 += ((((/* implicit */_Bool) arr_39 [10U])) ? (arr_43 [(_Bool)1] [i_14 + 1] [i_14 + 1] [i_14]) : (arr_43 [i_14 + 1] [i_14 + 1] [i_10] [i_10]));
                                var_32 = ((/* implicit */short) arr_56 [i_10] [i_11] [i_11] [i_17] [17ULL] [i_18 - 1]);
                            }
                        } 
                    } 
                    arr_58 [i_10] [i_11] [i_10] [i_14] = ((/* implicit */_Bool) ((unsigned long long int) arr_40 [i_10 + 1] [i_14 + 1]));
                    /* LoopNest 2 */
                    for (unsigned char i_19 = 0; i_19 < 18; i_19 += 2) 
                    {
                        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                        {
                            {
                                arr_64 [i_19] [12ULL] |= ((/* implicit */unsigned short) ((signed char) arr_33 [i_10 + 1]));
                                arr_65 [i_19] |= ((_Bool) arr_60 [i_14] [i_20 - 1] [i_14 + 1] [i_10 - 1]);
                                arr_66 [i_10] [(signed char)7] [i_14 + 1] [i_14] [i_11] [i_11] [i_10] = ((/* implicit */unsigned int) var_5);
                            }
                        } 
                    } 
                }
                for (unsigned int i_21 = 0; i_21 < 18; i_21 += 2) 
                {
                    arr_69 [i_10] [i_10] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_10] [i_10] [13U] [i_10] [i_10]))) : (10234143784040784293ULL)))) ? ((~(-94735353))) : (arr_62 [i_10 + 1] [i_11] [i_21] [i_10] [i_10])))), (arr_33 [i_11])));
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_36 [i_10 - 1]))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))) : (arr_33 [i_11])));
                }
                for (long long int i_22 = 0; i_22 < 18; i_22 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_23 = 0; i_23 < 18; i_23 += 3) 
                    {
                        for (unsigned long long int i_24 = 0; i_24 < 18; i_24 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_10] [(unsigned char)8] [i_23] [i_10])) ? (((/* implicit */int) arr_54 [i_10 + 2] [i_11] [(unsigned short)17] [i_10])) : (((/* implicit */int) arr_54 [i_10 - 2] [i_11] [i_22] [i_10]))))) && (((/* implicit */_Bool) arr_54 [i_10] [i_10] [i_10] [i_10]))));
                                var_35 = ((/* implicit */unsigned short) 1300682915U);
                            }
                        } 
                    } 
                    arr_79 [i_10] [i_22] [i_11] [i_10] = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) (signed char)-127)), (9223372036854775807LL))), (((/* implicit */long long int) (~(arr_62 [i_10] [i_10 - 1] [i_10] [i_11] [i_22]))))));
                    arr_80 [i_10] [i_10] [i_22] [i_10] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)104))));
                    arr_81 [i_10] [i_11] [i_10] = (-2147483647 - 1);
                    var_36 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_49 [i_22] [i_10 - 1] [i_22] [i_10 - 3] [i_10 - 1] [i_10 + 1])) ? (arr_50 [i_10 + 2] [i_10 - 2] [i_10]) : (arr_50 [i_10 + 1] [i_10] [i_10]))))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
    {
        var_37 += ((/* implicit */unsigned long long int) arr_82 [i_25] [i_25]);
        /* LoopNest 2 */
        for (unsigned long long int i_26 = 1; i_26 < 17; i_26 += 2) 
        {
            for (unsigned long long int i_27 = 0; i_27 < 20; i_27 += 1) 
            {
                {
                    arr_88 [i_27] [i_27] [i_25] = ((/* implicit */unsigned long long int) ((arr_82 [i_26] [i_26 + 2]) / (max((1768920257U), (((/* implicit */unsigned int) (unsigned char)7))))));
                    arr_89 [i_25] [i_27] = ((int) arr_85 [i_26 + 2] [i_26 - 1]);
                    /* LoopNest 2 */
                    for (signed char i_28 = 1; i_28 < 19; i_28 += 3) 
                    {
                        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_91 [i_26 + 2] [i_26 + 3] [i_26 + 1] [i_28 - 1])) ? (((/* implicit */int) arr_91 [i_26 + 2] [i_26 - 1] [i_26 - 1] [i_28 - 1])) : (((/* implicit */int) arr_91 [i_26 - 1] [i_26 - 1] [i_26 + 3] [i_28 - 1])))), (((((/* implicit */_Bool) arr_91 [i_26 + 2] [i_26 + 2] [i_26 + 2] [i_28 - 1])) ? (((/* implicit */int) arr_91 [i_26 + 3] [i_26 + 3] [i_26 - 1] [i_28 + 1])) : (((/* implicit */int) arr_91 [i_26 - 1] [i_26 - 1] [i_26 + 2] [i_28 + 1]))))));
                                var_39 = ((/* implicit */unsigned int) arr_87 [i_25] [i_26] [i_25]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_94 [i_25] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_86 [i_25] [(unsigned char)0] [i_25]) ? (arr_82 [12] [i_25]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_86 [i_25] [(signed char)8] [i_25])))))) ? ((+(var_10))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_90 [i_25] [i_25])) ? (((/* implicit */int) arr_87 [i_25] [i_25] [i_25])) : (((/* implicit */int) var_1))))))))));
    }
}
