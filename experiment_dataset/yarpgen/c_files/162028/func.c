/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162028
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
    var_15 = ((/* implicit */long long int) (+(((/* implicit */int) (short)-29284))));
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        var_16 = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) arr_1 [i_0])))) + (2147483647))) << (((((/* implicit */int) arr_1 [i_0])) - (41)))))) : (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) arr_1 [i_0])))) + (2147483647))) << (((((((/* implicit */int) arr_1 [i_0])) - (41))) - (139))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    var_17 = ((-8243952893731246341LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)128))));
                    var_18 = ((/* implicit */unsigned short) max((arr_5 [i_0] [i_0] [(unsigned short)10]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
                }
            } 
        } 
        var_19 = ((/* implicit */short) arr_6 [i_0] [i_0]);
    }
    for (signed char i_3 = 3; i_3 < 20; i_3 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            arr_13 [i_3] = ((/* implicit */int) ((((2473888874309960011ULL) >= (((/* implicit */unsigned long long int) var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)115))))) : (arr_12 [i_3] [i_3 - 1] [11ULL])));
            /* LoopSeq 3 */
            for (unsigned short i_5 = 3; i_5 < 22; i_5 += 4) 
            {
                var_20 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3 + 4])) && (((/* implicit */_Bool) var_1))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_7 [i_4]))) ? (arr_11 [i_4]) : (((/* implicit */int) (unsigned char)139))));
                /* LoopSeq 3 */
                for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)4095)) ? (((/* implicit */int) (short)15753)) : (1940776278)));
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_5 - 1])))))));
                }
                for (short i_7 = 2; i_7 < 20; i_7 += 1) 
                {
                    var_24 = arr_9 [i_5 - 1];
                    arr_21 [i_3] [i_4] [i_5] [i_7 - 2] [i_5] [i_5] = ((arr_18 [i_5 - 3] [i_4] [i_5] [(short)9] [i_7 + 1]) < (arr_18 [i_3 - 1] [i_4] [19] [i_7 + 3] [i_7 + 4]));
                }
                for (unsigned char i_8 = 3; i_8 < 21; i_8 += 2) 
                {
                    var_25 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26127))) <= (931865456U)));
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3 + 1]))) & ((~(6074667027802300161LL)))));
                        arr_26 [i_3 - 3] [i_5] [i_5 + 2] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned short) (~(arr_24 [i_9] [i_8] [i_5] [i_4] [i_3])));
                    }
                }
            }
            for (long long int i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 14356524122795898731ULL))));
                var_28 = ((/* implicit */unsigned char) (+(((arr_29 [i_10] [i_4]) % (var_5)))));
                var_29 = ((/* implicit */_Bool) (-(arr_7 [i_3 + 1])));
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    for (int i_12 = 0; i_12 < 24; i_12 += 3) 
                    {
                        {
                            arr_37 [i_3 - 1] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3]))) % (arr_17 [i_10] [i_4])));
                            arr_38 [i_3] [0LL] [i_4] [i_11] [i_12] = ((/* implicit */unsigned long long int) (~(arr_7 [(unsigned char)19])));
                            arr_39 [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) (unsigned short)26156);
                        }
                    } 
                } 
            }
            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
            {
                var_30 = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_3)) ^ (((arr_12 [i_3] [i_4] [i_3 + 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4096)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 1) 
                {
                    for (signed char i_15 = 1; i_15 < 23; i_15 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) (-(arr_11 [i_15 + 1])));
                            var_32 = ((/* implicit */unsigned char) arr_24 [i_15] [i_14] [i_13 + 1] [i_3] [i_3]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 21; i_16 += 4) 
                {
                    for (unsigned long long int i_17 = 2; i_17 < 22; i_17 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_11)) > (((((/* implicit */unsigned long long int) 931865446U)) / (9175256175907487946ULL)))));
                            arr_52 [i_17] [i_16] = ((/* implicit */int) arr_31 [i_3 + 4] [(signed char)3] [(short)8] [i_16] [i_16] [i_17 - 1]);
                            arr_53 [i_16] [i_16] [i_17] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)26138))));
                            var_34 *= ((/* implicit */long long int) ((arr_46 [i_3 + 4] [i_4] [i_17 - 2] [i_16 + 2] [i_17 - 2] [i_16]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_18 = 1; i_18 < 21; i_18 += 1) 
                {
                    var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) var_10))));
                    arr_58 [i_3] [i_3 - 3] [i_18] [i_18 - 1] [(unsigned short)15] [i_4] = ((/* implicit */unsigned char) ((arr_24 [i_3] [i_13 + 1] [i_13] [i_3 - 1] [i_13]) + (((/* implicit */int) var_10))));
                }
            }
        }
        var_36 *= ((/* implicit */_Bool) 63);
        /* LoopNest 2 */
        for (signed char i_19 = 0; i_19 < 24; i_19 += 1) 
        {
            for (unsigned short i_20 = 0; i_20 < 24; i_20 += 2) 
            {
                {
                    arr_64 [i_20] [i_19] [i_3 - 3] = arr_56 [i_3 + 2] [i_19] [i_20] [i_20];
                    var_37 = ((/* implicit */_Bool) ((short) (~(max((((/* implicit */unsigned long long int) arr_36 [i_19])), (131071ULL))))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned short i_21 = 2; i_21 < 23; i_21 += 2) 
    {
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            for (long long int i_23 = 0; i_23 < 24; i_23 += 1) 
            {
                {
                    var_38 = ((/* implicit */long long int) arr_60 [i_21] [(unsigned char)17] [i_23]);
                    /* LoopNest 2 */
                    for (signed char i_24 = 2; i_24 < 22; i_24 += 1) 
                    {
                        for (int i_25 = 0; i_25 < 24; i_25 += 1) 
                        {
                            {
                                var_39 = ((/* implicit */long long int) (-((+(((arr_17 [i_21] [i_22]) >> (((((-2147483644) - (-2147483640))) + (5)))))))));
                                arr_78 [i_24] [i_22] [i_23] [i_24] [i_23] [i_23] [i_22] = 23;
                                arr_79 [i_21] [i_22] [i_21 - 2] [i_24 - 1] [(unsigned short)16] [i_24] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_21] [i_23] [i_21] [i_24] [i_24] [17U]))))) && (((var_3) <= (arr_76 [i_21] [i_22] [i_23] [i_24] [11U] [i_22]))))));
                                var_40 = ((/* implicit */unsigned long long int) (~(min((arr_27 [i_21 - 1] [i_25] [i_23] [i_24]), (arr_27 [i_24] [i_25] [21U] [i_24 - 2])))));
                                var_41 = ((/* implicit */long long int) ((min((11ULL), (((/* implicit */unsigned long long int) arr_27 [i_24 - 2] [(_Bool)1] [i_24 + 1] [i_24 - 1])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                            }
                        } 
                    } 
                    arr_80 [i_22] = ((/* implicit */int) (+((-(arr_68 [i_21])))));
                    arr_81 [i_21] [i_22] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) (~(var_11)))) ? (((/* implicit */int) arr_25 [i_21] [i_21] [i_22] [i_21] [i_21])) : ((~(913944645)))));
                }
            } 
        } 
    } 
}
