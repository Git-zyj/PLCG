/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137078
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((unsigned int) (unsigned char)112));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 12; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2 + 2] [i_4] &= ((/* implicit */signed char) (unsigned char)167);
                                var_21 = ((/* implicit */unsigned int) ((((unsigned int) arr_3 [i_0])) < (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_3 [i_0]))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        for (int i_7 = 1; i_7 < 12; i_7 += 1) 
                        {
                            {
                                arr_26 [i_0] [i_1] [i_5] [i_6] [i_0] = ((/* implicit */signed char) ((_Bool) min(((+(arr_13 [i_7 + 1] [i_0] [i_5] [i_1] [i_0] [i_0]))), (min((arr_13 [i_0] [i_1] [i_5] [(unsigned char)1] [i_0] [i_7]), (((/* implicit */long long int) (_Bool)1)))))));
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) arr_18 [i_5]))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_0] [i_1] [i_1] [2LL] [i_0])))))) % (((var_17) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))) : (var_11))))), (((/* implicit */unsigned long long int) min((arr_22 [i_0] [i_1] [i_1] [i_5] [i_5]), (((/* implicit */unsigned int) ((var_2) & (((/* implicit */int) (signed char)-1))))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 2; i_8 < 12; i_8 += 1) 
                    {
                        var_24 = min((4294967295U), (((((/* implicit */_Bool) ((13144496148803063972ULL) >> (((var_6) - (994989253U)))))) ? (((((/* implicit */_Bool) (signed char)-50)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_0] [i_0])))))));
                        var_25 += ((/* implicit */unsigned long long int) min((arr_5 [i_0] [i_1]), (((/* implicit */signed char) ((((/* implicit */int) var_15)) != (((/* implicit */int) min((arr_1 [i_1] [i_8]), (((/* implicit */short) arr_24 [i_5] [i_5] [i_5]))))))))));
                        arr_29 [i_0] [i_1] [3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)6907)) + (((/* implicit */int) var_19))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1])) ? (var_2) : (((/* implicit */int) arr_24 [i_0] [i_0] [i_0]))))) : (arr_23 [i_0] [i_1] [i_5] [i_8] [i_8] [i_8] [i_8])))) & (((arr_8 [i_8 - 1] [i_8 - 1] [i_8 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_5] [i_8] [i_8 - 1])))))));
                    }
                }
                /* vectorizable */
                for (short i_9 = 0; i_9 < 13; i_9 += 1) 
                {
                    var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) var_13)))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        for (long long int i_11 = 3; i_11 < 10; i_11 += 1) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned int) ((-8323477219213897539LL) > ((+(arr_13 [i_0] [i_1] [i_1] [i_9] [i_0] [i_11 + 2])))));
                                arr_36 [i_10] [i_10] [i_10] [i_10] [i_0] [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_10]))) : (0U))) != (((/* implicit */unsigned int) ((/* implicit */int) var_18)))));
                            }
                        } 
                    } 
                    var_28 += ((/* implicit */long long int) var_5);
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (int i_13 = 3; i_13 < 9; i_13 += 2) 
                        {
                            {
                                arr_41 [i_0] [i_1] [i_9] [i_12] [i_0] = ((/* implicit */int) (~(arr_13 [i_13] [i_13] [i_0] [i_12] [i_0] [i_13])));
                                arr_42 [i_0] [i_1] [i_9] [i_12] [i_0] = ((/* implicit */long long int) var_15);
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) * (((/* implicit */int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) (signed char)15)))))));
                }
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                {
                    arr_45 [i_0] [i_14] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 5U)) ? (((((/* implicit */_Bool) 9U)) ? (arr_6 [i_0] [i_0] [i_14]) : (((/* implicit */long long int) ((((/* implicit */int) var_15)) * (((/* implicit */int) var_17))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_1] [i_14])))));
                    var_30 -= ((/* implicit */unsigned int) var_15);
                    /* LoopNest 2 */
                    for (long long int i_15 = 0; i_15 < 13; i_15 += 1) 
                    {
                        for (signed char i_16 = 0; i_16 < 13; i_16 += 4) 
                        {
                            {
                                arr_52 [i_0] [i_0] [i_14 + 1] [i_15] [i_16] = (-(-8655550309118839072LL));
                                var_31 = var_7;
                            }
                        } 
                    } 
                }
                for (long long int i_17 = 3; i_17 < 11; i_17 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 0; i_18 < 13; i_18 += 1) 
                    {
                        for (unsigned int i_19 = 3; i_19 < 11; i_19 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */int) (-((-(((((/* implicit */_Bool) arr_38 [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)32767))) : (arr_13 [i_0] [i_1] [i_17 + 2] [(_Bool)0] [i_0] [i_19 - 1])))))));
                                var_33 = ((/* implicit */_Bool) min((((arr_27 [i_0] [i_17 + 2] [i_18] [i_19 + 1]) / ((-(var_16))))), (((/* implicit */int) var_3))));
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */_Bool) var_2);
                    arr_61 [i_0] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) var_5))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_20 = 0; i_20 < 13; i_20 += 4) 
                {
                    for (int i_21 = 0; i_21 < 13; i_21 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_0] [i_20] [i_21])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_39 [i_0] [(short)5] [i_20] [i_20] [i_21]))))) ? (((/* implicit */int) ((unsigned char) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */int) min((arr_39 [i_21] [(unsigned char)12] [i_21] [i_21] [9U]), (arr_39 [i_0] [(signed char)1] [i_20] [i_21] [i_21]))))));
                            var_36 = ((/* implicit */long long int) max((var_36), (((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) 3396312819U)) >= (var_1))))))) ? ((+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_1))))) : (((/* implicit */long long int) (-(var_6))))))));
                            var_37 = 268435456U;
                            arr_69 [i_0] [i_1] [i_20] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) max((max((((/* implicit */int) var_10)), (var_16))), (((/* implicit */int) arr_47 [i_0] [i_20] [i_20] [i_20] [i_1] [i_0]))))) & (((((((/* implicit */_Bool) 0ULL)) ? (3303646975U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) >> (((268435434U) - (268435407U)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_38 ^= ((/* implicit */signed char) var_19);
    var_39 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)52597))));
    var_40 += ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_3))))) + ((+(0ULL))))), (((/* implicit */unsigned long long int) ((short) ((int) 4194303))))));
}
