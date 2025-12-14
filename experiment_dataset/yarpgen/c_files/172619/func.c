/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172619
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
    var_16 += ((/* implicit */short) ((((/* implicit */_Bool) var_9)) || (max((((((/* implicit */_Bool) (short)-24665)) || ((_Bool)0))), (var_7)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */int) (~((~(var_15)))));
        arr_3 [i_0] &= ((/* implicit */short) (!(arr_1 [i_0])));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 15; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) var_11);
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_3 - 2] [i_0])))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) ((arr_15 [i_4] [i_1] [i_3 + 1] [i_4]) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)65525))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_1] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [i_0])) ? (arr_9 [i_2] [i_1] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) - (((/* implicit */long long int) arr_5 [i_0]))));
                    var_19 = ((((((((/* implicit */int) (signed char)-107)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)65525)) - (65500))))) << (((((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] [i_2])) : (var_8))) - (3549433869U))));
                    var_20 = ((((/* implicit */_Bool) (signed char)-107)) ? (-15) : (((/* implicit */int) (unsigned char)91)));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_5 = 3; i_5 < 14; i_5 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_6 [i_0] [i_5 - 1] [i_5 + 2] [i_5 - 1])) || (((/* implicit */_Bool) arr_14 [i_0] [i_5] [i_5] [i_0]))))));
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (short i_7 = 1; i_7 < 14; i_7 += 4) 
                {
                    for (short i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) arr_8 [i_5])))));
                            var_23 &= ((/* implicit */long long int) (+(((/* implicit */int) var_13))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((arr_20 [i_0] [i_5] [i_5]) ? (((/* implicit */int) arr_20 [i_0] [i_5] [i_0])) : (((/* implicit */int) arr_20 [i_0] [i_5 - 3] [i_5 + 1])))))));
            var_25 = ((/* implicit */unsigned char) ((arr_22 [i_5] [i_5] [i_0] [i_5 - 1]) | (arr_22 [i_0] [i_5] [i_5] [i_5 - 3])));
        }
        for (short i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_26 -= ((/* implicit */unsigned char) ((_Bool) arr_20 [i_0] [i_10] [i_10]));
                arr_31 [i_10] = ((/* implicit */unsigned long long int) (+(var_15)));
                var_27 -= ((/* implicit */long long int) (signed char)-91);
                arr_32 [i_0] [i_10] = ((/* implicit */unsigned int) ((unsigned long long int) arr_14 [i_0] [i_9] [i_10] [i_9]));
            }
            for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 16; i_12 += 1) 
                {
                    for (short i_13 = 0; i_13 < 16; i_13 += 1) 
                    {
                        {
                            var_28 -= (+(((/* implicit */int) arr_1 [i_0])));
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((_Bool) arr_22 [i_0] [i_9] [i_0] [i_11])))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) arr_1 [i_0]))));
                /* LoopSeq 4 */
                for (unsigned char i_14 = 2; i_14 < 15; i_14 += 3) 
                {
                    var_31 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_36 [i_0] [i_9] [i_14 - 1] [i_0] [i_11])) : (((/* implicit */int) arr_36 [i_0] [i_14] [i_14 + 1] [i_0] [i_0]))));
                    var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */int) arr_42 [i_0] [i_9] [i_0] [i_9] [i_11])) : ((+(((/* implicit */int) (unsigned short)27232)))))))));
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                {
                    var_33 |= (!(((/* implicit */_Bool) arr_14 [i_0] [i_11] [i_11] [i_15])));
                    arr_46 [i_0] [i_9] [i_11] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_9] [i_9] [i_11] [i_15]))))) * (((/* implicit */int) arr_4 [i_0] [i_9] [i_11]))));
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned int) ((var_9) < (((/* implicit */int) arr_47 [i_0] [i_0] [i_11] [i_11] [i_16]))));
                    arr_51 [i_0] [i_11] [i_11] [i_11] [i_0] [i_11] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_49 [i_0] [i_9] [i_11] [i_11] [i_16] [i_11])) ? (((/* implicit */int) (signed char)-103)) : (((/* implicit */int) arr_48 [i_0] [i_9] [i_11] [i_16] [i_0])))));
                    arr_52 [i_0] [i_9] [i_0] [i_16] |= ((/* implicit */int) (unsigned char)147);
                }
                for (long long int i_17 = 3; i_17 < 15; i_17 += 1) 
                {
                    arr_55 [i_11] = arr_37 [i_11] [i_11];
                    /* LoopSeq 1 */
                    for (unsigned long long int i_18 = 2; i_18 < 15; i_18 += 2) 
                    {
                        arr_59 [i_0] [i_9] [i_11] [i_11] [i_18 - 2] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))));
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */long long int) -2147483631)) == (arr_25 [i_18] [i_18] [i_18 + 1] [i_18] [i_18])));
                        var_36 |= ((/* implicit */unsigned char) ((unsigned int) arr_50 [i_18 - 2] [i_0] [i_11]));
                        var_37 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_9] [i_9] [i_11] [i_17])) ? (4213968805U) : (((/* implicit */unsigned int) var_9))))) ? (((((/* implicit */_Bool) arr_49 [i_0] [i_0] [i_18] [i_17] [i_18] [i_18])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_11]))) == (arr_9 [i_18 + 1] [i_9] [i_17] [i_17]))))));
                    }
                    arr_60 [i_17 + 1] [i_11] = ((/* implicit */unsigned int) (-(arr_7 [i_0] [i_17 - 2] [i_11] [i_11])));
                }
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_20 = 2; i_20 < 14; i_20 += 2) 
                {
                    for (unsigned int i_21 = 0; i_21 < 16; i_21 += 3) 
                    {
                        {
                            var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) (unsigned short)1792))));
                            var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_19] [i_9] [i_20 + 1] [i_20] [i_21] [i_21] [i_21])) ? (arr_12 [i_0] [i_19] [i_20 + 1] [i_21] [i_21] [i_19] [i_19]) : (arr_12 [i_0] [i_19] [i_20 + 1] [i_20 + 1] [i_21] [i_0] [i_21])));
                        }
                    } 
                } 
                arr_68 [i_0] [i_9] = arr_22 [i_0] [i_9] [i_19] [i_9];
                /* LoopSeq 1 */
                for (unsigned short i_22 = 0; i_22 < 16; i_22 += 3) 
                {
                    arr_72 [i_0] [i_22] = (!((_Bool)1));
                    var_40 = ((/* implicit */unsigned int) ((short) arr_0 [i_19]));
                }
            }
        }
        for (signed char i_23 = 0; i_23 < 16; i_23 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_24 = 4; i_24 < 12; i_24 += 4) 
            {
                var_41 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 1416636642)))) ? (arr_7 [i_0] [i_23] [i_24 + 1] [i_24]) : (((/* implicit */int) arr_24 [i_23] [i_24 + 4] [i_24] [i_24] [i_24]))));
                var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0])) || (((/* implicit */_Bool) ((((((/* implicit */int) var_10)) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_24] [i_23] [i_24 - 2])) - (34936))))))));
                /* LoopNest 2 */
                for (short i_25 = 0; i_25 < 16; i_25 += 1) 
                {
                    for (signed char i_26 = 4; i_26 < 15; i_26 += 2) 
                    {
                        {
                            var_43 ^= ((/* implicit */unsigned int) ((short) var_15));
                            arr_85 [i_0] [i_0] [i_23] [i_24] [i_25] [i_26] &= ((/* implicit */signed char) (~(arr_6 [i_24] [i_24] [i_24 - 4] [i_24])));
                        }
                    } 
                } 
            }
            arr_86 [i_0] [i_23] [i_23] = ((/* implicit */signed char) arr_39 [i_0] [i_23] [i_0] [i_0] [i_0] [i_0] [i_23]);
        }
        var_44 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_83 [i_0] [i_0]))));
    }
    var_45 &= ((/* implicit */unsigned char) 4213968818U);
}
