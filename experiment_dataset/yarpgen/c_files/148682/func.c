/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148682
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) 4294967295U)) ? (-932365342) : (((/* implicit */int) arr_3 [i_0] [(short)13])))))))));
        var_14 |= ((/* implicit */unsigned char) ((arr_0 [(short)12]) != (1905187783U)));
        var_15 += ((/* implicit */unsigned long long int) (~(var_10)));
        arr_4 [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
        var_16 = (+((+(494978277U))));
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) (+(1036609610)));
        var_17 *= ((/* implicit */short) min(((~(2389779502U))), (((((/* implicit */_Bool) 0ULL)) ? (0U) : (1U)))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 22; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                {
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (~((~(min((((/* implicit */unsigned long long int) 4294967295U)), (2ULL))))))))));
                    arr_13 [i_1] [i_2 + 1] [i_3] = ((/* implicit */signed char) (~(((unsigned int) 18446744073709551611ULL))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            var_19 -= ((/* implicit */unsigned int) ((_Bool) arr_11 [i_4] [i_4] [4ULL] [i_1]));
            var_20 = (+(((/* implicit */int) arr_7 [i_1])));
            arr_16 [i_1] = ((/* implicit */long long int) ((int) arr_11 [i_1] [i_4] [i_4] [i_1]));
            var_21 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)3))));
            var_22 = ((/* implicit */short) (((_Bool)1) ? (arr_10 [i_1] [(short)10] [i_1]) : (arr_10 [i_1] [i_4] [i_1])));
        }
    }
    /* vectorizable */
    for (unsigned int i_5 = 2; i_5 < 17; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (unsigned int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                for (signed char i_8 = 2; i_8 < 18; i_8 += 2) 
                {
                    {
                        var_23 -= ((/* implicit */short) 18446744073709551615ULL);
                        var_24 = (+(4294967295U));
                        var_25 = ((/* implicit */short) (~(((/* implicit */int) ((short) 18446744073709551588ULL)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (short i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                for (short i_11 = 3; i_11 < 19; i_11 += 3) 
                {
                    for (unsigned short i_12 = 2; i_12 < 18; i_12 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)250)) ? (4840862587868596929LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)229)))))) ? ((+(0U))) : (1905187783U)));
                            var_27 = ((/* implicit */unsigned char) ((short) arr_12 [i_11] [i_5 - 2] [i_5 - 1] [i_5 + 2]));
                            var_28 = ((/* implicit */int) var_7);
                            var_29 = ((/* implicit */short) (((!(((/* implicit */_Bool) 5ULL)))) ? (17U) : ((+(1905187783U)))));
                            arr_36 [i_5] [i_5] [i_5] [i_11] [i_11] [i_5] [i_12 + 1] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_12 [i_11] [i_9] [i_11] [i_12])) ? (var_7) : (((/* implicit */unsigned int) var_12)))));
                        }
                    } 
                } 
            } 
            arr_37 [i_5] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 908644600U)) ? (((/* implicit */unsigned long long int) 1905187787U)) : (18446744073709551611ULL)));
        }
        for (signed char i_13 = 2; i_13 < 17; i_13 += 4) 
        {
            var_30 = ((/* implicit */long long int) (unsigned short)65535);
            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_4)))))))));
        }
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_14 = 0; i_14 < 23; i_14 += 2) 
    {
        arr_42 [7LL] = ((/* implicit */int) (unsigned char)254);
        var_32 -= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    }
    for (short i_15 = 0; i_15 < 19; i_15 += 2) 
    {
        var_33 = ((/* implicit */short) (-(var_11)));
        var_34 = ((/* implicit */short) 15ULL);
        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_17 [i_15]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_15]))) : (((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((unsigned short) arr_25 [i_15])))));
    }
    /* vectorizable */
    for (unsigned short i_16 = 3; i_16 < 13; i_16 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_17 = 2; i_17 < 11; i_17 += 2) 
        {
            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) (+(4294967295U)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_16 - 1]))) : (var_11))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_16])) ? (((/* implicit */int) arr_5 [i_17 + 2] [i_17])) : (((/* implicit */int) arr_9 [i_17])))))));
            /* LoopNest 2 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (unsigned long long int i_19 = 2; i_19 < 12; i_19 += 3) 
                {
                    {
                        var_37 += ((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))) : (arr_49 [i_18])));
                        var_38 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) ((1ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11835)))))) : (((/* implicit */int) (short)768))));
                    }
                } 
            } 
            var_39 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 3) 
        {
            for (unsigned short i_21 = 0; i_21 < 14; i_21 += 3) 
            {
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    {
                        var_40 = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) arr_46 [(unsigned short)6] [i_22])));
                        var_41 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_54 [i_16 - 1] [i_20])) : (0ULL)));
                    }
                } 
            } 
        } 
    }
    var_42 = ((/* implicit */short) ((unsigned int) var_2));
    var_43 ^= ((/* implicit */unsigned char) 14720473765214763298ULL);
}
