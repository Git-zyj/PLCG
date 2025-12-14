/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105245
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_20 -= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [i_2] [i_0 - 1])) ? (arr_2 [i_2] [i_0 - 1]) : (arr_2 [i_4] [i_0 - 1])))));
                                var_21 += ((/* implicit */unsigned long long int) (~((~(arr_6 [i_0] [i_0 - 1] [i_2])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            {
                                var_22 -= var_5;
                                arr_18 [i_0] [i_5] [i_2] [i_5] [i_0 - 1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min((-2147483643), (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_2] [i_5]))) : (((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_1] [i_0 - 1] [i_2] [(signed char)15] [i_0 - 1] [i_6])) ? ((+(var_4))) : (((/* implicit */unsigned long long int) min((arr_1 [16LL]), (((/* implicit */int) var_12)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_12)))) / ((-(var_0)))))) ? (((/* implicit */long long int) ((unsigned int) max((arr_31 [i_7] [i_7] [i_9] [i_10] [i_7]), (((/* implicit */short) arr_30 [i_10] [i_8] [i_9] [i_10] [i_10] [i_10])))))) : (max(((-(arr_29 [i_7] [i_8] [i_9] [i_10] [(signed char)0]))), (((/* implicit */long long int) arr_25 [i_7] [(_Bool)1])))))))));
                                arr_32 [i_7] [i_7] [i_10] [i_10] [(short)14] [i_7] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_20 [i_11])), ((unsigned short)0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))) : (((/* implicit */int) arr_30 [i_11] [i_11] [i_9] [i_10] [i_9] [i_10])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 23; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 3; i_13 < 22; i_13 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (-(arr_35 [i_7] [i_8] [i_13 - 1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_7] [i_7] [i_7] [i_7] [i_8])) ? (((/* implicit */int) arr_23 [i_7] [i_7] [i_9])) : (((/* implicit */int) var_9))))) ? (((((/* implicit */int) arr_23 [i_8] [i_9] [i_12])) >> (((var_3) - (137944378))))) : ((~(((/* implicit */int) arr_31 [(_Bool)1] [(_Bool)1] [i_9] [i_12] [i_13])))))) : (((/* implicit */int) max((arr_30 [i_13 - 3] [i_8] [i_13 - 3] [i_12] [i_13] [i_9]), (arr_30 [i_13 - 2] [i_8] [i_9] [i_12] [i_13 - 2] [i_13]))))));
                                var_25 = ((/* implicit */_Bool) arr_19 [i_7] [i_7]);
                                var_26 = ((/* implicit */_Bool) ((signed char) max((((/* implicit */int) var_9)), ((+(((/* implicit */int) (short)18771)))))));
                                var_27 = ((/* implicit */int) arr_21 [i_13 - 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_14 = 0; i_14 < 17; i_14 += 1) 
    {
        for (short i_15 = 0; i_15 < 17; i_15 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_16 = 3; i_16 < 16; i_16 += 4) 
                {
                    for (unsigned char i_17 = 0; i_17 < 17; i_17 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */int) arr_21 [i_16 - 1]);
                            arr_49 [i_16] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_21 [i_16 - 1])))) ? (((/* implicit */int) arr_36 [i_14] [i_15] [i_16] [i_15] [i_17])) : (max(((-2147483647 - 1)), (((/* implicit */int) arr_43 [i_16] [i_17] [i_16]))))))) * (arr_40 [i_14])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 2) 
                {
                    for (unsigned char i_19 = 0; i_19 < 17; i_19 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_28 [i_14] [i_15] [i_18] [i_19] [i_14]))))), (((((/* implicit */_Bool) arr_45 [i_14] [i_15] [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))) : (max((((/* implicit */unsigned int) arr_53 [i_14] [i_14] [i_18] [i_14] [i_14])), (arr_35 [i_14] [i_15] [i_19])))))));
                            arr_55 [i_18] [i_15] [i_15] [i_19] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_13 [i_18] [i_15] [(signed char)4] [i_18]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_20 = 0; i_20 < 17; i_20 += 3) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 17; i_21 += 4) 
                    {
                        {
                            var_30 &= ((/* implicit */unsigned char) arr_62 [i_21]);
                            var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_45 [i_14] [(short)8] [i_21])) ? (((/* implicit */int) arr_3 [(_Bool)1] [i_15])) : (arr_53 [i_15] [i_15] [i_15] [i_21] [i_20])))))) ? (((/* implicit */long long int) (-(arr_6 [i_15] [i_15] [i_15])))) : (arr_34 [i_20] [i_15] [i_20] [i_14])));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_22 = 0; i_22 < 17; i_22 += 1) 
                {
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        for (long long int i_24 = 0; i_24 < 17; i_24 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_44 [i_14] [i_15] [(short)0])) ? (2147483647) : (((/* implicit */int) (short)9954))))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_23] [i_15] [i_22] [i_24])))));
                                var_33 ^= ((/* implicit */_Bool) max(((~(((9223372036854775807LL) ^ (((/* implicit */long long int) var_15)))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_14] [i_23])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
