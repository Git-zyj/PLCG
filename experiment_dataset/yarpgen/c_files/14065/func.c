/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14065
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (signed char)112))));
                    var_19 = ((/* implicit */unsigned int) ((long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_3 [i_0])) - (11614)))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_11 [(unsigned char)0] [i_3] [i_3] [i_3] [i_0] [i_0] = ((/* implicit */long long int) var_15);
                                var_20 = ((/* implicit */unsigned long long int) arr_10 [i_3] [i_2] [i_3] [i_3]);
                                var_21 = ((/* implicit */unsigned long long int) ((36024398972452864ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1396454426)) ? (((/* implicit */int) (unsigned short)13)) : (arr_7 [i_0] [i_1] [i_2] [(short)0] [11]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        for (signed char i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_7 = 4; i_7 < 8; i_7 += 2) 
                {
                    var_22 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13))) : (arr_16 [i_5])))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 11; i_8 += 2) 
                    {
                        for (short i_9 = 0; i_9 < 12; i_9 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) (short)-183);
                                var_24 += ((/* implicit */unsigned char) (((!(arr_9 [(unsigned char)12] [i_6] [(unsigned char)7] [i_7] [i_8] [i_8] [i_9]))) ? ((-(((/* implicit */int) (signed char)49)))) : (((/* implicit */int) arr_4 [i_9]))));
                                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_9] [i_8 - 1] [i_7 + 1] [i_9])) ? (((((/* implicit */_Bool) arr_13 [9ULL])) ? (6436391897404936157ULL) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5] [i_6] [i_7] [i_7 + 4] [i_7])))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */signed char) ((arr_7 [i_6] [(unsigned short)11] [i_7] [1] [i_7 - 3]) > (((/* implicit */int) (unsigned char)199))));
                }
                for (unsigned short i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_5 [i_5])))), (min((arr_8 [i_5] [i_5] [i_10]), (((/* implicit */int) var_2))))))) ? ((+(((((/* implicit */int) arr_17 [i_5] [i_6] [i_11] [i_12])) << (((((/* implicit */int) arr_32 [i_5] [3] [i_12])) + (36))))))) : (max((((((/* implicit */_Bool) -1203467634)) ? (((/* implicit */int) arr_9 [i_5] [i_6] [i_11] [i_11] [4LL] [i_5] [i_10])) : (((/* implicit */int) arr_3 [i_12])))), (((((/* implicit */int) (unsigned short)65523)) << (((((/* implicit */int) (unsigned char)198)) - (192)))))))));
                                var_28 = ((/* implicit */int) ((long long int) (unsigned char)165));
                                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (+(min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_10)), (arr_26 [i_12] [i_11] [6LL] [i_12])))), (min((((/* implicit */unsigned long long int) var_15)), (var_4))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        for (int i_14 = 3; i_14 < 11; i_14 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */long long int) ((((/* implicit */long long int) ((arr_18 [i_5] [i_14 - 1] [i_10] [i_14] [i_14] [0LL]) ^ (((/* implicit */int) var_3))))) < (((((/* implicit */_Bool) 954714335310787811LL)) ? (5828579075382399046LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12)))))));
                                var_31 += ((/* implicit */unsigned char) ((long long int) (short)27184));
                            }
                        } 
                    } 
                    arr_38 [i_5] [i_6] [8U] [i_10] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */unsigned long long int) var_0)), (var_12))))), (((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)49))) : (2271516667090185273ULL))))));
                    arr_39 [(signed char)5] [10] [7ULL] [(signed char)1] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_17 [i_5] [i_6] [i_10] [i_10]))))));
                }
                for (unsigned char i_15 = 0; i_15 < 12; i_15 += 4) 
                {
                    arr_43 [i_5] [i_6] [10U] [10U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)8))) > (var_4))))) * (min((((/* implicit */unsigned long long int) (unsigned short)65529)), (18446744073709551606ULL)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))))) : (var_9)));
                    var_32 = ((/* implicit */unsigned char) arr_10 [i_6] [i_15] [i_15] [8U]);
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 1; i_16 < 11; i_16 += 2) 
                    {
                        for (long long int i_17 = 2; i_17 < 11; i_17 += 4) 
                        {
                            {
                                var_33 = ((/* implicit */int) ((var_9) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_12))))))))));
                                var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((unsigned short) 18124971251088308926ULL)))));
                                var_35 = min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) -2003216214)) ? (8978825755080499196LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65521)))))))), (((((/* implicit */_Bool) max((var_1), (arr_35 [i_15] [i_6] [i_15])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_12))));
                            }
                        } 
                    } 
                }
                for (long long int i_18 = 1; i_18 < 8; i_18 += 2) 
                {
                    var_36 += ((/* implicit */unsigned char) max((min((((long long int) var_4)), (24074623180811530LL))), (arr_16 [i_5])));
                    arr_52 [i_5] [i_18] [4U] = var_17;
                }
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_19 = 0; i_19 < 12; i_19 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_20 = 0; i_20 < 12; i_20 += 2) 
                    {
                        for (unsigned long long int i_21 = 2; i_21 < 10; i_21 += 3) 
                        {
                            {
                                arr_60 [i_21] [6ULL] [8LL] [i_6] [(_Bool)1] = ((/* implicit */unsigned long long int) (+(arr_44 [i_6] [i_19] [i_20] [i_21])));
                                var_37 = ((/* implicit */int) arr_35 [(signed char)0] [0LL] [i_19]);
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_6] [i_6]))))) == (arr_31 [i_6] [i_6])));
                }
                for (int i_22 = 0; i_22 < 12; i_22 += 4) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32)))))) ? (((((/* implicit */_Bool) arr_32 [5LL] [i_22] [i_22])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)37)))) : (((/* implicit */int) arr_54 [(unsigned short)0] [i_6] [i_6]))))), ((~(var_16)))));
                    /* LoopNest 2 */
                    for (int i_23 = 0; i_23 < 12; i_23 += 2) 
                    {
                        for (int i_24 = 1; i_24 < 9; i_24 += 4) 
                        {
                            {
                                var_40 = ((/* implicit */_Bool) ((long long int) ((140735340871680ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_16)) <= (15676904185760147853ULL))))))));
                                var_41 += ((/* implicit */short) ((((/* implicit */_Bool) 3ULL)) ? (((arr_31 [i_23] [i_24 + 1]) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)65524))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_25 = 0; i_25 < 12; i_25 += 2) 
                    {
                        for (unsigned short i_26 = 0; i_26 < 12; i_26 += 4) 
                        {
                            {
                                var_42 += ((/* implicit */short) ((((((/* implicit */_Bool) max((arr_58 [i_5] [i_6] [(signed char)0] [i_25] [i_5] [i_6]), (((/* implicit */long long int) var_2))))) ? (min((var_9), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) << (((-1271193780) + (1271193789)))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_28 [i_5] [i_25] [i_25] [i_25]), (arr_28 [i_22] [0U] [i_25] [i_26])))))));
                                arr_74 [i_5] [i_5] [i_6] [i_22] [i_25] [i_26] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)6))));
                                var_43 = ((/* implicit */unsigned int) ((max((var_14), (((/* implicit */unsigned long long int) (unsigned char)127)))) >> (((min((((/* implicit */long long int) arr_45 [(signed char)8] [(short)1] [i_6] [2] [i_25] [i_26])), (-5812226430562909522LL))) + (5812226430562909559LL)))));
                                var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) min((((2769839887949403749ULL) >> (((4294967275U) - (4294967220U))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11024452987620054396ULL)) ? (min((((/* implicit */long long int) (unsigned short)41302)), (arr_62 [(signed char)7] [i_6] [10LL]))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))))));
                            }
                        } 
                    } 
                    arr_75 [i_5] [i_5] [(unsigned char)11] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) max((-2709169702783850653LL), (((/* implicit */long long int) arr_48 [i_5] [i_5] [i_6] [i_22] [11ULL]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-17)) > (((/* implicit */int) var_0)))))) : (2769839887949403749ULL))), (max((arr_15 [(unsigned char)8] [i_6] [0LL]), (((/* implicit */unsigned long long int) var_2))))));
                }
                for (long long int i_27 = 0; i_27 < 12; i_27 += 2) 
                {
                    arr_78 [10U] [i_5] &= ((/* implicit */signed char) ((unsigned int) arr_77 [i_5] [i_6]));
                    var_45 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 203090984006586175ULL)) ? (arr_56 [0ULL] [11U] [0] [i_27]) : (((/* implicit */int) arr_10 [i_27] [2] [(unsigned char)2] [i_27]))))) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [2U]))))))))));
                }
            }
        } 
    } 
    var_46 = ((/* implicit */short) var_3);
    var_47 &= ((/* implicit */short) var_9);
    var_48 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (((~(-5174415472308240490LL))) != (((/* implicit */long long int) min((var_5), (((/* implicit */int) (unsigned short)13)))))))) > (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) var_15))))))))));
}
