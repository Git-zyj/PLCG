/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169816
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) var_14)) - (((/* implicit */int) var_0))))) * (min((((/* implicit */unsigned int) var_0)), (var_7)))))) ? (var_7) : (var_11)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_0] = (-((-(((/* implicit */int) arr_1 [i_1 + 2])))));
                arr_5 [i_1] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 2] [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1] [i_0])))))) ? (((arr_0 [i_1 + 1] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1 + 1] [i_1 - 2]))) - (arr_0 [i_0] [i_1]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 1; i_2 < 10; i_2 += 1) 
    {
        for (signed char i_3 = 4; i_3 < 9; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
            {
                {
                    arr_14 [i_2] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (min((((arr_8 [i_4]) * (arr_0 [i_3] [i_3]))), (((unsigned long long int) 18446744073709551597ULL)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 + 1] [i_2 + 2] [i_3 + 2]))) * (((unsigned long long int) arr_3 [17] [i_3] [17]))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_2] [i_2] [i_2] [i_4] [i_5] = ((/* implicit */unsigned int) max((8893038093391126745ULL), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_9 [i_4]))) - (min((((/* implicit */unsigned long long int) 4723335454007377609LL)), (arr_9 [0LL])))))));
                        arr_20 [i_2 + 2] [(unsigned char)9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */long long int) (+(((((/* implicit */int) arr_11 [12ULL] [i_4] [i_3] [12ULL])) * (((/* implicit */int) (unsigned short)36106))))))) : (((((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_2 - 1] [i_2] [i_2] [i_2 - 1]))))) & (arr_18 [i_2 + 2] [i_2 + 2] [i_3] [i_5])))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) /* same iter space */
                    {
                        var_21 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2] [i_2 - 1]))));
                        var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_0 [i_2 + 1] [i_2 + 2])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_3 - 1] [i_3 - 1] [i_3]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_3])) >= (((/* implicit */int) arr_3 [i_3 + 3] [i_4] [(unsigned short)14])))))) | (min((arr_17 [i_2] [i_3] [(unsigned short)4]), (((/* implicit */unsigned long long int) (unsigned short)10))))))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 1) /* same iter space */
                    {
                        var_23 = (+(((((/* implicit */_Bool) arr_17 [i_2 + 2] [i_3 - 4] [i_2 + 2])) ? (arr_17 [i_2 + 3] [i_3 - 4] [i_3]) : (arr_17 [i_2 + 2] [i_3 + 1] [i_7]))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_8 = 1; i_8 < 10; i_8 += 1) 
                        {
                            arr_28 [9ULL] [i_7] [i_4] [i_4] [(_Bool)1] [i_4] [i_4] = ((/* implicit */unsigned short) max((((long long int) min((18446744073709551597ULL), (((/* implicit */unsigned long long int) arr_15 [i_7] [(_Bool)0] [i_2] [i_2]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_4] [6U] [i_8])) ? ((+(((/* implicit */int) arr_6 [i_8 + 1])))) : (((/* implicit */int) (signed char)-55)))))));
                            arr_29 [i_3] [i_7] [i_7] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-1))));
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((((/* implicit */_Bool) max(((-(arr_17 [i_7] [i_8 - 1] [i_4]))), (arr_17 [i_2] [i_3] [i_8])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_2 + 2] [i_4] [i_2 + 2] [i_3] [i_4])) ? (((/* implicit */int) arr_25 [i_2 + 2] [i_3] [i_2 + 3] [i_8] [i_8])) : (((/* implicit */int) arr_25 [i_2 + 2] [i_3] [i_2 + 2] [i_8 + 2] [i_2 + 2]))))) : (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)29430))))) * ((~(arr_7 [i_8])))))))));
                            arr_30 [i_2 - 1] [i_7] [i_2 - 1] [i_4] [i_4] [i_7] [i_4] = ((/* implicit */unsigned int) ((arr_13 [i_2 + 1] [i_2]) < (((/* implicit */unsigned long long int) arr_26 [i_2] [i_3 + 2] [i_4] [i_7] [i_8]))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            var_25 = ((/* implicit */long long int) arr_34 [i_2 - 1] [i_2] [i_2] [i_2 + 2] [i_2 - 1]);
                            arr_35 [i_7] [i_3 + 3] [i_4] = ((/* implicit */int) arr_21 [i_4] [i_7] [i_7]);
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)36133)) && (((/* implicit */_Bool) ((((/* implicit */int) (!(arr_15 [i_7] [i_7] [i_7] [i_7])))) & (((/* implicit */int) arr_32 [i_2] [i_2] [i_2 + 3] [i_4] [i_4] [i_7])))))));
                            arr_36 [i_2] [(short)5] [i_7] [i_7] [i_9] = arr_0 [i_3] [i_3];
                        }
                        /* vectorizable */
                        for (int i_10 = 4; i_10 < 9; i_10 += 1) 
                        {
                            arr_40 [i_2] [i_7] [i_10 - 3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) + (((/* implicit */int) arr_1 [i_4])))))));
                            arr_41 [i_3] [i_3 + 4] [i_3 + 1] [i_7] [i_3 - 1] = ((/* implicit */long long int) -266811009);
                        }
                        var_27 = ((/* implicit */unsigned int) (-(arr_9 [i_2])));
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 2; i_11 < 12; i_11 += 3) 
                        {
                            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) (signed char)-98))));
                            var_29 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_2] [i_2]))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_7] [i_4] [i_7])))))))));
                            arr_44 [i_2] [i_2 + 2] [i_3 + 2] [1ULL] [i_7] [i_11] [i_7] = ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) arr_37 [8U] [9ULL] [i_3 + 4] [i_7] [i_11])) * (arr_9 [i_2 + 1])))));
                            arr_45 [i_11 - 1] [i_11 - 2] [i_7] [i_7] [i_7] [i_3] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1824))) | (arr_33 [i_2] [i_11] [i_2] [i_7] [i_11])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))) : (arr_7 [i_2])))));
                            arr_46 [i_7] [i_7] [i_4] [i_3] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((arr_37 [(unsigned char)2] [i_3] [i_4] [i_7] [i_11]) / (((/* implicit */long long int) arr_16 [i_2])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) 11696772307365850268ULL))) * (((/* implicit */int) arr_6 [i_4]))))) : (max((((/* implicit */unsigned int) ((unsigned short) var_10))), ((+(4094623160U)))))));
                        }
                        for (long long int i_12 = 0; i_12 < 13; i_12 += 3) 
                        {
                            arr_49 [i_2] [i_2] [i_7] [i_3] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((-(8893038093391126722ULL)))))) ? (((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)231)) >> (((arr_8 [i_7]) - (16454298051602466900ULL)))))) * ((+(var_12))))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_15 [4U] [i_3 + 4] [(signed char)6] [i_7])) - (((/* implicit */int) arr_25 [i_2 + 1] [i_7] [i_4] [i_7] [i_12])))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)9))))))))));
                            var_30 = ((/* implicit */unsigned long long int) ((((unsigned long long int) (!(((/* implicit */_Bool) (signed char)47))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_48 [i_7] [i_3 - 2] [i_7] [0ULL] [0ULL] [i_4] [i_3])), (arr_26 [i_2 - 1] [i_3] [i_4] [i_7] [i_12])))) > (arr_13 [i_4] [i_4])))))));
                            var_31 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [i_7] [i_3] [i_3 - 4] [i_4] [i_2 + 2] [i_2 + 3])) + (((/* implicit */int) arr_27 [i_2 + 1] [i_3] [i_3 - 1] [i_7] [i_2 + 3] [i_2 + 3]))))) + (((6337154404427207467ULL) * (((/* implicit */unsigned long long int) arr_12 [i_2 + 3] [i_2 + 3] [i_3 + 2]))))));
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_12] [i_7] [i_3]))) < (((((/* implicit */_Bool) ((arr_34 [i_7] [i_7] [i_7] [i_7] [i_7]) >> (((arr_12 [i_4] [8U] [i_4]) - (502812399141258267LL)))))) ? (((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) arr_34 [i_2 + 3] [i_3] [i_4] [i_2 + 3] [(unsigned char)5]))))) : ((-(arr_47 [11U] [i_2] [i_7] [i_2] [i_7] [i_12] [9LL])))))));
                        }
                    }
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_48 [i_2] [0ULL] [i_3] [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_3 - 2])) + (((((/* implicit */int) arr_48 [i_2 - 1] [i_2 - 1] [i_3] [i_3 - 3] [(signed char)10] [i_4] [i_4])) >> (((arr_26 [i_2 + 3] [i_3] [i_3 + 1] [4] [i_4]) + (1550531616133053742LL)))))))) ? (((/* implicit */unsigned long long int) arr_34 [7] [i_2 + 1] [4ULL] [i_3 - 1] [i_2 + 2])) : (((((/* implicit */unsigned long long int) arr_16 [i_4])) / (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) / (10ULL)))))));
                    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_12 [i_2] [i_3 - 2] [i_4]) >> (((9223372036854775807LL) - (9223372036854775805LL)))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_2] [i_2 + 2] [i_3] [i_3] [i_2]))) : (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_42 [i_4] [i_4] [i_4] [i_4] [i_4])) >> (((134217727U) - (134217705U))))))))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_2] [i_3 + 1] [i_3] [i_2] [i_4])) || (((/* implicit */_Bool) (unsigned short)63712))))))) : (min((((/* implicit */int) ((arr_13 [i_2 + 2] [i_4]) == (((/* implicit */unsigned long long int) arr_26 [i_2] [i_2 + 2] [i_3] [i_4] [(unsigned short)0]))))), ((-(((/* implicit */int) (_Bool)0))))))));
                    var_35 = ((/* implicit */unsigned short) ((((5371544235248064790ULL) ^ ((+(0ULL))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_2] [i_3] [i_3] [i_4] [i_4])))));
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) * (max((var_4), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)21213)))))))));
}
