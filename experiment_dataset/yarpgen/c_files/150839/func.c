/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150839
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
    for (signed char i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 4; i_2 < 14; i_2 += 4) 
                {
                    var_11 *= ((/* implicit */unsigned int) (signed char)8);
                    arr_10 [i_0] [(unsigned char)4] [i_1] [i_0] = ((/* implicit */unsigned int) (unsigned char)21);
                    var_12 *= ((/* implicit */unsigned int) min((min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))))), (arr_3 [i_2 - 4]))), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_1 [i_1] [i_1]), (var_10)))))))));
                    arr_11 [i_1] [i_0] = ((/* implicit */signed char) arr_8 [i_0] [i_0 + 1] [i_1] [i_1]);
                }
                /* LoopSeq 3 */
                for (unsigned int i_3 = 4; i_3 < 11; i_3 += 4) 
                {
                    arr_14 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (signed char)-127);
                    arr_15 [i_3] [i_1] [i_3 - 2] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_3] [i_3 - 4])) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)122))))))), (((/* implicit */int) arr_9 [i_1]))));
                    var_13 *= ((/* implicit */signed char) (+(min((((/* implicit */int) arr_2 [i_0 + 2] [i_1] [i_3 - 2])), (((((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_0])) / (((/* implicit */int) arr_8 [i_0] [i_1] [i_3] [i_3]))))))));
                }
                for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    arr_20 [i_1] [i_4] = ((unsigned int) var_1);
                    arr_21 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_8 [i_0 - 1] [i_1] [i_1] [i_1]))))) == (((((/* implicit */_Bool) arr_19 [i_1] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)137)))))))));
                    var_14 *= (signed char)-41;
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 1; i_5 < 14; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
                        {
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_13 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_0 + 1])) || (((/* implicit */_Bool) arr_3 [i_0 - 1]))))))));
                            var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) < ((+((~(((/* implicit */int) var_9))))))));
                        }
                        for (unsigned int i_7 = 2; i_7 < 11; i_7 += 1) 
                        {
                            var_17 = (signed char)29;
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_7 + 4] [i_1]))))) ? (((/* implicit */int) ((signed char) (-(((/* implicit */int) var_3)))))) : (((/* implicit */int) ((min((3160192807U), (((/* implicit */unsigned int) arr_4 [i_0] [i_4])))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)68))))))));
                            var_19 = ((/* implicit */unsigned int) arr_6 [i_7 + 4]);
                        }
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_4] [i_5]))))) ^ (min((((((/* implicit */_Bool) 3474311789U)) ? (3688486856U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_4] [i_0]))))), (arr_16 [i_0 + 1] [i_4] [i_5 - 1]))))))));
                        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_4] [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_4] [i_4] [i_1] [i_4])))))) ? ((-(((/* implicit */int) (signed char)-124)))) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_4] [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_25 [i_0] [i_0] [i_1] [i_1] [i_1] [i_5]))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
                        {
                            var_22 = ((/* implicit */signed char) 4294967295U);
                            var_23 *= ((/* implicit */unsigned int) arr_23 [i_4] [i_4] [i_4] [i_4]);
                            arr_32 [i_1] [i_5] [i_4] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) arr_17 [i_0 + 1] [i_5 + 1] [i_4] [i_0 + 1])))), ((((!(((/* implicit */_Bool) 3859129776U)))) || (((/* implicit */_Bool) (signed char)12))))));
                        }
                    }
                    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        var_24 *= ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))), ((~(1231605868U)))))));
                        arr_36 [i_0 - 3] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) arr_12 [i_0] [i_0 + 1] [i_0]))), (((((/* implicit */_Bool) arr_12 [i_0 + 2] [i_0 - 2] [i_1])) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) arr_12 [i_0] [i_0 - 1] [i_9]))))));
                    }
                }
                for (unsigned int i_10 = 0; i_10 < 15; i_10 += 4) 
                {
                    var_25 *= var_9;
                    var_26 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_30 [i_0 - 1] [i_0 + 2])) ? (((/* implicit */int) arr_12 [i_0 + 2] [i_0 - 3] [i_0 + 2])) : (((/* implicit */int) arr_12 [i_0 + 2] [i_0 + 1] [i_0 - 1])))), (((/* implicit */int) min((var_10), (((/* implicit */unsigned char) var_0)))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 1) 
                    {
                        arr_42 [i_0] [i_10] [i_1] = ((/* implicit */signed char) ((unsigned char) arr_40 [i_1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 - 3] [i_0 + 2]));
                        arr_43 [i_10] [i_10] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0 + 2] [(signed char)5])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_12 = 4; i_12 < 14; i_12 += 4) 
                        {
                            arr_47 [i_12] [3U] [i_1] [i_1] [i_1] [i_0 + 1] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_1 [i_11] [i_10])) + (((/* implicit */int) (unsigned char)96))))));
                            arr_48 [i_1] [i_1] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1]))) < (var_8)));
                            arr_49 [i_1] [i_0 - 3] [i_1] [i_10] [6U] [i_11] [i_12] = ((unsigned int) arr_13 [i_12] [i_12] [i_12] [i_12 - 2]);
                            arr_50 [i_0] [i_0 + 2] [i_0] [12U] [i_0] [i_1] = ((/* implicit */unsigned int) arr_9 [i_0 - 2]);
                            arr_51 [i_11] [i_11] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_5 [i_0] [i_0] [i_11]))) ? (((/* implicit */int) arr_12 [i_0] [i_0 - 3] [i_0 + 2])) : (((/* implicit */int) var_4))));
                        }
                        for (unsigned int i_13 = 2; i_13 < 14; i_13 += 2) 
                        {
                            arr_55 [i_0] [i_1] [i_1] [i_13] = ((/* implicit */unsigned int) var_3);
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) arr_37 [i_10] [i_11]))));
                        }
                    }
                    for (unsigned char i_14 = 1; i_14 < 11; i_14 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned char) ((signed char) (unsigned char)16));
                        var_29 &= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0 + 2] [i_14 + 1]))));
                    }
                    for (unsigned char i_15 = 1; i_15 < 11; i_15 += 1) /* same iter space */
                    {
                        arr_60 [i_10] [i_1] [i_0] [i_15] [9U] [i_1] = ((/* implicit */unsigned int) min((var_3), (arr_38 [i_0 - 1] [i_1] [i_10] [i_15 + 1])));
                        arr_61 [i_0] [i_1] [i_1] [i_1] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (min((((/* implicit */unsigned int) var_3)), (arr_27 [i_0] [i_1] [i_10] [i_10] [(unsigned char)12]))))), (((unsigned int) ((unsigned char) arr_13 [i_0 + 1] [i_0] [6U] [i_0]))));
                        arr_62 [i_1] [i_1] = ((/* implicit */unsigned char) (+((+(arr_13 [i_0] [i_15 + 1] [i_0 + 2] [i_15 + 1])))));
                        var_30 = ((/* implicit */unsigned int) arr_19 [i_0 - 2] [i_1]);
                    }
                    for (unsigned char i_16 = 1; i_16 < 11; i_16 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)36))) < (((min((arr_27 [i_0] [i_1] [i_1] [i_10] [i_16]), (((/* implicit */unsigned int) arr_23 [i_10] [i_1] [i_1] [i_1])))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_58 [i_0] [(signed char)0])) : (((/* implicit */int) (unsigned char)2))))))))))));
                        var_32 = ((unsigned char) 1541252404U);
                        /* LoopSeq 2 */
                        for (unsigned int i_17 = 0; i_17 < 15; i_17 += 4) 
                        {
                            arr_69 [i_0] [i_1] [i_1] [i_1] [i_17] = ((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) ((arr_13 [i_0] [i_0] [i_16 + 2] [i_16 + 2]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_1])))))))));
                            arr_70 [i_1] [i_0 - 3] [i_16] [i_1] [i_0 - 3] [i_0 - 3] [i_0 - 3] = ((/* implicit */unsigned char) ((signed char) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (2305309439U))), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_37 [i_0] [i_10])), ((unsigned char)77)))))));
                        }
                        for (unsigned int i_18 = 0; i_18 < 15; i_18 += 4) 
                        {
                            arr_74 [i_0] [i_1] [i_1] [i_16 + 2] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned char) (signed char)51)), ((unsigned char)128))))) << (((var_1) - (1738229634U)))));
                            arr_75 [i_1] [i_1] = ((/* implicit */unsigned int) min((arr_30 [i_10] [i_10]), (((/* implicit */unsigned char) var_5))));
                            arr_76 [i_0 - 1] [i_1] [(signed char)1] [i_10] [i_1] [i_0 - 1] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_44 [i_16] [i_16 + 2] [i_16 + 2])) - ((+(((/* implicit */int) (signed char)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((unsigned char) var_2))))) : ((+(((((/* implicit */_Bool) var_4)) ? (var_8) : (var_8))))));
                            arr_77 [i_18] [i_1] [i_10] [i_1] [i_0] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_44 [i_0 + 1] [i_16] [i_16])))) >= (((/* implicit */int) arr_3 [i_1]))));
                            var_33 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) arr_6 [i_18])), (3949859414U))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (signed char i_19 = 3; i_19 < 12; i_19 += 4) 
                    {
                        for (unsigned char i_20 = 0; i_20 < 15; i_20 += 4) 
                        {
                            {
                                arr_84 [i_0] [i_1] [i_1] [i_19] [i_19] = ((/* implicit */signed char) (+(min((((((/* implicit */_Bool) arr_13 [i_20] [i_20] [i_20] [i_20])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) : (1503917959U))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)253)))))))));
                                var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_0] [i_20] [i_0 + 2])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0 - 3] [i_0 + 2]))))) : (arr_67 [i_20] [i_1] [i_10] [i_10] [i_19] [i_19] [i_20]))))));
                            }
                        } 
                    } 
                    arr_85 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_4)))), (((/* implicit */int) ((signed char) var_8)))))) ? (min((((((/* implicit */_Bool) 1U)) ? (arr_67 [i_1] [i_1] [i_1] [i_0] [i_1] [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))), (arr_46 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_0 + 2] [i_1] [i_10]))) : (var_8)));
                }
            }
        } 
    } 
    var_35 = (-(var_1));
    /* LoopNest 2 */
    for (signed char i_21 = 0; i_21 < 17; i_21 += 4) 
    {
        for (unsigned int i_22 = 0; i_22 < 17; i_22 += 3) 
        {
            {
                arr_91 [i_22] [i_21] [i_21] = ((/* implicit */unsigned int) ((unsigned char) (+(min((((/* implicit */unsigned int) (unsigned char)154)), (arr_88 [i_22]))))));
                var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (+(var_1))))));
                arr_92 [i_21] [i_22] = ((/* implicit */unsigned char) 15U);
            }
        } 
    } 
}
