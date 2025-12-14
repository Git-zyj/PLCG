/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149001
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 6; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_7 [(unsigned short)0] [i_1] [(unsigned short)0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */int) arr_5 [i_0] [3] [i_0] [i_0])) : ((+((-(((/* implicit */int) arr_2 [2U] [(unsigned char)3]))))))));
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_3] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) (_Bool)1)))));
                        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) ((short) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1610612736U)))), (((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0]) : (28ULL)))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_0] [(unsigned char)1] [i_2] [i_4] [(unsigned char)7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (arr_6 [i_0] [0U] [0U] [0U]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_4])))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))) / (arr_1 [8]))))) : (((/* implicit */unsigned long long int) max((arr_0 [i_0 + 2] [i_0]), (((/* implicit */unsigned int) ((arr_11 [i_0] [i_4] [(unsigned short)7] [i_4]) <= (((/* implicit */long long int) ((/* implicit */int) arr_5 [1] [1] [1] [1])))))))))));
                        arr_14 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_4]))));
                        arr_15 [i_4] [i_2] [i_1] [i_0] = (!(((/* implicit */_Bool) ((arr_9 [i_0 - 1]) ? (((/* implicit */int) arr_9 [i_0 + 2])) : (((/* implicit */int) arr_9 [i_0 - 1]))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_18 [(unsigned char)0] [4ULL] [i_1] [i_2] [(unsigned short)1] [(unsigned char)0] = ((/* implicit */long long int) arr_9 [i_5]);
                        arr_19 [i_0] [i_1] [i_1] [i_2] [i_1] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_1 [i_0]) * (((/* implicit */unsigned long long int) 9223372036854775807LL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [(short)2] [i_0 + 1] [i_0 + 1] [(short)2])) ? (534773760U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6)))))) : (18446744073709551611ULL)));
                        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) min(((~(((/* implicit */int) arr_5 [i_0] [i_2] [i_2] [i_5])))), (((/* implicit */int) ((signed char) arr_9 [8U]))))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (long long int i_7 = 1; i_7 < 6; i_7 += 2) 
                        {
                            var_14 ^= ((((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1] [i_1]))))) / (((/* implicit */int) (_Bool)1)));
                            arr_24 [i_0] [i_0] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) arr_4 [i_6]);
                        }
                        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) 
                        {
                            arr_28 [i_0] [i_0] [i_0 + 2] [i_6] [i_0] [i_0] = ((/* implicit */int) (+(arr_11 [i_0] [i_0] [i_0] [i_0])));
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_5 [i_1] [i_1] [i_6] [(short)1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_27 [i_0] [i_0 + 3] [i_0] [i_6] [i_0 + 3] [i_0] [i_0])) > (((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_6] [i_0 + 3] [i_1] [i_0])))))) : (((((/* implicit */_Bool) var_7)) ? ((((_Bool)1) ? (arr_26 [(short)4] [i_1] [i_2] [i_2] [(_Bool)1] [i_6] [(_Bool)1]) : (((/* implicit */unsigned long long int) 7U)))) : (((/* implicit */unsigned long long int) 5U))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 1) /* same iter space */
                        {
                            arr_32 [i_6] = ((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_12 [i_0] [8] [i_2] [9LL] [i_0]))))));
                            var_16 = ((/* implicit */_Bool) arr_4 [i_0]);
                            arr_33 [i_0] [i_6] [i_2] [0LL] [3] = ((/* implicit */unsigned char) max(((~((+(((/* implicit */int) arr_9 [i_1])))))), (0)));
                            arr_34 [i_6] [i_6] [8LL] [i_1] [i_6] = 4294967293U;
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 1) /* same iter space */
                        {
                            arr_37 [i_2] [i_1] [i_1] [i_6] [i_6] [i_2] [i_2] = ((/* implicit */_Bool) (-((-(arr_1 [i_6])))));
                            arr_38 [i_6] = ((/* implicit */unsigned long long int) arr_31 [(signed char)0] [2ULL] [i_2]);
                        }
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)255))))) ? (arr_6 [i_0 + 2] [i_0] [i_0 + 4] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 3]))))), (((/* implicit */long long int) max((((/* implicit */unsigned short) arr_31 [i_0] [i_0] [i_0 + 3])), (arr_4 [1LL])))))))));
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((unsigned int) arr_9 [i_0 + 3])))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (short i_11 = 0; i_11 < 23; i_11 += 4) 
    {
        arr_41 [i_11] [i_11] = ((/* implicit */unsigned int) (!(((((/* implicit */int) (short)32757)) <= (((/* implicit */int) (unsigned char)255))))));
        /* LoopSeq 3 */
        for (unsigned int i_12 = 2; i_12 < 21; i_12 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_13 = 3; i_13 < 21; i_13 += 3) 
            {
                var_19 = ((/* implicit */signed char) arr_46 [i_12] [i_12]);
                arr_49 [i_11] [i_11] [4LL] [8] = ((/* implicit */_Bool) arr_42 [i_13] [i_12 + 1]);
            }
            /* LoopNest 3 */
            for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 3) 
            {
                for (long long int i_15 = 0; i_15 < 23; i_15 += 4) 
                {
                    for (unsigned int i_16 = 1; i_16 < 22; i_16 += 3) 
                    {
                        {
                            arr_59 [i_16] [i_16] [i_14] [i_16] [i_16] = ((/* implicit */_Bool) (~(((unsigned int) min((((/* implicit */long long int) var_9)), (9223372036854775778LL))))));
                            arr_60 [i_11] [2U] [i_16] [2U] [2U] [i_16] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((((/* implicit */_Bool) arr_45 [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_46 [i_15] [i_12])) || (((/* implicit */_Bool) var_7)))))) : ((~(var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 68702699520ULL))))))));
                            arr_61 [i_16] [i_11] [i_12] [i_12] [(signed char)2] [i_15] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 140737488355327LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_45 [i_11]))))) ? ((+(((/* implicit */int) (unsigned char)250)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_50 [i_11] [i_11] [i_11] [(short)15])) : (2147483647)))))) ? (((((/* implicit */_Bool) arr_42 [i_12 + 1] [i_12 + 1])) ? (4294967295U) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_51 [i_16] [i_14] [i_11] [i_11]))))))) : (15U)));
                            var_20 = ((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) (signed char)1)), (67108863U))))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_17 = 2; i_17 < 20; i_17 += 2) 
        {
            var_21 &= ((/* implicit */unsigned long long int) -536870912);
            arr_65 [i_11] [i_17] = ((/* implicit */short) (~(4294967295U)));
            var_22 = ((/* implicit */signed char) max((2147483647), (((/* implicit */int) (short)(-32767 - 1)))));
            arr_66 [i_11] [i_11] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) (_Bool)1))))));
        }
        for (short i_18 = 2; i_18 < 22; i_18 += 2) 
        {
            arr_69 [(_Bool)1] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14))) == ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((var_10) | (var_10)))) : ((-(arr_64 [(short)13])))))));
            /* LoopSeq 4 */
            for (unsigned int i_19 = 0; i_19 < 23; i_19 += 4) /* same iter space */
            {
                arr_72 [i_11] [i_18 - 1] [i_19] &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_45 [i_11])), (((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_63 [i_18 + 1] [i_18 + 1] [i_18])) * (((/* implicit */int) arr_63 [i_11] [i_18 + 1] [i_19]))))) / (arr_54 [i_19] [14U] [i_18] [i_11])))));
                arr_73 [i_11] [(unsigned short)16] [i_19] [i_19] = ((/* implicit */unsigned int) var_7);
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (-(16383LL))))));
                arr_74 [22LL] [i_18] [i_19] [(unsigned char)0] = ((/* implicit */short) ((unsigned short) ((long long int) (((_Bool)1) ? (arr_40 [9U]) : (arr_54 [i_19] [11ULL] [i_11] [i_11])))));
            }
            for (unsigned int i_20 = 0; i_20 < 23; i_20 += 4) /* same iter space */
            {
                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (-((-(((/* implicit */int) (!((_Bool)1)))))))))));
                arr_77 [i_20] [i_18] [i_18] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-114)) ? (((((/* implicit */_Bool) 0U)) ? (arr_58 [(_Bool)1] [i_11] [i_20] [i_20] [i_11]) : (((/* implicit */unsigned long long int) 6U)))) : (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)243))))) ^ (arr_54 [i_18 + 1] [15] [i_18] [i_18 - 2])))));
            }
            for (signed char i_21 = 0; i_21 < 23; i_21 += 2) 
            {
                arr_82 [i_21] = ((/* implicit */long long int) (+(((/* implicit */int) min((arr_78 [i_18 - 2] [i_11]), (((/* implicit */short) arr_53 [i_21] [i_21] [i_21] [(unsigned char)18] [i_18 - 2] [i_18])))))));
                arr_83 [i_11] [i_11] [i_21] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_57 [i_21] [i_18 - 1] [10ULL] [i_21])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_21] [i_18 - 2] [18U] [i_18]))) : (var_6)))) ? (((((/* implicit */_Bool) arr_57 [i_11] [i_18 + 1] [(_Bool)1] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_21] [i_18 - 2] [i_21] [i_21]))) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)32)))))));
                var_25 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_47 [i_21] [i_11] [i_11])) * (((/* implicit */int) arr_53 [i_11] [i_18] [(_Bool)1] [i_18] [9] [(unsigned char)13]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-10))) - (var_11)))) : (arr_58 [i_18] [i_11] [i_18 + 1] [i_18] [i_18]))), ((-(arr_55 [i_18 - 2] [i_11] [i_18 - 1] [i_18] [i_11] [i_18 + 1])))));
            }
            for (short i_22 = 0; i_22 < 23; i_22 += 3) 
            {
                arr_87 [i_11] [i_18] [i_18] &= ((/* implicit */short) (+(max((((/* implicit */long long int) arr_76 [i_18 - 2] [i_18] [i_18 - 2] [i_18 - 1])), (9223372036854775807LL)))));
                arr_88 [i_11] [i_22] [i_22] [i_22] = ((/* implicit */long long int) (((+(((/* implicit */int) arr_51 [i_18] [i_18 + 1] [i_22] [i_22])))) * (((/* implicit */int) var_7))));
                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) var_9))));
                arr_89 [i_11] [i_18] [i_22] &= ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32))) : (16777212ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) | (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)61440)) : (((/* implicit */int) (signed char)-33))))))));
            }
            arr_90 [i_18 - 2] = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49152))) - (268435456U))), (((/* implicit */unsigned int) ((21) != (((/* implicit */int) (short)32754)))))));
        }
        arr_91 [i_11] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)255)))) : (var_4)))));
    }
    for (short i_23 = 2; i_23 < 20; i_23 += 3) 
    {
        var_27 = ((/* implicit */int) (signed char)-4);
        arr_95 [i_23] = ((/* implicit */short) (~(arr_56 [i_23] [i_23] [i_23] [i_23 - 2] [17LL] [(unsigned short)16] [i_23])));
    }
    /* vectorizable */
    for (unsigned char i_24 = 0; i_24 < 18; i_24 += 4) 
    {
        arr_98 [i_24] [i_24] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15360)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_42 [i_24] [i_24]))))) : (arr_40 [i_24])));
        arr_99 [i_24] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)6))));
        /* LoopNest 2 */
        for (unsigned short i_25 = 0; i_25 < 18; i_25 += 4) 
        {
            for (signed char i_26 = 0; i_26 < 18; i_26 += 3) 
            {
                {
                    arr_107 [(unsigned char)6] [(unsigned char)6] [i_24] [(short)0] = ((/* implicit */short) ((unsigned int) arr_46 [i_25] [i_24]));
                    arr_108 [i_24] [i_25] [i_25] = ((/* implicit */long long int) (+(((/* implicit */int) arr_78 [i_24] [i_25]))));
                }
            } 
        } 
        arr_109 [i_24] = (!(((/* implicit */_Bool) arr_40 [i_24])));
    }
    var_28 = ((((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (-9223372036854775797LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)13))))))))) - (((/* implicit */int) (!(((/* implicit */_Bool) (short)124))))));
    var_29 = ((/* implicit */signed char) (_Bool)1);
}
