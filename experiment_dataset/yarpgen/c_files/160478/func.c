/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160478
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
    var_18 = var_3;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_7 [(short)5] [(short)5] [i_2] = ((/* implicit */short) ((((((unsigned long long int) (short)-32759)) ^ (arr_5 [i_0] [i_1] [i_1] [i_2]))) >> (((var_5) - (2462764653511975975ULL)))));
                    var_19 |= arr_6 [4ULL] [(short)21] [i_1] [i_1];
                }
            } 
        } 
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 1) 
        {
            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) 8646911284551352320ULL))));
            var_21 *= (short)23005;
        }
        for (unsigned int i_4 = 1; i_4 < 22; i_4 += 2) 
        {
            arr_14 [i_0] [i_4 - 1] = ((max(((~(72057594037927935ULL))), (var_5))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14123))));
            /* LoopNest 2 */
            for (short i_5 = 4; i_5 < 22; i_5 += 3) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    {
                        arr_23 [i_6] [i_5] = ((/* implicit */short) arr_5 [i_0] [12U] [18U] [18U]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            var_22 *= ((/* implicit */short) (!(((/* implicit */_Bool) 10209281075530499436ULL))));
                            arr_26 [i_0] [i_0] [i_6] [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)23037))));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_15 [i_6] [i_4 - 1])) + (2147483647))) >> (((var_14) - (139586154712558949ULL))))))));
                        }
                        arr_27 [i_6] [i_5] = ((/* implicit */short) 15ULL);
                        arr_28 [i_0] [i_0] [i_5 - 4] [i_6] = ((/* implicit */unsigned int) arr_22 [i_0] [i_4 + 1] [i_4] [i_0]);
                        var_24 = ((/* implicit */short) var_17);
                    }
                } 
            } 
            arr_29 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_22 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1]))));
        }
        for (unsigned long long int i_8 = 2; i_8 < 21; i_8 += 4) 
        {
            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) max((((short) (~(236217802U)))), (var_8))))));
            /* LoopNest 3 */
            for (unsigned int i_9 = 0; i_9 < 23; i_9 += 2) 
            {
                for (short i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) 0ULL);
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) arr_37 [i_8 + 1] [i_8] [i_9] [i_8 + 1] [(short)3] [i_8 - 2])) : (var_13)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (arr_37 [i_8 + 1] [i_8 + 2] [i_8 + 2] [i_8 + 1] [i_11] [i_8])))) : (min((((/* implicit */unsigned long long int) 4026531840U)), (7150407979443496583ULL)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 2) 
        {
            arr_44 [i_12] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (10209281075530499441ULL))) >= (min((var_6), (((/* implicit */unsigned long long int) arr_37 [i_0] [i_0] [i_0] [i_0] [i_12] [6U])))))))));
            /* LoopSeq 1 */
            for (unsigned int i_13 = 0; i_13 < 23; i_13 += 2) 
            {
                arr_47 [i_0] [i_12] = ((/* implicit */unsigned int) (~((-(var_6)))));
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) 36028797018963967ULL)) ? (((((/* implicit */_Bool) max((18374686479671623681ULL), (var_17)))) ? (max((((/* implicit */unsigned int) (short)4227)), (var_3))) : (arr_25 [i_0] [i_0] [i_12] [i_12] [i_13] [i_13]))) : (1173964687U)));
                /* LoopSeq 2 */
                for (short i_14 = 0; i_14 < 23; i_14 += 2) 
                {
                    arr_51 [i_14] = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (2607611505U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16207)))))) ? (((/* implicit */unsigned long long int) 437578850U)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22992))) : (var_14))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (var_17)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_12] [i_12]))) : (arr_5 [i_0] [i_0] [i_0] [i_0]))));
                    arr_52 [i_0] [i_0] [i_0] [i_14] [i_0] [i_14] = ((/* implicit */unsigned int) (+(var_11)));
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)3804)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_15) : (9799832789158199284ULL)))) ? (((var_17) | (arr_24 [i_0] [i_14] [i_13] [6ULL] [i_13] [6ULL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) var_10))))))));
                }
                for (short i_15 = 0; i_15 < 23; i_15 += 2) 
                {
                    var_30 = ((/* implicit */short) max((min((var_7), (((/* implicit */unsigned int) (short)-26)))), ((~(1988279921U)))));
                    var_31 = ((/* implicit */unsigned int) var_6);
                    arr_56 [i_0] [i_0] [1ULL] [i_15] = ((/* implicit */short) min((281406257233920ULL), (((/* implicit */unsigned long long int) 2571551766U))));
                }
            }
            arr_57 [i_0] [i_0] [i_12] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_3)) ? ((~(var_15))) : (((/* implicit */unsigned long long int) 268435443U)))), (((/* implicit */unsigned long long int) (~(arr_35 [i_0] [i_12]))))));
            var_32 = ((/* implicit */short) (~(min((((/* implicit */unsigned long long int) arr_33 [17U])), (((((/* implicit */_Bool) 2578569620U)) ? (10048545756222515495ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14123)))))))));
            /* LoopNest 2 */
            for (unsigned int i_16 = 0; i_16 < 23; i_16 += 3) 
            {
                for (unsigned long long int i_17 = 1; i_17 < 22; i_17 += 1) 
                {
                    {
                        var_33 = ((/* implicit */unsigned long long int) ((short) max((((((/* implicit */_Bool) arr_58 [i_0])) ? (7262034783156179320ULL) : (var_17))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4294967291U))))))));
                        var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))))) > (min((0ULL), (((/* implicit */unsigned long long int) 437578850U)))))))));
                    }
                } 
            } 
        }
    }
}
