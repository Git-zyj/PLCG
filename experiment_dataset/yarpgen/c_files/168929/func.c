/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168929
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
    var_19 &= ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (short i_3 = 4; i_3 < 18; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((signed char) arr_12 [i_2])))));
                                arr_15 [i_0] [(unsigned char)11] [(unsigned char)11] [i_2] [i_0] [i_3] [(signed char)2] = ((/* implicit */unsigned int) arr_3 [i_0]);
                                arr_16 [i_0] [i_0] [i_1] [i_2] [i_1] [i_3] [i_0] = ((/* implicit */short) ((((((/* implicit */int) arr_9 [i_3] [i_3 - 2] [i_3] [i_3 - 4] [i_0])) / (((/* implicit */int) var_11)))) / (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_1 [i_0]))))))));
                                arr_17 [i_0] = ((/* implicit */unsigned char) var_2);
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_0]))));
                var_22 = (~(((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15670))))));
                var_23 = ((/* implicit */signed char) ((var_9) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 4; i_7 < 18; i_7 += 4) 
                        {
                            {
                                var_24 *= ((/* implicit */unsigned int) (_Bool)1);
                                var_25 ^= ((/* implicit */unsigned int) var_9);
                                arr_26 [i_0] [i_0] [i_5] [i_6] = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_18 [i_7 - 3] [i_7 - 1] [15LL] [i_7 - 4])) || (((/* implicit */_Bool) var_2))))));
                                var_26 = ((/* implicit */int) arr_22 [i_7 - 1] [i_0] [i_5] [i_0] [i_0]);
                                var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_23 [i_0] [i_1] [i_0] [i_7 - 3] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_8 = 3; i_8 < 12; i_8 += 3) 
    {
        arr_30 [(short)10] [i_8 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_8] [(short)11] [i_8] [19ULL] [i_8 + 1])) ? (((((/* implicit */_Bool) arr_3 [18U])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 1133467835)))) : (((unsigned long long int) arr_25 [i_8 - 1] [i_8] [i_8 + 2] [i_8 - 2] [i_8 - 1]))));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            for (unsigned char i_10 = 4; i_10 < 12; i_10 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 14; i_12 += 2) 
                        {
                            {
                                arr_39 [(unsigned short)2] [i_9] [i_12] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_8] [i_8 - 2] [i_8] [i_8 + 2])) && (arr_35 [i_8 - 3] [i_9] [i_9 + 1] [i_9 + 1] [i_10 + 1])))), (((arr_18 [(_Bool)1] [i_8 - 3] [i_8 + 1] [i_8]) / (arr_18 [i_8] [i_8 + 2] [i_8] [i_8])))));
                                arr_40 [i_8] [(unsigned char)0] [i_11] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_8 - 3] [i_8 + 1] [i_8 + 1] [i_10 - 4] [i_9 + 1])) ? (1069830288U) : (arr_23 [i_12] [i_8 - 1] [i_10] [i_10 - 3] [i_9 + 1] [i_11])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (169823569) : (((/* implicit */int) var_14))))) : (min((var_17), (arr_23 [i_9] [i_8 + 2] [(unsigned char)12] [i_10 + 2] [i_9 + 1] [i_10])))));
                                arr_41 [i_8] [i_9] [i_10] [i_11] [i_12] &= ((/* implicit */unsigned char) ((((unsigned int) var_14)) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 2; i_13 < 13; i_13 += 2) 
                    {
                        for (signed char i_14 = 1; i_14 < 13; i_14 += 3) 
                        {
                            {
                                arr_46 [(unsigned short)1] [i_8 + 1] [i_8 + 1] [1U] [i_10 - 1] [i_13 - 2] [i_14] = ((/* implicit */short) 3122202098U);
                                arr_47 [(short)10] [i_10 + 2] [i_9] [i_8] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_13])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_16))))) : (((var_17) / (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [(_Bool)1] [i_14]))))))) / (((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_12 [i_13])))), (((arr_6 [6LL] [i_10]) / (((/* implicit */int) var_13)))))))));
                                arr_48 [i_8] [i_9] [i_8] [i_13] [i_14] [i_10 - 3] = ((/* implicit */short) var_12);
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((((_Bool) arr_34 [i_8] [i_9])) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_10])), (var_11)))))) / ((~(((/* implicit */int) ((unsigned short) var_2))))))))));
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned char) (+(((arr_4 [i_8] [i_8] [i_8 - 2]) / (arr_4 [i_8] [i_8 - 2] [i_8])))));
    }
    for (unsigned int i_15 = 1; i_15 < 15; i_15 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_16 = 1; i_16 < 16; i_16 += 4) 
        {
            for (unsigned short i_17 = 0; i_17 < 18; i_17 += 3) 
            {
                {
                    var_30 = ((/* implicit */unsigned int) 18446744073709551589ULL);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_18 = 3; i_18 < 16; i_18 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) / (arr_11 [i_15] [i_15 + 1] [(signed char)16])));
                        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [6LL])) : (((/* implicit */int) arr_1 [(unsigned char)10]))));
                        arr_60 [i_17] [(short)17] [i_17] [i_18] = ((/* implicit */unsigned long long int) (~(arr_22 [i_15 + 1] [(unsigned char)12] [i_16 + 1] [i_16] [i_18 + 1])));
                        arr_61 [i_15] [(unsigned short)15] [i_17] &= ((unsigned char) arr_53 [i_16 + 2] [i_15 + 3]);
                    }
                    for (unsigned long long int i_19 = 1; i_19 < 17; i_19 += 4) 
                    {
                        arr_64 [i_19] [i_17] [i_17] [i_16] [i_15 - 1] [i_15] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_63 [i_19] [(unsigned short)9] [i_19] [i_19] [i_19 + 1] [15U])) ? (((/* implicit */int) arr_63 [i_19] [i_19 - 1] [i_19] [i_19] [i_19 - 1] [i_19])) : (((/* implicit */int) arr_63 [i_19 - 1] [i_19] [i_19] [i_19] [i_19 + 1] [i_17]))))) / (((unsigned long long int) var_13))));
                        arr_65 [(unsigned short)9] [(unsigned short)9] [1ULL] [i_15 - 1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_18 [i_19] [i_19 + 1] [i_19 + 1] [i_19 - 1])) ? (var_17) : (var_8))), (((/* implicit */unsigned int) ((arr_18 [i_19] [i_19] [i_19 + 1] [i_19 - 1]) / (arr_18 [i_19] [i_19] [i_19 + 1] [i_19 - 1]))))));
                    }
                    arr_66 [i_17] [i_16] [i_15 + 3] = ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) / (var_15)))) ? (arr_56 [i_16 + 2] [i_16 + 2] [i_15 + 1]) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_15] [i_15] [i_15] [i_16] [(signed char)16]))))))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [2LL] [i_15] [i_16] [i_16] [i_17] [i_17]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_20 = 3; i_20 < 14; i_20 += 3) 
        {
            for (unsigned short i_21 = 1; i_21 < 17; i_21 += 1) 
            {
                {
                    arr_74 [i_20] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_6) : (3221578560U)))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_14))) : (var_15))));
                    var_33 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 1172765197U)))) / ((~(var_6))))) / (((/* implicit */unsigned int) ((127) / (((/* implicit */int) arr_8 [7] [i_20 + 1] [17U] [(unsigned short)17])))))));
                }
            } 
        } 
    }
    for (unsigned int i_22 = 1; i_22 < 15; i_22 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_23 = 0; i_23 < 18; i_23 += 2) 
        {
            for (short i_24 = 0; i_24 < 18; i_24 += 1) 
            {
                for (int i_25 = 2; i_25 < 14; i_25 += 2) 
                {
                    {
                        var_34 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (var_3))))));
                        arr_84 [i_24] [i_24] [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((short)-32764), (((/* implicit */short) (_Bool)1))))) ? (((((/* implicit */unsigned int) arr_55 [i_22 + 1] [(short)8] [i_25])) / (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((!(((/* implicit */_Bool) arr_0 [i_24])))), ((!(((/* implicit */_Bool) var_3))))))))));
                        arr_85 [i_22] [i_22] [i_24] [i_25] [i_22] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
                        arr_86 [i_22] [i_22] [i_24] [i_24] = ((/* implicit */short) ((_Bool) var_13));
                        arr_87 [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_24])) ? (((/* implicit */int) (short)-27400)) : ((-(((/* implicit */int) var_10))))))) / (3221578533U)));
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */unsigned int) max((var_9), ((+(((arr_80 [(unsigned char)10] [i_22]) + (362041078037395585ULL)))))));
        var_36 *= ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) arr_68 [i_22 + 2])), (var_15))) / (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)108)))))));
        /* LoopNest 2 */
        for (unsigned int i_26 = 1; i_26 < 14; i_26 += 1) 
        {
            for (long long int i_27 = 1; i_27 < 16; i_27 += 3) 
            {
                {
                    var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) var_11)), (4294967270U))))))));
                    var_38 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned int) arr_94 [(short)16] [(short)16] [i_27])));
                    var_39 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(arr_72 [i_22 + 3]))))));
                    var_40 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_11 [i_27] [i_26 + 2] [i_27])) ? (1073388745U) : (((/* implicit */unsigned int) arr_11 [i_27] [i_26 + 4] [i_27])))) | (((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [i_27 + 1] [i_27])))))));
                }
            } 
        } 
    }
}
