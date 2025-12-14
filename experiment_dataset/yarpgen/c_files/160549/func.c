/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160549
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
    var_20 = ((/* implicit */unsigned short) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) var_7);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1]))));
    }
    for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 12; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 2; i_4 < 13; i_4 += 3) 
                    {
                        for (short i_5 = 0; i_5 < 14; i_5 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) max((max((18446744073709551608ULL), (((/* implicit */unsigned long long int) (short)-10257)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-108)))))));
                                arr_16 [i_1] [i_1] = ((/* implicit */long long int) (-2147483647 - 1));
                                var_23 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [12] [i_4 - 1] [i_2 + 1] [i_5]))))) + (arr_2 [i_3]));
                                var_24 = ((unsigned int) arr_6 [0] [i_2] [i_1]);
                            }
                        } 
                    } 
                    var_25 = ((((/* implicit */_Bool) arr_12 [(signed char)1] [i_2 + 1] [i_2] [i_1])) ? (arr_10 [i_1] [i_1] [i_2 + 2] [(unsigned char)12]) : (arr_5 [i_1]));
                }
            } 
        } 
        arr_17 [i_1] [i_1] = max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)127))))), (((min((((/* implicit */unsigned long long int) var_1)), (var_10))) & (((/* implicit */unsigned long long int) arr_9 [i_1])))));
        /* LoopNest 2 */
        for (signed char i_6 = 4; i_6 < 12; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 4) 
            {
                {
                    var_26 = (!(((((/* implicit */_Bool) min((((/* implicit */int) arr_6 [13ULL] [i_6] [i_1])), (arr_14 [i_7] [i_7] [i_1] [i_7] [i_1] [4LL] [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_7])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
                    {
                        for (short i_9 = 1; i_9 < 11; i_9 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((short) ((((/* implicit */unsigned long long int) (+(1617469404U)))) - (arr_19 [i_6 - 3] [i_6 - 3])))))));
                                var_28 -= ((/* implicit */unsigned int) (-(18446744073709551608ULL)));
                            }
                        } 
                    } 
                    var_29 *= ((/* implicit */short) arr_6 [8U] [i_6 - 3] [8U]);
                    var_30 ^= ((/* implicit */short) arr_15 [6LL]);
                }
            } 
        } 
    }
    for (unsigned long long int i_10 = 3; i_10 < 12; i_10 += 1) 
    {
        var_31 = ((/* implicit */int) var_3);
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 1; i_11 < 12; i_11 += 4) 
        {
            for (int i_12 = 0; i_12 < 13; i_12 += 4) 
            {
                {
                    var_32 = (i_11 % 2 == zero) ? (((/* implicit */unsigned char) (~(((long long int) ((((/* implicit */int) arr_22 [i_10] [i_11 - 1] [i_11] [i_10])) >> (((arr_5 [i_11]) + (1844155737529984808LL))))))))) : (((/* implicit */unsigned char) (~(((long long int) ((((/* implicit */int) arr_22 [i_10] [i_11 - 1] [i_11] [i_10])) >> (((((arr_5 [i_11]) + (1844155737529984808LL))) + (4204545854651207115LL)))))))));
                    /* LoopNest 2 */
                    for (long long int i_13 = 0; i_13 < 13; i_13 += 4) 
                    {
                        for (int i_14 = 0; i_14 < 13; i_14 += 4) 
                        {
                            {
                                arr_42 [i_11] = ((/* implicit */short) max((((int) ((((/* implicit */_Bool) 1617469404U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_11]))) : (arr_29 [i_10])))), (((((/* implicit */_Bool) arr_30 [i_11 + 1])) ? (((/* implicit */int) arr_30 [i_10 - 1])) : (((/* implicit */int) arr_30 [i_11 + 1]))))));
                                arr_43 [i_10] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (arr_2 [i_12]))), (((((/* implicit */_Bool) arr_40 [i_14] [i_11] [i_12] [i_11] [i_10])) ? (((/* implicit */int) arr_7 [i_11] [i_12] [i_11])) : (((/* implicit */int) var_9))))))) ? (arr_4 [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_15 [i_11])), ((unsigned short)57072)))))));
                                arr_44 [i_14] [i_11] [i_10 - 3] [i_11] [i_10 - 3] = ((/* implicit */short) (+(((/* implicit */int) arr_31 [i_10]))));
                                var_33 += ((/* implicit */unsigned long long int) (short)10257);
                            }
                        } 
                    } 
                    arr_45 [i_11] = max((((((/* implicit */int) arr_18 [i_10] [i_11])) | (arr_37 [i_10] [i_10] [i_11] [i_11] [i_12] [i_11]))), (arr_1 [i_10 - 2]));
                }
            } 
        } 
        arr_46 [1ULL] = ((/* implicit */unsigned char) (-(max((((/* implicit */int) arr_11 [i_10] [i_10] [i_10])), (arr_40 [i_10 - 3] [12] [i_10] [12] [i_10])))));
    }
    /* LoopNest 2 */
    for (unsigned int i_15 = 2; i_15 < 15; i_15 += 1) 
    {
        for (unsigned char i_16 = 2; i_16 < 13; i_16 += 3) 
        {
            {
                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(3769941936U)))) ? (((/* implicit */int) arr_0 [i_15] [i_16 - 1])) : (((((/* implicit */_Bool) (unsigned char)235)) ? (arr_1 [i_16]) : (((/* implicit */int) (unsigned char)178))))));
                var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((unsigned char) 1111026318713573915ULL)))) || (((/* implicit */_Bool) ((unsigned int) (unsigned short)26914)))));
                arr_52 [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) arr_51 [i_15]);
                arr_53 [(unsigned char)14] [i_15 + 1] [i_15] = ((/* implicit */unsigned long long int) (~(((unsigned int) (short)21126))));
            }
        } 
    } 
}
