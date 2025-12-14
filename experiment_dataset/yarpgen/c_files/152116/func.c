/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152116
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((signed char) ((((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (18446744073709551615ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_3] [i_1])))))))));
                                arr_12 [i_4] [i_1 + 1] [6] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (2829332052U))))));
                                var_13 &= ((/* implicit */int) var_11);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_5 = 2; i_5 < 14; i_5 += 3) 
                {
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        {
                            arr_19 [i_0] [i_0] [i_1] [i_1] [i_5] [i_6] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_5 + 2])) : (((/* implicit */int) arr_4 [i_0] [i_5] [i_5 - 2] [i_6]))))) ? ((-(((/* implicit */int) var_1)))) : (2147483647))));
                            var_14 = max((((/* implicit */unsigned char) var_8)), (var_7));
                            arr_20 [i_0] [(unsigned char)13] = ((/* implicit */unsigned int) ((unsigned short) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) var_8)))), (((/* implicit */int) arr_9 [i_0] [i_1])))));
                            var_15 = ((/* implicit */_Bool) arr_16 [i_6] [i_5 + 3] [i_1] [i_1 - 1] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_7 = 3; i_7 < 11; i_7 += 3) 
    {
        for (int i_8 = 0; i_8 < 14; i_8 += 1) 
        {
            for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 13; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 14; i_11 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) -2147483623)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_10 - 2] [i_7 - 3] [i_7])) : (((((/* implicit */_Bool) (unsigned short)43555)) ? (((/* implicit */int) arr_29 [i_7] [i_8] [0LL] [i_9] [i_7] [i_7])) : (((/* implicit */int) (unsigned short)0)))))) : (((/* implicit */int) min((arr_17 [i_7 + 1] [i_8] [i_8] [i_8]), (arr_17 [i_7] [i_8] [i_9] [i_9]))))));
                                arr_33 [i_7] [i_8] [i_8] [i_9] [i_9] [i_11] = ((/* implicit */short) ((unsigned char) max((((/* implicit */unsigned char) arr_13 [i_9] [i_9])), (arr_1 [i_7 - 3]))));
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (arr_8 [i_7 - 1] [i_7 - 1] [i_10 + 1] [i_10 - 3]) : (((((/* implicit */_Bool) arr_8 [i_7 + 2] [i_7 + 2] [i_10 - 1] [i_10 - 1])) ? (arr_8 [i_7 + 2] [i_7 - 3] [i_10 - 1] [i_10 - 1]) : (((/* implicit */int) var_9))))));
                                var_18 = ((/* implicit */unsigned char) ((int) (+(((/* implicit */int) arr_16 [i_7 - 1] [i_8] [i_9] [i_10] [5])))));
                                arr_34 [i_7] [i_9] [i_7] [i_9] [i_11] [i_10] [i_8] = ((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_8] [i_9] [i_10] [i_11])), (((unsigned short) arr_8 [i_7 + 2] [i_7 - 1] [i_10 - 3] [i_10 - 2]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 14; i_13 += 1) 
                        {
                            {
                                arr_41 [i_7] [i_8] [i_7] [i_7] [i_13] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_7 + 1] [i_8] [i_7 + 1] [i_13])) ? (((/* implicit */int) arr_13 [i_7 - 3] [i_7])) : (((/* implicit */int) arr_9 [i_7 + 3] [i_7 + 3]))))) ? (arr_7 [i_7] [i_7 + 1] [i_7] [i_7]) : (((((/* implicit */_Bool) 36028797018963967ULL)) ? (((/* implicit */int) min(((short)-529), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) var_2))))));
                                var_19 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_5 [i_7] [i_7] [i_7] [i_7])) && (((/* implicit */_Bool) max((var_7), ((unsigned char)37))))))));
                                var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) (unsigned char)49)) : (((((/* implicit */_Bool) 5714623890741383947ULL)) ? (((/* implicit */int) (signed char)-127)) : (-1))))) / (max((((((/* implicit */_Bool) 5714623890741383967ULL)) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) arr_17 [i_7 + 2] [i_9] [i_12] [i_12])))), (-641954844)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 0; i_14 < 14; i_14 += 3) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_21 ^= ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
                                var_22 = ((/* implicit */unsigned int) (unsigned char)72);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_16 = 1; i_16 < 13; i_16 += 1) 
                    {
                        for (unsigned long long int i_17 = 3; i_17 < 13; i_17 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)33986))))) : (((/* implicit */int) (unsigned char)249))))) ? (arr_44 [i_7] [i_7] [i_7] [i_9] [i_9] [i_16] [i_17]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                                var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) var_4)))));
                                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)249)) ^ (((/* implicit */int) var_11)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_18 = 0; i_18 < 11; i_18 += 2) 
    {
        for (unsigned char i_19 = 0; i_19 < 11; i_19 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_20 = 0; i_20 < 11; i_20 += 1) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        for (unsigned short i_22 = 0; i_22 < 11; i_22 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) >= (((/* implicit */int) var_3)))) ? (((/* implicit */int) ((unsigned char) var_7))) : (max((((/* implicit */int) var_3)), (arr_7 [i_18] [i_20] [i_18] [i_20])))))), (((((/* implicit */_Bool) 6233645377424284146LL)) ? (((/* implicit */unsigned long long int) 6233645377424284146LL)) : (4420321010099474295ULL)))));
                                arr_69 [i_18] [i_18] [i_19] [i_20] [i_19] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_53 [i_21]))) || (((/* implicit */_Bool) (-((+(((/* implicit */int) var_4)))))))));
                                arr_70 [i_21] [i_19] [i_20] [i_21] [i_21] [i_22] [i_19] = ((/* implicit */unsigned short) 1226668400);
                                arr_71 [i_19] [i_19] [i_19] = ((/* implicit */signed char) (unsigned short)43569);
                                arr_72 [4] [i_19] [i_19] [i_19] = ((/* implicit */unsigned char) (signed char)124);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_23 = 0; i_23 < 11; i_23 += 3) 
                {
                    for (unsigned int i_24 = 0; i_24 < 11; i_24 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((int) var_8))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)768)))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_18] [i_19] [i_24] [i_18] [i_24])) ? (((/* implicit */int) ((unsigned short) (unsigned char)255))) : (((/* implicit */int) ((short) var_11)))))) + (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_16 [i_18] [i_18] [i_19] [i_23] [3ULL]))))), (arr_58 [i_18] [i_18] [i_23])))));
                            var_29 = ((/* implicit */unsigned char) arr_17 [i_18] [i_18] [i_18] [i_18]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_25 = 1; i_25 < 10; i_25 += 3) 
                {
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_8 [i_18] [i_18] [i_25] [i_26])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) arr_14 [i_18] [i_25 + 1] [i_25 + 1])))))) : (((((/* implicit */long long int) ((/* implicit */int) max((arr_30 [i_18] [i_19] [i_19] [i_18]), (((/* implicit */unsigned short) (_Bool)1)))))) ^ (arr_40 [i_18] [i_19] [i_19] [i_19] [i_25] [i_26] [i_19])))));
                            var_31 ^= ((/* implicit */unsigned char) 18446744073709551615ULL);
                            var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) var_10))));
                            var_33 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_19] [i_19] [i_19] [i_19])) ? (((/* implicit */int) ((unsigned short) var_0))) : (((/* implicit */int) ((unsigned short) var_5)))))), (min((((long long int) (unsigned short)53393)), (((/* implicit */long long int) var_6))))));
                            var_34 = ((/* implicit */unsigned char) 16920008624758523668ULL);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_27 = 2; i_27 < 8; i_27 += 4) 
                {
                    for (unsigned int i_28 = 0; i_28 < 11; i_28 += 1) 
                    {
                        {
                            arr_89 [i_18] [i_19] [i_27 + 1] [i_28] [i_18] [i_19] = ((/* implicit */_Bool) (unsigned char)127);
                            arr_90 [i_19] [i_19] [i_27] [i_27] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((signed char) arr_42 [i_18] [i_19] [i_18] [i_28]))), (max((((unsigned long long int) (unsigned short)43545)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_29 = 0; i_29 < 22; i_29 += 1) 
    {
        for (unsigned int i_30 = 0; i_30 < 22; i_30 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    for (unsigned char i_32 = 0; i_32 < 22; i_32 += 1) 
                    {
                        {
                            var_35 = var_0;
                            var_36 ^= var_2;
                            var_37 = ((/* implicit */unsigned short) arr_97 [i_29] [i_31] [i_32]);
                            arr_102 [i_32] [i_30] [i_31] [i_32] [i_32] = ((/* implicit */int) arr_97 [i_29] [i_30] [i_31]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_33 = 0; i_33 < 22; i_33 += 4) 
                {
                    for (int i_34 = 1; i_34 < 18; i_34 += 4) 
                    {
                        {
                            var_38 = ((/* implicit */signed char) arr_97 [i_34] [i_34] [i_34]);
                            arr_108 [i_33] [i_33] [i_33] [i_34] [i_30] = ((/* implicit */unsigned short) (unsigned char)125);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_35 = 0; i_35 < 22; i_35 += 1) 
                {
                    for (unsigned char i_36 = 0; i_36 < 22; i_36 += 1) 
                    {
                        {
                            var_39 += ((/* implicit */unsigned char) arr_98 [i_29] [i_29]);
                            var_40 = ((/* implicit */long long int) max((var_40), (9223372036854775807LL)));
                            var_41 = ((/* implicit */_Bool) var_8);
                            var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) (~(((/* implicit */int) ((arr_98 [i_29] [i_35]) <= (((/* implicit */long long int) ((/* implicit */int) var_6)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
