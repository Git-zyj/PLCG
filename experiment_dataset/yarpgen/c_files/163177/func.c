/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163177
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (unsigned short)41847)), (1153032971U))), (((/* implicit */unsigned int) var_12)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_6 [(unsigned short)0] [i_1] [3LL] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2] [i_2])) ? (1153032971U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [8] [i_2])) : ((+(var_10)))))) ? (((/* implicit */unsigned long long int) ((int) min((((/* implicit */unsigned long long int) var_16)), (arr_3 [i_0] [i_1] [i_2]))))) : ((~(arr_3 [i_2] [i_1] [i_0])))));
                    arr_7 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_2])) : (arr_3 [12] [i_1] [i_2])))) ? (((arr_1 [i_0]) * (arr_3 [i_2] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_0 [i_1] [i_2])), (arr_2 [i_0] [i_0] [i_2]))))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 3; i_3 < 22; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_4 = 4; i_4 < 21; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                {
                    arr_17 [i_3] [i_3] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3141934324U)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7168)))))) ? (3141934324U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) max((1153032971U), (((/* implicit */unsigned int) 536870912))))))));
                    arr_18 [i_3] [i_5] [(_Bool)1] [i_3] = ((/* implicit */signed char) arr_8 [i_3]);
                    var_18 = (signed char)-51;
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_6 = 3; i_6 < 20; i_6 += 4) 
        {
            var_19 = ((/* implicit */short) arr_19 [i_3] [i_3]);
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_3 + 1] [i_6 - 3] [i_3 + 1] [i_6 + 3])) ? (((/* implicit */int) arr_14 [i_3 - 2] [i_6 + 1] [i_6 + 1] [i_6 + 2])) : (((/* implicit */int) arr_14 [i_3 - 3] [i_6 - 2] [i_6 - 2] [i_6 - 2]))));
            var_21 = ((/* implicit */short) (~(((/* implicit */int) arr_11 [i_3]))));
        }
        for (signed char i_7 = 4; i_7 < 20; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    {
                        arr_29 [i_3] [i_8] [i_7 - 1] [i_7 - 1] [i_3] = ((/* implicit */unsigned int) max((((arr_20 [i_8] [i_3]) / (arr_20 [i_3 - 2] [i_3]))), (((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_3])) - (536870896))))));
                        /* LoopSeq 2 */
                        for (int i_10 = 0; i_10 < 23; i_10 += 4) 
                        {
                            arr_33 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [13] [i_8] [(short)10])) || (((/* implicit */_Bool) var_9)))))) * (((long long int) var_11)))), (((/* implicit */long long int) arr_10 [i_8] [i_7] [i_7]))));
                            arr_34 [i_7] [i_3] = ((/* implicit */long long int) min(((((_Bool)0) ? (((/* implicit */unsigned long long int) min((1153032971U), (3141934310U)))) : (var_13))), (((/* implicit */unsigned long long int) arr_15 [i_3] [i_3] [i_8]))));
                            arr_35 [i_3] [(_Bool)1] [13LL] [i_7] [(_Bool)1] [i_3] = ((/* implicit */signed char) 1073741820);
                        }
                        for (unsigned int i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_7 - 4] [i_3 - 1])) * (((/* implicit */int) arr_9 [i_7 - 4] [i_3 + 1]))))) : (arr_10 [i_11] [i_9] [(signed char)19])));
                            arr_39 [12LL] [i_7] [i_7] [i_9] [i_3] [i_7] [i_11] = ((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_11] [i_3] [i_8] [i_7] [i_3 - 2] [i_3])) ? (((/* implicit */int) arr_8 [i_9])) : (1923911172)))) - (((unsigned int) arr_24 [i_7] [i_8] [i_3])))));
                            arr_40 [i_11] [i_11] [i_3] [i_11] [i_11] [i_11] = ((/* implicit */long long int) arr_13 [3ULL] [i_9] [i_3]);
                        }
                        var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (251499578)))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_9] [i_7]))) ^ (arr_38 [15LL] [i_3] [i_7 - 4] [i_3] [i_7 - 4])))))) & (((((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (arr_25 [i_3] [i_7] [i_7])))) ? (arr_21 [i_7 - 3] [i_3 - 3] [i_3 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -5165878964770420047LL))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_12 = 0; i_12 < 23; i_12 += 3) 
                        {
                            arr_43 [i_12] [i_9] [i_7] [i_7] [i_7] [i_3] &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) / (arr_21 [i_7 - 2] [i_7 + 1] [i_7 - 2])));
                            var_24 = ((/* implicit */int) (~(arr_10 [i_8] [i_9] [i_7 - 2])));
                        }
                        /* vectorizable */
                        for (signed char i_13 = 0; i_13 < 23; i_13 += 2) /* same iter space */
                        {
                            arr_48 [i_3] [(signed char)22] [i_3] [i_9] [(unsigned short)22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (13408214637379145643ULL) : (((/* implicit */unsigned long long int) arr_37 [(unsigned char)3] [(unsigned char)4] [i_13] [i_9] [i_3]))));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((signed char) arr_45 [i_3] [i_3] [i_3] [i_9] [i_7])))));
                            arr_49 [i_3 - 2] [i_3] [i_8] [0U] [i_13] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_46 [i_3] [i_7 - 4] [i_7] [i_8] [12U] [i_13])) : ((-9223372036854775807LL - 1LL))))));
                            var_26 = ((/* implicit */int) ((_Bool) (unsigned char)123));
                        }
                        /* vectorizable */
                        for (signed char i_14 = 0; i_14 < 23; i_14 += 2) /* same iter space */
                        {
                            var_27 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) ? (1153032971U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)119)))))) ^ (var_10)));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_15 [i_3] [i_7] [i_7 + 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_50 [i_3] [i_3] [i_8] [i_9] [i_3])))) : (((((/* implicit */_Bool) arr_31 [i_7] [i_7])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_9])))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 0; i_15 < 23; i_15 += 4) 
                        {
                            arr_54 [i_3] [i_3] [i_3] [(unsigned char)9] [i_9] [i_3] [i_15] = ((/* implicit */signed char) (~((+(arr_47 [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 2])))));
                            arr_55 [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_50 [i_3] [i_9] [i_8] [i_7] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_8] [i_8] [i_8])))))) : (((arr_52 [i_3] [i_7 - 3] [i_8] [i_9] [i_3] [i_8] [i_9]) & (var_11))))) ^ (((/* implicit */unsigned long long int) (~(((arr_46 [i_3] [i_7] [i_3] [i_3] [(unsigned char)19] [i_15]) ^ (arr_15 [i_3] [i_7] [i_8]))))))));
                            arr_56 [i_3] [i_3] [i_7] [i_8] [i_8] [i_9] [i_3] = (i_3 % 2 == zero) ? (((/* implicit */short) min((((unsigned long long int) arr_21 [(signed char)14] [(signed char)14] [i_3 - 2])), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_3]))) * (max((((/* implicit */long long int) arr_38 [i_3] [19] [i_8] [i_3] [i_15])), (arr_20 [i_3] [i_3]))))))))) : (((/* implicit */short) min((((unsigned long long int) arr_21 [(signed char)14] [(signed char)14] [i_3 - 2])), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_3]))) / (max((((/* implicit */long long int) arr_38 [i_3] [19] [i_8] [i_3] [i_15])), (arr_20 [i_3] [i_3])))))))));
                            var_29 = ((/* implicit */unsigned short) arr_42 [20U] [i_3 + 1]);
                            var_30 += ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [3LL] [i_7] [3LL] [i_8] [i_9] [i_7] [3LL])) ? (((/* implicit */long long int) -251499578)) : (arr_26 [i_15] [i_8] [(unsigned short)6] [i_8] [i_3])))) ? (max((((/* implicit */unsigned int) arr_8 [i_3 - 1])), (var_9))) : (((/* implicit */unsigned int) (-(1274565093))))))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_16 = 0; i_16 < 23; i_16 += 4) 
            {
                for (signed char i_17 = 0; i_17 < 23; i_17 += 2) 
                {
                    {
                        var_31 = (~(arr_59 [i_17] [i_7] [i_17]));
                        arr_62 [i_3] [i_3] [i_7 - 1] [i_3] [i_17] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_3] [(signed char)9]))))) ? ((~(((/* implicit */int) arr_11 [i_3])))) : ((~(((/* implicit */int) var_16)))))));
                        arr_63 [i_3] [i_7 - 2] [i_3] [i_16] [8] [i_3] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_47 [i_3 - 2] [i_3] [i_3] [0ULL])) ? (((/* implicit */long long int) arr_30 [i_7 - 3] [i_7 + 3] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3])) : (arr_51 [i_16] [i_7 - 1] [i_7 + 1] [i_3 - 2] [i_3] [i_3 - 2] [i_3])))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_18 = 0; i_18 < 23; i_18 += 1) 
            {
                var_32 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_41 [i_3] [i_7] [i_7] [i_7 - 4] [i_7 - 2] [i_7 - 4])) ^ (((/* implicit */int) arr_53 [i_3] [22LL] [i_18] [i_18] [i_3] [i_7]))))) ? (((/* implicit */long long int) (-(arr_30 [i_3] [(signed char)9] [i_7 - 3] [i_3] [i_3 - 2] [i_18])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -251499569)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_57 [i_3] [i_3] [i_3]))))) ? (arr_26 [i_7] [i_3] [i_7 - 2] [i_7 + 1] [i_7 - 2]) : (((/* implicit */long long int) 2147479552)))));
                arr_66 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((3216092957950657833ULL) ^ (((/* implicit */unsigned long long int) 3845713926U)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) max((arr_45 [i_3] [i_7] [i_7] [i_7 + 2] [i_3]), (arr_45 [i_3] [i_7 + 3] [i_7] [i_3] [i_3]))))))));
            }
        }
        for (unsigned char i_19 = 0; i_19 < 23; i_19 += 4) 
        {
            arr_70 [i_3] [i_19] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_3 - 1] [i_3 - 2] [i_3 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_3 - 1] [i_3]))) : (arr_25 [i_3 - 1] [(unsigned short)2] [i_3 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_1), (((/* implicit */unsigned char) arr_50 [i_3 - 1] [i_3 - 2] [i_3 - 2] [i_3 - 3] [i_19])))))) : (((((/* implicit */_Bool) arr_50 [i_3 - 1] [(signed char)8] [i_3 - 2] [i_3 - 3] [i_19])) ? (arr_25 [i_3 - 1] [i_3 - 1] [i_3 - 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_3 - 1] [i_3]))))));
            arr_71 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 933442615)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_19]))) : (arr_65 [i_3] [(short)5] [i_3] [i_3]))))))) ? ((~(((((/* implicit */_Bool) 9088426034957998116LL)) ? (((/* implicit */int) arr_42 [i_19] [i_3 - 2])) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) arr_8 [11LL]))));
            arr_72 [i_3] [i_19] [i_3] = ((/* implicit */signed char) var_0);
            arr_73 [i_3] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)29784)))) : (((/* implicit */int) ((var_2) >= (arr_45 [i_3] [i_19] [i_3] [i_3 - 1] [i_3]))))))), (((arr_44 [i_3] [i_3] [(_Bool)1] [i_19] [i_3]) / (arr_44 [i_3] [i_3] [i_3 - 1] [i_19] [16ULL])))));
        }
        var_33 = ((/* implicit */signed char) (~(2955068879252444009LL)));
        arr_74 [i_3] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((((/* implicit */int) arr_50 [i_3] [i_3 - 3] [i_3 - 1] [i_3] [i_3])), (251499568)))) ? (((/* implicit */int) arr_50 [i_3] [i_3 - 3] [i_3 - 2] [i_3] [i_3])) : ((-(((/* implicit */int) arr_24 [i_3] [i_3] [i_3]))))))));
    }
    for (short i_20 = 1; i_20 < 22; i_20 += 4) 
    {
        arr_77 [i_20] = max((((/* implicit */int) (signed char)122)), ((+(((/* implicit */int) (_Bool)1)))));
        var_34 = ((/* implicit */long long int) (~(((unsigned int) (_Bool)1))));
    }
    var_35 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43979))) : (var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) var_4)))))))));
}
