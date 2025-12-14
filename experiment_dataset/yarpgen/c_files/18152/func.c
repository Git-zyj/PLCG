/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18152
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        arr_3 [(signed char)0] &= ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-6))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0]);
            arr_7 [i_0] [i_0] [i_1 - 3] = ((/* implicit */int) (unsigned short)31725);
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
            {
                arr_11 [i_0] [i_0] [i_2] = ((/* implicit */short) arr_1 [i_1 - 1] [i_1 - 4]);
                var_14 -= ((/* implicit */unsigned short) arr_0 [(_Bool)1]);
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 3])) : (((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 4]))));
                arr_13 [i_0] [i_1 - 2] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0]))));
            }
            for (short i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
            {
                arr_16 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((var_0) + (((/* implicit */int) arr_9 [i_0] [i_0] [i_3])))) - (arr_5 [i_0])));
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (~(((/* implicit */int) ((unsigned short) (_Bool)1))))))));
                arr_17 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned short) ((long long int) ((var_12) ^ (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0] [0ULL] [i_3]))))));
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
                {
                    var_16 -= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_14 [8LL] [i_4]))));
                    arr_21 [i_0] [i_4] [(signed char)0] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 - 4] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8298))) : (arr_18 [i_0] [i_0] [i_4] [i_0])));
                }
                for (int i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
                {
                    var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) || (arr_9 [i_1 - 4] [i_5] [i_1 - 3])));
                    var_18 = ((/* implicit */_Bool) ((int) (_Bool)0));
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_1 - 3] [i_3] [i_5])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) - (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1] [i_5]))))))));
                }
            }
        }
        var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_18 [i_0] [i_0] [i_0] [i_0]) : (var_4))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (1982569979)))))));
    }
    for (int i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
    {
        arr_26 [i_6] = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) 1102096991)), (17296009248879356128ULL))) > (((/* implicit */unsigned long long int) arr_22 [i_6] [i_6] [i_6] [i_6]))));
        var_21 += ((/* implicit */_Bool) ((((67108863) != (((/* implicit */int) (short)19252)))) ? (((/* implicit */int) max((min((((/* implicit */signed char) (_Bool)1)), (var_13))), (((/* implicit */signed char) ((_Bool) arr_0 [i_6])))))) : (((/* implicit */int) arr_15 [1] [i_6] [i_6]))));
        arr_27 [i_6] = ((/* implicit */unsigned long long int) ((((((int) arr_5 [i_6])) != ((+(var_1))))) ? (((((/* implicit */_Bool) (short)96)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32752)))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_24 [i_6])))) >= (((((/* implicit */_Bool) 17296009248879356128ULL)) ? (arr_1 [i_6] [i_6]) : (((/* implicit */int) var_3)))))))));
        var_22 ^= ((((((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_9 [i_6] [0LL] [i_6])) : (((/* implicit */int) arr_19 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))) >= ((+(((/* implicit */int) arr_14 [i_6] [(short)4])))));
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            arr_31 [i_6] [8LL] |= ((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (3584U))));
            arr_32 [(_Bool)1] &= ((/* implicit */int) arr_4 [8] [i_7] [i_7]);
        }
    }
    /* LoopNest 2 */
    for (short i_8 = 4; i_8 < 15; i_8 += 2) 
    {
        for (unsigned int i_9 = 1; i_9 < 12; i_9 += 3) 
        {
            {
                arr_39 [i_8 + 1] [i_9] = ((/* implicit */int) (short)23732);
                var_23 &= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) >> (((/* implicit */int) ((unsigned short) arr_37 [i_8 - 4] [i_8 + 1] [i_9 - 1])))))), (4294963710U)));
                /* LoopSeq 4 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_24 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1150734824830195503ULL)) ? (3041089088U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((arr_35 [(signed char)2] [i_10]) ? (((/* implicit */int) var_6)) : (262674341)))) : (arr_40 [i_8 - 1])))));
                    arr_42 [i_8] [i_9] [i_9] [i_9] &= ((/* implicit */short) ((((/* implicit */_Bool) (short)16352)) ? (((/* implicit */unsigned long long int) 2147483647)) : (70368727400448ULL)));
                    arr_43 [(short)6] [i_9] [i_10] = ((/* implicit */int) (~(((arr_38 [i_8 - 2]) * (arr_38 [i_8 - 4])))));
                }
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    arr_47 [i_11] = ((/* implicit */unsigned short) ((1253878207U) >> (((/* implicit */int) arr_35 [i_9] [i_8 + 1]))));
                    arr_48 [i_11] [i_9] [i_11] = ((/* implicit */long long int) (((-(((/* implicit */int) var_3)))) / (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_35 [i_8 - 3] [i_11 - 1])))))));
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65515)) ? (((/* implicit */unsigned long long int) 7377749146551793147LL)) : (70368727400447ULL)))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_34 [i_9])))), (((/* implicit */int) (signed char)-108))))))))));
                }
                /* vectorizable */
                for (short i_12 = 0; i_12 < 16; i_12 += 3) /* same iter space */
                {
                    arr_52 [i_8] [i_9] [(_Bool)1] [i_12] = ((/* implicit */long long int) (unsigned short)31734);
                    /* LoopSeq 1 */
                    for (int i_13 = 3; i_13 < 15; i_13 += 3) 
                    {
                        var_26 *= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)97)) <= (((arr_50 [i_8] [i_9 + 1] [i_13]) - (((/* implicit */int) (short)24576))))));
                        arr_55 [i_8] [i_9] [i_9] [i_9] = ((long long int) arr_44 [i_8] [i_8 + 1] [i_8] [i_8 - 2]);
                        /* LoopSeq 2 */
                        for (int i_14 = 0; i_14 < 16; i_14 += 3) 
                        {
                            arr_58 [i_8 - 4] [i_8 + 1] [i_8 - 4] [i_8 - 4] [i_8 - 4] [i_13] [11] = ((/* implicit */_Bool) ((((/* implicit */int) arr_54 [i_8 - 3] [i_13 + 1] [i_14] [i_14] [i_14])) | (((/* implicit */int) arr_34 [i_8 - 4]))));
                            var_27 -= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (arr_41 [i_8] [i_8 - 1] [i_8 - 2] [i_8 - 2]) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_8 - 3] [i_9] [i_12] [i_13] [i_13])))))));
                            arr_59 [i_8 + 1] [i_9 + 4] [i_9 + 4] [i_13] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */long long int) arr_51 [i_9] [i_9 + 1] [i_12]))));
                        }
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            var_28 -= ((/* implicit */unsigned long long int) ((unsigned short) (signed char)-109));
                            var_29 = ((/* implicit */long long int) arr_61 [9] [i_13 - 2] [i_13 - 2] [i_12] [(unsigned short)15] [(unsigned short)15]);
                            arr_62 [i_8] [i_9] [i_15] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_8])) - (((/* implicit */int) arr_46 [i_8 - 3] [i_8 - 4] [i_15]))));
                            arr_63 [i_8 - 1] [i_12] [12ULL] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_41 [i_8 + 1] [i_9] [i_12] [i_13 + 1])) != (var_12)));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 2; i_16 < 13; i_16 += 2) 
                    {
                        for (unsigned int i_17 = 0; i_17 < 16; i_17 += 1) 
                        {
                            {
                                arr_70 [i_16] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */short) 5221221805765075159ULL);
                                arr_71 [15LL] [i_9 - 1] [i_12] [i_9 - 1] = ((/* implicit */short) (+(9223372036854775807LL)));
                            }
                        } 
                    } 
                }
                for (short i_18 = 0; i_18 < 16; i_18 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_19 = 2; i_19 < 15; i_19 += 1) 
                    {
                        for (unsigned int i_20 = 0; i_20 < 16; i_20 += 4) 
                        {
                            {
                                arr_78 [i_8 - 4] [i_18] [i_18] [i_19] [i_20] [i_20] [i_8 + 1] = ((/* implicit */short) ((int) (signed char)97));
                                var_30 = ((/* implicit */long long int) ((((((/* implicit */int) arr_61 [(_Bool)1] [i_9] [(_Bool)1] [i_8 + 1] [i_9 - 1] [i_9])) & (((/* implicit */int) var_9)))) + ((((-2147483647 - 1)) * (((/* implicit */int) arr_61 [i_18] [0ULL] [i_18] [i_8 - 1] [i_20] [i_8 + 1]))))));
                                arr_79 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_18] = ((/* implicit */unsigned short) var_3);
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (signed char)-104)) + (((/* implicit */int) (short)22487)))) : (var_10)))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_21 = 0; i_21 < 16; i_21 += 2) 
                    {
                        arr_83 [i_18] = ((arr_61 [i_8 - 1] [i_8] [i_8 - 3] [i_9 + 1] [i_9 + 4] [i_9 + 3]) ? (((/* implicit */int) (signed char)-111)) : (arr_74 [i_18] [i_8 - 3] [i_8 - 4] [i_8 + 1]));
                        arr_84 [i_18] = ((/* implicit */short) var_3);
                    }
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        arr_87 [i_8 + 1] [i_18] = ((/* implicit */long long int) var_5);
                        /* LoopSeq 1 */
                        for (signed char i_23 = 0; i_23 < 16; i_23 += 3) 
                        {
                            var_32 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */int) ((short) arr_75 [i_8 + 1]))) : (((/* implicit */int) ((unsigned short) var_2)))));
                            var_33 = arr_81 [i_22] [i_9 + 2] [i_18] [i_22];
                        }
                        arr_90 [i_18] [i_18] [i_8] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_49 [i_22] [i_22]))) & (arr_36 [i_8 - 2] [i_9 + 1])));
                    }
                    /* vectorizable */
                    for (int i_24 = 0; i_24 < 16; i_24 += 2) 
                    {
                        arr_93 [i_8] [i_18] [i_8] [i_8] [i_8 - 2] [i_8] = ((/* implicit */_Bool) arr_57 [i_8 - 3] [i_9] [i_18] [i_9 + 2] [i_8 - 3]);
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_40 [i_24])))) ? (((/* implicit */int) arr_37 [10] [10] [10])) : (((/* implicit */int) arr_77 [i_18] [i_8 - 2]))));
                    }
                    arr_94 [i_8] [i_9] [i_18] = ((/* implicit */long long int) var_2);
                }
            }
        } 
    } 
    var_35 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)0))), (((unsigned long long int) var_7))));
}
