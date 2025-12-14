/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166146
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) : (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 18; i_3 += 2) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_18 += ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_2] [(short)15])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [20LL] [i_2] [i_3] [i_4]))) : (arr_2 [i_4] [i_1]))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_1] [0LL]))) ? ((~(arr_1 [i_2] [i_3]))) : (((/* implicit */unsigned long long int) var_13))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 3; i_7 < 18; i_7 += 2) 
                    {
                        for (long long int i_8 = 1; i_8 < 19; i_8 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))));
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_7 - 1] [i_8 + 1])) ? (((var_7) & (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_6] [i_6]))))) : (((/* implicit */long long int) ((int) var_5)))));
                                var_22 = ((((/* implicit */int) arr_8 [i_1] [i_5] [i_7 + 2] [(short)3])) * (((/* implicit */int) var_11)));
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -188631214146479279LL)) ? (16776960U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) arr_18 [i_1] [0U] [i_6] [i_1] [i_1] [i_5] [i_5]))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))));
    }
    for (long long int i_9 = 0; i_9 < 11; i_9 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            for (int i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 11; i_12 += 2) 
                    {
                        for (signed char i_13 = 4; i_13 < 9; i_13 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) max(((unsigned short)49894), (((/* implicit */unsigned short) (signed char)91))));
                                var_27 = ((/* implicit */unsigned long long int) (((-(arr_23 [i_12]))) > ((~(arr_23 [i_9])))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (unsigned short)49894))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)43965))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)118))))), (arr_19 [i_9] [i_10] [i_11] [i_15] [(unsigned short)9]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_16 = 1; i_16 < 9; i_16 += 4) 
                        {
                            var_31 = ((/* implicit */long long int) ((((((/* implicit */int) arr_5 [i_9] [i_15])) ^ (((/* implicit */int) arr_12 [i_9] [2LL] [i_16])))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_15] [i_15] [i_15] [i_15])))))));
                            var_32 = ((/* implicit */unsigned long long int) (-(arr_43 [i_9] [i_9] [i_9] [i_9] [i_9])));
                            var_33 = ((/* implicit */unsigned short) arr_37 [i_9] [i_15] [i_10] [(unsigned char)7] [i_16]);
                        }
                        var_34 = ((/* implicit */unsigned char) (+(max((var_8), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)8128)), (arr_26 [i_9] [i_9] [i_9] [i_9]))))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_17 = 4; i_17 < 10; i_17 += 2) 
                    {
                        for (unsigned int i_18 = 0; i_18 < 11; i_18 += 4) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned char) -188631214146479261LL);
                                var_36 = ((/* implicit */unsigned char) arr_44 [i_9] [i_9] [i_9] [i_9] [i_9]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_37 = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) arr_16 [14U] [i_9] [i_9] [i_9] [i_9] [i_9])))))), (arr_35 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])));
        /* LoopSeq 2 */
        for (short i_19 = 4; i_19 < 9; i_19 += 2) 
        {
            var_38 = ((unsigned char) 4294967295U);
            var_39 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) ((arr_31 [i_9] [i_9] [0U] [i_9]) == (((/* implicit */int) ((arr_15 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]) >= (((/* implicit */unsigned long long int) arr_37 [i_9] [i_19] [i_9] [i_9] [i_9])))))))) : (max((((/* implicit */int) arr_8 [i_9] [(unsigned short)20] [i_19 - 2] [(unsigned short)3])), (arr_49 [i_19 + 2] [i_19 - 3] [i_19] [i_19 + 2] [i_19 + 2])))));
        }
        /* vectorizable */
        for (unsigned long long int i_20 = 1; i_20 < 10; i_20 += 2) 
        {
            var_40 = ((/* implicit */short) (((!(var_5))) ? (((/* implicit */int) arr_13 [i_9] [i_9])) : (((((/* implicit */_Bool) arr_0 [i_9] [i_9])) ? (arr_41 [i_20 - 1] [10ULL] [i_9] [i_9]) : (arr_49 [i_9] [i_9] [i_20] [i_20] [i_20])))));
            var_41 = ((/* implicit */int) arr_13 [i_20 - 1] [i_20 + 1]);
        }
    }
    /* vectorizable */
    for (unsigned long long int i_21 = 2; i_21 < 10; i_21 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_22 = 0; i_22 < 12; i_22 += 4) 
        {
            for (unsigned int i_23 = 1; i_23 < 8; i_23 += 2) 
            {
                {
                    var_42 &= ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_21] [i_21 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_21]))) : (var_12))) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43965)))));
                    var_43 = ((((/* implicit */_Bool) 188631214146479308LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)21570))) : (9223372036854775807LL));
                }
            } 
        } 
        var_44 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_21 - 1] [i_21 + 2]))) != (-188631214146479265LL)));
        /* LoopSeq 4 */
        for (unsigned int i_24 = 3; i_24 < 11; i_24 += 2) 
        {
            var_45 = ((/* implicit */int) arr_4 [i_21 - 1]);
            /* LoopNest 2 */
            for (int i_25 = 4; i_25 < 8; i_25 += 4) 
            {
                for (int i_26 = 1; i_26 < 8; i_26 += 2) 
                {
                    {
                        var_46 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_61 [i_24] [i_24 - 2] [i_24] [i_24 - 3]))) & (((((/* implicit */_Bool) arr_68 [i_21] [i_24 - 3] [i_25 + 4] [i_26 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_26] [i_26] [i_26] [i_26 + 1] [i_26 - 1]))) : (var_1)))));
                        var_47 *= ((/* implicit */unsigned long long int) ((arr_4 [i_24 - 1]) ? (((/* implicit */int) arr_4 [i_24 - 2])) : (var_4)));
                        var_48 -= ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
                        var_49 = ((((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_21] [i_21]))) - (arr_9 [i_26 + 2] [i_21] [i_25] [i_25] [i_21] [i_21]))) == (((((/* implicit */_Bool) arr_3 [19ULL] [i_24])) ? (arr_18 [i_21] [i_24 - 3] [i_21] [i_25] [i_25] [i_26] [i_26 + 4]) : (var_9))));
                    }
                } 
            } 
            var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) arr_3 [i_21 - 2] [i_24 - 1]))));
        }
        for (unsigned char i_27 = 3; i_27 < 10; i_27 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
            {
                for (long long int i_29 = 4; i_29 < 10; i_29 += 4) 
                {
                    {
                        var_51 = ((/* implicit */int) ((arr_16 [i_21 + 2] [i_21] [i_21] [i_21 + 2] [i_29] [i_29 - 2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                        var_52 += ((/* implicit */short) ((unsigned short) var_10));
                    }
                } 
            } 
            var_53 = var_2;
        }
        for (unsigned short i_30 = 1; i_30 < 8; i_30 += 2) 
        {
            var_54 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_2))) - (var_12)));
            var_55 = ((/* implicit */_Bool) arr_7 [i_21] [i_21] [i_21 - 1] [i_21 + 2]);
            var_56 = ((/* implicit */unsigned int) var_5);
            var_57 = ((/* implicit */short) ((unsigned long long int) (+(((/* implicit */int) (_Bool)1)))));
            /* LoopNest 2 */
            for (unsigned short i_31 = 0; i_31 < 12; i_31 += 2) 
            {
                for (unsigned short i_32 = 0; i_32 < 12; i_32 += 2) 
                {
                    {
                        var_58 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_31] [i_32]))))) ^ ((~(var_13)))));
                        var_59 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_13)) ? (arr_83 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21 - 2]) : (((/* implicit */unsigned long long int) -188631214146479279LL)))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (131071) : (((/* implicit */int) arr_68 [i_21 - 1] [i_30 + 1] [i_30 + 1] [i_32])))))));
                    }
                } 
            } 
        }
        for (unsigned short i_33 = 0; i_33 < 12; i_33 += 4) 
        {
            var_60 |= (~(arr_58 [6U] [i_21] [i_21 - 2]));
            var_61 = ((/* implicit */signed char) ((unsigned long long int) (_Bool)1));
            var_62 = ((/* implicit */int) min((var_62), ((-(((/* implicit */int) arr_84 [i_21 - 2]))))));
            var_63 = ((/* implicit */int) var_0);
        }
    }
    for (long long int i_34 = 0; i_34 < 14; i_34 += 2) 
    {
        var_64 = ((/* implicit */signed char) max((arr_16 [i_34] [i_34] [i_34] [i_34] [i_34] [i_34]), (((/* implicit */unsigned long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) -213964862))))), (arr_5 [i_34] [i_34]))))));
        var_65 &= ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_3 [i_34] [i_34])), (min((-188631214146479268LL), ((-(var_1)))))));
    }
    var_66 = ((/* implicit */int) var_13);
}
