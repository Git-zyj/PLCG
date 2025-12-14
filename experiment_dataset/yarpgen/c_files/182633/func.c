/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182633
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) min(((+(var_0))), (((/* implicit */int) ((unsigned short) var_2)))));
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (+((+(((/* implicit */int) ((short) var_7))))))))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            /* LoopSeq 4 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_14 = (~(min(((-(((/* implicit */int) var_7)))), ((~(((/* implicit */int) var_4)))))));
                arr_8 [i_0] [i_0] [i_0] = min(((!(((/* implicit */_Bool) var_7)))), ((!(var_2))));
                arr_9 [i_0] [i_0] [i_1 - 2] [i_0] = ((/* implicit */long long int) min((var_1), (((/* implicit */unsigned long long int) ((unsigned short) (-(((/* implicit */int) var_2))))))));
            }
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
            {
                arr_14 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */short) (~(((/* implicit */int) var_2))));
                var_15 &= ((/* implicit */unsigned int) min((((/* implicit */long long int) (~(((int) (unsigned char)15))))), (8297360087727818601LL)));
            }
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                arr_17 [i_4] [(unsigned char)8] [i_4] |= ((/* implicit */unsigned short) (~(var_1)));
                var_16 = ((/* implicit */unsigned int) max((var_16), ((~(var_10)))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                arr_21 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) var_0);
                arr_22 [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) min((min(((~(((/* implicit */int) var_7)))), ((-(((/* implicit */int) var_3)))))), ((-(((/* implicit */int) var_4))))));
            }
            arr_23 [(unsigned short)2] [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(min((min((var_8), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))))));
        }
        for (int i_6 = 0; i_6 < 10; i_6 += 1) 
        {
            arr_27 [i_0] [(unsigned char)0] |= ((/* implicit */unsigned short) var_0);
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                for (unsigned short i_8 = 1; i_8 < 8; i_8 += 2) 
                {
                    for (unsigned short i_9 = 0; i_9 < 10; i_9 += 1) 
                    {
                        {
                            arr_39 [i_0] [i_6] [(unsigned char)0] [i_0] = var_11;
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_10))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            arr_42 [i_10] |= ((/* implicit */signed char) (~(((/* implicit */int) var_3))));
            var_18 += ((signed char) (signed char)12);
            /* LoopSeq 1 */
            for (int i_11 = 0; i_11 < 10; i_11 += 2) 
            {
                arr_46 [(signed char)4] [i_0] = ((/* implicit */unsigned long long int) var_10);
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_8))));
                /* LoopSeq 2 */
                for (short i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    arr_49 [i_0] [i_10] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(var_0)));
                    arr_50 [i_0] = ((/* implicit */signed char) (~((~(((/* implicit */int) var_6))))));
                    /* LoopSeq 3 */
                    for (int i_13 = 1; i_13 < 7; i_13 += 3) 
                    {
                        var_20 += ((/* implicit */_Bool) var_8);
                        var_21 += ((/* implicit */unsigned short) ((_Bool) ((unsigned long long int) var_4)));
                        var_22 = ((/* implicit */unsigned short) (~((+(var_10)))));
                    }
                    for (signed char i_14 = 0; i_14 < 10; i_14 += 2) 
                    {
                        var_23 *= var_7;
                        arr_56 [i_0] [i_12] [(unsigned short)8] [i_10] [i_0] = ((/* implicit */long long int) var_2);
                    }
                    for (long long int i_15 = 0; i_15 < 10; i_15 += 1) 
                    {
                        arr_61 [i_0] [i_10] [i_11] [i_12] [i_15] [i_11] [i_0] |= ((/* implicit */long long int) ((unsigned long long int) (~(((/* implicit */int) var_9)))));
                        arr_62 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) var_2)))));
                    }
                }
                for (unsigned int i_16 = 1; i_16 < 8; i_16 += 1) 
                {
                    var_24 *= ((unsigned char) (unsigned char)15);
                    arr_65 [i_0] [(unsigned short)8] [i_0] [i_0] [i_16 + 2] = ((/* implicit */unsigned short) (~((~(var_8)))));
                    arr_66 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_6);
                }
                var_25 *= ((/* implicit */signed char) var_5);
            }
            var_26 *= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_9)))))));
        }
        for (unsigned short i_17 = 0; i_17 < 10; i_17 += 1) 
        {
            arr_70 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) var_11))))))));
            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) var_6))));
        }
        var_29 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)122))))), ((+(var_1))))), (((/* implicit */unsigned long long int) var_8))));
    }
    for (unsigned long long int i_18 = 2; i_18 < 15; i_18 += 1) 
    {
        arr_75 [i_18 - 1] = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((_Bool) min((((/* implicit */unsigned int) var_3)), (var_10))))), (var_6)));
        var_30 = ((/* implicit */signed char) (~(var_5)));
        /* LoopNest 2 */
        for (unsigned char i_19 = 0; i_19 < 17; i_19 += 3) 
        {
            for (long long int i_20 = 0; i_20 < 17; i_20 += 1) 
            {
                {
                    arr_80 [i_18] [i_18 + 1] [i_19] = ((/* implicit */long long int) (~(min((15444773817380733967ULL), (((/* implicit */unsigned long long int) 2034145071))))));
                    arr_81 [(_Bool)1] [i_19] [(_Bool)1] |= ((/* implicit */long long int) var_11);
                    /* LoopNest 2 */
                    for (short i_21 = 2; i_21 < 15; i_21 += 1) 
                    {
                        for (unsigned char i_22 = 4; i_22 < 16; i_22 += 1) 
                        {
                            {
                                var_31 += ((/* implicit */short) min(((~(((/* implicit */int) min((var_9), (((/* implicit */short) var_3))))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                                var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)112)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_23 = 3; i_23 < 11; i_23 += 1) 
    {
        arr_88 [i_23] = ((/* implicit */unsigned short) var_1);
        arr_89 [i_23] = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
        /* LoopNest 2 */
        for (unsigned short i_24 = 0; i_24 < 13; i_24 += 4) 
        {
            for (unsigned char i_25 = 0; i_25 < 13; i_25 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_26 = 3; i_26 < 12; i_26 += 4) 
                    {
                        for (long long int i_27 = 1; i_27 < 11; i_27 += 1) 
                        {
                            {
                                var_33 ^= ((/* implicit */signed char) (-(max((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))), (min((((/* implicit */unsigned int) var_4)), (var_5)))))));
                                arr_101 [i_24] [i_26 - 1] [i_23] [i_23] [i_24] [(unsigned char)8] = ((/* implicit */unsigned long long int) (-((-((-(((/* implicit */int) var_7))))))));
                                var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) var_2))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_28 = 0; i_28 < 13; i_28 += 4) 
                    {
                        for (int i_29 = 3; i_29 < 10; i_29 += 4) 
                        {
                            {
                                var_35 |= ((/* implicit */short) var_7);
                                var_36 |= ((/* implicit */unsigned char) min(((-(min((var_10), (((/* implicit */unsigned int) var_3)))))), (min((max((((/* implicit */unsigned int) var_2)), (var_5))), (((/* implicit */unsigned int) var_3))))));
                                var_37 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(var_10))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) max((var_7), (var_4))))));
    }
    var_39 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (~(((/* implicit */int) min((var_9), (((/* implicit */short) var_2)))))))), (var_5)));
}
