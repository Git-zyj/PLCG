/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138965
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
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (short)16383))));
    var_19 = max((3115081214U), (4294967295U));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_4 [(short)7] [i_0] = ((((1179886075U) * (365238491U))) * ((+(1179886081U))));
        var_20 = ((((/* implicit */_Bool) var_5)) ? (((unsigned int) 3717417099U)) : (arr_2 [i_0]));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = (short)-5279;
        /* LoopSeq 3 */
        for (short i_2 = 3; i_2 < 18; i_2 += 2) 
        {
            var_21 *= (-(((((/* implicit */_Bool) (short)5297)) ? (1813304257U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-5257))))));
            arr_10 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (short)26494)) ? (((/* implicit */int) (short)-193)) : (((/* implicit */int) (short)32767))));
            arr_11 [i_1] |= ((/* implicit */short) (+((~(3764724576U)))));
        }
        for (short i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 32767U)) ? (arr_2 [i_3]) : (3115081213U)));
            arr_15 [(short)4] [i_3] |= arr_2 [11U];
            var_23 = ((/* implicit */short) arr_12 [i_1] [i_1] [i_3]);
        }
        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            var_24 = ((/* implicit */short) ((arr_1 [i_1] [i_4]) << (((arr_18 [i_4]) - (866333015U)))));
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 19; i_5 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_6 = 2; i_6 < 18; i_6 += 4) 
                {
                    arr_23 [i_1] [i_4] = var_16;
                    arr_24 [i_1] = ((((/* implicit */_Bool) (short)-1186)) ? (arr_12 [i_1] [i_4] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_5]))));
                }
                for (unsigned int i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    arr_28 [i_7] [(short)6] [i_7] [i_7] = ((/* implicit */short) ((((((/* implicit */int) (short)7651)) < (((/* implicit */int) (short)-1182)))) && (((/* implicit */_Bool) (short)-1158))));
                    var_25 = ((((/* implicit */_Bool) arr_26 [i_1] [(short)18] [i_5] [i_1] [i_4])) ? (((894195544U) - (arr_2 [(short)17]))) : (3383262121U));
                    arr_29 [i_7] [i_4] [i_4] [i_5] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_1] [i_4] [i_7])) / (((/* implicit */int) (short)8851))));
                    arr_30 [i_7] [i_4] [i_7] = ((unsigned int) arr_25 [18U] [i_7] [i_5] [i_7]);
                    var_26 = ((((/* implicit */_Bool) 2657652800U)) ? (arr_19 [i_1]) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_13 [i_4] [i_7]))))));
                }
                for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    var_27 = (+(arr_2 [i_1]));
                    arr_33 [i_8] [i_8] [i_5] [i_4] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) var_1)) / (((/* implicit */int) arr_22 [i_1] [7U] [i_5]))));
                    arr_34 [i_1] [i_1] [i_1] = ((unsigned int) 254621169U);
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))) && (((/* implicit */_Bool) arr_26 [i_1] [i_4] [i_5] [i_5] [i_8])))))));
                    arr_35 [i_1] [i_4] [(short)10] [i_1] = arr_26 [i_1] [i_4] [i_5] [i_5] [i_8];
                }
                var_29 = 1427988559U;
                var_30 += ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-32758)) == (((/* implicit */int) (short)-32434)))) || (((/* implicit */_Bool) ((unsigned int) 4294967295U)))));
                var_31 = ((((/* implicit */_Bool) arr_2 [i_1])) ? (2831226914U) : (arr_2 [i_1]));
            }
            arr_36 [i_4] [i_4] [i_1] |= ((((((/* implicit */_Bool) 3840245894U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_1] [i_1] [i_1] [i_1] [i_4]))) : (4294967295U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)13495)) > (((/* implicit */int) var_12)))))));
            var_32 = arr_5 [i_1];
        }
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 2) 
    {
        var_33 = ((((/* implicit */_Bool) (short)29391)) ? ((+(arr_40 [(short)15] [i_9]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) < (var_6))))));
        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_9])) * (((/* implicit */int) var_8))))) ? (((/* implicit */int) (short)32754)) : (((/* implicit */int) (short)9814))));
        arr_41 [i_9] [i_9] |= ((unsigned int) 1303583726U);
    }
    /* vectorizable */
    for (short i_10 = 0; i_10 < 20; i_10 += 3) 
    {
        arr_44 [i_10] [i_10] = ((((/* implicit */_Bool) (short)-5299)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_10]))) : (1502002628U));
        /* LoopSeq 4 */
        for (unsigned int i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            var_35 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_45 [i_10])))) ? (((742236388U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-24526))))) : (((((/* implicit */_Bool) var_6)) ? (1427988562U) : (var_17)))));
            arr_47 [i_10] [2U] [2U] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_43 [i_10] [i_11]) : (4294967295U)))) ? (((unsigned int) (short)1186)) : (arr_39 [i_11] [i_11]));
        }
        for (short i_12 = 0; i_12 < 20; i_12 += 3) 
        {
            var_36 ^= ((/* implicit */unsigned int) (~(((((/* implicit */int) var_5)) - (((/* implicit */int) (short)26338))))));
            var_37 = (-(arr_39 [i_10] [i_10]));
        }
        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 2) 
        {
            var_38 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-1))));
            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) arr_48 [i_10] [i_13] [i_13])) ? (arr_48 [i_10] [i_10] [i_10]) : (arr_48 [i_10] [13U] [i_13])));
        }
        for (unsigned int i_14 = 2; i_14 < 19; i_14 += 3) 
        {
            arr_55 [i_10] = 134217727U;
            var_40 = ((((((/* implicit */_Bool) var_10)) ? (arr_42 [i_14]) : (1303583732U))) << (((((((/* implicit */_Bool) 511U)) ? (arr_40 [3U] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7494))))) - (1022171437U))));
        }
        var_41 = ((/* implicit */unsigned int) max((var_41), ((~(((((/* implicit */_Bool) var_7)) ? (2390338421U) : (933604452U)))))));
    }
    /* vectorizable */
    for (unsigned int i_15 = 0; i_15 < 18; i_15 += 1) 
    {
        arr_58 [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) (short)4673)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [18U] [4U] [18U]))) : ((+(arr_6 [10U] [13U])))));
        var_42 = ((/* implicit */unsigned int) max((var_42), (((((/* implicit */_Bool) arr_51 [(short)14])) ? (arr_56 [i_15]) : (arr_12 [i_15] [i_15] [i_15])))));
        var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) arr_26 [i_15] [i_15] [i_15] [i_15] [i_15]))));
        var_44 = ((/* implicit */short) ((unsigned int) (+(1956797031U))));
        var_45 = (~(1212085694U));
    }
}
