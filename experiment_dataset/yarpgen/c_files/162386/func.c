/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162386
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
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_10 *= ((/* implicit */_Bool) arr_1 [12]);
        var_11 = ((/* implicit */unsigned int) (signed char)78);
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            arr_4 [i_0] = ((/* implicit */short) ((unsigned int) (-(((/* implicit */int) arr_3 [i_0])))));
            arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) var_7);
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                var_12 = ((/* implicit */long long int) ((_Bool) arr_3 [i_0]));
                arr_8 [i_0] = arr_7 [i_0] [i_0];
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-77)) ? (arr_7 [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((-1066409996590004989LL) / (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-79)))));
            }
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    arr_14 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (unsigned short)23765);
                    var_14 = ((/* implicit */unsigned int) arr_12 [i_0 + 1]);
                    arr_15 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1] = ((/* implicit */long long int) ((unsigned int) ((short) arr_11 [i_1] [i_3] [i_1])));
                    var_15 = ((unsigned int) ((unsigned char) arr_2 [i_3]));
                    arr_16 [i_0] [i_3] = ((/* implicit */short) var_4);
                }
                for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_16 = ((/* implicit */long long int) (~(arr_7 [i_0] [i_0])));
                        var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_6] [i_5] [i_3] [i_1])) ? (((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */int) (unsigned short)41762)) : (((/* implicit */int) (signed char)-78)))) : (arr_12 [i_0 - 1])));
                        var_18 = ((/* implicit */unsigned short) ((unsigned int) (unsigned short)32764));
                    }
                    var_19 = (+((~(0LL))));
                    var_20 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned int) (signed char)-57)));
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned int) arr_22 [i_0] [i_0] [i_0] [i_0]);
                        var_22 = ((/* implicit */signed char) ((short) (unsigned short)37728));
                    }
                }
                arr_24 [i_0] [i_0] = ((/* implicit */unsigned short) arr_11 [i_0 - 1] [i_0 + 1] [i_0 + 1]);
            }
            /* LoopSeq 1 */
            for (short i_8 = 1; i_8 < 12; i_8 += 1) 
            {
                var_23 -= ((long long int) arr_23 [i_0 - 1] [i_0 - 1] [i_0] [10U] [i_8 + 1]);
                arr_28 [0ULL] [i_1] [0ULL] |= ((/* implicit */int) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */unsigned long long int) arr_13 [i_1] [i_8] [i_1] [i_8])) : (arr_19 [i_0] [i_1] [i_8 + 3] [i_8 + 3] [(unsigned short)14] [2U])));
            }
            arr_29 [i_0] [i_0] = ((signed char) (unsigned short)44004);
        }
        for (short i_9 = 0; i_9 < 15; i_9 += 4) 
        {
            arr_32 [i_0] [i_9] = ((/* implicit */long long int) (+(1212654792U)));
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) arr_12 [i_9]))));
            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((unsigned int) var_9)))));
            arr_33 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned short) ((9LL) & (((/* implicit */long long int) 3619215057U)))));
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_36 [(short)10] |= ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned int) 1030817116)));
            /* LoopSeq 1 */
            for (short i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0 + 1])) || (((/* implicit */_Bool) arr_12 [i_0 - 1])))))));
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-51)) || (((/* implicit */_Bool) -1979951342594333822LL))));
                /* LoopSeq 2 */
                for (unsigned int i_12 = 0; i_12 < 15; i_12 += 4) 
                {
                    /* LoopSeq 1 */
                    for (int i_13 = 0; i_13 < 15; i_13 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned short) ((long long int) 12273136U));
                        var_29 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0])) : (arr_31 [i_13] [i_0] [i_10])))));
                        arr_46 [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_41 [i_0] [i_12] [i_0] [i_0] [i_13] [i_0 + 1]))));
                    }
                    /* LoopSeq 1 */
                    for (short i_14 = 0; i_14 < 15; i_14 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2934801726920573744ULL)) ? (((/* implicit */unsigned int) 750879620)) : (((unsigned int) (unsigned short)17398))));
                        arr_49 [i_14] [i_0] [9U] [i_10] [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) ((unsigned long long int) var_1)));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_42 [i_0] [i_0] [i_10] [i_11] [i_0] [i_14])) : (arr_27 [i_0] [i_0 + 1])));
                        var_32 = ((/* implicit */unsigned int) ((_Bool) arr_1 [i_0]));
                    }
                    arr_50 [i_11] [i_11] [i_11] [i_12] [i_12] |= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_10 [i_12] [i_11] [i_10] [i_0]))))));
                    var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) var_1))));
                }
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    var_34 -= ((/* implicit */long long int) (signed char)78);
                    arr_54 [i_0] [i_11] [i_10] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 14LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-16))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))));
                    arr_55 [i_15] [i_0] [i_11] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) var_7);
                }
            }
        }
        for (long long int i_16 = 3; i_16 < 13; i_16 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
            {
                arr_61 [i_17] [i_0] [i_0] = ((/* implicit */int) ((((_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_17] [i_17] [i_17 + 1] [i_0] [i_17 + 1]))) : (((var_0) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                var_35 = ((/* implicit */long long int) var_2);
            }
            for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 1) 
            {
                var_36 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_0])) ? (16777216U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [i_0] [i_0] [i_18]))))));
                arr_66 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_2);
            }
            for (signed char i_19 = 1; i_19 < 14; i_19 += 4) 
            {
                var_37 = ((/* implicit */long long int) ((unsigned short) ((unsigned int) arr_3 [i_0])));
                arr_69 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_52 [i_0] [i_16] [i_19] [i_0] [i_0]);
                var_38 = (!(((/* implicit */_Bool) var_0)));
            }
            var_39 = ((/* implicit */unsigned short) max((var_39), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [(short)2] [(short)2] [i_16 + 1])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [(short)2]))) : (((((/* implicit */_Bool) arr_7 [(signed char)0] [(signed char)0])) ? (1136240667U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_20 = 0; i_20 < 11; i_20 += 4) 
    {
        var_40 = ((/* implicit */unsigned long long int) var_6);
        var_41 *= ((/* implicit */unsigned char) ((unsigned short) arr_34 [i_20]));
        arr_72 [i_20] = var_3;
        /* LoopSeq 2 */
        for (long long int i_21 = 0; i_21 < 11; i_21 += 4) 
        {
            var_42 ^= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)65519)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-24672)))));
            var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_74 [i_20] [i_21] [i_20])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) arr_23 [i_21] [i_21] [i_21] [i_21] [8U])) ? (arr_62 [i_21] [i_21] [i_20] [i_20]) : (arr_40 [i_21])))));
        }
        for (unsigned int i_22 = 1; i_22 < 7; i_22 += 4) 
        {
            arr_81 [i_20] [i_20] [i_20] = ((/* implicit */unsigned int) ((unsigned char) arr_40 [i_20]));
            var_44 = ((/* implicit */unsigned long long int) ((long long int) -42LL));
            arr_82 [i_20] [i_20] [i_20] = ((/* implicit */_Bool) var_0);
        }
    }
    var_45 *= ((/* implicit */_Bool) var_5);
    var_46 = ((/* implicit */short) (signed char)-41);
    var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 12273119U)))) : (min((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) % (var_7))), (((/* implicit */unsigned int) ((unsigned short) var_9)))))));
}
