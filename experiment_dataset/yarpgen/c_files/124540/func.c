/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124540
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
    var_13 = ((/* implicit */unsigned long long int) (+(var_3)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_1] [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_1] [(signed char)4] [i_1]))));
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        {
                            arr_15 [i_0] [i_0] [i_1] [i_3] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) var_12))));
                            var_15 |= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_0] [i_4] [i_2] [i_3] [i_3] [i_4]))));
                            arr_16 [(unsigned char)8] [(signed char)3] [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) ? (arr_12 [i_1] [i_1] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [i_2] [i_1] [i_1] [i_0] [i_1])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                            arr_17 [i_1] = ((/* implicit */unsigned char) arr_0 [i_0]);
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_12))));
            }
            for (signed char i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
            {
                var_17 = ((((((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_5])) + (2147483647))) >> (((/* implicit */int) var_12)));
                arr_21 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) | (arr_12 [i_0] [i_0] [10LL] [i_0] [i_0])))) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [2ULL] [i_0] [i_1])) : (arr_20 [i_1] [i_1] [i_0])));
            }
            for (signed char i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    var_18 += ((/* implicit */unsigned short) (!(arr_27 [(signed char)7] [i_1] [i_6] [i_6] [i_6])));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? ((-(((/* implicit */int) arr_24 [i_0] [(unsigned short)8] [i_1] [i_0])))) : (((/* implicit */int) var_1))));
                    var_20 = ((/* implicit */int) arr_3 [i_7] [i_0] [i_0]);
                }
                var_21 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [10U] [i_6] [i_1] [i_1]))))) > (((/* implicit */int) var_2)));
                var_22 = ((/* implicit */unsigned int) arr_24 [i_0] [i_1] [i_1] [i_6]);
            }
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_23 = ((/* implicit */signed char) ((arr_22 [i_1] [i_8]) ? (arr_18 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_0])))));
                arr_30 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) arr_7 [i_1] [i_1] [i_1] [i_1]);
            }
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (arr_18 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (arr_10 [(short)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [2U] [2U] [(short)6] [i_0] [i_0]))))) * (((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_9]))));
            /* LoopSeq 3 */
            for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 2) 
            {
                var_26 = ((/* implicit */unsigned int) var_2);
                arr_37 [i_0] [i_9] [(unsigned short)6] [i_9] = ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)70))) : (var_6))) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [(unsigned char)10] [(unsigned char)10]))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_4)))) ? ((-(((/* implicit */int) var_12)))) : (((/* implicit */int) var_11))));
                /* LoopNest 2 */
                for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) var_8))));
                            arr_44 [i_9] [i_13] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_19 [i_12] [i_11])));
                        }
                    } 
                } 
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
            {
                arr_48 [(unsigned short)4] [(unsigned short)4] [i_14] = ((/* implicit */short) arr_29 [(signed char)4] [i_9] [(signed char)4]);
                var_29 = ((/* implicit */signed char) var_10);
                arr_49 [i_0] [(_Bool)1] [i_14] [i_14] = arr_27 [i_0] [i_9] [i_9] [i_0] [i_0];
                var_30 = ((/* implicit */unsigned short) var_1);
                arr_50 [i_14] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) arr_40 [i_0] [i_9] [i_9] [2ULL] [i_14] [i_14])) ? (arr_10 [(unsigned char)6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_0] [i_0] [i_0]))));
            }
            var_31 = ((/* implicit */long long int) var_5);
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (unsigned char i_17 = 0; i_17 < 12; i_17 += 3) 
                {
                    {
                        var_32 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_3)) : ((-(arr_3 [i_15] [i_16] [i_15])))));
                        arr_58 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) var_12);
                        var_33 |= ((/* implicit */int) var_7);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_18 = 0; i_18 < 12; i_18 += 2) 
            {
                for (unsigned char i_19 = 0; i_19 < 12; i_19 += 4) 
                {
                    {
                        arr_65 [i_19] [i_18] [i_15] [i_15] [i_15] [(_Bool)1] &= ((/* implicit */unsigned int) arr_36 [i_0] [i_18] [i_18]);
                        arr_66 [i_0] [i_15] [i_18] [i_19] [i_19] |= ((/* implicit */int) arr_47 [i_0] [i_18] [i_19]);
                        var_34 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_15] [i_19] [i_15] [i_19])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [(unsigned char)4] [(unsigned char)4] [(unsigned char)4] [i_19]))) : (var_6)));
                        arr_67 [(_Bool)1] [i_18] [i_19] = ((/* implicit */unsigned int) arr_55 [i_0] [1ULL] [i_18] [i_19]);
                        var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) arr_59 [i_0] [i_15] [i_18] [i_0]))));
                    }
                } 
            } 
        }
        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (~(arr_25 [i_0] [i_0] [i_0] [i_0]))))));
        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) arr_46 [0LL] [i_0] [i_0] [i_0]))));
    }
    for (unsigned char i_20 = 0; i_20 < 12; i_20 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_21 = 0; i_21 < 12; i_21 += 2) 
        {
            for (unsigned short i_22 = 0; i_22 < 12; i_22 += 3) 
            {
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    {
                        arr_79 [i_22] = ((/* implicit */short) (~(((/* implicit */int) arr_78 [i_22] [(unsigned short)7] [i_21] [i_22]))));
                        arr_80 [i_21] [i_21] [i_22] [i_21] = ((/* implicit */unsigned long long int) arr_60 [i_20] [i_21] [i_20]);
                        var_38 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_54 [i_21] [i_21] [i_21] [i_20])) ? (((/* implicit */int) ((var_3) < (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_22])))))) : (((/* implicit */int) var_5)))) & (((/* implicit */int) arr_27 [i_20] [i_20] [i_20] [i_22] [(unsigned char)6]))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_24 = 0; i_24 < 12; i_24 += 2) 
        {
            for (unsigned int i_25 = 0; i_25 < 12; i_25 += 2) 
            {
                {
                    arr_87 [i_20] [i_24] [i_20] = ((/* implicit */unsigned long long int) var_10);
                    var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) arr_13 [i_25] [i_25] [i_25] [i_25] [i_24] [i_25] [i_25]))));
                    /* LoopNest 2 */
                    for (unsigned char i_26 = 0; i_26 < 12; i_26 += 1) 
                    {
                        for (long long int i_27 = 0; i_27 < 12; i_27 += 3) 
                        {
                            {
                                arr_94 [i_20] [i_24] [i_20] [i_26] [(unsigned short)2] = ((/* implicit */_Bool) (+((~(((/* implicit */int) var_7))))));
                                var_40 = (~(var_0));
                                var_41 *= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) min((((/* implicit */signed char) var_12)), (var_7))))))) ^ (max((((/* implicit */long long int) (-(((/* implicit */int) var_9))))), (var_3)))));
                                var_42 |= arr_60 [i_20] [i_20] [i_20];
                            }
                        } 
                    } 
                    var_43 += arr_84 [(unsigned char)10];
                }
            } 
        } 
        var_44 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_63 [i_20] [i_20] [i_20])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_84 [i_20]))) : (min((arr_10 [(signed char)8]), (((/* implicit */unsigned long long int) var_5)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    }
    /* vectorizable */
    for (unsigned char i_28 = 0; i_28 < 12; i_28 += 3) /* same iter space */
    {
        var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) var_5))));
        /* LoopNest 2 */
        for (signed char i_29 = 0; i_29 < 12; i_29 += 2) 
        {
            for (signed char i_30 = 0; i_30 < 12; i_30 += 3) 
            {
                {
                    var_46 = ((/* implicit */unsigned short) arr_41 [i_28] [i_30]);
                    var_47 = ((/* implicit */signed char) ((var_12) ? (((/* implicit */int) arr_82 [i_30])) : (((/* implicit */int) var_12))));
                }
            } 
        } 
        var_48 *= ((/* implicit */unsigned long long int) arr_97 [i_28] [i_28] [i_28]);
        arr_101 [(unsigned char)6] [(unsigned char)6] &= ((/* implicit */int) arr_91 [i_28] [(unsigned char)0] [i_28]);
    }
    var_49 = ((/* implicit */unsigned char) min(((~(((((/* implicit */long long int) ((/* implicit */int) var_2))) | (var_6))))), (((/* implicit */long long int) var_5))));
}
