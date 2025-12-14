/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188651
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
    var_17 ^= ((/* implicit */unsigned char) 16);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-1)) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
        var_19 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_2] [i_2] = (+(917504));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_16 [i_4] [i_0] [i_2] [i_0] [i_0] = ((int) arr_5 [i_0]);
                                arr_17 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3 - 2] [i_3 + 3] [i_4] [i_4] [i_4]))) > (129024U)));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 0U))) ? (((/* implicit */int) arr_6 [i_3 + 1] [i_1] [i_1])) : ((~(1301348764)))));
                            }
                        } 
                    } 
                    var_21 ^= ((((/* implicit */_Bool) arr_15 [i_2] [i_0] [i_1] [i_1] [i_1] [i_2])) ? (((/* implicit */int) ((((/* implicit */int) arr_15 [i_2] [i_1] [i_1] [i_1] [i_2] [i_2])) > (((/* implicit */int) arr_5 [i_2]))))) : (((/* implicit */int) (unsigned char)1)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
    {
        arr_21 [i_5] = ((/* implicit */signed char) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
        /* LoopSeq 2 */
        for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            arr_25 [i_5] [i_5] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) arr_18 [i_5])))));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                arr_28 [i_7] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) arr_15 [i_5] [i_6] [i_7] [i_5] [i_6] [i_7])) ? (var_4) : (((/* implicit */int) arr_3 [i_5] [i_5])));
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6] [i_7]))) & (4294967284U))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 1; i_9 < 13; i_9 += 3) 
                    {
                        var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_9 + 2] [i_9 + 1] [i_9] [i_9] [i_9 + 2] [i_7])) ? (arr_11 [i_9 + 3] [i_9 + 3] [i_9] [i_9] [i_9 + 2] [i_5]) : (arr_11 [i_9 + 3] [i_9 + 1] [i_9] [i_9] [i_9 + 2] [i_7])));
                        var_24 = ((/* implicit */signed char) arr_1 [i_8] [i_9]);
                        var_25 = ((/* implicit */unsigned char) arr_4 [i_5] [i_5] [i_5]);
                        var_26 = ((/* implicit */int) max((var_26), ((-(((/* implicit */int) (signed char)95))))));
                        var_27 *= ((/* implicit */unsigned char) ((((133955584U) * (((/* implicit */unsigned int) 1360500217)))) >> (((((/* implicit */int) (unsigned char)56)) - (((/* implicit */int) (signed char)40))))));
                    }
                    var_28 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_5] [i_5]))))) ? (((/* implicit */int) arr_19 [i_5] [i_5])) : (((((/* implicit */_Bool) arr_6 [i_5] [i_6] [i_7])) ? ((-2147483647 - 1)) : (-10))));
                    var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5] [i_6] [i_7] [i_8] [i_7] [i_6])) ? (arr_2 [i_7] [i_8]) : (((/* implicit */int) (signed char)-39)))))));
                }
                var_30 += ((signed char) var_14);
            }
            arr_34 [i_5] = ((/* implicit */unsigned int) arr_33 [i_5] [i_6] [i_5] [i_5] [i_5] [i_5] [i_6]);
            arr_35 [i_5] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_5] [i_5] [i_5] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) : (4194303)));
        }
        for (unsigned int i_10 = 2; i_10 < 14; i_10 += 4) 
        {
            var_31 = ((/* implicit */unsigned int) ((25U) < (((/* implicit */unsigned int) 2147483647))));
            /* LoopSeq 4 */
            for (unsigned int i_11 = 0; i_11 < 17; i_11 += 4) 
            {
                arr_43 [i_5] [i_5] = ((/* implicit */int) arr_26 [i_5] [i_10 - 2] [i_11]);
                /* LoopSeq 1 */
                for (unsigned int i_12 = 0; i_12 < 17; i_12 += 2) 
                {
                    arr_47 [i_11] [i_11] &= ((/* implicit */int) arr_38 [i_10] [i_10] [i_12]);
                    arr_48 [i_5] [i_5] [i_10] [i_10] [i_11] [i_12] = 780327672;
                    arr_49 [i_5] = (-(arr_42 [i_10] [i_10 - 1] [i_10] [i_10 + 1]));
                    arr_50 [i_5] = ((((/* implicit */_Bool) arr_23 [i_10 - 2] [i_11])) ? (2930372145U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) arr_5 [i_5]))))));
                }
                var_32 = ((/* implicit */unsigned int) max((var_32), (0U)));
            }
            for (unsigned char i_13 = 0; i_13 < 17; i_13 += 1) 
            {
                var_33 += (-(((/* implicit */int) arr_33 [i_5] [i_5] [i_10] [i_10 - 1] [i_10 + 2] [i_13] [i_13])));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 17; i_14 += 3) 
                {
                    for (unsigned int i_15 = 0; i_15 < 17; i_15 += 1) 
                    {
                        {
                            var_34 = var_7;
                            arr_58 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_54 [i_5] [i_10] [i_13] [i_14])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_5] [i_10] [i_13] [i_13] [i_14] [i_15])) ? (((/* implicit */int) arr_7 [i_5] [i_5])) : (((/* implicit */int) (signed char)124))))) : (arr_4 [i_10 - 1] [i_10 - 2] [i_10 + 1])));
                            var_35 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_10] [i_10] [i_10] [i_10 + 3] [i_5]))));
                            arr_59 [i_5] [i_5] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_5] [i_15] [i_13])) ? (((((/* implicit */_Bool) arr_26 [i_15] [i_14] [i_13])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_14] [i_5] [i_5]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113)))));
                            var_36 = ((/* implicit */unsigned int) var_12);
                        }
                    } 
                } 
            }
            for (signed char i_16 = 0; i_16 < 17; i_16 += 2) 
            {
                var_37 = ((/* implicit */unsigned char) ((unsigned int) arr_29 [i_5]));
                var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)142)) ? (arr_53 [i_16] [i_10 + 1] [i_10]) : (28U)));
                var_39 = ((/* implicit */unsigned int) ((int) ((signed char) (unsigned char)3)));
                arr_63 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_5] [i_5] [i_10] [i_16] [i_5])) % (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((signed char) var_15))) : (((/* implicit */int) arr_14 [i_5] [i_5] [i_5] [i_5] [i_5]))));
            }
            for (unsigned char i_17 = 0; i_17 < 17; i_17 += 4) 
            {
                var_40 = (+(((/* implicit */int) arr_41 [i_5] [i_10] [i_10 + 1] [i_5])));
                var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */int) arr_27 [i_10 - 2] [i_10] [i_17])) : (arr_52 [i_10 - 2] [i_17]))))));
            }
            var_42 = ((/* implicit */int) arr_64 [i_10 + 3] [i_10] [i_10 + 2] [i_10]);
        }
        /* LoopNest 3 */
        for (unsigned char i_18 = 2; i_18 < 13; i_18 += 4) 
        {
            for (unsigned char i_19 = 0; i_19 < 17; i_19 += 4) 
            {
                for (signed char i_20 = 0; i_20 < 17; i_20 += 4) 
                {
                    {
                        var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)64)) ? (((((/* implicit */_Bool) var_9)) ? (arr_53 [i_5] [i_18] [i_19]) : (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-16)))))));
                        var_44 = (+(arr_46 [i_18 - 1] [i_19] [i_5]));
                        var_45 ^= ((((/* implicit */_Bool) (signed char)-111)) ? ((-(var_4))) : (arr_52 [i_19] [i_19]));
                    }
                } 
            } 
        } 
        arr_75 [i_5] = ((((/* implicit */_Bool) -2147483643)) ? (1759142460) : (-994255945));
    }
}
