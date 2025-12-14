/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158246
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
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    var_19 = ((/* implicit */unsigned char) 16777215);
                    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((-1), (-1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) >= (((/* implicit */int) var_12))))))) / (((/* implicit */int) arr_4 [i_0 + 1] [i_1] [3ULL]))));
                }
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_1])) ? (arr_7 [i_0 - 2] [i_1] [i_0 - 2] [i_1]) : (((/* implicit */long long int) arr_0 [i_0 - 3]))))) && (((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)0)), (arr_7 [i_0 + 1] [i_0 + 1] [i_1] [i_1])))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (-(13391539922951784698ULL))))));
    /* LoopSeq 3 */
    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        var_23 = ((/* implicit */signed char) ((((_Bool) -4)) ? (((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_11 [i_3] [i_3]))))))) : (max(((~(var_18))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-89)))))))));
        var_24 += ((/* implicit */int) max((((((/* implicit */_Bool) max((((/* implicit */short) arr_9 [i_3] [i_3])), ((short)-1)))) ? ((~(var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (arr_10 [17U] [i_3]))))))), (((/* implicit */unsigned int) arr_10 [(signed char)1] [(signed char)1]))));
    }
    for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        arr_16 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((arr_3 [i_4] [i_4] [i_4]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4]))))))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 15; i_8 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) var_0);
                                arr_25 [i_4] [i_5] [i_6] [i_5] [i_5] = ((/* implicit */long long int) var_9);
                                arr_26 [i_8] [i_7] [i_6] [i_4] [i_5] [i_4] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) arr_20 [i_4] [i_4] [i_4])))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_26 = arr_21 [i_5] [i_6] [i_5];
                        var_27 = ((/* implicit */_Bool) min((var_27), (var_13)));
                        arr_29 [i_5] [i_5] [i_6] [i_5] [i_6] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */long long int) ((/* implicit */int) var_17))) ^ (arr_7 [i_4] [i_4] [i_4] [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) max((var_3), (arr_21 [14LL] [i_5] [i_5])))))))) - (((((/* implicit */_Bool) arr_8 [i_6] [i_5] [i_6])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_4])))))));
                        arr_30 [i_4] [i_4] = ((/* implicit */unsigned int) arr_28 [i_4] [i_4]);
                        var_28 += ((/* implicit */unsigned int) ((short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_4]))))), (((((/* implicit */_Bool) (unsigned char)4)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) / (13391539922951784698ULL)))))) ? (((/* implicit */unsigned int) (~(arr_18 [i_10])))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) != (arr_18 [i_4])))), (arr_14 [(signed char)3] [i_5])))))));
                        arr_33 [(unsigned short)12] [i_5] [i_5] |= ((/* implicit */_Bool) min((arr_12 [i_4]), (((/* implicit */short) arr_6 [i_4] [i_6] [i_6]))));
                        arr_34 [i_4] [i_6] [i_10] = ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) 1)) || (((/* implicit */_Bool) arr_12 [i_10])))))) ? (((((/* implicit */_Bool) arr_32 [i_10] [i_6] [i_4])) ? (((/* implicit */int) arr_4 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_32 [6U] [(unsigned char)2] [i_10])))) : ((-(((int) var_17))))));
                        /* LoopSeq 3 */
                        for (signed char i_11 = 0; i_11 < 15; i_11 += 4) 
                        {
                            arr_39 [12U] [i_11] [i_6] [i_10] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_17 [i_5])), (var_4))))));
                            var_30 = ((/* implicit */signed char) ((((((/* implicit */int) (short)0)) << ((~(-1))))) < (arr_8 [i_4] [i_5] [i_6])));
                        }
                        for (int i_12 = 0; i_12 < 15; i_12 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned short) ((max((4194303U), (((/* implicit */unsigned int) arr_43 [i_4] [i_5] [i_6] [i_10] [i_12])))) * ((-(var_18)))));
                            var_32 = ((/* implicit */short) arr_2 [i_4]);
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_46 [i_4] [i_5] [5U] [i_10] [7LL] [i_4] [5U] = ((/* implicit */short) (!((!(((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned short) (signed char)-23)))))))));
                            arr_47 [i_4] [i_5] [i_5] [i_6] [i_10] [(unsigned char)6] = ((/* implicit */unsigned char) arr_42 [14] [i_5] [i_6] [i_10] [i_13]);
                            var_33 = ((/* implicit */unsigned char) (_Bool)1);
                            var_34 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned char)108)) : (((/* implicit */int) arr_27 [(_Bool)1] [i_6] [(_Bool)1] [i_10] [i_13] [5LL])))), (min((((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_4] [i_4] [i_5] [i_6] [i_6] [(short)7] [i_13]))))), (((var_13) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_40 [i_4] [i_4] [i_4] [i_10] [i_10]))))))));
                        }
                    }
                    for (unsigned int i_14 = 0; i_14 < 15; i_14 += 4) /* same iter space */
                    {
                        arr_50 [i_4] [i_5] [(unsigned short)12] [i_5] [i_14] = ((/* implicit */unsigned char) (-((-(arr_38 [i_6] [i_6] [i_6] [i_6])))));
                        var_35 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_7 [i_4] [i_5] [i_6] [i_6])) ? (arr_7 [i_4] [i_5] [i_5] [i_14]) : (arr_7 [i_4] [i_4] [i_6] [i_14]))), (((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_5])))))));
                        var_36 += ((/* implicit */unsigned long long int) arr_27 [i_14] [i_6] [i_6] [i_6] [i_5] [i_4]);
                        arr_51 [i_4] [i_5] [i_6] [i_14] [i_5] = ((/* implicit */_Bool) (~(arr_37 [i_14] [i_6] [i_6] [i_5] [(short)14])));
                    }
                    for (unsigned int i_15 = 0; i_15 < 15; i_15 += 4) /* same iter space */
                    {
                        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) max((((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_4] [i_15]))))), (((arr_7 [i_4] [i_4] [i_4] [i_4]) | (arr_7 [i_15] [i_6] [i_5] [i_4]))))))));
                        var_38 &= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_53 [i_4] [i_5] [i_6] [i_15] [i_4] [i_15]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_16 = 0; i_16 < 15; i_16 += 1) 
                        {
                            arr_56 [i_16] [(unsigned char)14] [i_16] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)211))));
                            arr_57 [i_16] [i_16] [i_4] [i_16] [i_4] = ((/* implicit */signed char) var_2);
                        }
                        arr_58 [i_15] [i_15] = ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (max((4194303U), (4290772992U))));
                    }
                    var_39 = ((/* implicit */int) arr_9 [i_4] [i_6]);
                }
            } 
        } 
    }
    for (signed char i_17 = 0; i_17 < 12; i_17 += 3) 
    {
        var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_17] [i_17] [i_17] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((+(arr_7 [i_17] [i_17] [i_17] [i_17])))));
        var_41 = ((/* implicit */unsigned long long int) (-(max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_17]))) : (var_18))), (((/* implicit */unsigned int) arr_4 [i_17] [i_17] [i_17]))))));
        var_42 *= ((/* implicit */signed char) (~(((/* implicit */int) arr_32 [i_17] [i_17] [i_17]))));
    }
    /* LoopNest 3 */
    for (short i_18 = 0; i_18 < 16; i_18 += 1) 
    {
        for (signed char i_19 = 0; i_19 < 16; i_19 += 2) 
        {
            for (long long int i_20 = 0; i_20 < 16; i_20 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_21 = 0; i_21 < 16; i_21 += 3) 
                    {
                        arr_71 [i_21] [i_20] [i_18] [i_18] [(short)2] [i_18] = ((/* implicit */unsigned char) ((unsigned int) (_Bool)1));
                        var_43 = ((/* implicit */unsigned short) arr_67 [i_18] [i_19] [i_20]);
                    }
                    var_44 = ((/* implicit */unsigned char) max((var_44), (((/* implicit */unsigned char) (-(((arr_68 [i_18] [i_19]) ? (((/* implicit */int) arr_68 [i_18] [i_19])) : (-489790311))))))));
                    arr_72 [i_18] [12U] [i_18] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [15U])))))) + (((((arr_7 [i_18] [i_18] [(unsigned short)6] [i_20]) > (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_18] [i_18]))))) ? (min((((/* implicit */unsigned long long int) -1LL)), (32883156923271947ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_64 [i_18]))) + (7555597067911500177LL))))))));
                }
            } 
        } 
    } 
}
