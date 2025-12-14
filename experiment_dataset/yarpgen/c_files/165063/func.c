/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165063
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 1]));
        var_21 -= ((signed char) arr_3 [i_0] [i_0 - 1]);
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_22 -= ((/* implicit */signed char) 5735295468601725200LL);
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (unsigned int i_3 = 2; i_3 < 20; i_3 += 1) 
                {
                    {
                        arr_14 [i_3] [i_2] = ((/* implicit */int) (~(2351920866U)));
                        var_23 = ((/* implicit */int) max((var_23), ((~(-1)))));
                        var_24 = ((/* implicit */short) (~(arr_5 [i_0 - 1])));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_3] [i_0] = ((/* implicit */long long int) 4132697210U);
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) 1943046429U))) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3] [i_3])))));
                            arr_18 [i_0] [i_0] = ((/* implicit */int) var_4);
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */int) arr_12 [i_0 - 1] [i_1] [2LL] [i_3 + 1] [i_4] [4LL])) : (((/* implicit */int) (unsigned short)14120))));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                var_27 |= ((long long int) arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 2]);
                var_28 = ((/* implicit */_Bool) ((unsigned char) arr_0 [i_0]));
                var_29 = ((/* implicit */unsigned int) arr_2 [i_0]);
                var_30 = ((/* implicit */_Bool) (unsigned short)14120);
            }
        }
        for (long long int i_6 = 1; i_6 < 19; i_6 += 2) 
        {
            arr_25 [i_0] [i_0] |= ((/* implicit */unsigned int) (_Bool)1);
            var_31 = ((/* implicit */long long int) ((signed char) arr_11 [i_6 + 2] [i_0 - 2]));
            var_32 = ((/* implicit */int) (-(arr_0 [i_0 + 1])));
        }
        for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_8 = 0; i_8 < 21; i_8 += 3) 
            {
                var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) (unsigned short)28521))));
                var_34 = ((/* implicit */signed char) var_2);
                arr_31 [i_8] = ((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_0 + 1] [i_0] [i_0] [i_0 - 2])) ? (((/* implicit */int) arr_27 [i_0 - 1] [i_0 - 1] [i_7])) : (((/* implicit */int) ((unsigned short) arr_2 [i_0]))));
            }
            /* LoopSeq 1 */
            for (short i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [13LL] [i_7] [i_0])) && (((/* implicit */_Bool) var_15))));
                var_36 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_20 [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_0 - 2]))));
                var_37 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0 - 2] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 1]))));
                var_38 = ((/* implicit */long long int) (~(((/* implicit */int) var_12))));
            }
        }
    }
    var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (short)-13573)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)29))) : (-28LL))) : (((/* implicit */long long int) ((/* implicit */int) max((var_15), (var_17)))))));
    /* LoopNest 2 */
    for (long long int i_10 = 0; i_10 < 11; i_10 += 2) 
    {
        for (long long int i_11 = 0; i_11 < 11; i_11 += 1) 
        {
            {
                var_40 = ((/* implicit */unsigned char) arr_20 [i_10] [i_11] [i_11] [i_11]);
                /* LoopNest 2 */
                for (signed char i_12 = 1; i_12 < 10; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        {
                            var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_6 [i_12 + 1] [i_12 - 1] [i_12 + 1]) + (arr_6 [i_12 + 1] [i_12 - 1] [i_12 + 1])))) ? (((((/* implicit */_Bool) var_8)) ? (arr_6 [i_12 + 1] [i_12 - 1] [i_12 + 1]) : (arr_6 [i_12 + 1] [i_12 - 1] [i_12 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) -209735255))))));
                            arr_47 [i_10] [i_11] [i_10] [i_13] = var_2;
                            arr_48 [i_12] = ((/* implicit */unsigned short) arr_9 [i_10] [i_10]);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    arr_51 [i_10] [i_14] = ((/* implicit */unsigned int) ((int) arr_40 [6U] [i_11]));
                    arr_52 [i_14] [i_11] = ((/* implicit */unsigned char) 538364397);
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        for (long long int i_16 = 1; i_16 < 10; i_16 += 2) 
                        {
                            {
                                arr_58 [i_16] [i_15] [i_10] [i_11] [i_10] = arr_0 [i_10];
                                var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_10] [i_10])) ? (((/* implicit */int) arr_12 [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16 + 1] [i_16] [i_16 + 1])) : (arr_16 [i_10] [(signed char)4] [i_14] [6LL] [i_16 - 1])));
                            }
                        } 
                    } 
                }
                var_43 = ((/* implicit */unsigned char) max((((unsigned int) 209735255)), ((+(3650950801U)))));
                /* LoopSeq 2 */
                for (long long int i_17 = 0; i_17 < 11; i_17 += 4) 
                {
                    var_44 = min((((/* implicit */int) min(((!(((/* implicit */_Bool) (short)(-32767 - 1))))), ((!(((/* implicit */_Bool) arr_37 [i_10]))))))), (((((/* implicit */int) max((((/* implicit */unsigned short) var_1)), ((unsigned short)0)))) | (((int) (short)-1)))));
                    var_45 = ((/* implicit */short) (!(((/* implicit */_Bool) 2968020575U))));
                    /* LoopSeq 1 */
                    for (unsigned int i_18 = 0; i_18 < 11; i_18 += 1) 
                    {
                        var_46 = ((/* implicit */unsigned int) max((var_46), (((/* implicit */unsigned int) min((arr_11 [13] [(signed char)3]), (((/* implicit */int) ((signed char) ((9223372036854775799LL) / (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_10] [i_11] [i_17]))))))))))));
                        arr_65 [i_10] = ((/* implicit */int) min((((/* implicit */unsigned int) var_6)), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) -209735255)) : (min((((/* implicit */unsigned int) (short)-27)), (2147467264U)))))));
                        var_47 = ((/* implicit */long long int) ((((((long long int) arr_29 [0] [i_11])) >= (arr_4 [i_11]))) ? (arr_19 [i_18] [i_17] [i_11] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(short)19] [(short)19])))));
                        var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_60 [(signed char)7] [(signed char)8] [i_18]))))) ? (((/* implicit */int) ((signed char) 1943046415U))) : (((/* implicit */int) arr_60 [i_10] [i_10] [i_10]))));
                        var_49 = arr_0 [i_17];
                    }
                    var_50 = ((signed char) arr_40 [i_10] [i_10]);
                }
                for (signed char i_19 = 3; i_19 < 8; i_19 += 3) 
                {
                    var_51 = ((/* implicit */signed char) ((((int) max((-4937197407507769835LL), (((/* implicit */long long int) (short)1))))) >> (((min(((~(70334384439296LL))), (((/* implicit */long long int) max(((short)-7449), (((/* implicit */short) arr_21 [i_19] [i_11] [i_10] [i_10]))))))) + (70334384439312LL)))));
                    var_52 = ((/* implicit */int) min((min(((~(arr_4 [i_10]))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (var_8)))))), (((/* implicit */long long int) arr_53 [i_19]))));
                }
            }
        } 
    } 
}
