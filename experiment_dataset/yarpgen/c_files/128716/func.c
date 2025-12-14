/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128716
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
    for (short i_0 = 3; i_0 < 7; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0 + 3] [i_0] = ((/* implicit */unsigned long long int) var_9);
                var_14 = ((/* implicit */unsigned long long int) var_11);
                /* LoopSeq 2 */
                for (short i_2 = 4; i_2 < 8; i_2 += 3) 
                {
                    var_15 = ((/* implicit */_Bool) var_7);
                    arr_11 [i_0] [i_1] [i_0] = var_5;
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_14 [i_0] [i_1] [(unsigned char)3] = ((/* implicit */int) var_6);
                    var_16 += ((/* implicit */unsigned long long int) var_5);
                    var_17 = ((/* implicit */long long int) var_5);
                    /* LoopSeq 2 */
                    for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        arr_18 [i_0 - 2] [i_0] [i_0] = ((/* implicit */unsigned short) var_6);
                        /* LoopSeq 3 */
                        for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            arr_21 [i_3] [i_1] [i_4] [i_1] [(_Bool)1] [i_1] |= ((/* implicit */unsigned int) var_0);
                            var_18 = ((/* implicit */_Bool) max((var_18), (var_8)));
                            var_19 = ((/* implicit */unsigned char) var_11);
                            var_20 = ((/* implicit */unsigned int) var_6);
                        }
                        /* vectorizable */
                        for (unsigned short i_6 = 3; i_6 < 7; i_6 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned int) var_12);
                            var_22 = ((/* implicit */_Bool) var_11);
                            arr_25 [i_0 + 2] [(unsigned char)5] [i_0] [1U] = ((/* implicit */long long int) var_13);
                            var_23 = var_10;
                            var_24 = ((/* implicit */_Bool) var_11);
                        }
                        for (int i_7 = 3; i_7 < 8; i_7 += 1) 
                        {
                            var_25 -= ((/* implicit */unsigned char) var_13);
                            arr_29 [i_0] [i_1] [i_1] [i_3] [i_0] [i_4] [i_7] = ((/* implicit */unsigned short) var_6);
                        }
                        var_26 = ((/* implicit */unsigned char) var_7);
                        var_27 = ((/* implicit */long long int) var_12);
                        var_28 &= ((/* implicit */short) var_3);
                    }
                    /* vectorizable */
                    for (int i_8 = 3; i_8 < 8; i_8 += 2) 
                    {
                        arr_34 [i_1] [i_3] [i_3] [i_0] = ((/* implicit */long long int) var_10);
                        var_29 = ((/* implicit */_Bool) var_11);
                    }
                }
            }
        } 
    } 
    var_30 = var_12;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) /* same iter space */
    {
        arr_38 [i_9] [i_9] = ((/* implicit */unsigned int) var_7);
        var_31 = ((/* implicit */signed char) max((var_31), (var_13)));
        var_32 ^= ((/* implicit */unsigned short) var_5);
    }
    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 2) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned char) var_5);
        /* LoopSeq 3 */
        for (unsigned int i_11 = 0; i_11 < 14; i_11 += 2) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned char) var_10);
            var_35 = ((/* implicit */unsigned long long int) var_0);
            var_36 -= ((/* implicit */int) var_10);
        }
        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 14; i_13 += 1) 
            {
                for (unsigned short i_14 = 2; i_14 < 13; i_14 += 2) 
                {
                    {
                        arr_55 [i_10] [i_13] [i_13] [i_10] = ((/* implicit */_Bool) var_6);
                        var_37 = var_3;
                    }
                } 
            } 
            var_38 = ((/* implicit */int) var_12);
            arr_56 [i_10] [(unsigned char)0] [i_10] = ((/* implicit */unsigned short) var_2);
            var_39 |= ((/* implicit */signed char) var_11);
            var_40 |= ((/* implicit */long long int) var_12);
        }
        /* vectorizable */
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) var_4))));
            arr_59 [i_15] [1U] = var_4;
        }
    }
    for (unsigned int i_16 = 0; i_16 < 14; i_16 += 2) /* same iter space */
    {
        var_42 = var_0;
        var_43 = ((/* implicit */unsigned char) var_6);
        arr_62 [1U] = ((/* implicit */unsigned long long int) var_13);
    }
}
