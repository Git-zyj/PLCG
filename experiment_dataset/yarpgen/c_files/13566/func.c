/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13566
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) var_8);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned short) var_10);
            /* LoopSeq 3 */
            for (signed char i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                arr_10 [i_2] [i_1] [i_0] = ((/* implicit */int) var_3);
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_7);
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_16 = ((/* implicit */unsigned short) var_0);
                var_17 = ((/* implicit */unsigned long long int) var_9);
                /* LoopSeq 3 */
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    arr_17 [i_0] [i_0] [i_1] [i_3] [i_4] = ((/* implicit */short) var_10);
                    var_18 = ((/* implicit */long long int) var_8);
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_12);
                    var_19 = ((/* implicit */unsigned int) var_15);
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_2);
                        var_20 = var_15;
                        arr_25 [i_0] [i_0] [i_0] [i_0] [5ULL] = ((/* implicit */unsigned int) var_7);
                    }
                }
                for (short i_7 = 0; i_7 < 18; i_7 += 1) 
                {
                    arr_29 [i_7] [i_3] [i_1] [11LL] [11LL] = ((/* implicit */unsigned int) var_2);
                    arr_30 [(short)12] [i_1] [(short)0] [i_1] = ((/* implicit */signed char) var_3);
                }
                var_21 = ((/* implicit */unsigned int) var_1);
            }
            for (signed char i_8 = 2; i_8 < 14; i_8 += 2) 
            {
                var_22 = ((/* implicit */unsigned long long int) var_14);
                var_23 = ((/* implicit */int) var_12);
                arr_33 [i_0] [i_1] [i_8 + 4] [i_8 + 4] = var_13;
            }
            var_24 = ((/* implicit */unsigned char) var_4);
            var_25 = ((/* implicit */unsigned int) var_5);
            var_26 = var_11;
        }
        arr_34 [i_0] [i_0] = ((/* implicit */short) var_11);
        /* LoopNest 3 */
        for (long long int i_9 = 0; i_9 < 18; i_9 += 3) 
        {
            for (long long int i_10 = 0; i_10 < 18; i_10 += 2) 
            {
                for (int i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    {
                        var_27 = ((/* implicit */short) var_3);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_12 = 2; i_12 < 17; i_12 += 3) 
                        {
                            var_28 = var_7;
                            arr_47 [i_12] [i_11] [i_11] [11LL] [i_9] [i_0] [i_0] = ((/* implicit */long long int) var_8);
                            var_29 = ((/* implicit */short) var_13);
                        }
                        arr_48 [i_0] [i_9] [i_0] [i_0] [i_11] [i_10] = ((/* implicit */long long int) var_12);
                    }
                } 
            } 
        } 
        var_30 = var_5;
    }
    for (unsigned int i_13 = 0; i_13 < 21; i_13 += 3) /* same iter space */
    {
        arr_52 [i_13] [i_13] = ((/* implicit */unsigned short) var_7);
        var_31 = ((/* implicit */short) var_3);
        var_32 = ((/* implicit */long long int) var_8);
    }
    for (unsigned int i_14 = 0; i_14 < 21; i_14 += 3) /* same iter space */
    {
        var_33 = ((/* implicit */int) var_11);
        var_34 = ((/* implicit */unsigned long long int) var_12);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_15 = 3; i_15 < 13; i_15 += 2) 
    {
        var_35 = var_11;
        var_36 = ((/* implicit */long long int) var_2);
        var_37 = ((/* implicit */_Bool) var_14);
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_16 = 2; i_16 < 19; i_16 += 4) 
    {
        var_38 = var_9;
        arr_60 [i_16] = var_11;
        var_39 = ((/* implicit */int) var_8);
    }
}
