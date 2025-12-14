/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117193
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
    var_18 = ((/* implicit */unsigned short) var_8);
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        var_19 = ((/* implicit */short) ((697567885253488974LL) | (((var_3) / (((/* implicit */long long int) 22227702U))))));
        arr_3 [i_0] &= ((/* implicit */unsigned short) var_17);
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                for (int i_3 = 2; i_3 < 10; i_3 += 2) 
                {
                    for (unsigned short i_4 = 1; i_4 < 8; i_4 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) var_1);
                            arr_13 [i_0] [i_1] [i_4] [i_1] [7LL] = ((/* implicit */short) var_8);
                        }
                    } 
                } 
            } 
            arr_14 [4] [i_1] [i_1 - 2] = ((/* implicit */int) var_7);
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_14))));
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_8))));
        }
        for (int i_5 = 2; i_5 < 8; i_5 += 3) 
        {
            arr_18 [i_0] [i_5] = ((/* implicit */unsigned int) var_10);
            arr_19 [i_5] = var_4;
            arr_20 [i_5] = ((/* implicit */int) ((((/* implicit */unsigned int) ((var_13) / (((/* implicit */int) (_Bool)1))))) * (1837730534U)));
        }
        /* LoopNest 2 */
        for (unsigned int i_6 = 2; i_6 < 9; i_6 += 3) 
        {
            for (signed char i_7 = 2; i_7 < 10; i_7 += 1) 
            {
                {
                    arr_26 [i_0 + 1] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) 3741368076158791262LL);
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) / (3741368076158791262LL)));
                                arr_31 [8LL] [i_6 - 2] [i_7] [i_6 - 2] [i_9] = ((/* implicit */short) (_Bool)1);
                                arr_32 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) 1147260667);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 10; i_10 += 3) 
                    {
                        for (long long int i_11 = 2; i_11 < 9; i_11 += 3) 
                        {
                            {
                                arr_40 [i_0] [i_6 + 2] [i_6 - 1] [i_6 + 2] [9U] [i_11] [i_11] = ((/* implicit */unsigned char) var_5);
                                arr_41 [i_11] [i_10] [i_7] [i_0] [i_11] = ((/* implicit */unsigned short) var_4);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_42 [i_0] = ((/* implicit */unsigned char) var_0);
    }
    for (long long int i_12 = 0; i_12 < 18; i_12 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_13 = 1; i_13 < 17; i_13 += 3) 
        {
            var_24 *= ((/* implicit */short) var_12);
            var_25 = ((/* implicit */int) (unsigned char)52);
            arr_47 [i_12] [i_13] |= ((/* implicit */long long int) var_12);
        }
        for (short i_14 = 2; i_14 < 14; i_14 += 3) 
        {
            var_26 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)248)) != (-613301213)));
            var_27 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) / (-2861081132705587503LL)));
            var_28 = ((/* implicit */long long int) var_17);
            var_29 = ((/* implicit */signed char) var_11);
            var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (_Bool)1))));
        }
        /* vectorizable */
        for (long long int i_15 = 3; i_15 < 16; i_15 += 2) 
        {
            var_31 = ((/* implicit */long long int) var_4);
            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (unsigned char)191))));
        }
        var_33 = ((/* implicit */_Bool) ((((var_3) + (9223372036854775807LL))) >> (((((((var_14) + (2147483647))) << (((/* implicit */int) var_8)))) - (1767989038)))));
        arr_53 [(unsigned char)12] = var_16;
        /* LoopNest 2 */
        for (unsigned short i_16 = 0; i_16 < 18; i_16 += 3) 
        {
            for (unsigned short i_17 = 0; i_17 < 18; i_17 += 4) 
            {
                {
                    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) || (((((/* implicit */_Bool) var_0)) || (var_15)))));
                    arr_59 [i_12] [i_16] [i_17] = ((/* implicit */_Bool) var_3);
                    var_35 ^= ((/* implicit */unsigned int) var_2);
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)6)) || (((/* implicit */_Bool) 1024)))))));
                }
            } 
        } 
    }
    for (long long int i_18 = 0; i_18 < 11; i_18 += 3) 
    {
        arr_64 [i_18] = ((/* implicit */signed char) var_7);
        arr_65 [i_18] = ((/* implicit */unsigned long long int) var_13);
        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) var_1))));
    }
}
