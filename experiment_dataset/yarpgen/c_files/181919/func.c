/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181919
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
    var_17 = ((/* implicit */long long int) var_2);
    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (~(((((/* implicit */int) (signed char)-2)) - (((/* implicit */int) (unsigned short)96))))))), ((~(max((((/* implicit */unsigned int) (signed char)-32)), (1920U)))))));
    var_19 += ((/* implicit */unsigned int) var_13);
    var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) var_16))) % (8558341784687071759LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_12)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [(_Bool)0] [i_0 + 1] = ((/* implicit */long long int) var_8);
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    for (long long int i_4 = 2; i_4 < 17; i_4 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) max((var_21), ((!(((/* implicit */_Bool) ((1908U) << (((2752346784U) - (2752346783U))))))))));
                            arr_15 [(short)6] [(short)6] [(_Bool)1] [(short)6] [i_3] [i_4] &= ((/* implicit */unsigned short) (+(((var_11) << (((((/* implicit */int) var_3)) - (96)))))));
                        }
                    } 
                } 
            } 
            var_22 = (~(((/* implicit */int) (signed char)114)));
            var_23 &= ((/* implicit */long long int) (~(max((min((var_11), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) (short)7551))))));
            arr_16 [i_0] = ((/* implicit */signed char) (+((+(((/* implicit */int) (unsigned short)50581))))));
        }
        for (short i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */short) ((((((((/* implicit */int) var_1)) << (((((-7225721420471286906LL) + (7225721420471286934LL))) - (19LL))))) | (((/* implicit */int) var_5)))) != ((-(((/* implicit */int) ((var_12) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
            var_25 -= ((/* implicit */long long int) min((((((/* implicit */_Bool) (-(-7225721420471286916LL)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))), (((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) max(((+(((/* implicit */int) var_7)))), ((-(((/* implicit */int) var_13))))));
                        var_27 &= ((/* implicit */short) ((((/* implicit */int) var_7)) > (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_12)))) && (((/* implicit */_Bool) (+(((/* implicit */int) (short)15848))))))))));
                    }
                } 
            } 
        }
        for (short i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
        {
            arr_29 [i_0 + 3] [i_8] |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((2813328583U) * (var_10)))), ((-(((((/* implicit */_Bool) 2752346784U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (14810825220093029423ULL)))))));
            arr_30 [i_8] [15LL] [(short)13] = ((/* implicit */unsigned int) ((((((((/* implicit */int) var_2)) << (((((/* implicit */int) (unsigned short)42388)) - (42372))))) + (((/* implicit */int) var_13)))) << (min((((/* implicit */int) var_6)), (((((/* implicit */int) var_2)) * (((/* implicit */int) var_2))))))));
        }
        for (short i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_10 = 0; i_10 < 21; i_10 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        var_28 = ((/* implicit */_Bool) (+(((/* implicit */int) var_1))));
                        var_29 = ((/* implicit */_Bool) -7225721420471286893LL);
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_4)) : (7225721420471286887LL)));
                        arr_41 [i_0] [i_11] [(unsigned char)6] = 2719262177U;
                        arr_42 [(unsigned short)2] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (7225721420471286902LL)));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        arr_46 [i_10] [12U] [i_10] [12U] [i_0] [i_9] [i_0] = ((/* implicit */short) 2752346774U);
                        var_31 = ((/* implicit */unsigned char) 288229826395897856ULL);
                    }
                    /* vectorizable */
                    for (short i_14 = 2; i_14 < 17; i_14 += 2) 
                    {
                        var_32 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2752346805U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_6))))) ? ((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)10658)) - (10617))))) : (((/* implicit */long long int) var_10))));
                        arr_49 [i_14] [16LL] [16LL] = ((/* implicit */_Bool) (+(((/* implicit */int) var_1))));
                        arr_50 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) 16904426408253903037ULL)) || (((/* implicit */_Bool) (signed char)-109))))));
                        var_33 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)52))));
                    }
                    var_34 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_8)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (max((((/* implicit */long long int) var_1)), (-7225721420471286901LL)))));
                    var_35 &= ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) (short)17727))) + (((8372224U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))), (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)189)), (var_15))))));
                }
                var_36 = var_13;
            }
            for (long long int i_15 = 0; i_15 < 21; i_15 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 4) 
                {
                    arr_58 [i_0] [i_0] [i_0] [i_0 - 2] [i_15] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) var_2)))) || (((/* implicit */_Bool) max((((/* implicit */short) var_6)), ((short)30535))))))) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) == (var_12))))));
                    var_37 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) var_6)), (4277049611U)))));
                    var_38 *= ((/* implicit */short) ((((/* implicit */long long int) (-(((/* implicit */int) var_2))))) + (max((min((-7225721420471286917LL), (-576477993118289110LL))), (((/* implicit */long long int) (unsigned short)4654))))));
                    arr_59 [(unsigned char)15] [i_9] [i_15] [(unsigned char)15] = ((/* implicit */short) ((((((/* implicit */_Bool) var_11)) && (var_13))) && (((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned int) var_16)))))));
                }
                for (unsigned char i_17 = 2; i_17 < 20; i_17 += 4) 
                {
                    var_39 -= ((/* implicit */long long int) var_14);
                    arr_63 [i_0] [i_0] [i_15] [i_17] = ((/* implicit */unsigned long long int) (_Bool)1);
                }
                /* LoopNest 2 */
                for (short i_18 = 4; i_18 < 18; i_18 += 1) 
                {
                    for (unsigned long long int i_19 = 1; i_19 < 17; i_19 += 4) 
                    {
                        {
                            var_40 = ((/* implicit */_Bool) 9223372036854775780LL);
                            var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) (~(min(((-(var_9))), (((/* implicit */unsigned int) var_3)))))))));
                        }
                    } 
                } 
            }
            arr_70 [i_0] [19LL] = (!(((/* implicit */_Bool) ((((/* implicit */int) var_16)) | (var_15)))));
        }
        var_42 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) ((var_4) << (((/* implicit */int) var_13))))), (-7225721420471286873LL))), (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))));
        /* LoopNest 2 */
        for (signed char i_20 = 0; i_20 < 21; i_20 += 3) 
        {
            for (long long int i_21 = 1; i_21 < 20; i_21 += 3) 
            {
                {
                    var_43 = ((/* implicit */signed char) var_13);
                    var_44 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_16))))), (min((((/* implicit */unsigned long long int) var_14)), (var_11)))));
                }
            } 
        } 
        var_45 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((1542620491U) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) + (((((/* implicit */_Bool) ((2905552506U) % (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) ? ((-(63U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)17705)))))));
        arr_75 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) 7263268908715495713LL)) / (var_11))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    }
    for (unsigned char i_22 = 2; i_22 < 21; i_22 += 2) 
    {
        var_46 = ((/* implicit */_Bool) ((((((var_9) >> (((((/* implicit */int) var_16)) - (239))))) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_15) : (((/* implicit */int) var_16)))))));
        arr_80 [i_22] [i_22] = ((/* implicit */unsigned short) (+(max((var_12), (((/* implicit */unsigned long long int) var_2))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_23 = 0; i_23 < 22; i_23 += 1) 
        {
            var_47 = ((/* implicit */_Bool) ((var_11) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)81)))));
            arr_83 [(unsigned char)21] = ((/* implicit */unsigned int) (unsigned short)17434);
            var_48 = ((/* implicit */unsigned long long int) (unsigned char)111);
        }
        /* LoopNest 3 */
        for (unsigned short i_24 = 4; i_24 < 18; i_24 += 1) 
        {
            for (unsigned short i_25 = 2; i_25 < 20; i_25 += 1) 
            {
                for (long long int i_26 = 0; i_26 < 22; i_26 += 4) 
                {
                    {
                        arr_93 [i_24] [i_26] [i_25 - 2] [i_24] [i_22 - 2] [i_24] = ((/* implicit */unsigned short) (!(((var_11) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                        var_49 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(9223372036854775807LL)))) || (((/* implicit */_Bool) (((_Bool)1) ? (17917677U) : (17917694U))))));
                        var_50 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_5), (((/* implicit */short) var_7)))))) - ((-(4277049593U))))))));
                        arr_94 [i_24] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) (_Bool)1)) : (max((((/* implicit */int) (_Bool)1)), (-1226541032)))));
                    }
                } 
            } 
        } 
        arr_95 [0U] = ((/* implicit */signed char) var_6);
    }
}
