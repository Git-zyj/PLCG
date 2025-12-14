/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171262
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
    var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned short) var_3);
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            var_11 = ((/* implicit */short) (~(((/* implicit */int) var_5))));
            var_12 = ((/* implicit */short) (+(13569375495507679592ULL)));
            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) != ((+(((/* implicit */int) var_8)))))))));
            var_14 = ((/* implicit */unsigned int) var_9);
        }
        for (signed char i_2 = 3; i_2 < 18; i_2 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        {
                            arr_18 [(_Bool)1] [(_Bool)1] [i_3] [(unsigned char)0] [i_0] = ((/* implicit */long long int) arr_4 [i_0] [i_0] [0U]);
                            arr_19 [i_0] [i_2 + 1] [i_0] [i_4] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_5])) ? (565093530) : (565093551)))) * ((+(var_3)))));
                            var_15 = ((/* implicit */long long int) var_6);
                            var_16 -= ((unsigned long long int) arr_6 [i_3] [i_5]);
                            var_17 += ((/* implicit */_Bool) (unsigned char)90);
                        }
                    } 
                } 
            } 
            var_18 -= ((/* implicit */signed char) ((unsigned int) var_2));
        }
        for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) (~(arr_12 [i_0])));
            arr_22 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 11ULL)) ? (13569375495507679592ULL) : (((/* implicit */unsigned long long int) ((var_4) % (((/* implicit */unsigned int) 565093517)))))));
        }
        var_20 += ((/* implicit */short) (_Bool)1);
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            for (signed char i_8 = 3; i_8 < 18; i_8 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 19; i_9 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) var_3);
                        arr_31 [i_0] [i_0] [i_7] [i_7] [i_8] [i_9] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned int) -565093552)) : (3352989263U)));
                    }
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_0] [i_0] [(unsigned short)4]))))) ? (((/* implicit */int) var_8)) : (((var_7) & (((/* implicit */int) var_0))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_10 = 3; i_10 < 18; i_10 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_11 = 0; i_11 < 19; i_11 += 4) 
            {
                for (unsigned int i_12 = 0; i_12 < 19; i_12 += 1) 
                {
                    {
                        arr_41 [i_0] [i_10] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) 8747889692953552748ULL))) ? (-565093534) : ((+(((/* implicit */int) (_Bool)0))))));
                        var_23 *= ((/* implicit */long long int) ((short) (-(((/* implicit */int) (_Bool)1)))));
                        var_24 = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_0] [i_11] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((var_0) ? (-565093551) : (((/* implicit */int) var_8))))) : (arr_25 [i_10] [i_10 + 1]));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_13 = 0; i_13 < 19; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (int i_15 = 4; i_15 < 17; i_15 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) arr_37 [(short)13] [i_10] [(signed char)6] [(signed char)6]))));
                            arr_49 [i_13] [i_10] [i_10] [i_10] [i_10 - 3] = ((/* implicit */unsigned long long int) arr_26 [i_10] [i_10] [i_10]);
                        }
                    } 
                } 
            } 
        }
        for (short i_16 = 4; i_16 < 17; i_16 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_17 = 0; i_17 < 19; i_17 += 4) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((unsigned long long int) arr_10 [i_0])))));
                        var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_0] [i_16] [(short)2])) ? (((/* implicit */int) arr_52 [i_0])) : (((/* implicit */int) ((unsigned short) var_9)))));
                        arr_59 [(_Bool)1] [(_Bool)1] [i_16] [16U] [16U] [(_Bool)1] = ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : ((+(var_4))));
                        arr_60 [i_0] [i_0] [i_16] [i_16] [i_18] [i_18] = ((/* implicit */unsigned int) ((var_5) ? (2147483647) : (((/* implicit */int) (short)20))));
                        var_28 -= ((/* implicit */unsigned long long int) var_8);
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned long long int) 565093502);
            /* LoopNest 3 */
            for (signed char i_19 = 0; i_19 < 19; i_19 += 1) 
            {
                for (signed char i_20 = 3; i_20 < 16; i_20 += 4) 
                {
                    for (signed char i_21 = 0; i_21 < 19; i_21 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned short) ((int) arr_8 [i_16 + 2] [i_20 + 2] [9]));
                            var_31 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                            var_32 = ((/* implicit */short) (-(arr_44 [i_16 - 1] [i_20 - 2] [i_21])));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_22 = 2; i_22 < 18; i_22 += 1) /* same iter space */
            {
                var_33 += ((/* implicit */short) ((unsigned short) var_3));
                var_34 -= (+(8747889692953552748ULL));
                /* LoopSeq 3 */
                for (signed char i_23 = 4; i_23 < 16; i_23 += 1) 
                {
                    var_35 = ((/* implicit */signed char) var_8);
                    var_36 *= ((((/* implicit */_Bool) arr_61 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_68 [i_0] [i_0] [i_0] [i_16 + 1] [(short)4] [i_23 - 3] [i_23]));
                    /* LoopSeq 3 */
                    for (short i_24 = 2; i_24 < 18; i_24 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 11ULL)))))));
                        var_38 *= ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) (-2147483647 - 1))))));
                        var_39 = ((/* implicit */signed char) var_8);
                    }
                    for (signed char i_25 = 0; i_25 < 19; i_25 += 1) /* same iter space */
                    {
                        var_40 += ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) 18446744073709551615ULL)))));
                        arr_80 [i_0] [i_16] [i_16] [i_25] = ((/* implicit */long long int) arr_73 [i_16]);
                    }
                    for (signed char i_26 = 0; i_26 < 19; i_26 += 1) /* same iter space */
                    {
                        var_41 = ((/* implicit */_Bool) (unsigned short)8);
                        var_42 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_75 [(unsigned short)18] [i_0] [i_16 - 3] [i_22 - 2] [i_23 + 3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))));
                    }
                    var_43 *= ((/* implicit */unsigned int) ((unsigned char) var_1));
                    /* LoopSeq 4 */
                    for (long long int i_27 = 0; i_27 < 19; i_27 += 1) 
                    {
                        var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) (~(arr_51 [i_16 + 2] [i_22 - 1] [i_23 - 1]))))));
                        var_45 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_43 [i_23])) ? (((/* implicit */int) arr_65 [i_0] [i_0] [i_22] [i_23 + 2] [i_27])) : (((/* implicit */int) (short)16158)))));
                        var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) arr_53 [i_16] [i_0]))));
                        var_47 *= ((/* implicit */_Bool) var_3);
                    }
                    for (int i_28 = 2; i_28 < 18; i_28 += 1) 
                    {
                        var_48 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_22 - 1] [i_16] [i_16 + 1] [3]))) == (arr_21 [0] [i_16 + 2] [0])));
                        var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) ((var_5) ? (-565093561) : (((/* implicit */int) arr_71 [i_0] [i_0] [i_22 - 1] [(_Bool)1])))))));
                    }
                    for (unsigned short i_29 = 1; i_29 < 17; i_29 += 4) 
                    {
                        var_50 = ((/* implicit */long long int) arr_8 [i_16] [i_22 - 2] [7LL]);
                        var_51 = ((/* implicit */_Bool) (+(arr_70 [i_23 - 1] [i_16 - 2] [i_22 + 1] [i_29 + 2])));
                    }
                    for (unsigned long long int i_30 = 0; i_30 < 19; i_30 += 1) 
                    {
                        var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) arr_32 [i_30] [i_30] [i_30]))));
                        var_53 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 103835339U))));
                        var_54 += ((/* implicit */signed char) (unsigned char)0);
                        var_55 += ((/* implicit */short) ((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned char)2))));
                    }
                }
                for (unsigned long long int i_31 = 0; i_31 < 19; i_31 += 1) 
                {
                    var_56 = ((/* implicit */unsigned char) var_2);
                    var_57 = ((/* implicit */signed char) max((var_57), (((/* implicit */signed char) ((3352989263U) << (((arr_94 [i_16 + 2]) + (161108035699355228LL))))))));
                }
                for (long long int i_32 = 0; i_32 < 19; i_32 += 4) 
                {
                    var_58 = ((/* implicit */short) max((var_58), (((/* implicit */short) (-(((/* implicit */int) var_6)))))));
                    var_59 = ((((/* implicit */_Bool) arr_98 [i_22 + 1] [i_22 - 2] [i_22 - 1] [i_16])) ? (arr_98 [i_22 + 1] [i_22 - 2] [i_22 - 1] [i_16]) : (arr_98 [i_22 + 1] [i_22 - 2] [i_22 - 1] [i_16]));
                }
                var_60 = ((/* implicit */unsigned int) min((var_60), (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))));
                var_61 -= ((/* implicit */short) arr_1 [i_0]);
            }
            for (unsigned short i_33 = 2; i_33 < 18; i_33 += 1) /* same iter space */
            {
                arr_102 [i_16] [i_16] = ((/* implicit */unsigned char) 65970697666560ULL);
                arr_103 [i_0] [i_16] |= ((/* implicit */short) (!((_Bool)1)));
            }
        }
    }
    var_62 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((int) ((signed char) 3007562019U)))), (0U)));
}
