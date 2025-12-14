/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107415
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_13 -= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) var_7)) & (((/* implicit */int) arr_9 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])))));
                                var_14 = ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_1] [i_3])), (18446744073709551606ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_8 [i_0] [(_Bool)1] [2U] [i_2] [i_3] [i_2])))))) : (18446744073709551595ULL)));
                                arr_11 [(short)5] [(_Bool)1] [(unsigned short)6] [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((((/* implicit */int) (short)-25)) ^ (((/* implicit */int) (short)-25)));
                                arr_12 [i_0] [(unsigned short)11] [i_2 - 1] [i_3] [i_4] = ((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_2] [i_3] [i_4]))));
                                var_15 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) -2673427388234777885LL)) & (((((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])) - (9ULL))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1]))))), (arr_0 [i_0])))) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
                    var_16 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_10)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_5)) : (arr_10 [i_0] [i_0] [i_2] [i_0] [i_0] [i_1] [i_1])))))));
                    arr_14 [i_0] [i_0] = ((/* implicit */_Bool) var_3);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)63817));
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) var_8))));
    /* LoopNest 2 */
    for (unsigned short i_5 = 3; i_5 < 16; i_5 += 2) 
    {
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            {
                arr_20 [i_5] [i_6] = ((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */long long int) min((((/* implicit */short) arr_3 [i_5 - 2] [i_6] [i_5 + 2])), (arr_7 [i_5] [i_5] [i_5] [i_5] [i_6])))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_1 [i_5 - 3] [i_6])) : (1591623191517967897LL))))));
                arr_21 [i_6] [i_5] [i_5] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)1718)), (-1808869804)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_5] [i_6])) || (((/* implicit */_Bool) arr_2 [i_5] [18]))))) : (((((/* implicit */int) (short)-29631)) - (((/* implicit */int) arr_9 [i_6] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5] [i_5 + 1] [i_5 + 1])))))));
                /* LoopSeq 2 */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_8 = 1; i_8 < 15; i_8 += 2) 
                    {
                        for (int i_9 = 1; i_9 < 16; i_9 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) arr_4 [i_5 + 2] [i_8 + 3] [i_5 + 2] [18LL]);
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((arr_24 [i_5] [i_8] [10]) < (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5] [i_5] [(unsigned char)18] [18] [16U]))))))));
                            }
                        } 
                    } 
                    var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 1808869808)) ? (((unsigned long long int) (unsigned short)63817)) : (((/* implicit */unsigned long long int) 1319199561))));
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        for (long long int i_11 = 0; i_11 < 18; i_11 += 1) 
                        {
                            {
                                arr_36 [i_5] [i_5 - 2] [i_6] [i_5] [i_5] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (short)-9487)), (arr_23 [i_11] [(_Bool)1] [i_5]))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_5] [i_5])))))) ? (-1877296018) : (((/* implicit */int) var_12))));
                                arr_37 [i_5] = ((/* implicit */long long int) ((((((/* implicit */int) arr_15 [i_7 + 1])) - (arr_0 [i_7 + 1]))) != (((((/* implicit */_Bool) (~(arr_32 [i_11] [i_5] [i_5] [i_5])))) ? (((/* implicit */int) min((((/* implicit */short) arr_27 [i_5] [i_6] [i_5 - 3] [i_10] [i_5] [i_10])), ((short)4310)))) : (arr_31 [i_5] [i_7] [i_5] [i_5])))));
                                var_22 &= ((/* implicit */_Bool) ((long long int) (unsigned short)0));
                            }
                        } 
                    } 
                    var_23 += ((/* implicit */short) min((((/* implicit */long long int) ((min((arr_18 [i_5] [i_6]), (arr_18 [i_5 - 3] [i_5 - 3]))) != (((/* implicit */unsigned long long int) var_8))))), ((~(arr_32 [i_5 - 3] [(_Bool)1] [i_5 - 3] [i_5 - 3])))));
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 3; i_13 < 15; i_13 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_26 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5] [i_5 + 2] [i_12]))));
                                arr_42 [i_5] [i_6] [i_5] [i_5] [i_5] [i_13 - 3] = ((/* implicit */signed char) arr_2 [i_5] [8U]);
                                var_25 = ((/* implicit */short) ((unsigned short) 0ULL));
                                arr_43 [i_5 + 1] [i_6] [i_7] [i_5] = ((/* implicit */unsigned short) arr_19 [i_5]);
                                var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) arr_27 [i_5 + 2] [i_13 - 1] [i_7] [i_7 + 1] [i_13 - 1] [i_5 + 2])))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_14 = 0; i_14 < 18; i_14 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_15 = 0; i_15 < 18; i_15 += 1) 
                    {
                        var_27 = ((/* implicit */int) arr_33 [i_5] [i_5 + 2]);
                        arr_51 [i_5] [6] [i_14] [i_15] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_44 [i_6] [i_14] [i_15])) * (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_8 [i_5] [i_6] [i_6] [i_5] [i_14] [i_5 - 3])) : (((/* implicit */int) ((unsigned char) var_4)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_16 = 0; i_16 < 18; i_16 += 3) 
                        {
                            var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_53 [i_5] [i_5] [i_5] [i_5] [i_5 + 1] [(short)11])))) && (((/* implicit */_Bool) arr_27 [i_5] [i_5] [i_5 + 2] [i_5] [i_5 + 2] [i_5 - 1]))));
                            arr_55 [i_5] [i_5] [i_15] [i_16] = ((/* implicit */unsigned char) (+(var_5)));
                            var_29 -= ((/* implicit */short) (~(var_5)));
                        }
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 18; i_17 += 2) 
                    {
                        var_30 = ((/* implicit */short) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)2), ((unsigned short)63817))))) / (((arr_24 [i_6] [i_14] [i_5]) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
                        arr_58 [i_5] [i_6] [i_14] [i_17] = ((/* implicit */unsigned int) max((max((arr_17 [i_5] [i_5] [i_6]), (((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_6] [i_5] [i_5] [i_6]))) : (arr_4 [i_17] [i_14] [i_6] [i_5]))))), (((/* implicit */unsigned long long int) min((arr_28 [i_5] [i_5 + 1] [i_5] [(unsigned short)8] [i_5 - 1] [i_5 - 1] [i_5 - 3]), (arr_28 [i_5] [i_5] [i_5] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1]))))));
                        arr_59 [i_5] [i_14] [i_6] [i_6] [i_5] [i_5] = ((/* implicit */unsigned long long int) (((-(arr_16 [i_5 - 3] [i_5 - 2]))) >= (arr_29 [(short)8] [i_17] [(short)8] [7] [i_5])));
                    }
                    for (int i_18 = 0; i_18 < 18; i_18 += 1) 
                    {
                        var_31 = max((min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)152)))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-9482)) ? (((/* implicit */int) arr_7 [i_5] [i_5] [i_5 + 1] [i_5 + 1] [(short)15])) : (((/* implicit */int) (short)24)))))));
                        arr_62 [i_6] [i_6] [i_5] [i_5] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)45256)) : (((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 1 */
                        for (unsigned short i_19 = 0; i_19 < 18; i_19 += 3) 
                        {
                            var_32 = ((((((/* implicit */int) max(((short)24), (arr_38 [i_6] [i_6] [i_5] [i_6])))) & (((((/* implicit */int) var_12)) * (((/* implicit */int) (_Bool)1)))))) == ((-(((/* implicit */int) (short)-25)))));
                            arr_66 [i_14] [i_6] [i_14] [i_18] [i_19] |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (_Bool)0)), (((((/* implicit */_Bool) ((unsigned long long int) -1591623191517967897LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5477623859473013979LL)) ? (((/* implicit */int) arr_38 [i_5] [i_6] [i_14] [i_18])) : (((/* implicit */int) var_2))))) : (arr_10 [i_5 - 2] [i_5 - 2] [(unsigned short)4] [i_5 - 2] [i_5 - 1] [i_5] [i_5])))));
                            arr_67 [i_5] [i_6] [i_5] [i_18] [i_19] = ((/* implicit */unsigned int) 2672897517257005334LL);
                        }
                        /* LoopSeq 1 */
                        for (long long int i_20 = 0; i_20 < 18; i_20 += 3) 
                        {
                            var_33 = (+(((/* implicit */int) (unsigned short)24722)));
                            arr_70 [i_5 - 3] [3ULL] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(10ULL))))));
                            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_24 [i_6] [i_6] [i_5]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3158948360262894013ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_25 [i_6] [i_5] [i_6]), (((/* implicit */unsigned short) (short)-25))))))))));
                        }
                    }
                    var_35 -= ((/* implicit */_Bool) arr_32 [i_5] [i_14] [i_14] [i_14]);
                }
            }
        } 
    } 
}
