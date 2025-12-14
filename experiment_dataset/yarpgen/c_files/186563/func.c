/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186563
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
    var_18 = var_13;
    var_19 = ((/* implicit */int) var_8);
    var_20 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */int) var_11);
        var_21 = ((/* implicit */signed char) var_7);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) var_16))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */signed char) var_2);
                }
            } 
        } 
        var_23 ^= ((/* implicit */unsigned char) var_16);
    }
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) var_14))));
        var_25 = ((/* implicit */unsigned char) var_16);
    }
    for (unsigned char i_4 = 4; i_4 < 10; i_4 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_5 = 1; i_5 < 9; i_5 += 4) 
        {
            var_26 = ((/* implicit */signed char) var_17);
            var_27 *= var_8;
            arr_19 [i_5] = ((/* implicit */_Bool) var_11);
        }
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) /* same iter space */
                {
                    arr_26 [i_4 - 3] [i_8] [i_7] [i_8] = var_8;
                    arr_27 [i_4] [i_6] [i_7] [i_8] = ((/* implicit */short) var_10);
                }
                for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */signed char) var_2);
                    var_29 = ((/* implicit */unsigned char) var_16);
                    arr_30 [(short)6] [3] [i_7] = ((/* implicit */unsigned short) var_2);
                    /* LoopSeq 1 */
                    for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) var_13))));
                        arr_33 [i_4] [i_6] [6U] [i_9] [i_10] [i_7] = ((/* implicit */signed char) var_8);
                        arr_34 [(unsigned short)7] [i_7] [i_4] [i_9] [(signed char)0] = ((/* implicit */unsigned char) var_3);
                    }
                }
                /* vectorizable */
                for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
                {
                    arr_37 [i_4] [i_6] [i_7] [i_7] [i_11] = ((/* implicit */unsigned int) var_8);
                    var_31 = ((/* implicit */unsigned long long int) var_1);
                    var_32 = ((/* implicit */unsigned char) var_13);
                    arr_38 [i_4] = ((/* implicit */short) var_7);
                }
                arr_39 [i_4] = ((/* implicit */signed char) var_7);
            }
            var_33 -= ((/* implicit */signed char) var_13);
            arr_40 [i_6] [(unsigned short)10] = ((/* implicit */int) var_2);
        }
        /* vectorizable */
        for (unsigned char i_12 = 3; i_12 < 9; i_12 += 1) 
        {
            var_34 = ((/* implicit */unsigned short) var_12);
            /* LoopNest 2 */
            for (unsigned char i_13 = 3; i_13 < 10; i_13 += 2) 
            {
                for (long long int i_14 = 0; i_14 < 11; i_14 += 3) 
                {
                    {
                        arr_49 [i_4] [i_13] [i_13] [i_14] = ((/* implicit */unsigned char) var_7);
                        var_35 = ((/* implicit */signed char) var_11);
                        var_36 = ((/* implicit */unsigned char) var_2);
                        var_37 = var_10;
                        var_38 = ((/* implicit */unsigned char) var_16);
                    }
                } 
            } 
            var_39 = ((/* implicit */unsigned int) var_0);
            var_40 = ((/* implicit */_Bool) var_5);
            arr_50 [i_4] [(unsigned short)5] = ((/* implicit */short) var_10);
        }
        var_41 = ((/* implicit */unsigned long long int) var_1);
        /* LoopNest 2 */
        for (signed char i_15 = 0; i_15 < 11; i_15 += 4) 
        {
            for (unsigned char i_16 = 1; i_16 < 10; i_16 += 2) 
            {
                {
                    arr_55 [(short)6] [i_15] = ((/* implicit */short) var_4);
                    /* LoopSeq 1 */
                    for (long long int i_17 = 0; i_17 < 11; i_17 += 2) 
                    {
                        arr_60 [i_16] = var_17;
                        arr_61 [i_17] [i_16] [(unsigned char)7] [i_4] = ((/* implicit */unsigned short) var_14);
                        var_42 = ((/* implicit */signed char) var_9);
                    }
                    arr_62 [(signed char)6] [i_16] = ((/* implicit */unsigned short) var_12);
                    /* LoopNest 2 */
                    for (signed char i_18 = 3; i_18 < 9; i_18 += 2) 
                    {
                        for (signed char i_19 = 0; i_19 < 11; i_19 += 4) 
                        {
                            {
                                arr_69 [i_19] [i_18] [i_16] [3ULL] [i_18] [(short)8] = ((/* implicit */unsigned char) var_3);
                                var_43 ^= ((/* implicit */_Bool) var_0);
                                arr_70 [i_18] [i_15] [(_Bool)1] [i_18] [i_19] [i_16] = ((/* implicit */long long int) var_4);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_44 = ((/* implicit */unsigned char) var_7);
}
