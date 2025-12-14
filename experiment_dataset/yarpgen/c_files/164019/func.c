/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164019
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
    var_10 = ((/* implicit */unsigned int) min((var_10), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (short)-3672)), (((12147610751583637379ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)54))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [8ULL] [8ULL] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_2)))) ? (max((((/* implicit */unsigned long long int) (+(167421519U)))), (((unsigned long long int) arr_2 [i_0] [(short)8])))) : (((/* implicit */unsigned long long int) ((((long long int) arr_2 [18U] [(unsigned short)18])) << (((((((/* implicit */int) arr_1 [16U] [16U])) ^ (((/* implicit */int) var_1)))) - (6915))))))));
        arr_4 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-70))));
    }
    for (unsigned char i_1 = 1; i_1 < 18; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 2) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_4 = 4; i_4 < 20; i_4 += 3) 
                {
                    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((unsigned short) arr_12 [i_1] [i_2] [i_3 + 2])))));
                    var_12 ^= ((/* implicit */unsigned short) (-(18446744073709551605ULL)));
                }
                for (unsigned int i_5 = 2; i_5 < 19; i_5 += 2) 
                {
                    var_13 = ((unsigned int) ((((/* implicit */_Bool) arr_12 [i_1] [20U] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        arr_23 [i_1] [i_1] [11ULL] [i_2] [7LL] = ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (+(((/* implicit */int) var_4))))));
                        var_14 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 3624729861U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9))) : (arr_5 [i_1] [i_2]))));
                        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_11 [i_6] [i_2] [i_3 + 2] [i_5])) <= (var_9))))));
                        arr_24 [i_2] |= ((/* implicit */long long int) (signed char)-58);
                        arr_25 [i_1] [i_2] [i_3] [(unsigned short)2] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */int) arr_2 [i_5 + 2] [i_1])) : (1043957256)));
                    }
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        var_16 = ((/* implicit */int) (short)-7261);
                        arr_30 [i_1] [i_2] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_3]))) >= (var_7))));
                    }
                }
                for (int i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        arr_36 [i_1] [i_9] |= ((/* implicit */long long int) arr_22 [i_8] [i_9] [i_8] [i_8] [i_3] [i_2] [i_8]);
                        arr_37 [i_1] [i_2] [20ULL] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 921406691796324574LL))));
                    }
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (arr_27 [i_3 - 1] [i_1 - 1])));
                    arr_38 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned char) 1824108560));
                    var_18 = ((/* implicit */_Bool) min((var_18), (((arr_7 [i_2] [i_2]) == (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
                }
                for (long long int i_10 = 3; i_10 < 19; i_10 += 2) 
                {
                    var_19 -= ((/* implicit */_Bool) (+(arr_33 [i_10 + 1] [i_2])));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)574)) ? (arr_6 [i_1]) : (arr_14 [i_11] [i_1 - 1])));
                        arr_46 [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((arr_13 [i_1] [i_3] [i_3 + 2] [i_1]) - (arr_13 [i_1] [i_10] [i_3 + 2] [i_1])));
                        arr_47 [i_11] [i_1] [i_1] [i_1] [11U] = ((unsigned int) (+(((/* implicit */int) (_Bool)1))));
                        var_21 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -6502013298406332655LL)) - (((((/* implicit */_Bool) arr_31 [i_1] [i_2] [i_10 - 1] [i_2])) ? (arr_34 [(short)17] [i_2] [(short)4]) : (arr_34 [i_1 + 3] [i_10] [i_10])))));
                        arr_48 [(_Bool)1] [i_2] [i_3] [i_10] [i_1] = ((((/* implicit */_Bool) arr_31 [(signed char)16] [i_10 - 3] [(unsigned short)12] [i_1])) ? (576460752303415296LL) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_1 - 1] [i_10 - 3] [i_3] [i_1]))));
                    }
                    for (unsigned int i_12 = 0; i_12 < 21; i_12 += 4) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) 921406691796324556LL))));
                        arr_52 [i_1] [2] [i_1] [i_1] [i_12] [i_10] [6U] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-7255)) ? (((/* implicit */int) (short)-7246)) : (((((/* implicit */_Bool) var_3)) ? (1405767444) : (((/* implicit */int) (_Bool)1))))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 21; i_13 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [10ULL] [i_2] [i_3] [i_13]))))) == (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (3237104174U)))))))));
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_2))));
                    }
                    var_25 = ((10444614773414568269ULL) * (((/* implicit */unsigned long long int) -1824108556)));
                    arr_55 [i_2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) arr_6 [i_3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)))) : (-1748535120)));
                }
                arr_56 [i_1] [i_2] [i_1] [i_1 + 2] = ((/* implicit */unsigned long long int) (~(arr_12 [i_1] [(unsigned char)1] [i_1])));
            }
            var_26 = ((/* implicit */int) 3935276788U);
            arr_57 [i_1] = ((/* implicit */unsigned short) ((short) arr_12 [i_1] [i_1] [19U]));
            var_27 = ((/* implicit */unsigned int) ((((4767983126981921362LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5721))))) / (arr_14 [i_1 + 1] [i_1 + 2])));
        }
        var_28 = ((/* implicit */short) max((var_28), (var_5)));
        /* LoopNest 2 */
        for (short i_14 = 0; i_14 < 21; i_14 += 4) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 2) 
            {
                {
                    arr_64 [i_15] [i_1] [i_1] = ((/* implicit */unsigned int) max(((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)232))) | (15865601642358378629ULL))))), (((unsigned long long int) ((1824108582) % (((/* implicit */int) (short)-7259)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 3; i_16 < 20; i_16 += 3) 
                    {
                        for (long long int i_17 = 0; i_17 < 21; i_17 += 4) 
                        {
                            {
                                arr_69 [i_1] [i_17] [i_16] [i_15] [i_14] [i_1] = ((/* implicit */short) min((arr_50 [i_1] [i_14] [i_15] [i_15] [i_17] [i_15]), (((/* implicit */unsigned int) (_Bool)1))));
                                var_29 = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (-3089164572074774430LL));
                            }
                        } 
                    } 
                    arr_70 [i_1] [i_1] = ((/* implicit */short) ((unsigned char) (unsigned char)213));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_18 = 0; i_18 < 21; i_18 += 4) 
        {
            for (unsigned short i_19 = 0; i_19 < 21; i_19 += 4) 
            {
                for (unsigned int i_20 = 0; i_20 < 21; i_20 += 1) 
                {
                    {
                        var_30 = ((/* implicit */_Bool) var_3);
                        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (short)28451)) ? (4503597479886848LL) : (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */long long int) ((unsigned int) (unsigned char)8))) : (((-7539865509484869313LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)51)))))))));
                        var_32 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_0 [i_1])))) * (((((/* implicit */_Bool) arr_40 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_8))))));
                    }
                } 
            } 
        } 
    }
    var_33 = ((/* implicit */long long int) (+(((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    for (unsigned short i_21 = 0; i_21 < 12; i_21 += 2) 
    {
        arr_83 [i_21] = ((/* implicit */unsigned int) (unsigned short)6122);
        /* LoopNest 3 */
        for (unsigned long long int i_22 = 0; i_22 < 12; i_22 += 4) 
        {
            for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
            {
                for (unsigned int i_24 = 3; i_24 < 11; i_24 += 4) 
                {
                    {
                        arr_91 [i_24] [i_23] [i_22] [i_24] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(var_8)))) == (((((/* implicit */_Bool) arr_68 [i_21] [i_24] [i_23] [i_24 - 2] [i_23])) ? (arr_68 [i_21] [i_24] [i_23 - 1] [i_24] [i_24]) : (arr_68 [i_24] [i_24] [i_22] [i_24] [i_21])))));
                        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) << (((((/* implicit */int) var_3)) + (8000)))))) ? ((~(1073741792U))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59805))) ^ (483333274U)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1073741823)) ? (131153567875814630ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_7))))));
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */short) arr_34 [i_21] [i_21] [i_21]);
    }
    for (unsigned short i_25 = 4; i_25 < 13; i_25 += 2) 
    {
        arr_96 [i_25] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)3613))))))))));
        var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((1007440295U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33575)))))))) ? (var_7) : (((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28672))) / (2132161350U))))));
    }
}
