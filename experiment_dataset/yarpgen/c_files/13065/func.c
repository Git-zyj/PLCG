/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13065
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */long long int) max((min((((/* implicit */unsigned short) var_8)), (arr_2 [i_0 + 1]))), (arr_2 [i_0 + 1])));
        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)41)))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 3; i_2 < 12; i_2 += 1) 
        {
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2]))) + (var_0)));
            arr_10 [i_1] [6] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-11503))));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    {
                        arr_17 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1])) ? (arr_16 [i_1]) : (((/* implicit */int) (unsigned char)214))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) var_1)))) : ((~(((/* implicit */int) var_8))))));
                        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)215)) ? (((((/* implicit */_Bool) (unsigned char)20)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)52998))))) : (((/* implicit */long long int) ((unsigned int) (unsigned char)214)))));
                    }
                } 
            } 
            arr_18 [2LL] [2LL] &= ((/* implicit */long long int) (unsigned short)12537);
        }
        for (unsigned char i_5 = 4; i_5 < 11; i_5 += 2) 
        {
            arr_23 [i_1] [i_1] = (unsigned char)192;
            arr_24 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_5 - 4])) != (((/* implicit */int) arr_7 [i_5]))));
        }
        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            arr_28 [i_1] [i_6] [i_6] = ((/* implicit */_Bool) (unsigned char)41);
            /* LoopSeq 1 */
            for (int i_7 = 1; i_7 < 12; i_7 += 4) 
            {
                var_13 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1] [i_6] [i_7])) ? (((/* implicit */int) (unsigned short)27)) : (((/* implicit */int) (unsigned char)63))))) ? (arr_22 [i_7] [i_1 + 1] [i_1 + 1]) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) + (2147483647))) << (((((((/* implicit */int) var_9)) + (21199))) - (16))))))));
                arr_31 [i_1] [i_6] [i_1] [i_1] = arr_7 [i_6];
            }
            arr_32 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)110)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)189)))));
            arr_33 [i_1] = ((/* implicit */unsigned char) ((_Bool) arr_7 [i_1 + 1]));
        }
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 13; i_8 += 4) 
        {
            /* LoopNest 3 */
            for (int i_9 = 4; i_9 < 11; i_9 += 3) 
            {
                for (long long int i_10 = 0; i_10 < 13; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_45 [i_1 + 1] [i_1] [i_9 - 4] [i_9 + 2] [i_10] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)63))) : (arr_35 [i_1] [i_8] [i_9 + 2])))) || (((/* implicit */_Bool) arr_40 [i_11] [i_1] [i_1]))));
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? ((~(((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))));
                            arr_46 [i_1 + 1] [i_1] [i_8] [i_1] [11LL] [i_10] [i_11] = ((/* implicit */unsigned short) arr_20 [i_1] [i_1 + 1] [i_9 - 4]);
                            arr_47 [i_1] [i_1] [i_1] [i_1 + 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)63)))))));
                            arr_48 [i_1] [i_1] [7LL] [i_1 + 1] = (-(((long long int) arr_1 [i_1] [i_1])));
                        }
                    } 
                } 
            } 
            var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_1] [i_1] [(short)5])) ? (((((/* implicit */_Bool) 184544129576474086LL)) ? (((/* implicit */int) (short)21116)) : (((/* implicit */int) (unsigned char)241)))) : (((/* implicit */int) arr_20 [i_1 + 1] [i_1 + 1] [i_1 + 1]))));
        }
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            for (short i_13 = 0; i_13 < 13; i_13 += 1) 
            {
                {
                    arr_56 [7U] [i_1] [i_13] = ((/* implicit */_Bool) ((unsigned char) arr_36 [1LL] [i_1 + 1]));
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (unsigned short)2603))));
                    /* LoopSeq 2 */
                    for (unsigned char i_14 = 0; i_14 < 13; i_14 += 2) 
                    {
                        arr_61 [i_1] [i_12] [i_13] [i_1] = ((/* implicit */int) (unsigned char)64);
                        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((long long int) (unsigned char)187)))));
                        arr_62 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((0LL) | (arr_14 [i_1 + 1] [i_12] [i_13] [i_14])));
                    }
                    for (int i_15 = 0; i_15 < 13; i_15 += 3) 
                    {
                        arr_66 [i_15] [i_15] [i_1] [i_1] [i_1 + 1] [i_1 + 1] = ((/* implicit */short) ((unsigned char) ((var_0) >= (((/* implicit */long long int) ((/* implicit */int) var_8))))));
                        arr_67 [i_1 + 1] [7LL] [7LL] [i_1] = ((/* implicit */short) (((_Bool)1) || (((/* implicit */_Bool) (short)21122))));
                        var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_12] [i_12]))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)21)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_15 [i_15] [i_12] [i_13] [i_1] [i_12] [i_1]))));
                    }
                }
            } 
        } 
    }
    var_19 = ((/* implicit */_Bool) var_4);
    var_20 = var_4;
}
