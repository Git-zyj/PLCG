/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133168
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
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (var_4)))) >> (((/* implicit */int) (((+(((/* implicit */int) (short)8160)))) > (((/* implicit */int) var_2))))))))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (var_5)));
    var_13 -= ((((/* implicit */int) var_6)) & (((((/* implicit */_Bool) ((var_4) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? ((~(((/* implicit */int) (unsigned char)123)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))))));
    var_14 = ((/* implicit */_Bool) (short)7111);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3 - 2] [i_1] = (+((-(((/* implicit */int) (signed char)116)))));
                                var_15 = ((/* implicit */int) arr_12 [i_0] [i_1 - 1] [i_0] [i_3] [i_4 + 1]);
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (signed char)121))));
                                arr_15 [i_0] = ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)-1)))))));
                    var_17 = ((/* implicit */unsigned int) (unsigned char)220);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_5 = 2; i_5 < 16; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 4; i_6 < 16; i_6 += 4) 
            {
                for (short i_7 = 1; i_7 < 15; i_7 += 4) 
                {
                    {
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_7 + 1] [i_6] [i_6] [i_7])) ? (((/* implicit */int) arr_6 [i_7 - 1] [i_6] [i_6] [i_6 - 2])) : (((/* implicit */int) var_1)))))));
                        var_19 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_9 [i_5 - 2] [i_5 - 2] [i_5] [i_5 - 1] [i_5 - 1]))));
                        var_20 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-7108)) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_5] [i_6 - 1] [i_0] [i_0])))));
                        arr_24 [i_6] [i_6] [i_6] |= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_17 [i_0] [i_7])) ? (((/* implicit */int) (unsigned short)65472)) : (((/* implicit */int) (signed char)-121))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            arr_27 [i_0] [i_0] [i_8] = ((/* implicit */signed char) ((int) arr_0 [i_8]));
            var_21 = ((int) ((signed char) var_7));
            /* LoopSeq 1 */
            for (unsigned short i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                /* LoopSeq 1 */
                for (long long int i_10 = 1; i_10 < 14; i_10 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        arr_36 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_35 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1])) + (arr_23 [i_10 + 3] [i_10 + 3] [i_10] [i_10] [i_10 + 1] [i_10])));
                        var_22 = ((/* implicit */int) (signed char)-64);
                        arr_37 [i_8] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)192))));
                    }
                    /* LoopSeq 2 */
                    for (int i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_10 - 1] [i_10 - 1] [i_10 + 2] [i_10 + 2] [i_10 - 1])) ? (arr_35 [i_10 + 1] [i_10 + 2] [i_10 + 2] [i_10 + 2] [i_10 + 2]) : (arr_35 [i_10 + 2] [i_10 + 2] [i_10] [i_10] [i_10 - 1])));
                        var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)103)) ? (2147483647) : (arr_39 [i_0] [i_8] [i_9] [i_10] [i_8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_10 + 1] [i_10 + 3]))) : (((((/* implicit */_Bool) arr_23 [i_0] [i_8] [i_8] [i_9] [i_10] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_8] [i_0] [i_10] [i_12]))) : (var_7)))));
                    }
                    for (signed char i_13 = 1; i_13 < 13; i_13 += 4) 
                    {
                        var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_41 [i_0] [i_13 + 1] [i_10 - 1] [i_8] [i_0]))));
                        arr_44 [i_0] = ((/* implicit */signed char) arr_23 [i_0] [i_0] [i_0] [i_9] [i_10] [i_13 + 3]);
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_14 = 0; i_14 < 17; i_14 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned short) ((arr_18 [i_10 + 2] [i_0]) / ((-(6011604150127716775ULL)))));
                        var_27 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_41 [i_0] [i_8] [i_0] [i_0] [i_14])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_25 [i_10])))));
                    }
                }
                arr_47 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_8] [i_0]))) ^ (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)7111))) : (arr_23 [i_0] [i_0] [i_0] [i_8] [i_9] [i_9])))));
                /* LoopSeq 1 */
                for (short i_15 = 0; i_15 < 17; i_15 += 3) 
                {
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) arr_49 [i_9] [i_15])) : (arr_35 [i_8] [i_9] [i_9] [i_8] [i_0])))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) (signed char)116)))))))));
                    var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_33 [i_0] [i_8] [i_8] [i_0] [i_9] [i_0])))))));
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_41 [i_0] [i_9] [i_9] [i_8] [i_0])) ? (-1586329771) : (((/* implicit */int) arr_41 [i_0] [i_8] [i_8] [i_9] [i_9]))));
                }
            }
            arr_50 [i_0] = (~(arr_2 [i_0]));
        }
    }
}
