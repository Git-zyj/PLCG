/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119342
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
    var_15 = ((/* implicit */_Bool) var_12);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 2) /* same iter space */
    {
        arr_2 [7U] = var_1;
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) (unsigned char)202);
                    var_17 = ((/* implicit */int) -2693828830223042338LL);
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */_Bool) max((max((var_2), (var_2))), (max((max((13U), (((/* implicit */unsigned int) (short)-24393)))), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))));
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) 7681155458897556582LL))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        arr_12 [i_0] [i_0] [(short)1] [(short)1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) 1757472149U)) ? (7681155458897556562LL) : (((/* implicit */long long int) 0U)))) : (1516071839566531915LL));
                        /* LoopSeq 4 */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                        {
                            var_20 = var_6;
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) var_13)) : (7681155458897556596LL))))));
                            arr_15 [i_0 + 1] [(_Bool)1] [i_2] [i_4] [i_2] = ((/* implicit */unsigned int) (short)2458);
                        }
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_0))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2] = ((/* implicit */unsigned char) var_1);
                        }
                        for (int i_7 = 1; i_7 < 10; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) var_1))));
                            arr_23 [i_0] [i_1] = ((/* implicit */short) var_10);
                        }
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) min((var_24), (var_11)));
                            arr_28 [3U] [i_1] [i_2] [i_2] [i_4] [i_8] = ((/* implicit */unsigned int) 7882769893397884597LL);
                            arr_29 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [(signed char)3] = ((/* implicit */short) (((_Bool)0) ? (-5314992306076977664LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                        }
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) 0U)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-25214)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_9 = 3; i_9 < 10; i_9 += 4) /* same iter space */
                    {
                        arr_32 [i_0] [i_9] [i_2] = ((/* implicit */unsigned int) var_4);
                        arr_33 [i_9] = ((/* implicit */_Bool) (unsigned char)34);
                        var_26 += (unsigned char)255;
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-6550387069789412074LL)));
                        var_28 = ((/* implicit */unsigned char) var_2);
                    }
                    for (unsigned int i_10 = 3; i_10 < 10; i_10 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */_Bool) min((6550387069789412086LL), (((/* implicit */long long int) var_8))));
                        var_30 = (short)-25214;
                        var_31 ^= ((/* implicit */unsigned char) -7681155458897556582LL);
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_11 = 2; i_11 < 8; i_11 += 2) /* same iter space */
    {
        var_32 = ((/* implicit */unsigned char) var_4);
        /* LoopNest 3 */
        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned char i_14 = 3; i_14 < 10; i_14 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_15 = 2; i_15 < 10; i_15 += 1) 
                        {
                            arr_51 [i_11] [i_12] [i_13] [i_14] [i_15 - 2] = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (549755813887LL))));
                            var_33 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_3)) : (4248004467728850842LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 227847463803513126LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)52))) : (1322567518U))))));
                            var_34 = var_7;
                            arr_52 [i_12] [(_Bool)1] [i_11] |= ((/* implicit */signed char) var_14);
                            arr_53 [i_13] = ((/* implicit */short) -549755813888LL);
                        }
                        arr_54 [i_11] [i_12] [i_13] = ((/* implicit */unsigned int) 2097151LL);
                        var_35 = ((/* implicit */unsigned char) var_5);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_16 = 0; i_16 < 11; i_16 += 1) 
        {
            for (long long int i_17 = 2; i_17 < 9; i_17 += 1) 
            {
                {
                    var_36 *= ((/* implicit */unsigned int) var_4);
                    var_37 = ((/* implicit */unsigned int) var_5);
                }
            } 
        } 
    }
}
