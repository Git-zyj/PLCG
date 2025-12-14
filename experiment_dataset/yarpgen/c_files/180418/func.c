/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180418
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
    var_15 = ((/* implicit */unsigned int) var_1);
    var_16 = ((short) (!(((/* implicit */_Bool) ((short) (short)-16586)))));
    var_17 += ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            var_18 += ((/* implicit */signed char) (short)21119);
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (unsigned short)992))));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                var_20 *= ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (1383298985U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))));
                arr_9 [i_3] [i_2] [i_3] |= ((/* implicit */_Bool) (~(var_10)));
            }
            for (signed char i_4 = 3; i_4 < 11; i_4 += 2) 
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)98)) ? (((((/* implicit */_Bool) 3991552793U)) ? (((/* implicit */unsigned long long int) arr_3 [i_0] [i_2] [i_0])) : (48178440649302129ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)180)))))));
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)13)) ^ (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1))))));
                /* LoopNest 2 */
                for (short i_5 = 2; i_5 < 11; i_5 += 1) 
                {
                    for (unsigned int i_6 = 3; i_6 < 11; i_6 += 3) 
                    {
                        {
                            var_23 -= ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) < (2911668310U));
                            var_24 = ((/* implicit */short) (+(((/* implicit */int) (short)-32599))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned char) (unsigned short)10262);
            }
            var_26 = ((/* implicit */unsigned short) (-(arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1])));
            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (1383299004U)))) : (arr_14 [i_0] [i_2] [i_0] [4U]))))));
            var_28 = ((/* implicit */short) min((var_28), ((short)-23358)));
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                /* LoopSeq 4 */
                for (short i_8 = 0; i_8 < 13; i_8 += 2) 
                {
                    arr_26 [i_8] [i_8] [i_2] [i_0] [i_0] = arr_1 [i_2] [i_8];
                    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) 4194303))));
                }
                for (int i_9 = 3; i_9 < 10; i_9 += 2) /* same iter space */
                {
                    var_30 = ((/* implicit */_Bool) 1383298995U);
                    var_31 = ((/* implicit */int) min((var_31), (((((/* implicit */_Bool) (short)-32764)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) (unsigned char)92))))));
                    var_32 = ((/* implicit */unsigned short) (short)-32599);
                    arr_29 [i_0] [(signed char)3] [i_7] [i_2] [(_Bool)1] [i_9] = ((/* implicit */short) ((((/* implicit */int) var_3)) != (((/* implicit */int) arr_22 [i_9 - 3] [i_2] [i_2] [i_0]))));
                    var_33 = ((/* implicit */short) ((((/* implicit */int) arr_20 [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_7 [9U] [i_2] [i_9] [i_9 - 1]))));
                }
                for (int i_10 = 3; i_10 < 10; i_10 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_11 = 3; i_11 < 11; i_11 += 2) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned int) (((!((_Bool)1))) ? (((((/* implicit */_Bool) (short)23000)) ? (((/* implicit */int) arr_19 [i_11 - 2] [i_10 - 1] [i_2] [i_2] [i_2] [i_2] [i_0])) : (((/* implicit */int) var_7)))) : (((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) arr_34 [i_11] [i_10] [i_0] [i_7] [i_7] [1] [i_0]))))));
                        arr_36 [i_0] [i_0] [i_2] = ((/* implicit */signed char) var_12);
                    }
                    for (short i_12 = 3; i_12 < 11; i_12 += 2) /* same iter space */
                    {
                        var_35 = ((/* implicit */short) (-(((((/* implicit */int) (_Bool)1)) - (arr_35 [i_0] [5] [i_0] [i_0] [i_0] [i_0])))));
                        arr_40 [i_12 - 2] [i_10] [i_2] [i_2] [i_0] = ((/* implicit */signed char) (short)22989);
                    }
                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) << (((2443650711U) - (2443650701U)))));
                    var_37 = ((/* implicit */signed char) arr_10 [(short)1] [i_2] [i_2] [i_10 - 3]);
                }
                for (short i_13 = 0; i_13 < 13; i_13 += 2) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_14 = 0; i_14 < 13; i_14 += 3) 
                    {
                        var_38 = ((/* implicit */short) ((var_10) << (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) - (17849)))));
                        var_39 &= ((((/* implicit */int) var_14)) != (((/* implicit */int) arr_23 [i_13] [i_13] [i_2] [i_13])));
                    }
                    for (unsigned int i_15 = 3; i_15 < 11; i_15 += 4) /* same iter space */
                    {
                        arr_49 [i_2] [i_7] [i_2] [i_2] = ((((/* implicit */int) arr_44 [i_15 + 1] [i_15] [i_15] [i_15] [i_15] [i_15 - 1] [i_15])) << (((((/* implicit */int) var_5)) + (26503))));
                        var_40 += ((/* implicit */unsigned char) ((arr_17 [i_15 - 2] [i_15 - 1] [i_15 - 3] [i_15 - 2] [i_15 - 2] [i_15 - 2] [i_15]) != (((/* implicit */unsigned int) 527300565))));
                        arr_50 [i_0] [i_0] [i_0] [i_7] [i_2] [i_0] [i_15] = ((/* implicit */short) ((unsigned int) arr_3 [i_0] [i_2] [i_7]));
                        arr_51 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_28 [i_15 + 1] [i_2] [i_2])) & (((/* implicit */int) arr_15 [i_0] [6] [i_0]))));
                    }
                    for (unsigned int i_16 = 3; i_16 < 11; i_16 += 4) /* same iter space */
                    {
                        var_41 = ((/* implicit */short) (((~(var_11))) & (((/* implicit */unsigned int) ((/* implicit */int) (short)14)))));
                        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12714)) ? (((/* implicit */int) (short)12231)) : (((/* implicit */int) arr_10 [i_16] [i_2] [i_16] [i_16]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_7] [i_0])) ? (arr_4 [i_13]) : (442806165U)))));
                    }
                    var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7307)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22974)))))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_2] [i_7] [i_2])) ? (arr_4 [(short)12]) : (2434011483U))))));
                    arr_56 [i_2] [i_2] [(short)7] [i_2] = ((/* implicit */short) arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                    /* LoopSeq 2 */
                    for (short i_17 = 0; i_17 < 13; i_17 += 4) 
                    {
                        var_44 = ((/* implicit */signed char) (-(((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0]))));
                        var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) (~(((/* implicit */int) ((short) (short)32767))))))));
                    }
                    for (unsigned short i_18 = 0; i_18 < 13; i_18 += 4) 
                    {
                        var_46 = ((/* implicit */_Bool) arr_54 [i_2] [(short)11] [i_13] [i_2] [i_18] [i_2]);
                        var_47 *= ((short) (short)-10949);
                        var_48 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_7]))));
                        var_49 = ((/* implicit */short) arr_17 [i_0] [i_0] [(short)0] [i_0] [i_0] [10] [i_0]);
                    }
                    arr_61 [i_2] [i_7] [i_2] [i_2] = ((/* implicit */unsigned char) arr_60 [i_0] [i_0] [i_0] [i_2] [i_7] [i_13] [i_13]);
                }
                var_50 = ((/* implicit */short) ((((/* implicit */int) (short)-7305)) != (((/* implicit */int) ((((/* implicit */int) (unsigned char)114)) != (((/* implicit */int) arr_16 [i_7] [i_2] [i_2] [i_0] [i_2] [i_0])))))));
                var_51 = ((/* implicit */short) ((arr_37 [i_7] [i_7] [i_7] [i_2] [i_2] [i_0]) ? (((/* implicit */unsigned long long int) arr_17 [i_7] [i_7] [i_7] [i_7] [i_2] [i_0] [i_0])) : (var_13)));
                var_52 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */int) (signed char)-60)) : (((/* implicit */int) (signed char)76))));
                var_53 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_8) : (((((/* implicit */_Bool) (unsigned short)44207)) ? (3435560801U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
            }
        }
        /* LoopSeq 1 */
        for (unsigned int i_19 = 0; i_19 < 13; i_19 += 1) 
        {
            var_54 = ((/* implicit */short) max((var_54), (((/* implicit */short) 12710719503452711884ULL))));
            /* LoopNest 3 */
            for (short i_20 = 0; i_20 < 13; i_20 += 4) 
            {
                for (short i_21 = 3; i_21 < 11; i_21 += 4) 
                {
                    for (signed char i_22 = 0; i_22 < 13; i_22 += 4) 
                    {
                        {
                            var_55 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((unsigned int) var_11)) : (max((((859406495U) ^ (var_10))), (((/* implicit */unsigned int) (short)18891))))));
                            var_56 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_20] [i_21 - 2] [i_22] [i_22] [i_21] [(short)12] [i_22])) ? (((/* implicit */int) arr_19 [i_21] [i_21 + 2] [i_21 - 1] [i_22] [i_21] [i_22] [i_22])) : (((/* implicit */int) arr_19 [i_0] [i_21 - 2] [i_21 - 2] [i_21 - 1] [i_21] [i_22] [i_22])))) > (((((/* implicit */int) var_7)) & (((/* implicit */int) (short)32767))))));
                            var_57 |= (short)24425;
                            var_58 = ((/* implicit */unsigned short) min((var_58), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) 4183053133U)), (var_13))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
    {
        var_59 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) < (((((/* implicit */_Bool) (signed char)125)) ? (18U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)108)))))))) : (((/* implicit */int) ((short) (short)-32763)))));
        var_60 = ((/* implicit */unsigned int) (signed char)-63);
    }
}
