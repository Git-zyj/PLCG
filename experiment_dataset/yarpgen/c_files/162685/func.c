/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162685
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_5)) == (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_1)) : (((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9402)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_15 += ((/* implicit */unsigned long long int) ((int) (short)-9402));
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            var_16 = ((/* implicit */int) max((var_16), (((((/* implicit */int) arr_2 [i_0] [i_0])) / (((/* implicit */int) arr_2 [i_1 - 1] [i_0]))))));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
            {
                var_17 -= ((/* implicit */long long int) (short)-9402);
                var_18 = ((int) var_12);
                var_19 = ((/* implicit */unsigned char) (-(arr_5 [i_1 - 1] [6] [2] [i_2])));
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))));
                    arr_8 [i_0] [5] [i_2] [5] = ((/* implicit */unsigned char) ((int) arr_7 [i_0] [i_0] [12ULL] [i_0] [i_0] [i_0]));
                }
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        arr_16 [i_0] [i_1 - 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [1] [3LL] [i_1 + 2] [8])) ? (arr_10 [i_5] [i_4] [13LL] [i_1 + 1]) : (arr_10 [i_5] [i_4] [i_1 + 1] [i_0])));
                        var_21 ^= ((/* implicit */unsigned long long int) (((-(var_5))) > (((/* implicit */long long int) var_7))));
                        var_22 = ((arr_15 [i_0] [i_1 - 2] [i_2] [i_4] [15LL]) & (arr_15 [i_0] [i_1 + 1] [12U] [12U] [12U]));
                        var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_1 - 1] [i_1] [i_0] [3LL]))));
                    }
                    arr_17 [i_4] [i_2] [i_2] [i_1 - 1] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)147))));
                    arr_18 [i_0] [i_0] [i_4] = (+(((/* implicit */int) arr_2 [i_1 - 2] [i_1 - 2])));
                }
            }
            for (long long int i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
            {
                arr_23 [1LL] [i_1] = ((/* implicit */int) arr_6 [i_0] [i_0] [i_6] [i_1 + 1]);
                arr_24 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_1 [i_1 - 1]);
            }
            var_24 = (~(arr_15 [i_0] [i_0] [i_1] [i_1] [i_1 - 2]));
        }
        for (unsigned int i_7 = 2; i_7 < 13; i_7 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_8 = 2; i_8 < 14; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 1; i_9 < 15; i_9 += 2) 
                {
                    for (int i_10 = 1; i_10 < 14; i_10 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)9401))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_8 - 1])) ? (((/* implicit */int) (unsigned char)103)) : ((+(var_0)))));
                        }
                    } 
                } 
                arr_34 [i_0] [(unsigned char)9] [i_0] [i_8] &= ((/* implicit */int) -4638714786112610801LL);
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 16; i_11 += 2) 
                {
                    var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_0] [i_8 + 2] [i_11]))));
                    /* LoopSeq 4 */
                    for (short i_12 = 1; i_12 < 14; i_12 += 2) 
                    {
                        var_28 += ((/* implicit */long long int) arr_39 [i_0] [8] [12] [i_11] [i_12 - 1]);
                        var_29 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_7] [2LL] [i_7] [13U])) ? (-8293758563762888220LL) : (((/* implicit */long long int) 730407046)))));
                        var_30 = (~(arr_30 [i_8 + 1] [i_12 - 1] [(unsigned char)8]));
                    }
                    for (unsigned long long int i_13 = 2; i_13 < 13; i_13 += 2) /* same iter space */
                    {
                        arr_45 [(short)9] [i_7 - 1] [11ULL] [i_7] [i_7] [i_7] = ((/* implicit */int) 1218128820U);
                        arr_46 [i_13] [i_13] [i_8 + 1] [i_13] = ((/* implicit */unsigned char) (+(var_5)));
                    }
                    for (unsigned long long int i_14 = 2; i_14 < 13; i_14 += 2) /* same iter space */
                    {
                        var_31 &= ((/* implicit */unsigned int) (~(1208799042722353086ULL)));
                        arr_51 [i_0] [i_7] [(unsigned char)12] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_11])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
                    }
                    for (unsigned long long int i_15 = 2; i_15 < 13; i_15 += 2) /* same iter space */
                    {
                        var_32 *= ((/* implicit */unsigned char) arr_5 [i_0] [i_7] [i_8] [i_8]);
                        arr_54 [i_0] [i_0] [i_0] = ((long long int) (+(arr_27 [i_0] [i_0])));
                    }
                }
            }
            var_33 &= ((/* implicit */long long int) ((unsigned char) 2181733735578622438LL));
            var_34 = ((/* implicit */unsigned char) ((unsigned long long int) arr_10 [i_7 + 3] [i_7 - 2] [i_7 - 2] [9]));
            var_35 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_25 [i_7] [1] [i_7 + 1]))));
            var_36 &= ((/* implicit */int) ((((/* implicit */_Bool) -264428395)) ? (var_13) : (((/* implicit */unsigned long long int) arr_42 [i_7 + 2] [(unsigned char)15] [i_7 - 2] [i_7] [i_7]))));
        }
    }
    /* vectorizable */
    for (int i_16 = 0; i_16 < 19; i_16 += 2) 
    {
        var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_55 [i_16])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-9406))))) : (arr_56 [i_16]))))));
        /* LoopSeq 1 */
        for (int i_17 = 3; i_17 < 17; i_17 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_18 = 0; i_18 < 19; i_18 += 2) 
            {
                for (unsigned char i_19 = 2; i_19 < 18; i_19 += 3) 
                {
                    {
                        arr_63 [5LL] [i_17] [1ULL] [i_19] = ((/* implicit */int) ((unsigned long long int) arr_60 [i_16] [i_16]));
                        var_38 = arr_60 [i_16] [i_16];
                        var_39 = ((/* implicit */unsigned int) (~(-8293758563762888220LL)));
                        var_40 = ((int) arr_62 [i_17 + 1]);
                    }
                } 
            } 
            arr_64 [i_16] &= ((/* implicit */int) (+(arr_61 [i_17 - 1] [i_17 - 1] [i_17 + 1])));
        }
    }
    var_41 = var_0;
    var_42 = ((/* implicit */unsigned long long int) var_4);
}
