/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105573
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((var_3) <= (((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */int) max(((short)-22), (((/* implicit */short) var_9)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) (unsigned char)237))))) ? (((((/* implicit */_Bool) (unsigned short)65506)) ? (-292123630369499740LL) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_4)), ((short)7232))))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        arr_2 [(signed char)16] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-10486)) ? (((/* implicit */long long int) ((/* implicit */int) (short)29896))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)28))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-30214))) : (((((/* implicit */_Bool) 480033536847724729LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-480033536847724730LL)))))));
        arr_3 [i_0] [i_0] = ((max((min((2147483639), (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (short)29921)))) >> (((((long long int) 6590903017705675534ULL)) - (6590903017705675532LL))));
        var_13 = min((((/* implicit */long long int) ((short) ((((/* implicit */_Bool) 3196488157303486443LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5788268502199588832LL))))), ((-(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32766))) : (-9223372036854775807LL))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((12369497297880012LL) * (5LL))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            arr_18 [i_2] [15LL] [10U] [i_2] = ((/* implicit */short) arr_0 [i_1 - 1]);
                            arr_19 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_0 + 2] [i_1 + 1] [i_3 + 2] [i_2])) ? (((/* implicit */int) arr_16 [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_2])) : (((/* implicit */int) (unsigned char)93))));
                        }
                        var_15 = ((((/* implicit */_Bool) (short)(-32767 - 1))) ? ((~(var_3))) : (((/* implicit */int) (unsigned char)93)));
                    }
                    arr_20 [i_2] [3ULL] = ((/* implicit */short) var_5);
                    var_16 = ((/* implicit */signed char) var_9);
                    arr_21 [i_0] [i_2] = ((/* implicit */signed char) var_6);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) 6728975588988875125LL))));
                                var_18 += max((min((((/* implicit */int) max((var_0), (((/* implicit */short) arr_15 [i_0] [0U] [i_2] [i_5] [i_6] [i_2]))))), ((-(-1338823257))))), (max((((/* implicit */int) ((short) (short)6955))), (min((((/* implicit */int) (unsigned char)151)), (-1338823257))))));
                                var_19 = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) var_10)));
                                arr_26 [i_2] [10LL] [10LL] [i_2] [i_2] [i_1 - 2] = ((/* implicit */short) arr_0 [i_5]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned int i_7 = 0; i_7 < 18; i_7 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_8 = 0; i_8 < 18; i_8 += 3) 
        {
            arr_32 [i_7] [i_7] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 9223372036854775801LL)) ? (22ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */unsigned long long int) 3819261888U))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
            {
                arr_36 [i_9] [i_8] = ((/* implicit */signed char) (!((_Bool)0)));
                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) -158179032)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_7] [i_8] [i_7] [12])) < (((/* implicit */int) var_9)))))) : (var_2))))));
            }
            /* vectorizable */
            for (short i_10 = 1; i_10 < 16; i_10 += 2) 
            {
                arr_39 [i_7] [i_7] [i_10] = ((/* implicit */short) var_4);
                arr_40 [i_10] = ((/* implicit */short) (-(((int) var_10))));
                /* LoopNest 2 */
                for (signed char i_11 = 3; i_11 < 17; i_11 += 1) 
                {
                    for (int i_12 = 1; i_12 < 17; i_12 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) 18446744073709551585ULL))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */int) (short)29917)) % (((/* implicit */int) (_Bool)1))));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) (_Bool)1))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)244))))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */long long int) (~(1086782330)));
                arr_46 [i_10] [i_10] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
            }
        }
        for (unsigned short i_13 = 1; i_13 < 16; i_13 += 3) 
        {
            var_25 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2284603201U)) ? (((((arr_28 [i_13 + 1] [i_13 + 1]) + (9223372036854775807LL))) >> (((-5) + (16))))) : (((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_13 + 2] [i_13 + 1] [i_13 + 1]))) * (var_11)))));
            /* LoopNest 3 */
            for (short i_14 = 3; i_14 < 17; i_14 += 2) 
            {
                for (long long int i_15 = 0; i_15 < 18; i_15 += 3) 
                {
                    for (int i_16 = 2; i_16 < 14; i_16 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) arr_48 [i_7] [i_16] [i_14 + 1])) != (((/* implicit */int) (unsigned short)0))))), (min((-2339989054197464680LL), (((/* implicit */long long int) var_7)))))))));
                            arr_58 [i_7] [i_13] [i_7] [i_7] [i_7] = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                            arr_59 [15LL] [15LL] [i_14 - 3] [i_13] [i_7] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_44 [i_16] [i_16 + 1] [i_16 - 1] [i_16] [i_16] [i_16 - 1] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_11 [i_7] [i_7] [i_7] [i_15] [i_15]) || (((/* implicit */_Bool) (signed char)-45)))))) : (max((((/* implicit */unsigned int) var_3)), (2010364094U))))) >> (((/* implicit */int) ((((/* implicit */_Bool) (+(9223372036854775807LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (-2147483634) : (((/* implicit */int) arr_24 [i_7] [i_13] [i_13] [13] [i_13] [i_13] [i_16 + 1]))))))))));
                            var_27 -= ((/* implicit */signed char) (short)-9567);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_17 = 0; i_17 < 18; i_17 += 2) 
            {
                for (unsigned int i_18 = 2; i_18 < 16; i_18 += 1) 
                {
                    {
                        arr_64 [i_7] [i_13] [i_17] [i_13] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_57 [i_13] [i_13] [i_13 + 2] [i_18 + 1] [i_18 - 1])) ? (-1075355586) : (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_10)))))));
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) arr_60 [i_7] [i_17] [i_17]))));
                        var_29 = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) -1372734507))))), ((short)(-32767 - 1))))) >> (((((((/* implicit */_Bool) arr_55 [(_Bool)1] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32756))) : (((long long int) 1192223922U)))) + (32779LL)))));
                    }
                } 
            } 
            var_30 = ((/* implicit */unsigned short) (+(-1306251662)));
            /* LoopSeq 2 */
            for (unsigned short i_19 = 0; i_19 < 18; i_19 += 2) 
            {
                var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (+(((/* implicit */int) ((short) (+(var_2))))))))));
                var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (short)(-32767 - 1)))));
                var_33 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) 158179032)) ^ (-9223372036854775800LL)))) ? ((-(((/* implicit */int) arr_45 [i_13 + 1] [i_13 + 2] [i_13 + 1] [i_13 + 2] [i_13 + 1] [i_19])))) : (((/* implicit */int) arr_45 [i_13 - 1] [(short)0] [8U] [i_13] [i_13 - 1] [i_19]))));
                arr_67 [i_7] [(_Bool)1] [i_13] = ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
                var_34 = ((/* implicit */signed char) (-(arr_33 [i_7] [i_13] [i_7])));
            }
            /* vectorizable */
            for (long long int i_20 = 0; i_20 < 18; i_20 += 3) 
            {
                var_35 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_33 [i_13 + 2] [i_13 + 2] [i_13])));
                arr_71 [(signed char)13] [i_13] [i_20] [(signed char)13] = ((/* implicit */short) 2895938158U);
                var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((var_3) >> (((var_5) - (17793720271397225704ULL))))))));
                var_37 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_38 [i_13] [i_13 + 2] [(short)11])) - (((/* implicit */int) (short)-2197))));
            }
        }
        arr_72 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_7)) & (1657574606)))))) ? (((/* implicit */int) ((var_2) > (((/* implicit */long long int) 1338823247))))) : (((/* implicit */int) (unsigned char)207))));
    }
    var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) ((((/* implicit */long long int) var_3)) < (((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20591)))))))) : (var_3)));
}
