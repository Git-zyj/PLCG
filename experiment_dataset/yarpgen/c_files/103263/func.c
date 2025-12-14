/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103263
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [(_Bool)1] [4ULL] = ((/* implicit */unsigned long long int) ((((((var_1) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)-116)) + (174))) - (57))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_2)))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_1] [i_1] [i_2 - 1] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1] [i_2 - 1] [i_2 - 1])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9))))));
                    arr_11 [10] [i_1] [i_2] [i_1] = ((/* implicit */short) ((7209997590199430726ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-109)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (415329149U))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) arr_8 [i_0] [i_3]);
                        arr_16 [i_0] [i_1] [i_2] [i_0] = ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_0));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        arr_21 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 1])) != (((/* implicit */int) arr_13 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_1] [i_2 - 1]))));
                        arr_22 [i_4] [i_1] [i_2 - 1] [i_4] [i_1] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [(unsigned char)1]))));
                        arr_23 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_2 - 1] [i_2 - 1] [i_0] [i_4])) - (((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_1] [i_0] [i_4]))));
                    }
                }
            } 
        } 
        arr_24 [14U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0])))));
        arr_25 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((((/* implicit */_Bool) var_4)) ? (arr_8 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (25) : (var_8))))));
        arr_26 [i_0] = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) var_5)) : ((~(((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
    {
        arr_29 [i_5] = ((/* implicit */int) max((((/* implicit */long long int) arr_7 [i_5])), ((~(387902086394849992LL)))));
        arr_30 [i_5] = (((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 7209997590199430727ULL)) ? (((((/* implicit */_Bool) arr_5 [0U] [i_5] [0U])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((16415401232377921371ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5])))))))));
        arr_31 [i_5] [i_5] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((arr_18 [i_5]) + (2147483647))) >> (((arr_18 [i_5]) + (459760829)))))), ((+((+(-9223372036854775799LL)))))));
        arr_32 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((3490223874U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61637)))))) ? (max((((/* implicit */unsigned long long int) ((unsigned int) var_4))), (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_5]))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            arr_36 [i_5] [i_5] [i_5] = ((((/* implicit */int) ((unsigned char) max((arr_14 [i_5] [i_5] [i_6] [i_5] [i_6]), (((/* implicit */unsigned int) (_Bool)1)))))) << (min((((/* implicit */long long int) 23U)), (((((/* implicit */long long int) var_8)) / (17179869183LL))))));
            arr_37 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
            /* LoopSeq 2 */
            for (unsigned short i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                arr_41 [i_5] [i_6] [i_7] = ((/* implicit */_Bool) var_6);
                arr_42 [i_7] [i_7] [i_5] [i_5] = ((/* implicit */_Bool) ((var_9) ? ((((~(((/* implicit */int) (unsigned char)232)))) + (min((var_8), (((/* implicit */int) (short)2113)))))) : (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 1 */
                for (short i_8 = 0; i_8 < 14; i_8 += 4) 
                {
                    arr_46 [i_6] [i_7] = ((/* implicit */signed char) ((long long int) arr_43 [i_6] [i_6] [i_6] [i_6]));
                    arr_47 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) max((((arr_19 [i_5] [i_6] [i_7] [i_8]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_6]))))), (min((var_7), (((/* implicit */unsigned long long int) arr_7 [i_6]))))));
                    arr_48 [i_7] [i_7] [i_6] &= ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                }
                arr_49 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) (~(var_7))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-14953)), (4294967295U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_6] [i_7] [i_7]))) ^ (2281552939696764180ULL)))));
            }
            for (short i_9 = 1; i_9 < 13; i_9 += 2) 
            {
                arr_53 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), (arr_1 [i_5] [i_6])))) % (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5] [i_6] [i_9 - 1] [i_6]))))))), (((/* implicit */unsigned long long int) arr_27 [i_5]))));
                /* LoopSeq 2 */
                for (short i_10 = 1; i_10 < 12; i_10 += 4) 
                {
                    arr_58 [i_5] [i_6] [8LL] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(33554431)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_10] [i_6] [i_6] [i_5]))))) : (((/* implicit */int) (!((_Bool)0))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-4034)) + (2147483647))) >> (((min((arr_56 [i_5] [i_6] [i_6] [i_10]), (((/* implicit */unsigned long long int) var_8)))) - (15330083225847798083ULL)))))) : (((unsigned long long int) arr_2 [i_5] [i_5]))));
                    arr_59 [i_6] [i_6] [i_6] [i_10 + 1] = ((/* implicit */_Bool) (((-(((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-31367))) : (3490223877U))))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 17179869198LL))))))));
                    arr_60 [i_5] [i_6] [i_9] [i_10] = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) (unsigned short)59677)))));
                }
                for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 2) 
                {
                    arr_65 [i_5] [i_5] [i_5] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_5] [i_5])) ? (((((/* implicit */_Bool) arr_61 [i_9] [i_9 - 1] [i_9 + 1] [i_9 + 1] [i_9])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_9 - 1] [i_9 - 1] [i_9] [i_9 + 1] [i_9]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)59))) > (-9223372036854775807LL)))))));
                    arr_66 [i_9] [i_11] = ((int) ((_Bool) arr_12 [i_5] [i_11] [i_9 - 1] [i_11]));
                }
                arr_67 [i_5] [i_6] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_0))) | (((/* implicit */int) ((signed char) arr_0 [i_9 - 1])))));
            }
            arr_68 [i_5] [i_5] = arr_62 [i_5] [i_5] [i_6] [i_6] [i_6] [i_6];
        }
    }
    /* LoopNest 3 */
    for (unsigned long long int i_12 = 4; i_12 < 13; i_12 += 4) 
    {
        for (unsigned int i_13 = 0; i_13 < 15; i_13 += 3) 
        {
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                {
                    arr_75 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) 260060404647753462ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_12] [i_13] [i_14 + 1] [i_12])) ? (min((((/* implicit */long long int) arr_70 [i_12 + 1])), (17179869167LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)21)))))))) : (((((/* implicit */unsigned long long int) max((((/* implicit */int) var_2)), (var_8)))) - (((0ULL) + (((/* implicit */unsigned long long int) var_8))))))));
                    arr_76 [i_12] [i_13] = ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_12 + 1] [i_12 - 2] [i_14 + 1] [i_12 + 1])))))) / (((((/* implicit */_Bool) arr_9 [i_12 - 1] [i_12 - 3] [i_13] [i_14 + 1])) ? (2764349171U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54408))))));
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */unsigned int) ((unsigned long long int) max(((unsigned char)250), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-4043))))))));
    var_11 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) -682818701))))) | (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1012)) ? (3490223874U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) || (((/* implicit */_Bool) (unsigned char)44)))))));
    var_12 |= ((/* implicit */long long int) 14070579591331564359ULL);
}
