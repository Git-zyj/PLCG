/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144949
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
    var_11 = ((/* implicit */short) (-(((/* implicit */int) var_2))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        var_12 = min((((/* implicit */int) (short)32767)), (((((/* implicit */int) (unsigned short)14934)) & (((/* implicit */int) (_Bool)1)))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((880185582), (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */long long int) var_8)), (var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)32767))))) : (min((var_10), (((/* implicit */long long int) var_1))))));
    }
    for (int i_1 = 1; i_1 < 9; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) var_9);
        arr_8 [i_1] [i_1 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_8)))) * (((/* implicit */int) var_8))))) ? (((var_10) / (max((var_6), (var_6))))) : (min((((/* implicit */long long int) min((-880185595), (((/* implicit */int) (unsigned short)13745))))), ((+(var_6)))))));
        arr_9 [i_1] = ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) var_5)), (var_3)))));
    }
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 1; i_3 < 18; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != ((-2147483647 - 1))));
                            var_13 |= ((/* implicit */unsigned char) max((9223372036854775807LL), (((/* implicit */long long int) min((((/* implicit */unsigned short) (short)-32767)), ((unsigned short)51763))))));
                        }
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_26 [i_7] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) var_7);
                            arr_27 [i_2] [i_3] [i_4] [i_7] [i_7] [i_4] [i_7] = ((/* implicit */long long int) (+(((/* implicit */int) var_8))));
                            var_14 = ((/* implicit */_Bool) var_2);
                            var_15 |= var_8;
                        }
                        /* LoopSeq 3 */
                        for (short i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            arr_30 [i_2] [i_3] [i_4] [i_5] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) 880185582))));
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) 221012423)) ? (1055893969U) : (((/* implicit */unsigned int) 131071)))))));
                            arr_31 [i_2] [i_3] [i_4] [i_5] [i_8] = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((var_5), (((/* implicit */unsigned char) var_7))))), (((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */long long int) var_4))))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)4)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) -1353814792))));
                        }
                        /* vectorizable */
                        for (int i_9 = 2; i_9 < 18; i_9 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) var_7)) * (((/* implicit */int) var_1))))));
                            arr_34 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_37 [i_3] [i_4] [6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)13745)) ? (3239073327U) : (3239073327U)));
                            var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)162))));
                            var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned int) -221012426)) : (3239073327U))), (((/* implicit */unsigned int) min((-880185583), (((/* implicit */int) (short)19075)))))));
                        }
                        arr_38 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 1702091965)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (12066122122417307409ULL)))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : ((-(((/* implicit */int) var_2))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(134217664)))) || (((/* implicit */_Bool) (~(-8835142595504266922LL))))));
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            for (int i_12 = 0; i_12 < 19; i_12 += 3) 
            {
                for (long long int i_13 = 0; i_13 < 19; i_13 += 3) 
                {
                    {
                        arr_48 [i_2] [i_2] [i_2] [i_2] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(min((var_10), (((/* implicit */long long int) var_4))))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))), (((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (min((((/* implicit */long long int) (~(var_4)))), ((+(var_9)))))));
                        var_23 &= ((/* implicit */short) min((((var_6) % (((/* implicit */long long int) var_4)))), ((-(var_3)))));
                    }
                } 
            } 
        } 
    }
    var_24 = ((/* implicit */unsigned char) min((max((max((var_9), (((/* implicit */long long int) var_1)))), ((~(var_6))))), (var_6)));
    var_25 |= ((/* implicit */short) min((((((/* implicit */_Bool) min((var_3), (var_3)))) ? (var_10) : (max((((/* implicit */long long int) (unsigned char)237)), (-2675593458401638047LL))))), ((~(max((var_3), (var_6)))))));
    /* LoopNest 2 */
    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
    {
        for (int i_15 = 4; i_15 < 17; i_15 += 1) 
        {
            {
                var_26 &= ((/* implicit */short) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)66))))) : (min((var_9), (((/* implicit */long long int) var_7))))));
                /* LoopSeq 3 */
                for (signed char i_16 = 0; i_16 < 18; i_16 += 1) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_17 = 1; i_17 < 17; i_17 += 2) 
                    {
                        arr_61 [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2048)) ? (880185582) : (-221012415)));
                        var_27 |= (((_Bool)1) ? (((/* implicit */long long int) 4294967276U)) : (-2675593458401638047LL));
                        var_28 |= (-(var_10));
                    }
                    /* vectorizable */
                    for (unsigned char i_18 = 3; i_18 < 14; i_18 += 4) 
                    {
                        arr_65 [i_14] [i_15] [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))));
                        arr_66 [i_16] [i_16] [i_15] [i_16] [i_18] [16U] = var_4;
                    }
                    arr_67 [i_14] [i_14] [i_16] [i_16] = min((var_9), (var_10));
                    arr_68 [i_14 + 1] [i_16] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((-880185583), (((/* implicit */int) (short)9868))))) ? ((+(((/* implicit */int) (unsigned short)65533)))) : ((+((-(((/* implicit */int) (signed char)0))))))));
                    var_29 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4323455642275676160LL)) ? (((/* implicit */int) (unsigned short)120)) : (-1))) == (((/* implicit */int) max(((short)5140), ((short)-25098))))));
                }
                for (int i_19 = 3; i_19 < 16; i_19 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_20 = 0; i_20 < 18; i_20 += 4) 
                    {
                        var_30 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) -1)) ^ (max((-1LL), (((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) (unsigned char)66)))))))));
                        arr_73 [i_14] [i_19] = ((/* implicit */_Bool) ((((var_3) & (((/* implicit */long long int) ((/* implicit */int) var_2))))) + ((-(max((var_6), (var_9)))))));
                        arr_74 [6LL] [i_19] [i_19] [i_20] = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)72))))))) ? (min((((/* implicit */long long int) (+(var_4)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_10))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_21 = 0; i_21 < 18; i_21 += 2) 
                        {
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 939419508)) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) (unsigned char)165))))) : (var_10)));
                            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                            arr_79 [i_19] [i_15] [i_19 + 2] [i_19 + 2] [i_20] [i_21] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) + (var_3)));
                        }
                        var_33 = ((/* implicit */short) (+((~(5730663474433371714LL)))));
                    }
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_9), (((/* implicit */long long int) var_0))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                }
                for (signed char i_22 = 1; i_22 < 16; i_22 += 3) 
                {
                    arr_83 [i_14] [(short)3] [i_22] &= ((/* implicit */_Bool) var_8);
                    var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
                    arr_84 [i_22] [i_15] [i_15 - 4] [i_14] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) + (max((min((var_10), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 221012417)))))))));
                }
            }
        } 
    } 
}
