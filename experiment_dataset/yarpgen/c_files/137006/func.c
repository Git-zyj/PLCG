/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137006
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
    var_19 = ((/* implicit */unsigned char) var_10);
    var_20 = ((/* implicit */short) var_8);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            arr_7 [(_Bool)1] &= var_18;
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
            {
                arr_12 [i_0] = var_8;
                var_21 = ((/* implicit */long long int) var_15);
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    arr_15 [i_3] [i_3] &= var_16;
                    arr_16 [6U] [i_3] [i_0] [i_3] &= var_17;
                }
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_16))));
                    var_23 &= var_7;
                }
                for (long long int i_5 = 3; i_5 < 15; i_5 += 2) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_6 = 1; i_6 < 15; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */_Bool) var_9);
                        var_25 = ((/* implicit */signed char) var_10);
                        arr_26 [i_0] [i_5 + 1] [i_2] [i_0] = ((/* implicit */long long int) var_1);
                        arr_27 [i_0] [i_1] = ((/* implicit */_Bool) var_10);
                    }
                    for (short i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        arr_30 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_1);
                        arr_31 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) var_18);
                        arr_32 [i_0] [i_0] [11U] [i_2] [i_5 - 2] [i_7] = ((/* implicit */unsigned int) var_4);
                    }
                    arr_33 [i_0] [i_0] = ((/* implicit */unsigned int) var_10);
                    var_26 = ((/* implicit */_Bool) var_3);
                }
            }
            for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) /* same iter space */
            {
                var_27 = ((/* implicit */long long int) var_14);
                arr_36 [i_0] [i_0] = ((/* implicit */unsigned int) var_3);
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 16; i_9 += 1) 
                {
                    for (long long int i_10 = 1; i_10 < 14; i_10 += 3) 
                    {
                        {
                            arr_43 [i_0] [i_1 - 4] [i_0] = ((/* implicit */long long int) var_1);
                            arr_44 [i_0] = ((/* implicit */_Bool) var_3);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 4) 
                {
                    for (short i_12 = 1; i_12 < 14; i_12 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) var_1))));
                            arr_50 [i_0] [i_1] [i_0] [i_12] = var_3;
                            arr_51 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_15);
                        }
                    } 
                } 
                arr_52 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_3);
            }
            var_29 = ((/* implicit */long long int) var_14);
        }
        for (unsigned int i_13 = 2; i_13 < 13; i_13 += 2) 
        {
            arr_56 [i_0] = var_7;
            arr_57 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
            /* LoopSeq 3 */
            for (unsigned int i_14 = 2; i_14 < 15; i_14 += 1) 
            {
                var_30 = ((/* implicit */_Bool) var_5);
                var_31 = ((/* implicit */unsigned char) var_14);
                var_32 = ((/* implicit */short) var_13);
            }
            /* vectorizable */
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                arr_64 [(signed char)4] [i_13] [i_13] [(signed char)4] &= ((/* implicit */unsigned char) var_0);
                arr_65 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_2);
                var_33 = ((/* implicit */long long int) var_8);
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_34 = ((/* implicit */long long int) var_0);
                var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) var_11))));
                var_36 = ((/* implicit */unsigned char) var_10);
            }
        }
        for (unsigned int i_17 = 0; i_17 < 16; i_17 += 2) 
        {
            arr_70 [i_0] = ((/* implicit */unsigned long long int) var_17);
            arr_71 [i_0] = var_4;
            var_37 -= ((/* implicit */unsigned char) var_3);
        }
        arr_72 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_17);
    }
    for (unsigned long long int i_18 = 3; i_18 < 9; i_18 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_19 = 0; i_19 < 10; i_19 += 4) 
        {
            arr_78 [i_18] = ((/* implicit */unsigned int) var_12);
            arr_79 [i_18] [i_18] = var_16;
            arr_80 [i_19] [i_18] = ((/* implicit */unsigned int) var_6);
            var_38 = ((/* implicit */short) var_2);
        }
        /* LoopNest 2 */
        for (short i_20 = 2; i_20 < 9; i_20 += 4) 
        {
            for (short i_21 = 0; i_21 < 10; i_21 += 3) 
            {
                {
                    arr_85 [i_21] [i_21] [i_21] [i_18] = ((/* implicit */unsigned char) var_6);
                    arr_86 [i_21] [i_21] [i_21] [0LL] = ((/* implicit */unsigned int) var_1);
                    /* LoopNest 2 */
                    for (unsigned int i_22 = 1; i_22 < 8; i_22 += 4) 
                    {
                        for (short i_23 = 2; i_23 < 8; i_23 += 1) 
                        {
                            {
                                arr_94 [i_18 + 1] [i_18 + 1] [i_21] = var_6;
                                var_39 = ((/* implicit */_Bool) var_9);
                                arr_95 [i_22 + 2] [i_21] [i_21] [i_21] [i_18] = ((/* implicit */unsigned int) var_2);
                            }
                        } 
                    } 
                    arr_96 [i_18 + 1] [i_21] = ((/* implicit */unsigned int) var_4);
                    var_40 = ((/* implicit */unsigned int) var_12);
                }
            } 
        } 
        var_41 &= ((/* implicit */unsigned int) var_10);
        var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) var_12))));
    }
    for (unsigned int i_24 = 2; i_24 < 10; i_24 += 1) 
    {
        arr_100 [2LL] &= ((/* implicit */_Bool) var_18);
        var_43 = ((/* implicit */short) var_0);
        arr_101 [i_24] [i_24] = var_18;
        var_44 = var_5;
    }
    var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) var_9))));
}
