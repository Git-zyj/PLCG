/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122248
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */_Bool) min((var_12), (((((/* implicit */_Bool) (unsigned char)7)) && (((/* implicit */_Bool) (short)32767))))));
                            var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) var_1))));
                            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_3] [6U] [i_1]))));
                            var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((short) var_7)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_18 [(short)2] [i_1] [(unsigned char)10] [i_5] &= ((/* implicit */_Bool) var_9);
                            var_16 = ((/* implicit */short) ((unsigned long long int) (_Bool)1));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_6 = 3; i_6 < 9; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (signed char i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_9 = 2; i_9 < 9; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            {
                                arr_33 [i_6] [i_7] [i_7] [i_7] [i_7] [(unsigned char)5] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? ((+(var_10))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_5 [i_6] [i_7])), (4199870315U))))))) ? (((((/* implicit */_Bool) (signed char)8)) ? (18446744073709551613ULL) : (4929868489386359567ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
                                arr_34 [(_Bool)0] [i_7] [i_8] [i_9 - 2] [i_10] |= ((/* implicit */unsigned int) 13516875584323192064ULL);
                                var_17 *= ((/* implicit */_Bool) ((short) max((arr_23 [i_8]), (((/* implicit */unsigned long long int) arr_14 [i_6 - 3] [i_9] [i_9 + 1])))));
                            }
                        } 
                    } 
                    var_18 = ((((/* implicit */_Bool) (+((+(((/* implicit */int) (_Bool)1))))))) ? (4929868489386359567ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_19 [i_8]) ? (4929868489386359567ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_6]))))))))));
                    /* LoopNest 2 */
                    for (short i_11 = 1; i_11 < 9; i_11 += 2) 
                    {
                        for (signed char i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            {
                                var_19 = var_11;
                                var_20 -= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */int) (unsigned char)4)) : (((arr_32 [i_6] [i_7] [(short)0] [i_6] [i_11] [i_8]) ? (((/* implicit */int) arr_26 [i_6] [i_12])) : (((/* implicit */int) (_Bool)1)))))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)28)) >> (((((/* implicit */int) (unsigned char)234)) - (224)))));
                                var_22 = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) (unsigned char)15))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_13 = 3; i_13 < 9; i_13 += 4) 
    {
        for (unsigned char i_14 = 0; i_14 < 12; i_14 += 2) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 12; i_16 += 4) 
                    {
                        for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) 25ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_13] [i_15]))) : (var_0))))) << (min((((/* implicit */unsigned int) arr_2 [i_13] [i_14])), (max((((/* implicit */unsigned int) var_1)), (var_4))))))))));
                                var_24 = ((/* implicit */_Bool) var_6);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_18 = 0; i_18 < 12; i_18 += 2) 
                    {
                        for (short i_19 = 0; i_19 < 12; i_19 += 1) 
                        {
                            {
                                arr_58 [i_13] [i_13] [i_15] [(unsigned char)11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */int) arr_14 [i_13] [i_13] [3ULL])) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_50 [i_13] [(signed char)10])) >> (((/* implicit */int) arr_54 [i_18] [i_14] [i_13] [i_18]))))) || (((/* implicit */_Bool) ((unsigned int) (_Bool)1))))))));
                                var_25 = (_Bool)1;
                                var_26 ^= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((short) (_Bool)1)))))) + (((/* implicit */int) ((signed char) max(((unsigned char)247), (((/* implicit */unsigned char) var_8))))))));
                                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) 1334828025651278538ULL))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_20 = 0; i_20 < 12; i_20 += 2) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 12; i_21 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */short) ((arr_41 [i_13]) ? (((/* implicit */int) ((unsigned char) arr_14 [i_13 - 3] [i_13] [i_13 - 2]))) : (((((/* implicit */int) arr_14 [i_13 - 3] [i_13] [i_13 - 3])) - (((/* implicit */int) arr_41 [i_13]))))));
                                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (6957240338847849092ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
