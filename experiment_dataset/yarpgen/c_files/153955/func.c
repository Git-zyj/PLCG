/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153955
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
                {
                    arr_8 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) var_4);
                    arr_9 [i_1] [i_1] = ((/* implicit */short) var_9);
                }
                for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) var_0))));
                                arr_18 [i_0] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) var_0);
                                var_14 = ((/* implicit */unsigned int) var_0);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) var_1);
                    /* LoopSeq 3 */
                    for (signed char i_6 = 2; i_6 < 19; i_6 += 1) 
                    {
                        var_16 = ((/* implicit */long long int) max((var_16), (var_2)));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_7 = 1; i_7 < 19; i_7 += 4) 
                        {
                            arr_25 [i_1] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */unsigned char) var_11);
                            arr_26 [i_1] [i_7 + 1] = ((/* implicit */unsigned long long int) var_10);
                        }
                    }
                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 18; i_8 += 4) 
                    {
                        var_17 = ((/* implicit */short) var_12);
                        var_18 = var_5;
                    }
                    for (short i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        var_19 += ((/* implicit */unsigned int) var_1);
                        arr_34 [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_8);
                    }
                }
                arr_35 [i_0] [i_1] [i_1] = var_6;
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) var_1);
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (signed char i_12 = 2; i_12 < 19; i_12 += 4) 
                            {
                                var_21 = ((/* implicit */long long int) var_5);
                                arr_45 [i_1] [i_11] [i_0] [13LL] [i_1] = var_8;
                            }
                            for (signed char i_13 = 2; i_13 < 18; i_13 += 4) 
                            {
                                arr_49 [i_0] [i_10] [(short)12] [i_11] [i_1] [i_1] = ((/* implicit */signed char) var_8);
                                var_22 = ((/* implicit */unsigned char) var_11);
                            }
                            /* LoopSeq 3 */
                            for (int i_14 = 2; i_14 < 17; i_14 += 3) /* same iter space */
                            {
                                var_23 = ((/* implicit */unsigned char) var_12);
                                var_24 = ((/* implicit */short) var_0);
                            }
                            for (int i_15 = 2; i_15 < 17; i_15 += 3) /* same iter space */
                            {
                                var_25 = ((/* implicit */unsigned int) var_3);
                                arr_56 [i_1] [i_1] [i_10] = ((/* implicit */unsigned long long int) var_5);
                            }
                            for (int i_16 = 2; i_16 < 17; i_16 += 3) /* same iter space */
                            {
                                arr_61 [i_1] [i_1] [i_11] = ((/* implicit */unsigned long long int) var_4);
                                var_26 = ((/* implicit */unsigned char) var_2);
                                arr_62 [i_0] [i_1] [(signed char)4] [0] [i_1] [(unsigned char)10] = ((/* implicit */short) var_3);
                            }
                            arr_63 [i_1] [i_1] [i_1] [i_10] [i_11] = ((/* implicit */int) var_0);
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_17 = 0; i_17 < 20; i_17 += 4) 
                            {
                                var_27 = ((/* implicit */int) var_3);
                                arr_68 [i_1] [i_1] = ((/* implicit */signed char) var_7);
                                arr_69 [(short)13] [i_1] [i_10] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_6);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned long long int) var_4);
    var_29 = ((/* implicit */signed char) var_3);
    var_30 = ((/* implicit */short) max((var_30), (var_8)));
    var_31 -= ((/* implicit */unsigned long long int) var_7);
}
