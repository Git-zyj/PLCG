/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146427
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_11 = ((long long int) (~(((/* implicit */int) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((((/* implicit */_Bool) 14072652877470432151ULL)) ? (1866731431515936923ULL) : (arr_3 [i_1]))))));
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (((!(((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) 4047153509U)) ? (7764021634197046122LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))))))))));
                    var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (short)25595))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_3 [i_0]) : (arr_4 [i_2] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 0U))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 1) /* same iter space */
    {
        arr_9 [i_3] = ((/* implicit */unsigned char) ((int) (unsigned char)14));
        var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3 + 1])) ? (((/* implicit */unsigned long long int) arr_5 [i_3 + 1] [i_3 - 1])) : (arr_3 [i_3 + 1])));
        /* LoopSeq 1 */
        for (long long int i_4 = 2; i_4 < 11; i_4 += 3) 
        {
            var_16 -= ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) arr_10 [(_Bool)1] [(_Bool)1])));
            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((unsigned long long int) ((long long int) 9LL))))));
            var_18 = ((/* implicit */int) ((unsigned int) (-(360465863))));
            /* LoopSeq 4 */
            for (unsigned int i_5 = 1; i_5 < 9; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            arr_21 [i_3] [(signed char)0] [i_3 - 2] [i_6] [i_4] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) 14LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))) : ((~(arr_12 [i_3] [i_3] [i_3])))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_4 - 2] [i_5 + 1] [i_3 - 1])) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) (unsigned char)242))));
                            arr_22 [i_3] = ((/* implicit */_Bool) ((long long int) (short)0));
                        }
                    } 
                } 
                arr_23 [i_3] [i_4] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [i_3] [i_3 - 2] [i_3]))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_15 [i_3 + 1] [i_4] [i_5] [4])))) ? (arr_8 [i_3 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (1635539086) : (((/* implicit */int) (unsigned short)0)))))));
                arr_24 [i_3] [(short)6] [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3 - 1])) ? (((/* implicit */unsigned long long int) -9LL)) : (arr_8 [i_3 - 1])));
                /* LoopSeq 2 */
                for (short i_8 = 1; i_8 < 12; i_8 += 2) 
                {
                    arr_28 [i_3] [i_4] [i_3] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5332645708760106646ULL)) ? (-1635539087) : (371501584)))) ? (((/* implicit */int) ((short) arr_2 [i_4] [i_5] [i_8]))) : ((~(((/* implicit */int) (short)-25595))))));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_8 - 1] [i_4 - 1] [i_3 - 1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_8 - 1] [i_4 - 2] [i_3 - 1] [i_3]))) : (arr_7 [i_3 - 1] [i_3 - 1]))))));
                }
                for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
                {
                    arr_31 [i_3] [i_5] [i_4] [i_3] = ((/* implicit */unsigned short) (((_Bool)1) ? (((unsigned long long int) 15971894799144252608ULL)) : (((/* implicit */unsigned long long int) arr_5 [i_3 - 2] [i_3 - 1]))));
                    var_22 = ((((/* implicit */_Bool) ((arr_16 [(_Bool)1] [i_5 + 2] [i_4 - 2] [i_3 + 1]) ? (((/* implicit */int) (unsigned char)143)) : (-1076079631)))) ? (((/* implicit */int) arr_20 [i_4 + 2] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1] [i_4])) : (((/* implicit */int) arr_1 [i_4 + 2])));
                    var_23 = ((/* implicit */int) arr_20 [i_3 - 2] [i_4] [i_5] [i_3] [i_5] [i_4] [i_3 + 1]);
                }
            }
            for (unsigned int i_10 = 2; i_10 < 11; i_10 += 2) 
            {
                arr_34 [i_3] [9LL] [i_3 + 1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4 - 2] [i_10 + 1] [i_10])) ? (((((/* implicit */_Bool) arr_27 [(unsigned short)8] [i_4] [i_3])) ? (-7248476302641708206LL) : (((/* implicit */long long int) 0)))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [(unsigned char)9] [i_4] [i_10] [i_10])))))));
                var_24 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3 + 1] [i_3 + 1])) ? (((/* implicit */unsigned long long int) arr_5 [i_3] [i_3 + 1])) : (arr_30 [i_3 - 2])));
                var_25 ^= ((/* implicit */unsigned int) ((long long int) arr_14 [i_10 - 1] [i_10 + 1] [i_10 + 1]));
            }
            for (long long int i_11 = 0; i_11 < 13; i_11 += 4) 
            {
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 12812092122038695216ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)0))));
                arr_38 [i_4] [i_3] = ((/* implicit */short) (_Bool)1);
                var_27 = ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_19 [i_11] [(signed char)10] [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_3 - 1] [i_11])) : (arr_15 [i_3 - 2] [i_3 - 2] [i_3] [i_4 - 2]));
            }
            for (long long int i_12 = 1; i_12 < 12; i_12 += 3) 
            {
                arr_41 [i_3] [i_3] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_3])) ? (arr_14 [i_3 - 1] [i_4 - 2] [i_12 + 1]) : (((/* implicit */unsigned long long int) arr_35 [i_12 + 1] [i_4 - 2] [i_3]))));
                var_28 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) 1766586613)) : (arr_5 [i_3] [i_4])))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-21541))))) : ((+(arr_11 [9LL] [i_4] [i_3])))));
                var_29 = ((((/* implicit */_Bool) arr_29 [i_12 - 1] [i_3 - 2])) ? (((/* implicit */int) (signed char)0)) : (arr_39 [i_12 + 1] [i_12 - 1]));
                arr_42 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_3] [i_4])) ? (((/* implicit */long long int) arr_25 [i_3] [i_4] [i_4 - 1] [i_12 + 1])) : (arr_2 [i_3 - 1] [i_3 - 1] [i_4 + 2])));
            }
            arr_43 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)12774))));
        }
        var_30 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [6LL] [6LL] [6LL] [i_3 - 2])) ? (((/* implicit */long long int) (~(0U)))) : (((((/* implicit */_Bool) 23LL)) ? (((/* implicit */long long int) arr_12 [i_3 + 1] [1U] [i_3])) : (23LL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 2) 
    {
        var_31 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) 1635019562691143041LL))) ? (((((/* implicit */_Bool) arr_45 [(_Bool)1] [i_13])) ? (((/* implicit */int) arr_44 [i_13])) : (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)173)))))));
        arr_46 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_44 [i_13]))))) ? (-23LL) : (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_13])))));
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) ? (arr_45 [i_13] [i_13]) : (arr_45 [i_13] [i_13])));
        var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((long long int) arr_44 [i_13])))));
    }
    var_34 = ((/* implicit */unsigned long long int) var_3);
    var_35 = ((/* implicit */unsigned long long int) var_2);
    var_36 = ((/* implicit */short) min((((unsigned char) min((3015756422U), (3223503852U)))), (((/* implicit */unsigned char) var_6))));
    var_37 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1189070046630591462LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) (short)-12774)) ? (((/* implicit */int) (unsigned short)63343)) : (var_1)))))));
}
