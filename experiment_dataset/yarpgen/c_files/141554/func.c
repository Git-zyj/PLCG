/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141554
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
    for (int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (signed char i_3 = 2; i_3 < 15; i_3 += 1) 
                {
                    {
                        arr_10 [(signed char)14] [6] [i_2] [2U] [i_2] [(unsigned short)10] = ((/* implicit */signed char) (~((-2147483647 - 1))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 3; i_4 < 13; i_4 += 2) 
                        {
                            var_15 -= (!(((/* implicit */_Bool) (-2147483647 - 1))));
                            arr_14 [(signed char)3] [14] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 2147483633)) / (18446744073709551615ULL)));
                            var_16 = ((/* implicit */short) ((((/* implicit */int) (short)20560)) >= (2147483638)));
                        }
                        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)184))));
                        arr_15 [i_0] [i_1 - 1] [i_2] [i_3 - 1] [(unsigned char)6] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) <= (4119993793U)));
                        var_18 += ((/* implicit */signed char) ((var_5) | (((181311934) | (((/* implicit */int) var_7))))));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)(-127 - 1))) ^ (((/* implicit */int) (signed char)-68))));
            arr_16 [i_0 - 2] [i_1 + 1] [i_0 - 2] = ((/* implicit */short) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_2))));
            /* LoopNest 2 */
            for (signed char i_5 = 1; i_5 < 14; i_5 += 1) 
            {
                for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) var_4);
                        arr_22 [i_6] [i_5] [(short)0] [i_5] [i_0] = ((/* implicit */short) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)0))))) / (((/* implicit */int) var_9))));
                        arr_23 [i_0] [i_0] [i_1] [i_0] [i_0] &= ((/* implicit */signed char) (~(((/* implicit */int) ((10991916988061580628ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                    }
                } 
            } 
        }
        arr_24 [i_0] = ((((/* implicit */int) min((max((var_14), (((/* implicit */short) (signed char)-97)))), (((/* implicit */short) min((((/* implicit */unsigned char) var_3)), ((unsigned char)47))))))) >= (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) || (((/* implicit */_Bool) var_6))))));
    }
    for (signed char i_7 = 1; i_7 < 7; i_7 += 1) 
    {
        arr_28 [i_7] = ((/* implicit */_Bool) max((((((/* implicit */int) var_3)) - (((/* implicit */int) var_12)))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-78)))))));
        var_21 |= ((/* implicit */unsigned int) 0ULL);
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 18; i_8 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                {
                    arr_35 [i_8] [0U] |= ((((((/* implicit */_Bool) (signed char)3)) && (((/* implicit */_Bool) var_12)))) && (((/* implicit */_Bool) var_14)));
                    /* LoopSeq 3 */
                    for (short i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        var_22 |= ((((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) var_6))))) != (((/* implicit */int) (unsigned short)47626)));
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */int) (signed char)86)) - (((((((/* implicit */int) (short)-22344)) + (2147483647))) << (((((/* implicit */int) var_6)) - (48109))))))))));
                            arr_42 [i_8 + 1] [i_10] [i_10] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((12122058621993606031ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5888)))));
                        }
                    }
                    for (short i_13 = 2; i_13 < 16; i_13 += 3) 
                    {
                        arr_46 [i_10] [i_8] [i_8] [i_10] = ((/* implicit */short) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) (unsigned char)242))));
                        var_25 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        var_26 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) <= (var_4)));
                        arr_50 [i_14] [i_10] [i_10] [(signed char)2] [i_10] [(unsigned char)3] = ((((((/* implicit */int) (signed char)101)) - (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) var_3)));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_15 = 3; i_15 < 17; i_15 += 1) 
        {
            for (short i_16 = 0; i_16 < 20; i_16 += 1) 
            {
                {
                    var_27 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (174973491U)));
                    var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-9334)) <= (-2147483642))))));
                    /* LoopNest 2 */
                    for (signed char i_17 = 0; i_17 < 20; i_17 += 2) 
                    {
                        for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */short) var_6);
                                var_30 += ((/* implicit */unsigned char) var_4);
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_10)) != (var_5)))) >= (((/* implicit */int) (unsigned char)193))));
                }
            } 
        } 
    }
    var_32 += ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 1) 
    {
        for (unsigned char i_20 = 0; i_20 < 16; i_20 += 3) 
        {
            {
                arr_67 [(unsigned char)9] = ((/* implicit */_Bool) max((((/* implicit */int) (short)-22054)), ((((~(((/* implicit */int) (unsigned char)171)))) & (((((/* implicit */int) (unsigned char)193)) ^ (((/* implicit */int) var_1))))))));
                var_33 = ((/* implicit */unsigned long long int) (((~((-2147483647 - 1)))) == ((+(((/* implicit */int) (signed char)-124))))));
                arr_68 [i_19] = ((/* implicit */_Bool) (unsigned char)146);
                var_34 = ((/* implicit */unsigned int) min((var_34), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-124))))) < (18446462598732840960ULL))))));
            }
        } 
    } 
}
