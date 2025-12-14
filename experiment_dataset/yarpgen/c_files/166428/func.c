/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166428
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
    var_12 = ((/* implicit */int) min((((/* implicit */short) ((signed char) var_4))), (((short) var_3))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-67)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)38))) : (-3444578397629888914LL)))) ? (((arr_8 [i_0] [i_1] [i_0] [i_0] [i_3]) ? (((/* implicit */int) arr_8 [i_3] [i_3] [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_8 [i_3] [i_3] [(unsigned char)18] [i_3] [i_3])))) : (((/* implicit */int) ((signed char) arr_3 [i_2])))));
                        arr_11 [i_3] [i_1] = arr_10 [i_0] [i_0] [i_0] [i_1];
                        var_14 -= ((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_0]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned short) var_11);
                            var_16 = ((/* implicit */int) var_3);
                            var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                            var_18 &= ((/* implicit */_Bool) arr_4 [i_2] [i_2]);
                        }
                        for (long long int i_5 = 3; i_5 < 18; i_5 += 4) 
                        {
                            var_19 += ((/* implicit */unsigned char) ((3408823052U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_20 *= (!(((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_1 [i_1]))))))));
                            var_21 -= ((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_2] [i_5 + 2] [i_5] [i_5])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_13 [i_0] [i_5 - 1] [(signed char)2] [i_5])))) & (((/* implicit */int) max(((!(((/* implicit */_Bool) var_11)))), (((_Bool) (short)-16697)))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (int i_6 = 1; i_6 < 19; i_6 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                arr_21 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_6] [i_7])) ? ((((_Bool)1) ? (11ULL) : (arr_18 [i_0] [i_6] [i_7]))) : (((((/* implicit */_Bool) arr_20 [i_0] [i_6] [i_6 + 1] [i_7])) ? (((/* implicit */unsigned long long int) arr_16 [i_0] [(unsigned short)11] [i_6])) : (arr_18 [i_0] [i_6] [i_6])))));
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) arr_8 [(short)8] [i_6] [(unsigned char)5] [i_8 + 1] [(unsigned char)5]);
                    var_23 *= ((/* implicit */int) (_Bool)1);
                }
                /* LoopSeq 3 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_24 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)50)) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_14 [i_9] [i_6 - 1] [5]))))));
                    var_25 = ((/* implicit */int) arr_2 [i_6] [i_6]);
                    arr_28 [i_9] [i_7] [i_6] [i_6] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_6] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_7] [i_7] [i_6] [i_6 + 1] [i_0])) : (((/* implicit */int) arr_7 [i_9] [i_0] [i_6] [i_6 - 1] [i_0]))));
                }
                for (unsigned int i_10 = 0; i_10 < 20; i_10 += 1) 
                {
                    var_26 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_6 + 1] [i_7] [i_0])) ? (arr_5 [i_0] [i_7] [i_0]) : (arr_5 [i_0] [i_0] [i_0])));
                    var_27 *= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-11227))) - (9154618031607332607LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43448)))));
                }
                for (int i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) arr_12 [i_7] [i_0] [i_11]))));
                    arr_34 [i_6] = ((/* implicit */unsigned int) arr_7 [i_11] [19U] [i_6] [i_6] [19U]);
                    arr_35 [i_6] [i_6] [i_7] = ((/* implicit */_Bool) ((arr_22 [i_6 + 1] [i_6 + 1] [i_6] [i_6] [i_7]) ? (((/* implicit */int) arr_22 [i_6 + 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6 + 1])) : (((/* implicit */int) arr_22 [i_6 + 1] [i_6 - 1] [i_6] [i_6 + 1] [i_7]))));
                    var_29 = ((/* implicit */long long int) ((877727422U) - (65535U)));
                }
                arr_36 [i_0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_7] [i_6 + 1])) ? (arr_23 [i_7] [i_6 - 1]) : (arr_23 [i_0] [i_6 - 1])));
            }
            for (unsigned short i_12 = 0; i_12 < 20; i_12 += 3) 
            {
                var_30 = ((/* implicit */unsigned int) ((arr_32 [i_0] [i_0] [i_6] [i_6]) ? ((+(arr_2 [i_6 - 1] [i_6 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_6] [i_6 - 1] [i_6 + 1] [i_6 - 1])))));
                var_31 -= ((/* implicit */unsigned int) (signed char)-50);
                var_32 = ((/* implicit */long long int) arr_13 [i_6] [i_6] [i_6 + 1] [i_6 + 1]);
                var_33 -= ((/* implicit */unsigned int) ((arr_33 [i_6] [i_0] [i_6 - 1] [i_6 - 1] [i_0]) >> (((arr_6 [i_12] [i_12] [i_0] [i_6 + 1]) - (1008934892916899279LL)))));
            }
            var_34 = ((/* implicit */signed char) arr_24 [i_0] [i_6]);
            arr_39 [i_0] [i_6] = ((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) (signed char)56)), (11ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_6] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) arr_14 [(unsigned short)17] [i_6 + 1] [i_6 + 1])) : (((/* implicit */int) (_Bool)1)))))));
            var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) (-(arr_2 [i_6 + 1] [i_6 + 1]))))));
        }
        var_36 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_0])), (((((-4LL) * (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]))))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        arr_40 [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_31 [i_0] [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_0])))) == (((/* implicit */int) (_Bool)1)))) ? (16287770887222513994ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || ((_Bool)1)))))));
    }
    for (unsigned char i_13 = 3; i_13 < 20; i_13 += 3) 
    {
        var_37 = ((/* implicit */unsigned int) arr_43 [i_13]);
        arr_44 [i_13] = ((/* implicit */_Bool) arr_42 [i_13]);
        var_38 -= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_13 - 2])) || (((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned short) var_7)))))))) == ((+(((/* implicit */int) arr_41 [(signed char)8]))))));
        arr_45 [i_13] = ((/* implicit */long long int) arr_42 [i_13 + 1]);
        /* LoopNest 2 */
        for (unsigned char i_14 = 1; i_14 < 20; i_14 += 1) 
        {
            for (int i_15 = 2; i_15 < 21; i_15 += 3) 
            {
                {
                    arr_52 [i_13 - 2] [i_13] [i_15 - 1] = ((/* implicit */signed char) min(((unsigned char)84), (((/* implicit */unsigned char) arr_41 [i_13]))));
                    arr_53 [i_13] [i_13] [10U] [(signed char)7] = ((/* implicit */signed char) arr_42 [i_13]);
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 0; i_16 < 23; i_16 += 4) 
                    {
                        for (long long int i_17 = 1; i_17 < 20; i_17 += 1) 
                        {
                            {
                                var_39 = ((/* implicit */int) (((+(var_9))) < (arr_48 [i_13])));
                                arr_59 [i_13] [i_13] [i_14] [i_15] [i_16] [i_17] = ((/* implicit */int) ((unsigned int) (+(((/* implicit */int) arr_46 [i_13] [i_13])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_18 = 0; i_18 < 13; i_18 += 2) 
    {
        arr_63 [(short)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_18]))))) - (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)98), (((/* implicit */unsigned char) arr_37 [i_18] [i_18] [i_18] [(short)8]))))))))) ? (((/* implicit */int) (unsigned short)5097)) : (((/* implicit */int) arr_10 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_18]))));
        var_40 |= (~(((/* implicit */int) (_Bool)1)));
        arr_64 [i_18] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_31 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18])), (arr_1 [i_18])))) < (((/* implicit */int) ((signed char) arr_46 [i_18] [i_18])))))), (((((/* implicit */_Bool) arr_10 [i_18] [i_18] [i_18] [i_18])) ? (min((((/* implicit */long long int) arr_54 [i_18])), (arr_6 [i_18] [i_18] [i_18] [i_18]))) : (((/* implicit */long long int) ((((/* implicit */int) (short)28344)) - (((/* implicit */int) (_Bool)0)))))))));
    }
    for (int i_19 = 3; i_19 < 19; i_19 += 1) 
    {
        var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) arr_46 [i_19] [2U]))));
        arr_67 [i_19] = ((/* implicit */long long int) min((((((/* implicit */int) (unsigned short)65529)) & (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_51 [i_19 - 3] [i_19 + 1] [i_19] [i_19 + 1]))));
        arr_68 [i_19] [i_19 - 2] &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_50 [i_19 - 3] [i_19 - 2]))))));
    }
    var_42 = ((/* implicit */signed char) var_4);
}
