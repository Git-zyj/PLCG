/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131391
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
    var_12 = ((/* implicit */_Bool) var_7);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                var_13 ^= ((/* implicit */_Bool) arr_0 [i_1] [i_2]);
                /* LoopSeq 1 */
                for (unsigned int i_3 = 2; i_3 < 18; i_3 += 4) 
                {
                    arr_10 [(unsigned char)10] [(unsigned char)10] [i_2] [(unsigned short)2] = ((/* implicit */unsigned short) arr_1 [i_2] [i_2]);
                    arr_11 [i_0] [i_2] [i_3] = ((/* implicit */short) arr_5 [i_0] [i_2] [i_0]);
                    /* LoopSeq 2 */
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned char) arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_0]);
                        var_15 -= arr_13 [i_3] [i_3] [i_1] [i_0] [i_1] [i_0] [i_0];
                        arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_1 [i_2] [i_2]);
                    }
                    for (unsigned int i_5 = 1; i_5 < 18; i_5 += 2) 
                    {
                        var_16 -= ((/* implicit */unsigned short) arr_3 [i_0] [i_1]);
                        var_17 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                        var_18 -= ((/* implicit */unsigned int) arr_3 [i_3] [1U]);
                        var_19 &= ((/* implicit */unsigned char) arr_0 [i_0] [i_5]);
                    }
                }
            }
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0] [17ULL] [i_0] [i_0]))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 15; i_6 += 4) 
            {
                for (short i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 1; i_8 < 17; i_8 += 4) 
                        {
                            var_21 = ((/* implicit */signed char) arr_7 [i_0] [i_6]);
                            var_22 -= ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
                        }
                        var_23 ^= ((/* implicit */unsigned int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        arr_26 [i_0] [i_0] [9U] [i_0] = ((/* implicit */unsigned int) arr_2 [i_1]);
                        arr_27 [i_0] &= arr_25 [i_0] [i_1] [i_1] [i_6] [i_6] [i_6];
                    }
                } 
            } 
        }
        arr_28 [i_0] [(_Bool)1] = ((/* implicit */_Bool) arr_19 [i_0] [i_0]);
        arr_29 [(short)13] = ((/* implicit */unsigned short) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) 
        {
            for (unsigned int i_10 = 2; i_10 < 18; i_10 += 2) 
            {
                {
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) arr_21 [i_10] [i_9] [i_9] [i_0]))));
                    var_25 = ((/* implicit */unsigned char) arr_25 [i_0] [i_0] [i_0] [i_10] [i_0] [i_9]);
                }
            } 
        } 
    }
    for (short i_11 = 0; i_11 < 11; i_11 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_12 = 2; i_12 < 8; i_12 += 4) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned long long int i_14 = 1; i_14 < 8; i_14 += 4) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) arr_31 [i_11] [i_12]))));
                        var_27 = ((/* implicit */unsigned long long int) arr_42 [i_11] [i_11]);
                        var_28 = arr_13 [i_14] [i_14] [7ULL] [(unsigned short)4] [(unsigned short)4] [(unsigned short)4] [i_11];
                    }
                } 
            } 
        } 
        arr_44 [i_11] [i_11] = ((/* implicit */unsigned char) arr_21 [i_11] [i_11] [i_11] [6U]);
    }
    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) var_1))));
    /* LoopNest 3 */
    for (unsigned long long int i_15 = 2; i_15 < 18; i_15 += 2) 
    {
        for (short i_16 = 1; i_16 < 18; i_16 += 2) 
        {
            for (unsigned short i_17 = 0; i_17 < 20; i_17 += 2) 
            {
                {
                    arr_53 [i_15] [i_15] [i_16] [i_15] &= ((/* implicit */short) arr_50 [i_15] [i_17] [i_15]);
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 0; i_18 < 20; i_18 += 2) 
                    {
                        arr_58 [i_16] [i_16 - 1] [i_16 - 1] [i_18] = ((/* implicit */short) arr_52 [i_16] [i_16] [i_17] [17ULL]);
                        arr_59 [i_16] [(short)8] = ((/* implicit */unsigned long long int) arr_50 [i_16] [i_16] [i_18]);
                        var_30 |= ((/* implicit */signed char) arr_50 [i_15] [i_15] [i_15]);
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_19 = 0; i_19 < 20; i_19 += 4) 
                    {
                        arr_63 [i_15] [i_15] [i_15] [i_16] [i_15] = ((/* implicit */unsigned long long int) arr_61 [i_16] [i_17] [i_17] [i_15]);
                        arr_64 [i_16] = ((/* implicit */unsigned short) arr_57 [i_16 - 1] [i_17]);
                        arr_65 [i_16] [0U] [i_17] [i_16] = ((/* implicit */int) arr_57 [i_17] [i_17]);
                        arr_66 [i_16] = ((/* implicit */unsigned char) arr_54 [i_16] [(unsigned char)4] [(unsigned char)4] [i_16]);
                    }
                    for (int i_20 = 1; i_20 < 18; i_20 += 4) 
                    {
                        var_31 = ((/* implicit */long long int) arr_67 [(unsigned short)13] [i_16] [(unsigned short)13] [i_16] [i_20]);
                        var_32 = arr_67 [i_15] [i_16] [i_17] [i_20] [(_Bool)1];
                    }
                    for (int i_21 = 4; i_21 < 18; i_21 += 2) 
                    {
                        arr_72 [i_15] [i_16] [i_17] [i_21] [i_16] = ((/* implicit */int) arr_55 [i_16] [i_16] [i_16] [i_17] [(_Bool)1]);
                        var_33 = ((/* implicit */long long int) arr_70 [i_15] [i_15] [i_16]);
                        /* LoopSeq 3 */
                        for (short i_22 = 0; i_22 < 20; i_22 += 2) 
                        {
                            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) arr_61 [i_15] [i_16] [(short)12] [(short)12]))));
                            arr_77 [i_15 - 2] [(unsigned short)6] [(_Bool)1] [i_16] [i_22] = ((/* implicit */signed char) arr_47 [i_15] [i_15]);
                        }
                        for (unsigned short i_23 = 0; i_23 < 20; i_23 += 4) 
                        {
                            arr_81 [i_15] [i_15] [i_16] [i_17] [(_Bool)1] [i_16] = arr_45 [i_16] [i_16];
                            var_35 = ((/* implicit */int) arr_62 [i_15] [i_16] [i_15] [i_21 + 1] [i_16]);
                            var_36 = ((/* implicit */short) arr_45 [i_15] [i_16]);
                            var_37 = ((/* implicit */int) arr_70 [17U] [i_16 + 1] [i_16]);
                        }
                        /* vectorizable */
                        for (unsigned char i_24 = 0; i_24 < 20; i_24 += 2) 
                        {
                            arr_85 [i_24] [i_16] [i_16] [i_16] [i_24] = ((/* implicit */_Bool) arr_45 [i_17] [i_24]);
                            var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) arr_80 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]))));
                        }
                    }
                    var_39 &= ((/* implicit */unsigned char) arr_48 [i_15] [3] [i_16]);
                }
            } 
        } 
    } 
}
