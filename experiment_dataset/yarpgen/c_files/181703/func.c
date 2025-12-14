/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181703
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (+(var_3)))) ? (((((/* implicit */unsigned long long int) 4294967295U)) + (5906706663653205022ULL))) : (((/* implicit */unsigned long long int) ((var_3) / (((/* implicit */long long int) 255U))))))))))));
                var_18 = ((/* implicit */short) (-((~(50331648U)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_2 = 1; i_2 < 13; i_2 += 2) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 3512751143U)) ? (16777215) : (33554431)));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            var_19 = ((/* implicit */short) arr_5 [14ULL] [i_3]);
            arr_13 [i_2] = ((/* implicit */short) (~(arr_11 [i_2 + 2] [i_2 + 1] [i_2 + 2])));
        }
        for (int i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 1) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (+((-(((/* implicit */int) arr_22 [i_6] [i_6 + 1] [i_6 + 1] [i_6])))))))));
                        arr_23 [i_2] [i_2] [i_4] [i_4] [i_2] [i_2] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 18010000462970880LL)) ? (((4244635647U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-22077))))) : (min((1U), (((/* implicit */unsigned int) (short)32767))))))));
                        /* LoopSeq 1 */
                        for (short i_7 = 2; i_7 < 14; i_7 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned int) ((unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) arr_26 [i_2] [i_4] [i_5 - 1] [i_4] [i_7]))))));
                            var_22 *= ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) arr_21 [i_2] [i_4] [(unsigned char)14] [(unsigned char)14])))));
                            arr_27 [i_7] [i_2] [i_2] [(short)6] [i_2] [i_2] = ((/* implicit */unsigned int) max((min((arr_2 [i_7 - 1] [i_6 + 2]), (arr_2 [i_7 + 2] [i_6 + 1]))), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (short)-22077)))))))));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_8 = 2; i_8 < 12; i_8 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    var_23 = ((/* implicit */_Bool) arr_20 [1U] [i_4] [i_8] [i_9] [i_8] [i_4]);
                    var_24 += ((/* implicit */short) arr_14 [i_9]);
                }
                arr_34 [i_2] [i_4] [5U] [i_2] = ((/* implicit */short) ((unsigned long long int) ((int) 2731362613U)));
                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (max((1563604682U), (((/* implicit */unsigned int) 16777211)))) : (((unsigned int) ((((/* implicit */_Bool) arr_1 [i_8 + 1])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_2 [i_2] [i_8 - 2]))))));
            }
        }
        for (int i_10 = 0; i_10 < 16; i_10 += 4) /* same iter space */
        {
            arr_38 [i_2] [i_2] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) (+(2785988096U)))), (max((6884697109059901104ULL), (((/* implicit */unsigned long long int) var_2)))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-1)), (16777215)))) ? (((/* implicit */unsigned int) arr_37 [i_2] [i_10])) : (arr_33 [i_10] [i_10] [i_2] [(short)11] [i_10] [i_2]))))));
            var_26 = ((/* implicit */signed char) (+((-(-1176398820)))));
            var_27 = ((/* implicit */long long int) arr_9 [i_2 + 1] [11LL]);
        }
        for (int i_11 = 0; i_11 < 16; i_11 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                arr_47 [i_2] [i_2] [i_12] = ((/* implicit */long long int) (+(((/* implicit */int) var_8))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_13 = 2; i_13 < 12; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 1; i_14 < 14; i_14 += 1) 
                    {
                        var_28 |= ((/* implicit */long long int) arr_49 [5LL] [i_13] [i_13 - 2] [(_Bool)1] [(_Bool)1] [5LL]);
                        arr_54 [15U] [i_11] [(signed char)3] [i_2] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) 1508979200U)) ? (1925243425U) : (1563604661U)));
                        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (~(((/* implicit */int) arr_32 [i_11] [i_11] [i_13 - 2] [i_14])))))));
                        var_30 -= ((/* implicit */unsigned long long int) (-(arr_14 [i_2 + 1])));
                        var_31 ^= ((/* implicit */short) (-(((/* implicit */int) arr_22 [i_14 + 1] [i_13] [i_11] [i_2]))));
                    }
                    var_32 = ((/* implicit */short) ((unsigned int) arr_3 [i_13 - 1] [i_2 + 3] [i_2]));
                    arr_55 [i_2] [i_13 + 4] = arr_21 [i_13 + 1] [i_13 + 3] [i_13 + 4] [i_13 + 4];
                }
                var_33 += ((/* implicit */unsigned char) (((-(-16777215))) % ((-(((/* implicit */int) (short)22077))))));
            }
            /* vectorizable */
            for (unsigned int i_15 = 2; i_15 < 15; i_15 += 2) 
            {
                var_34 = ((/* implicit */unsigned long long int) arr_42 [i_2]);
                arr_58 [i_2] [i_2] = ((unsigned int) arr_43 [i_15 + 1] [i_15 - 2] [i_15 + 1] [i_15 + 1]);
                /* LoopSeq 1 */
                for (signed char i_16 = 2; i_16 < 13; i_16 += 4) 
                {
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_12)) & (arr_11 [i_11] [i_15] [i_16])));
                    arr_61 [i_2 + 2] [i_2] [(short)4] [i_16] [(short)14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 0U))));
                }
            }
            arr_62 [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) (+(6884697109059901104ULL))));
            arr_63 [i_2] [i_11] [i_2] = ((/* implicit */unsigned int) var_16);
        }
    }
    var_36 = ((/* implicit */unsigned int) max((var_9), (max((max((((/* implicit */unsigned long long int) var_3)), (var_16))), (((/* implicit */unsigned long long int) ((int) var_13)))))));
}
