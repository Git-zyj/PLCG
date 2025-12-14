/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153245
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
    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((var_17) ? ((((((-(((/* implicit */int) (unsigned short)33465)))) + (2147483647))) << (((max((var_3), (4294967291U))) - (4294967291U))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_10)))))))))));
    var_20 = ((/* implicit */short) (-(0U)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1 - 2] [i_1 + 2])) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_8 [i_0] [i_1 + 2]))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 2])) ? (((/* implicit */int) arr_8 [i_0] [i_1 + 2])) : (((/* implicit */int) arr_8 [i_0] [i_1 + 2])))) : (((/* implicit */int) max((arr_8 [i_0] [i_1 + 2]), (arr_8 [i_0] [i_1 + 2]))))));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) -142779461)) : (17029170976322903293ULL)))) ? (min((((/* implicit */unsigned long long int) (unsigned short)34865)), (17029170976322903321ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3] [i_1])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_4] [i_3] [i_3] [i_2] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((var_17) ? (arr_9 [i_0] [i_0] [i_2] [i_3]) : (((/* implicit */int) (short)4096))))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64512)))))))) ? (min((((((/* implicit */_Bool) (unsigned short)33455)) ? (arr_1 [i_0]) : (arr_1 [i_1]))), (((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4])) : (((/* implicit */int) (unsigned char)54)))))) : (((((/* implicit */_Bool) max((var_13), (((/* implicit */int) (unsigned short)32070))))) ? (arr_1 [i_2]) : (arr_9 [i_0] [i_0] [i_1 + 2] [i_1 - 1])))));
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) (short)-15819)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16384))) : (1417573097386648322ULL))))));
                            arr_14 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (-(min((-9), (arr_1 [i_0])))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            arr_19 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] [i_5] = ((/* implicit */unsigned long long int) var_5);
                            arr_20 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5] [i_3] [i_1 - 1])) ? (((/* implicit */int) var_14)) : (arr_9 [i_0] [i_1] [i_2] [i_1 + 1]))) >> (((arr_9 [i_0] [i_1] [i_5] [i_1 + 2]) + (152504180)))));
                        }
                    }
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_21 [i_1] [i_1 + 2] [i_1] [i_1 + 1])), (arr_11 [i_1 - 1] [i_1] [i_1 + 2] [i_1 - 1] [i_1] [i_1] [i_1 - 1])))) : (((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1] [i_1] [i_1] [i_1] [i_1 - 2] [i_1 + 1])) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1 + 1] [i_1 - 2] [i_1] [i_1] [i_1 - 2])) : (((/* implicit */int) arr_22 [i_1] [i_1] [i_1])))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_24 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_1] [i_6])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)136))))))));
                            arr_27 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1034)) ? (951935473) : (((/* implicit */int) (unsigned short)33460))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_2] [i_6])) ? (((/* implicit */int) arr_21 [i_1] [i_2] [i_6] [i_7])) : (((/* implicit */int) arr_21 [i_1 + 2] [i_2] [i_6] [i_7]))));
                        }
                        for (int i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            arr_31 [i_0] [i_1 - 1] [i_2] [i_6] [i_8] [i_1] = (!((_Bool)0));
                            var_26 = ((/* implicit */int) arr_24 [i_8]);
                            arr_32 [i_0] [i_0] [i_1 + 2] [i_1] [i_2] [i_6] [i_8] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_1 - 1] [i_8]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) (short)15)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_8] [i_6] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_28 [i_1] [i_1] [i_2] [i_1 + 2] [i_8] [i_2] [i_8])) : (((/* implicit */int) (unsigned short)510))))) : (min((((/* implicit */unsigned int) var_15)), (arr_4 [i_0]))))));
                            var_27 = ((/* implicit */unsigned int) max((arr_22 [i_1 + 2] [i_1 + 1] [i_1]), (arr_22 [i_1 - 1] [i_1 - 1] [i_6])));
                        }
                        var_28 = arr_26 [i_6] [i_0];
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30640)) ? (((/* implicit */int) arr_33 [i_0] [i_1])) : (((/* implicit */int) (signed char)(-127 - 1)))));
                            var_30 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 335168142)) ? (((/* implicit */int) (unsigned short)30664)) : (126611325)));
                            arr_36 [i_9] [i_6] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 17029170976322903293ULL)) ? (((((/* implicit */_Bool) 11987965611716367185ULL)) ? (((/* implicit */int) (short)9666)) : (-126611321))) : (((/* implicit */int) arr_29 [i_9] [i_6] [i_6] [i_2] [i_1] [i_0] [i_0]))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_2] [i_1] [i_10] [i_0] [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [i_2] [i_6] [i_10] [i_10])) ? (1409741476) : (((/* implicit */int) arr_7 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_30 [i_2]))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_35 [i_0] [i_0]))))) : (min((8796088827904ULL), (((/* implicit */unsigned long long int) (unsigned short)37424))))));
                            arr_39 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */_Bool) arr_6 [i_10] [i_0]);
                            arr_40 [i_0] [i_1] [i_2] [i_6] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_1] [i_10])) ? (1117757808U) : (max((((((/* implicit */_Bool) arr_23 [i_2])) ? (arr_4 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-16654)) ? (((/* implicit */int) (short)-24154)) : (126611325))))))));
                            arr_41 [i_0] [i_1 - 2] [i_2] [i_6] [i_10] = ((((/* implicit */_Bool) var_3)) ? (2097024U) : (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)64))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_10] [i_6] [i_6] [i_2] [i_1] [i_0] [i_0])) ? (-353583118) : (((/* implicit */int) var_18))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28103))) / (3177209488U))))));
                            var_32 |= ((/* implicit */short) arr_34 [i_0] [i_1] [i_1 - 2] [i_2] [i_6] [i_10]);
                        }
                        var_33 = ((/* implicit */int) arr_24 [i_2]);
                    }
                    arr_42 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned short)65026)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768))) : (11814928346075109063ULL))), (max((3200611097007284557ULL), (7855590800157571601ULL)))));
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (signed char i_11 = 3; i_11 < 13; i_11 += 4) 
    {
        for (int i_12 = 1; i_12 < 14; i_12 += 2) 
        {
            {
                arr_49 [i_11] [i_12] = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)-16654)))) ? ((((_Bool)1) ? (11713372438938364590ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                arr_50 [i_12] = ((/* implicit */signed char) (unsigned char)160);
            }
        } 
    } 
}
