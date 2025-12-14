/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164991
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
    var_20 = ((/* implicit */unsigned int) var_11);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) var_4)) ? (arr_8 [i_0 + 1] [i_1] [i_0 + 1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))));
                        /* LoopSeq 2 */
                        for (int i_4 = 2; i_4 < 9; i_4 += 2) 
                        {
                            arr_17 [i_0] [i_1] [i_0] [i_3] [i_4 + 1] = ((/* implicit */unsigned long long int) min(((+(281474842492928LL))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)5))))) ? (max((var_18), (((/* implicit */long long int) arr_2 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) var_19)))))));
                            arr_18 [i_4] [i_0] [i_1] [(signed char)8] [i_0] [i_0 + 1] = ((/* implicit */short) 1129757084);
                            var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 + 1])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_8 [i_0 - 1] [i_0 + 2] [i_0 + 1] [i_0 + 2]) : (((/* implicit */unsigned long long int) 0U)))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_2 [i_0]))))));
                        }
                        for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            arr_21 [(short)7] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) arr_15 [i_5] [i_2] [i_0 - 1] [i_0 + 2] [i_0])))));
                            arr_22 [i_5] [i_3] [i_0] [i_2] [i_0] [i_0] [i_0 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16785146964639901330ULL)) ? (var_14) : (((/* implicit */long long int) 4294967270U))))) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) var_19))))) : (max((((/* implicit */unsigned long long int) ((signed char) arr_14 [i_0] [(unsigned short)5] [5LL] [i_1] [i_0]))), (((unsigned long long int) (unsigned char)76))))));
                        }
                        var_22 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((int) var_4))) ? (arr_15 [i_0 + 1] [i_1] [i_1] [i_3] [i_3]) : (arr_15 [i_1] [7ULL] [i_2] [i_1] [i_0 + 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 934960670U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)186))) : (min((var_6), (var_10))))))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            arr_26 [i_0] [i_0] [(signed char)9] [i_3] [i_6] = ((/* implicit */unsigned char) (unsigned short)37541);
                            arr_27 [i_0] [i_0] [i_0] [i_3] [i_3] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_3))) ? (((/* implicit */unsigned long long int) 803531585U)) : (((((/* implicit */_Bool) (unsigned short)44852)) ? (min((15695695582467656953ULL), (((/* implicit */unsigned long long int) (unsigned short)57442)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_14))))))));
                            var_23 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (+(934960670U)))) ? (((((/* implicit */_Bool) (unsigned char)185)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)358))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))))));
                            var_24 = ((/* implicit */unsigned long long int) (~(((unsigned int) arr_5 [i_0 + 2] [i_0]))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 7; i_7 += 2) 
                    {
                        for (signed char i_8 = 1; i_8 < 6; i_8 += 2) 
                        {
                            {
                                arr_34 [i_0 - 1] [i_1] [i_0] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 26U)) ? (arr_15 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_7 - 1] [i_8 + 2]) : (arr_15 [i_0 + 2] [i_0 + 1] [i_0 + 1] [i_7 + 1] [i_8 + 2]))))));
                                var_25 = ((/* implicit */unsigned int) (unsigned char)76);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_16))))))) ? (((unsigned int) var_18)) : (((((/* implicit */_Bool) min((1600893863), (((/* implicit */int) (unsigned char)179))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1127411861395477804ULL)))))) : (arr_0 [i_0])))));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        arr_37 [i_0] [(_Bool)1] [i_1] [0] [i_9] = ((((/* implicit */_Bool) min((2900006763975518306LL), (2842216252494426418LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((3638031998U), (803531598U)))) ? (max((3491435698U), (((/* implicit */unsigned int) (unsigned char)76)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)20659))))))))) : (var_18));
                        arr_38 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)33))));
                        var_27 = 4294967268U;
                        arr_39 [(unsigned short)2] [i_1] [3U] [i_0] = ((/* implicit */signed char) var_11);
                    }
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 3; i_10 < 9; i_10 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 3) 
                        {
                            {
                                arr_49 [i_1] [i_1] [i_0] [i_11] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)358))))) ? ((~(var_14))) : (((/* implicit */long long int) ((unsigned int) var_0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (-1569972717) : (1600893894)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)28228))))) : (((unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)18)))));
                                var_28 = ((/* implicit */long long int) (unsigned char)251);
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_13 = 0; i_13 < 10; i_13 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (int i_14 = 1; i_14 < 8; i_14 += 3) /* same iter space */
                        {
                            arr_55 [i_0] [i_0] [i_1] [i_10 - 1] [i_0] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_11)))) ? (((/* implicit */int) (signed char)-124)) : ((-(((/* implicit */int) (unsigned char)179))))));
                            var_29 = ((/* implicit */unsigned int) var_4);
                        }
                        for (int i_15 = 1; i_15 < 8; i_15 += 3) /* same iter space */
                        {
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_43 [i_10 - 3] [i_10 + 1] [i_10] [i_10 - 2])) : (12987727622211074646ULL)));
                            var_31 = ((/* implicit */short) (~(15695695582467656953ULL)));
                        }
                        arr_58 [i_0] [i_0] = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) : (14249515357435848845ULL)));
                        arr_59 [i_0] [i_13] [i_10] [i_1] [i_0] = (!(((/* implicit */_Bool) var_2)));
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65516)) ? (((long long int) var_1)) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))));
                        arr_60 [i_0] [i_0] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)76))) : (arr_42 [i_0])));
                    }
                    for (unsigned int i_16 = 0; i_16 < 10; i_16 += 1) /* same iter space */
                    {
                        arr_64 [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)347)), (arr_13 [3LL] [i_1] [i_10 - 2] [(unsigned char)4])))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) 157417000451141917LL)) ? (-157417000451141918LL) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_0 - 1] [i_0 - 1])))))))));
                        var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((3491435711U), (((/* implicit */unsigned int) arr_20 [i_0] [i_0])))))));
                        arr_65 [5ULL] [i_16] [i_0] [i_0] [i_1] [i_0] = ((unsigned short) (-(arr_61 [i_0 + 1] [i_0])));
                    }
                    var_34 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_10 + 1])) ? (arr_8 [i_0] [i_0 - 1] [i_10 - 1] [i_10]) : (((/* implicit */unsigned long long int) 3491435711U)))));
                }
                var_35 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0 - 1] [(unsigned short)7] [i_0])) ? (arr_10 [i_0] [i_0] [i_0] [(unsigned short)2] [i_0 - 1]) : (((/* implicit */unsigned long long int) 4192080188U)))));
                /* LoopNest 3 */
                for (long long int i_17 = 3; i_17 < 9; i_17 += 2) 
                {
                    for (long long int i_18 = 0; i_18 < 10; i_18 += 2) 
                    {
                        for (long long int i_19 = 0; i_19 < 10; i_19 += 4) 
                        {
                            {
                                var_36 = var_9;
                                var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 803531582U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)43877))))) : (((/* implicit */int) (signed char)47))));
                                arr_72 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned long long int) var_1);
                                var_38 = var_7;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
