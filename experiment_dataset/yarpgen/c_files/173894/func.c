/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173894
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
    var_18 += (+((-(var_15))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_19 = (-((-(((/* implicit */int) (_Bool)1)))));
            /* LoopNest 2 */
            for (signed char i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */signed char) (unsigned short)65535);
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (_Bool)1))));
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_9 [0ULL] [4LL] [i_3] [i_3]))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                var_23 = ((/* implicit */short) (~(((/* implicit */int) (short)27359))));
                var_24 = ((/* implicit */short) ((arr_3 [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11)))));
            }
            var_25 = ((/* implicit */signed char) (-(arr_10 [i_0 + 1] [i_0])));
            var_26 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)16384)) / (((/* implicit */int) (short)-24944))));
        }
        for (int i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                arr_20 [i_5] [i_0] = ((/* implicit */short) ((unsigned int) (+(((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */int) (unsigned short)65535)) : (arr_17 [i_0] [i_0] [i_6]))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_7 = 3; i_7 < 9; i_7 += 2) 
                {
                    var_27 = ((/* implicit */unsigned int) ((signed char) -1932717212));
                    var_28 |= ((/* implicit */_Bool) ((unsigned short) arr_17 [i_5] [i_0 + 2] [i_0 - 1]));
                    var_29 = ((/* implicit */_Bool) ((arr_17 [i_0] [3LL] [i_0]) / (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned short)65517)) : (arr_18 [i_0 + 2] [i_0] [i_0])))));
                }
                for (int i_8 = 1; i_8 < 9; i_8 += 2) 
                {
                    var_30 = max((((int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)65521))))), ((~(((((/* implicit */_Bool) (short)-10008)) ? (-1322401216) : (((/* implicit */int) arr_14 [i_0] [i_5])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 3; i_9 < 9; i_9 += 2) 
                    {
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_13 [i_0 - 3] [i_0] [i_0 - 3] [i_0 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11))) : (max((((/* implicit */unsigned long long int) arr_13 [i_0 + 1] [i_0] [i_0 - 2] [i_0 - 1])), (arr_2 [i_0] [i_8 - 1])))));
                        var_32 = ((/* implicit */_Bool) min((var_32), ((!(((/* implicit */_Bool) (unsigned short)65525))))));
                    }
                }
                var_33 = ((/* implicit */short) ((((/* implicit */int) ((((arr_29 [i_0 - 2] [i_0 - 2] [(unsigned char)5] [i_0 - 3] [i_0]) ? (arr_8 [i_0] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4))))) <= (((/* implicit */unsigned int) 2080866825))))) <= (((((/* implicit */_Bool) ((unsigned long long int) 627157856))) ? (((2080866825) / (((/* implicit */int) (unsigned short)11)))) : (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)65511))))))));
                var_34 = ((/* implicit */int) 2351595903U);
            }
            var_35 += ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65505))) : (256U)))), (13390474736640680191ULL)))) || (((/* implicit */_Bool) ((short) (-(-855000746)))))));
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            for (unsigned long long int i_11 = 2; i_11 < 9; i_11 += 2) 
            {
                {
                    var_36 = (-(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65517))))) ? (((((/* implicit */_Bool) (unsigned short)2)) ? (arr_4 [i_0]) : (arr_23 [1] [i_10] [i_0] [i_0] [i_0]))) : (((/* implicit */int) arr_29 [i_0] [i_0 + 2] [i_10] [i_11 + 1] [i_0])))));
                    var_37 = ((/* implicit */unsigned short) (-(((unsigned long long int) (~(((/* implicit */int) (unsigned short)65525)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 2; i_12 < 9; i_12 += 3) 
                    {
                        for (long long int i_13 = 0; i_13 < 10; i_13 += 4) 
                        {
                            {
                                var_38 -= (+(((/* implicit */int) (unsigned short)22)));
                                var_39 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)65522)))) ? (arr_34 [i_0] [i_0] [i_0 - 3] [(short)7]) : (((/* implicit */int) ((arr_8 [i_0] [5] [5] [5]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_0 + 1] [i_10] [i_10] [i_10]))))))))), (((((/* implicit */_Bool) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_26 [(unsigned short)5] [i_10] [7U] [i_0] [7U] [i_13]))))) ? (((((/* implicit */_Bool) arr_24 [i_0] [i_0 - 1] [i_0] [i_0])) ? (317450493732598027ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_0 + 2] [i_0 - 2] [i_0 + 1] [i_0 - 1])))))));
                                arr_40 [2] [2] [5LL] [5LL] [i_13] [i_0] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)30)) && (((/* implicit */_Bool) 2147483648U)))));
                                var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((18129293579976953618ULL) < (((/* implicit */unsigned long long int) 1450810994418448615LL))))), (arr_10 [i_12 - 2] [i_0])))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)65524)) ? (((/* implicit */long long int) arr_1 [i_0])) : (arr_21 [i_0] [i_10] [i_0] [i_0] [(_Bool)0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) 154652887U)) ? (((/* implicit */int) (unsigned short)62805)) : (((/* implicit */int) arr_25 [i_11] [i_11]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 10; i_14 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_15 = 1; i_15 < 9; i_15 += 1) 
        {
            for (long long int i_16 = 1; i_16 < 7; i_16 += 4) 
            {
                for (short i_17 = 0; i_17 < 10; i_17 += 3) 
                {
                    {
                        var_41 = ((/* implicit */long long int) var_15);
                        var_42 = ((8880317417748551692LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_15] [i_15 + 1] [i_15 - 1]))));
                        arr_54 [i_15] [i_17] [i_16] [i_16 + 2] [i_14] [i_15] = ((((/* implicit */_Bool) arr_31 [i_15] [i_15 - 1] [i_15 + 1])) ? (arr_31 [i_17] [i_16 + 3] [i_14]) : (-1500431230));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 3) 
                        {
                            var_43 = ((/* implicit */long long int) ((_Bool) arr_35 [i_16 + 1] [i_15 + 1] [i_15 + 1] [4U]));
                            var_44 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_41 [i_15] [i_15 - 1]))));
                        }
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            arr_60 [(signed char)0] [(signed char)0] [i_16 + 3] [i_16 - 1] [i_14] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_14] [i_16 + 2] [i_14] [i_14] [i_15] [i_15])) ? (((/* implicit */int) arr_25 [i_16 + 3] [i_15 + 1])) : (((((/* implicit */_Bool) 16214225917938309229ULL)) ? (((/* implicit */int) (unsigned short)19)) : (((/* implicit */int) (_Bool)0))))));
                            var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_16] [i_15] [i_16] [i_16 - 1])) ? (((/* implicit */int) (signed char)-61)) : (arr_34 [i_16 + 3] [i_15] [i_16 + 3] [i_16 - 1])));
                        }
                        for (signed char i_20 = 0; i_20 < 10; i_20 += 4) 
                        {
                            var_46 = (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)140)));
                            var_47 |= ((/* implicit */long long int) ((((((/* implicit */int) (short)-14418)) + (2147483647))) >> (((((/* implicit */int) arr_35 [i_15 + 1] [i_15] [i_16 + 2] [i_16 + 1])) - (92)))));
                            var_48 = ((/* implicit */unsigned short) ((unsigned int) 3151164407U));
                        }
                        for (unsigned char i_21 = 3; i_21 < 8; i_21 += 4) 
                        {
                            var_49 -= ((/* implicit */long long int) (+(4251560437U)));
                            arr_65 [i_14] [i_15] [(signed char)6] [i_15] = ((/* implicit */unsigned int) (_Bool)0);
                            arr_66 [i_15] [i_15 - 1] [i_16 + 2] [i_15] [i_21] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1200227807435654272ULL)) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) (unsigned short)65530))));
                            var_50 = ((/* implicit */_Bool) arr_3 [i_15]);
                        }
                        var_51 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [0U] [i_16 + 2] [i_14] [(_Bool)1] [i_16 + 1])) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65517))))) : (((long long int) 1010500473))));
                    }
                } 
            } 
        } 
        var_52 = ((((/* implicit */_Bool) 274861129728ULL)) || (((/* implicit */_Bool) (unsigned short)27487)));
    }
    var_53 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)7)) ? (18129293579976953589ULL) : (((((unsigned long long int) (_Bool)0)) << (((/* implicit */int) (unsigned short)28))))));
}
