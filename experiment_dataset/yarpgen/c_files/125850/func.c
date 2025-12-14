/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125850
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
    var_18 = ((/* implicit */signed char) (((~((~(9223372036854775807LL))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (min((((/* implicit */int) var_1)), (var_14))) : (((var_0) / (((/* implicit */int) (short)32754)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [2LL]))) <= (var_15))))) - (((((/* implicit */_Bool) 696215132)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))))));
            /* LoopSeq 4 */
            for (signed char i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) -331650297);
                /* LoopSeq 4 */
                for (short i_3 = 4; i_3 < 13; i_3 += 1) 
                {
                    arr_13 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (-(-536870912)));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((8908245218174268168LL) >= (((((/* implicit */_Bool) 696215150)) ? (-2497172492121341113LL) : (((/* implicit */long long int) -867528135)))))))));
                }
                for (unsigned int i_4 = 2; i_4 < 10; i_4 += 3) 
                {
                    arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(arr_6 [(signed char)13] [i_1] [i_2])));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-32767))))) ? (((((/* implicit */_Bool) 5008110382124197473LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62873))) : (-2497172492121341089LL))) : (((((/* implicit */_Bool) -2004315778)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [12]))) : (-9223372036854775806LL)))));
                    arr_19 [i_0] [i_1 - 1] [i_0] [i_2 - 1] [(short)3] [i_4] = ((/* implicit */_Bool) (~(arr_17 [i_0] [i_4] [i_4 + 3] [i_4 + 4])));
                }
                for (short i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((1065151889408LL) / (((/* implicit */long long int) var_13))))) ? ((~(((/* implicit */int) (unsigned char)46)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_8)))))));
                    var_23 = ((/* implicit */int) ((unsigned long long int) arr_22 [i_0] [i_1 + 2] [i_1] [i_2 - 1] [i_1] [i_5]));
                }
                for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    arr_26 [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_23 [i_0] [i_0] [i_6]) == (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) -867528128))))));
                    arr_27 [i_0] [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9120381607858249268ULL)) ? (((/* implicit */int) (unsigned short)21224)) : (((/* implicit */int) (signed char)-98))))) && (((/* implicit */_Bool) (~(var_5))))));
                }
                var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0)))))));
            }
            for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                arr_31 [i_0] [i_0] = ((/* implicit */signed char) (~((((_Bool)1) ? (var_9) : (((/* implicit */long long int) var_0))))));
                var_25 = ((/* implicit */unsigned short) (~(((var_15) + (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
            }
            for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 3) 
            {
                /* LoopSeq 3 */
                for (long long int i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    var_26 *= ((/* implicit */signed char) (!(arr_24 [i_0] [i_1] [i_8] [i_8 + 2] [i_8])));
                    arr_37 [i_0] [i_8 + 2] [i_9] = ((/* implicit */long long int) var_16);
                    arr_38 [(unsigned short)4] [i_0] [i_0] [i_0] = (~(((((/* implicit */int) (unsigned short)21244)) << (((var_9) + (4196901196163761812LL))))));
                    var_27 = ((/* implicit */int) ((var_11) + (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_1 + 3] [i_8])))));
                }
                for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                {
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (~(-16384))))));
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_40 [i_0] [i_1] [i_0] [i_10 - 1] [i_8 + 1] [i_11])) ? (((/* implicit */int) arr_40 [i_0] [1ULL] [i_0] [i_10 - 1] [i_8 - 1] [i_10])) : (((/* implicit */int) arr_15 [i_8 + 3]))));
                        arr_43 [i_11] [i_1] [i_0] [i_8 + 1] [i_11] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_0] [i_10] [i_0])) << (((/* implicit */int) (_Bool)1))))) != (var_15)));
                    }
                    var_30 = ((/* implicit */_Bool) (short)-1);
                }
                for (long long int i_12 = 1; i_12 < 12; i_12 += 2) 
                {
                    var_31 *= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) <= ((~(((/* implicit */int) arr_16 [i_12] [i_12] [i_12] [(unsigned short)10]))))));
                    var_32 -= ((/* implicit */unsigned char) (~(-4526334359742589228LL)));
                    var_33 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (((-2763709168869647217LL) | (((/* implicit */long long int) ((/* implicit */int) (short)30)))))));
                }
                arr_47 [i_8] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) arr_11 [i_0] [i_1])))));
                arr_48 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((var_16) ? (var_14) : (arr_14 [i_8]))) & (arr_6 [i_0] [i_1 + 1] [i_8])));
                /* LoopSeq 2 */
                for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 2) 
                {
                    var_34 = ((/* implicit */_Bool) var_11);
                    var_35 = ((((/* implicit */_Bool) (~(6933509237494981865ULL)))) ? (((unsigned long long int) arr_2 [i_0] [i_0])) : (((/* implicit */unsigned long long int) (-(var_2)))));
                }
                for (unsigned short i_14 = 2; i_14 < 12; i_14 += 3) 
                {
                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) arr_36 [8LL] [i_1] [i_8] [i_14 + 2] [i_14 + 1]))) % (((/* implicit */int) arr_8 [i_0] [i_0] [i_1 + 2]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_15 = 3; i_15 < 10; i_15 += 3) 
                    {
                        arr_56 [i_0] [i_1] [i_8 + 2] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) < (var_15)));
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-24059)) * (((/* implicit */int) (short)248))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 0; i_16 < 14; i_16 += 2) 
                    {
                        var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_1]))) : (15983341U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL))))) : ((~(arr_5 [i_16] [i_1] [i_0])))));
                        arr_59 [i_0] [i_1 - 1] [i_8 + 3] [i_0] [i_16] [i_8] [i_16] = ((/* implicit */unsigned short) arr_20 [(unsigned short)1] [i_8] [i_8 + 3] [i_8 - 1] [(short)12] [i_0]);
                        var_39 = ((/* implicit */short) min((var_39), (((short) (short)12563))));
                    }
                    var_40 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) -1631144431)))) ? (((((/* implicit */_Bool) (unsigned char)216)) ? (15983342U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28085))))) : (((/* implicit */unsigned int) ((int) var_7)))));
                    /* LoopSeq 3 */
                    for (unsigned int i_17 = 2; i_17 < 13; i_17 += 3) 
                    {
                        arr_62 [i_0] [i_0] [i_8 - 1] [i_0] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2028786795)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)58))) : ((~(17807217350742241871ULL)))));
                        arr_63 [i_1] [i_0] [(_Bool)0] [i_14] [i_17] = ((/* implicit */long long int) (-(((/* implicit */int) arr_7 [i_1] [i_0] [12LL] [12LL]))));
                        arr_64 [i_0] = ((/* implicit */short) arr_21 [i_0] [(unsigned short)3] [(unsigned short)3] [(unsigned short)3]);
                    }
                    for (int i_18 = 3; i_18 < 13; i_18 += 2) 
                    {
                        var_41 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_20 [i_18] [i_18 + 1] [i_18] [i_18] [i_18] [(unsigned char)10]))));
                        arr_68 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((561066814899021728LL) + (((/* implicit */long long int) ((/* implicit */int) var_10))))) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43130)))));
                        var_42 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_15 [i_18 + 1]))) ? (((((/* implicit */_Bool) arr_14 [i_8])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)40))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [(unsigned short)3]))))))));
                        arr_69 [i_0] [i_1] [i_0] [i_8 + 2] [i_14] [i_14] [i_18 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)10406)) ? (((/* implicit */int) (unsigned short)65523)) : (-1505861255)));
                    }
                    for (int i_19 = 2; i_19 < 13; i_19 += 3) 
                    {
                        var_43 = ((/* implicit */int) ((unsigned int) (~(var_2))));
                        arr_72 [i_0] [i_1 + 1] [i_0] [i_0] [i_19] = ((/* implicit */long long int) arr_23 [i_0] [i_0] [i_0]);
                    }
                }
            }
            for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
            {
                var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) ((((/* implicit */_Bool) 4526334359742589235LL)) ? (1618409864) : (var_0))))));
                var_45 *= ((/* implicit */long long int) -1618409842);
                arr_76 [i_20] [i_0] [i_20] [i_20 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_13))))));
                /* LoopSeq 1 */
                for (unsigned short i_21 = 2; i_21 < 12; i_21 += 3) 
                {
                    arr_79 [i_0] [i_0] [10] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -3618599775065080918LL)) ? (((/* implicit */unsigned long long int) ((int) var_10))) : (((unsigned long long int) (short)2854))));
                    arr_80 [i_0] [i_1] [i_1] [i_21 + 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1618409864)) ? (-1618409864) : (((/* implicit */int) (short)12133))));
                    arr_81 [(short)6] [i_1] [i_0] [i_1] [(signed char)0] [i_1] &= ((/* implicit */_Bool) 1055531162664960LL);
                }
                var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) (unsigned char)39))));
            }
        }
        var_47 = ((/* implicit */int) min((var_47), ((~(((/* implicit */int) (short)-18734))))));
    }
}
