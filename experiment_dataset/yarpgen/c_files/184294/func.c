/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184294
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) arr_0 [i_0 + 1]);
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) (signed char)92))), (((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) (short)-20070)) : ((-2147483647 - 1))))))) < ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_8))))) : (((var_13) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56188)))))))));
                                var_20 = (+(((/* implicit */int) max((var_1), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_16 [i_0] [i_1 + 1] [i_0] [(short)8] [i_6])) ? (arr_16 [i_1 - 2] [i_5] [i_2] [i_1 - 2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)116)))))));
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_6])) : (((int) var_4))))) >= (var_12))))));
                                var_23 = ((/* implicit */unsigned char) max((((/* implicit */int) (short)5518)), (((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_2] [i_5 - 1])) ? (((/* implicit */int) var_6)) : (arr_7 [i_0] [i_0 - 1] [i_1 + 1] [i_5 + 3])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) max((((/* implicit */int) ((signed char) arr_8 [i_1 - 3] [i_2] [i_1] [i_8]))), (((((/* implicit */_Bool) arr_14 [i_0 + 2] [i_1] [i_1 + 2] [i_7])) ? (var_15) : (((/* implicit */int) arr_19 [i_0 - 1] [i_0 - 1] [20U] [i_1]))))));
                                var_25 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (-1436109272) : (((/* implicit */int) (unsigned char)220))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_9 = 0; i_9 < 16; i_9 += 3) 
    {
        for (unsigned char i_10 = 3; i_10 < 15; i_10 += 1) 
        {
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) (unsigned char)12);
                                var_27 = ((/* implicit */unsigned int) arr_21 [i_9] [i_10] [i_12]);
                                arr_34 [i_12] [i_10] [3U] [i_12] [i_9] [i_12] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_13 [i_9] [i_9] [i_10 - 2] [i_9])) ? (arr_13 [i_9] [i_9] [i_10 - 3] [i_9]) : (((/* implicit */unsigned int) 1240748180)))), (((((/* implicit */_Bool) -632157035764721838LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_13 [i_9] [i_9] [i_10 + 1] [i_9])))));
                                arr_35 [i_9] [14U] [i_9] [i_12] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_9] [i_10] [i_11 - 1] [i_13]))))) ? ((~(((/* implicit */int) arr_10 [i_9] [i_10 - 2] [i_11 - 1] [i_12])))) : (((((/* implicit */_Bool) arr_10 [i_9] [i_10 - 3] [i_10 - 3] [i_12])) ? (((/* implicit */int) arr_10 [i_13] [i_11 - 1] [i_10] [i_9])) : (((/* implicit */int) arr_10 [i_9] [i_10 - 3] [i_11 - 1] [i_12]))))));
                                var_28 = ((/* implicit */signed char) var_10);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 2; i_14 < 14; i_14 += 3) 
                    {
                        for (unsigned int i_15 = 1; i_15 < 14; i_15 += 1) 
                        {
                            {
                                arr_42 [i_9] = ((((((/* implicit */_Bool) 1436109284)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_21 [i_9] [i_11 - 1] [i_11 - 1])))) % (((/* implicit */int) var_3)));
                                var_29 = ((/* implicit */unsigned long long int) var_6);
                                arr_43 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) arr_41 [i_11] [i_11] [i_11] [i_11] [i_11]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_16 = 1; i_16 < 20; i_16 += 2) 
    {
        for (signed char i_17 = 2; i_17 < 19; i_17 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 22; i_18 += 3) 
                {
                    for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 4) 
                    {
                        {
                            var_30 = (~(((((((/* implicit */_Bool) (unsigned char)202)) ? (((/* implicit */unsigned long long int) 962493566U)) : (0ULL))) + (((((/* implicit */unsigned long long int) 1799055651)) + (var_13))))));
                            var_31 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_49 [i_16] [i_16] [i_16])), (arr_52 [i_16] [i_17] [i_18] [i_19])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)171))) < (arr_48 [i_16 - 1])))) : (((/* implicit */int) (unsigned short)127))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_20 = 0; i_20 < 22; i_20 += 1) 
                {
                    for (unsigned int i_21 = 2; i_21 < 20; i_21 += 4) 
                    {
                        {
                            arr_60 [14ULL] [i_20] [(unsigned short)2] [(signed char)12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-((-(1615489451477585254ULL))))))));
                            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) var_0))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_22 = 0; i_22 < 22; i_22 += 1) 
                {
                    for (short i_23 = 2; i_23 < 21; i_23 += 2) 
                    {
                        for (int i_24 = 2; i_24 < 21; i_24 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((_Bool) (signed char)-116)) ? (((/* implicit */long long int) ((((/* implicit */int) var_7)) >> (((arr_64 [i_23 - 1] [i_23] [i_23] [i_22]) - (7299202004607787939LL)))))) : (arr_46 [i_24 - 2] [i_23 + 1]))))));
                                var_34 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_0) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)122)))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */int) (short)(-32767 - 1))) / (((((/* implicit */_Bool) 2611566721193978868ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_63 [i_16] [i_16]))))))));
                                var_35 = ((/* implicit */short) (-(((/* implicit */int) (short)11316))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
