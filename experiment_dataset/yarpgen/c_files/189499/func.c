/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189499
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
    var_18 = ((/* implicit */int) (-((-(((unsigned int) (-2147483647 - 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned short) (~(-1)));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_4 = 2; i_4 < 14; i_4 += 4) /* same iter space */
                            {
                                var_19 = ((/* implicit */unsigned int) var_11);
                                var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_11 [i_3] [i_2 + 1] [i_2 + 1] [i_3]))));
                            }
                            for (long long int i_5 = 2; i_5 < 14; i_5 += 4) /* same iter space */
                            {
                                var_21 |= ((/* implicit */int) var_15);
                                arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((2600928144U) >> (((((/* implicit */int) arr_3 [i_1])) - (75))))))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)8128))))));
                                var_22 = ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */long long int) var_13)) : ((-(arr_9 [i_0 - 2]))));
                                var_23 -= ((/* implicit */unsigned int) var_14);
                            }
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (-(3U))))));
                        }
                    } 
                } 
                arr_16 [i_0] = ((/* implicit */unsigned int) var_14);
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        for (long long int i_7 = 3; i_7 < 16; i_7 += 2) 
        {
            for (int i_8 = 2; i_8 < 18; i_8 += 3) 
            {
                {
                    arr_25 [i_7] [i_7] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (arr_22 [i_6] [i_7] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4))))))));
                    var_25 ^= ((/* implicit */int) 4294967292U);
                    var_26 &= ((/* implicit */int) (+(0LL)));
                    /* LoopSeq 4 */
                    for (int i_9 = 2; i_9 < 16; i_9 += 4) 
                    {
                        var_27 ^= ((/* implicit */unsigned int) -9223372036854775782LL);
                        arr_28 [i_6] [i_6] [i_6] [i_7] = ((/* implicit */long long int) 3U);
                        var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_22 [i_6] [i_7] [i_6]))));
                    }
                    for (unsigned short i_10 = 1; i_10 < 17; i_10 += 1) 
                    {
                        arr_31 [i_7] [i_7] [i_7] [i_7] = ((unsigned short) (~(var_5)));
                        var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) 2047U)), (var_4)))) ? ((-(15U))) : (((/* implicit */unsigned int) var_11)))))));
                        /* LoopSeq 4 */
                        for (unsigned int i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            arr_36 [i_7] [i_7] [i_7] [i_7] [i_7] = (~(2042U));
                            arr_37 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-1232266917) % (((/* implicit */int) arr_19 [i_7 - 3]))))) ? ((-(((/* implicit */int) arr_19 [i_7 + 3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_10 + 2] [i_10 + 2] [i_10 + 2] [i_7] [i_10 + 2] [i_10 + 2])))))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 19; i_12 += 3) 
                        {
                            var_30 = ((/* implicit */int) var_7);
                            var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_29 [i_8] [i_8] [i_7] [i_10 + 1] [i_7])) : (((/* implicit */int) arr_29 [i_7] [i_7] [i_7] [i_10 - 1] [i_7])))))));
                            arr_41 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] |= ((/* implicit */unsigned short) var_4);
                        }
                        for (unsigned short i_13 = 1; i_13 < 16; i_13 += 1) /* same iter space */
                        {
                            var_32 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_32 [i_6] [i_6] [i_6] [i_6])), (min((((/* implicit */long long int) 2042U)), ((+((-9223372036854775807LL - 1LL))))))));
                            var_33 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)224)) | (((/* implicit */int) ((unsigned short) min((4294967288U), (((/* implicit */unsigned int) (unsigned short)65535))))))));
                        }
                        for (unsigned short i_14 = 1; i_14 < 16; i_14 += 1) /* same iter space */
                        {
                            var_34 = var_9;
                            var_35 = min((((/* implicit */long long int) (unsigned short)0)), (9223372036854775783LL));
                        }
                    }
                    for (int i_15 = 1; i_15 < 15; i_15 += 4) 
                    {
                        arr_51 [i_6] [i_6] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_19 [i_6])), (var_5))))))), (max((var_17), (((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (9223372036854775787LL)))))));
                        arr_52 [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned int) ((int) var_7))), (min((var_1), (var_6)))))));
                    }
                    for (int i_16 = 1; i_16 < 18; i_16 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned int) ((unsigned short) min((arr_30 [i_6] [i_8 - 1] [i_8 - 1] [i_7] [i_16 - 1] [i_16 - 1]), (arr_30 [i_8] [i_8 - 1] [i_8] [i_7] [i_16 - 1] [i_8 - 1]))));
                        arr_55 [i_6] [i_6] [i_6] [i_7] = ((/* implicit */long long int) (+(var_0)));
                    }
                }
            } 
        } 
    } 
    var_37 = ((/* implicit */int) ((1048575LL) <= (((/* implicit */long long int) ((unsigned int) 9223372036854775795LL)))));
    var_38 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(0LL)))) ? ((+(((/* implicit */int) var_16)))) : (((/* implicit */int) var_15))))) >= (max((var_17), (((/* implicit */long long int) var_6))))));
}
