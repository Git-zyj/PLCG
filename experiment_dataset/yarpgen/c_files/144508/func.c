/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144508
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
    var_12 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        arr_3 [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) -2)) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) (short)-32765))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((2393845795U) | (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 2] [i_0]))) : (((((/* implicit */_Bool) var_4)) ? (8919435638146666949LL) : (var_6)))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 4; i_1 < 8; i_1 += 1) 
        {
            arr_9 [i_0] = ((((/* implicit */int) ((unsigned char) (short)-28107))) << (((((/* implicit */int) ((unsigned short) (unsigned char)191))) - (191))));
            var_13 = ((/* implicit */_Bool) (-(arr_0 [i_0 - 2] [(short)5])));
        }
        for (unsigned int i_2 = 2; i_2 < 11; i_2 += 3) 
        {
            arr_13 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_7 [i_0 + 2] [i_2] [i_2 + 1]))));
            /* LoopSeq 4 */
            for (signed char i_3 = 1; i_3 < 11; i_3 += 1) 
            {
                var_14 = ((/* implicit */signed char) 14);
                arr_17 [i_0 + 1] [i_0] [i_0] = ((((((/* implicit */_Bool) arr_14 [i_3 + 1] [i_0])) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) (signed char)-18)))) < ((+(((/* implicit */int) var_1)))));
                arr_18 [i_0 - 2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 516096U)) || (((/* implicit */_Bool) (signed char)-1))));
            }
            for (int i_4 = 2; i_4 < 9; i_4 += 3) 
            {
                var_15 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) var_2)))));
                arr_21 [i_2] [i_4 - 2] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)248))));
                arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)32765)) : (((/* implicit */int) var_0)))))));
            }
            for (short i_5 = 2; i_5 < 11; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        {
                            arr_32 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32762)) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : ((-(((/* implicit */int) arr_10 [i_2] [i_7]))))));
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_1))))) ? (((/* implicit */int) ((signed char) 1901121501U))) : (((/* implicit */int) ((arr_5 [i_0 + 2] [i_2] [i_5 + 1]) != (var_11)))))))));
                        }
                    } 
                } 
                arr_33 [i_0] [i_0] [i_2] [i_5] = ((/* implicit */int) (unsigned short)36826);
            }
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) var_8)))));
                var_18 *= ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_0 - 1])) | (((/* implicit */int) arr_16 [i_0 - 2]))));
            }
            arr_37 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) arr_16 [i_2]))))) ? (((/* implicit */int) var_3)) : (var_11)));
            arr_38 [i_0] [i_0] [i_0 + 3] = ((/* implicit */unsigned short) ((signed char) (-(((/* implicit */int) (signed char)-1)))));
        }
        for (int i_9 = 3; i_9 < 9; i_9 += 4) 
        {
            arr_42 [i_0] [(short)8] = ((/* implicit */short) (_Bool)1);
            arr_43 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) var_5))) << (((1610612736) - (1610612726)))));
            arr_44 [i_0] [i_9 + 1] = ((/* implicit */unsigned char) var_7);
        }
        for (short i_10 = 3; i_10 < 9; i_10 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((int) (short)2))) : (((((/* implicit */long long int) -1980391159)) & (8375615848971493631LL)))));
            /* LoopNest 3 */
            for (short i_11 = 1; i_11 < 10; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    for (unsigned short i_13 = 4; i_13 < 11; i_13 += 1) 
                    {
                        {
                            var_20 += ((/* implicit */signed char) (+(((/* implicit */int) arr_28 [i_11] [i_10 + 2] [i_11] [i_12]))));
                            arr_55 [5U] [i_10] [i_11] [i_13 - 4] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 4294967290U)) ? (var_8) : (var_5)))));
                        }
                    } 
                } 
            } 
            var_21 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))));
            arr_56 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_49 [i_10 + 3] [i_10 + 3] [i_10 + 1] [i_10 + 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
        }
        /* LoopSeq 1 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_15 = 2; i_15 < 10; i_15 += 4) 
            {
                var_22 = ((/* implicit */int) arr_14 [i_0 + 3] [i_0 + 2]);
                arr_64 [i_0 + 1] [i_15] = ((/* implicit */short) (_Bool)1);
                arr_65 [i_0] [i_14] [i_0] [i_15] |= ((/* implicit */unsigned short) ((arr_1 [i_15 + 1] [i_0 - 1]) >= (((/* implicit */unsigned long long int) var_5))));
            }
            for (unsigned char i_16 = 1; i_16 < 9; i_16 += 1) 
            {
                arr_70 [i_0] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 8375615848971493625LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)1))) : (5024601414155836494LL)))));
                var_23 |= (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_0]))))));
                /* LoopSeq 1 */
                for (signed char i_17 = 1; i_17 < 11; i_17 += 1) 
                {
                    var_24 = ((/* implicit */_Bool) ((signed char) (_Bool)1));
                    var_25 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_7))));
                }
                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) arr_68 [i_16 + 2] [i_0 - 1] [i_16 + 3] [i_16 + 3])) : (-1416505567))))));
            }
            for (unsigned long long int i_18 = 3; i_18 < 10; i_18 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_19 = 1; i_19 < 11; i_19 += 1) 
                {
                    var_27 ^= ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
                    var_28 = ((/* implicit */unsigned char) arr_73 [i_0] [i_14] [8] [i_14] [i_18] [i_19 + 1]);
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)157)) > (((/* implicit */int) arr_23 [i_19 + 1] [i_0 + 3] [i_18 + 1]))));
                    var_30 = ((/* implicit */short) ((unsigned int) arr_58 [i_0 + 1] [i_0 - 2] [i_0 - 2]));
                }
                var_31 = ((/* implicit */int) var_9);
            }
            for (long long int i_20 = 3; i_20 < 11; i_20 += 2) 
            {
                var_32 = ((/* implicit */int) var_1);
                /* LoopNest 2 */
                for (unsigned short i_21 = 1; i_21 < 9; i_21 += 4) 
                {
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        {
                            arr_87 [i_0] [i_22] [i_0 + 1] [i_0 + 1] [i_22] [i_21 + 3] [i_0 + 1] = ((/* implicit */unsigned int) var_0);
                            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_51 [i_20] [i_21] [i_21 - 1] [i_21] [i_22])) ? (var_6) : (((/* implicit */long long int) arr_51 [i_14] [i_21 + 2] [i_21 - 1] [i_21 + 1] [i_22]))));
                        }
                    } 
                } 
            }
            var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) ((((/* implicit */unsigned int) ((int) var_0))) * (160292014U))))));
            var_35 += ((/* implicit */int) 70368744046592ULL);
        }
        /* LoopNest 3 */
        for (long long int i_23 = 0; i_23 < 12; i_23 += 3) 
        {
            for (unsigned char i_24 = 0; i_24 < 12; i_24 += 3) 
            {
                for (unsigned short i_25 = 3; i_25 < 10; i_25 += 4) 
                {
                    {
                        arr_96 [i_24] [i_25 - 1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_61 [i_25 - 3] [i_24] [i_24] [i_24]))));
                        var_36 = ((/* implicit */signed char) arr_25 [4] [i_0 + 3] [i_0 - 1] [i_23]);
                    }
                } 
            } 
        } 
    }
}
