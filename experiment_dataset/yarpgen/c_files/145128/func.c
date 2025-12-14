/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145128
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        arr_3 [11U] [i_0] = (unsigned short)5109;
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) % (16967661134289497838ULL)));
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    arr_12 [i_1] [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)32))));
                    arr_13 [i_1] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) (short)18672))));
                    arr_14 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? ((-2147483647 - 1)) : (9)));
                }
                arr_15 [19] [i_2] = ((/* implicit */_Bool) var_10);
            }
            /* LoopSeq 3 */
            for (unsigned char i_4 = 1; i_4 < 20; i_4 += 2) 
            {
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) 2272398349U))));
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) ^ ((-(-4349972745082240258LL)))));
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_20 [i_0] [i_4] [i_4 + 1] [i_5] = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) var_7))))) - ((~(-5435469547200994248LL)))));
                    var_19 = ((/* implicit */_Bool) (+(var_6)));
                }
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                var_20 = ((/* implicit */int) (~(var_15)));
                arr_23 [i_6] [i_6] = (~(-1523767032));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */long long int) (-(var_1)))) + ((~(-1159304177119662221LL))))))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                arr_27 [i_1] [(signed char)10] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) - ((+(var_11)))));
                var_22 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (var_15)))));
                arr_28 [i_0] [i_0] [i_7] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) + (((/* implicit */int) var_5))));
            }
            arr_29 [10LL] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */int) (unsigned char)242))))) ? (((((/* implicit */int) var_5)) & (((/* implicit */int) (unsigned char)73)))) : (((/* implicit */int) ((((/* implicit */_Bool) 16967661134289497810ULL)) && (((/* implicit */_Bool) var_6)))))));
            /* LoopNest 3 */
            for (long long int i_8 = 3; i_8 < 18; i_8 += 4) 
            {
                for (signed char i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    for (int i_10 = 3; i_10 < 18; i_10 += 1) 
                    {
                        {
                            arr_38 [(signed char)6] [i_0] [(signed char)1] [i_0] [i_8] [i_8] [i_10] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (var_0))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)121)))));
                            arr_39 [i_0] [i_1] [i_8] [i_9] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)64)) & (((/* implicit */int) (short)-16384))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((var_15) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))))))));
        }
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9601867603860881610ULL)) ? (((/* implicit */unsigned long long int) (~(var_13)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (1479082939420053784ULL)))));
        var_25 &= ((/* implicit */unsigned long long int) (short)-1);
    }
    for (int i_11 = 0; i_11 < 21; i_11 += 4) /* same iter space */
    {
        arr_44 [i_11] = ((/* implicit */unsigned char) min((((((((/* implicit */int) (unsigned char)75)) % (190437415))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) var_4))))))));
        var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) (unsigned char)255)))))));
        arr_45 [(unsigned char)20] [i_11] = ((/* implicit */int) (((+(((((/* implicit */_Bool) -6670002183281224741LL)) ? (819606172U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)9)))));
        arr_46 [i_11] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) : (max((4153670029436045897ULL), (((/* implicit */unsigned long long int) (unsigned char)195))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        arr_50 [i_12] = ((/* implicit */unsigned int) (unsigned char)163);
        var_27 = ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_14)));
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)63481)) ? (6497783201197798800LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48229)))));
        /* LoopSeq 2 */
        for (long long int i_13 = 1; i_13 < 16; i_13 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_14 = 3; i_14 < 17; i_14 += 1) 
            {
                var_29 = ((((((/* implicit */int) (unsigned char)2)) >= (((/* implicit */int) var_14)))) ? (16967661134289497831ULL) : (16967661134289497799ULL));
                arr_56 [i_12] [i_13] [i_12] = (~(((/* implicit */int) (_Bool)1)));
                arr_57 [i_12] [i_13 - 1] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) 14293074044273505719ULL)) ? (var_13) : (3314632016U)));
                var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) -1523767032))));
                arr_58 [i_12] [i_12] [i_12] = ((/* implicit */_Bool) var_13);
            }
            for (unsigned short i_15 = 0; i_15 < 18; i_15 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_16 = 2; i_16 < 16; i_16 += 2) 
                {
                    arr_64 [i_12] [i_12] = ((/* implicit */unsigned int) var_10);
                    arr_65 [0] [i_13] [i_12] [i_16] = ((/* implicit */short) (signed char)-66);
                }
                for (unsigned short i_17 = 0; i_17 < 18; i_17 += 3) 
                {
                    arr_68 [i_15] [i_13] [i_12] [i_13] = ((/* implicit */unsigned int) (signed char)-122);
                    arr_69 [i_12] [i_13] [i_12] [i_12] [i_17] [i_17] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_5)))) ? (1795918823) : (var_12)));
                    /* LoopSeq 1 */
                    for (unsigned int i_18 = 0; i_18 < 18; i_18 += 1) 
                    {
                        arr_73 [17LL] [i_12] = (-(8764345211673534562ULL));
                        var_31 *= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)78))))) & (((/* implicit */int) (signed char)27))));
                        var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 6670002183281224741LL))));
                        arr_74 [i_12] [i_12] [i_18] = ((/* implicit */int) var_13);
                    }
                }
                /* LoopSeq 2 */
                for (unsigned char i_19 = 0; i_19 < 18; i_19 += 1) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_20 = 0; i_20 < 18; i_20 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(var_13)))) <= (((((/* implicit */_Bool) var_2)) ? (-4572018567946663206LL) : (((/* implicit */long long int) var_2))))));
                        arr_81 [i_12] [4ULL] [i_15] [(signed char)2] [i_20] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (4294967295U)));
                        var_34 &= ((/* implicit */signed char) -7246399645053137954LL);
                        arr_82 [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-16828))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                    }
                    for (unsigned short i_21 = 2; i_21 < 17; i_21 += 1) 
                    {
                        arr_87 [i_12] [i_13 + 2] [i_15] [i_15] [i_15] [i_15] &= (+((-(((/* implicit */int) (unsigned char)208)))));
                        arr_88 [i_12] [i_13] [i_12] [(unsigned char)16] = ((/* implicit */short) ((((/* implicit */unsigned long long int) 3916770928U)) ^ (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                    }
                    for (unsigned short i_22 = 0; i_22 < 18; i_22 += 4) 
                    {
                        arr_91 [i_12] [i_13] [i_12] [(_Bool)1] [i_22] [i_12] = (+(1121905881));
                        var_35 = ((/* implicit */unsigned short) (+(var_1)));
                    }
                    arr_92 [i_12] [i_15] [i_13] [i_12] = (!(((/* implicit */_Bool) (-(329721423U)))));
                    /* LoopSeq 1 */
                    for (short i_23 = 0; i_23 < 18; i_23 += 1) 
                    {
                        arr_95 [i_19] [i_19] [i_12] [i_13 + 1] [i_12] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_15)))) || (((/* implicit */_Bool) (short)-16801))));
                        var_36 = ((/* implicit */unsigned short) 6670002183281224753LL);
                        arr_96 [i_12] [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1195535237)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_10))));
                        arr_97 [i_12] [i_23] [i_19] [i_15] [i_15] [(unsigned char)4] [i_12] = (~(((/* implicit */int) (signed char)20)));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_24 = 0; i_24 < 18; i_24 += 2) 
                    {
                        var_37 = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) var_5))));
                        arr_100 [i_15] &= ((/* implicit */long long int) var_2);
                    }
                    for (long long int i_25 = 0; i_25 < 18; i_25 += 3) 
                    {
                        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)22)) : (((/* implicit */int) var_8))));
                        var_39 -= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_0)));
                        arr_103 [i_12] [7U] [7U] [i_19] [(unsigned char)14] = ((/* implicit */unsigned char) ((((/* implicit */int) var_14)) - (((/* implicit */int) ((((/* implicit */_Bool) -1)) && (((/* implicit */_Bool) var_11)))))));
                    }
                }
                for (unsigned long long int i_26 = 0; i_26 < 18; i_26 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_27 = 0; i_27 < 18; i_27 += 2) 
                    {
                        var_40 = ((/* implicit */unsigned int) ((12086834458326290195ULL) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)47)))))));
                        arr_108 [i_27] [i_12] [i_12] [i_26] [i_12] [(_Bool)1] [i_12] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_12)) + (var_9)));
                        arr_109 [i_12] [i_13] [(signed char)9] [16LL] [i_12] [i_27] [i_12] = ((/* implicit */unsigned char) var_11);
                        var_41 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)70)) * (((/* implicit */int) var_8))));
                    }
                    var_42 -= ((/* implicit */unsigned long long int) ((1372231085U) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(var_8)))))));
                }
                var_43 = ((/* implicit */unsigned char) ((13746179308973757852ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))))));
            }
            var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)157)) ^ (((/* implicit */int) (signed char)9))))) != (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))));
        }
        for (int i_28 = 0; i_28 < 18; i_28 += 2) 
        {
            arr_112 [i_12] [i_12] [i_12] = (+((+(var_13))));
            arr_113 [i_12] = ((((var_8) ? (((/* implicit */int) (short)32767)) : (-1130291951))) < (-782716323));
        }
    }
    for (unsigned char i_29 = 0; i_29 < 18; i_29 += 1) 
    {
        arr_116 [i_29] = ((/* implicit */int) var_1);
        arr_117 [i_29] [i_29] = ((/* implicit */short) ((var_15) & (((/* implicit */unsigned long long int) var_11))));
        arr_118 [i_29] = (((+(((((/* implicit */_Bool) -2207427330585452970LL)) ? (1372231094U) : (2275372387U))))) >> (((/* implicit */int) var_3)));
    }
}
