/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156845
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0 - 1])) - ((-2147483647 - 1))));
                    var_12 = ((/* implicit */unsigned short) ((int) arr_3 [i_2]));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */unsigned short) ((0ULL) >> (((354214023770318732ULL) - (354214023770318671ULL)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned long long int) var_4);
                            var_15 = ((/* implicit */int) ((((/* implicit */long long int) (-2147483647 - 1))) >= (((long long int) arr_10 [i_0] [i_0] [i_0 - 2] [i_0] [i_0] [i_0]))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                        {
                            var_16 -= ((/* implicit */short) (+(((/* implicit */int) arr_5 [i_0 - 2]))));
                            var_17 = ((/* implicit */int) ((unsigned int) arr_9 [i_0 - 1] [i_0 - 1] [i_5]));
                        }
                        var_18 -= ((/* implicit */short) arr_2 [i_0 - 2]);
                    }
                }
            } 
        } 
        var_19 &= ((/* implicit */short) ((unsigned long long int) arr_7 [i_0]));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 4) 
            {
                for (unsigned long long int i_9 = 4; i_9 < 18; i_9 += 4) 
                {
                    {
                        var_20 += ((/* implicit */short) ((var_1) != (((/* implicit */unsigned long long int) arr_19 [i_6] [i_6] [i_6]))));
                        var_21 -= ((/* implicit */unsigned long long int) ((1750868251) << (((arr_18 [i_6]) - (12085162812918616807ULL)))));
                        var_22 += ((/* implicit */unsigned long long int) ((short) 1310712830238656049ULL));
                        var_23 -= ((/* implicit */short) ((arr_23 [i_8 + 4] [i_8 + 2] [i_8 - 1]) == (arr_23 [i_8 + 1] [i_8 + 2] [i_8 + 3])));
                    }
                } 
            } 
        } 
        arr_25 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -780207574)) ? (((/* implicit */unsigned int) 1531660397)) : (380623974U)));
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            var_24 = ((/* implicit */int) arr_24 [i_10]);
            /* LoopNest 2 */
            for (long long int i_12 = 1; i_12 < 10; i_12 += 1) 
            {
                for (signed char i_13 = 1; i_13 < 10; i_13 += 3) 
                {
                    {
                        var_25 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (arr_22 [i_13 + 3])));
                        arr_38 [i_10] [i_11] [i_12] [i_13] = arr_33 [i_12 + 2] [i_12] [i_13];
                    }
                } 
            } 
        }
        var_26 &= ((/* implicit */unsigned long long int) var_9);
        arr_39 [i_10] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_10] [i_10]))) : (arr_18 [i_10])))));
        var_27 &= ((/* implicit */unsigned char) ((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_10] [i_10] [i_10])))));
        var_28 = ((/* implicit */int) var_6);
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_31 [i_14])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_31 [i_14])) : (-1750868252))) : (((((/* implicit */_Bool) arr_18 [i_14])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)42)))))), (((int) max((1019890709U), (((/* implicit */unsigned int) 1750868251)))))));
        /* LoopNest 3 */
        for (short i_15 = 0; i_15 < 13; i_15 += 2) 
        {
            for (unsigned long long int i_16 = 3; i_16 < 11; i_16 += 3) 
            {
                for (short i_17 = 0; i_17 < 13; i_17 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_18 = 2; i_18 < 9; i_18 += 4) 
                        {
                            arr_56 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] |= arr_17 [i_17] [i_18 + 2];
                            var_30 = ((/* implicit */short) arr_51 [i_16 - 3] [i_17] [i_18 + 3]);
                        }
                        for (unsigned short i_19 = 0; i_19 < 13; i_19 += 1) 
                        {
                            arr_60 [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((2142195262U), (((/* implicit */unsigned int) arr_43 [i_16]))))) ? (((/* implicit */unsigned long long int) arr_19 [i_14] [i_15] [i_19])) : (arr_30 [i_14] [i_14] [i_14])))) ? ((((+(((/* implicit */int) var_0)))) | (((/* implicit */int) arr_55 [i_15] [i_14] [i_15] [i_15] [i_14])))) : ((((((-(var_10))) + (2147483647))) >> (((-2065141823) + (2065141828)))))));
                            arr_61 [i_19] [i_19] [i_17] [i_14] [i_14] [i_14] = ((/* implicit */short) (unsigned char)102);
                        }
                        var_31 = ((/* implicit */signed char) ((((/* implicit */int) arr_48 [i_15] [i_16 - 3] [i_16 + 2] [i_17])) >> (((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_28 [i_15] [i_16 + 1]))))), (4129689120645968761ULL))) - (4129689120645968732ULL)))));
                    }
                } 
            } 
        } 
        var_32 = ((/* implicit */unsigned short) (+(var_1)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_20 = 0; i_20 < 13; i_20 += 1) 
        {
            var_33 ^= ((/* implicit */long long int) ((signed char) -4126500776283101519LL));
            arr_64 [i_14] [i_14] = ((/* implicit */signed char) ((short) var_4));
            /* LoopNest 2 */
            for (signed char i_21 = 0; i_21 < 13; i_21 += 3) 
            {
                for (short i_22 = 2; i_22 < 11; i_22 += 4) 
                {
                    {
                        var_34 = ((/* implicit */unsigned long long int) var_4);
                        var_35 = ((/* implicit */unsigned char) arr_52 [i_22 + 1] [i_22 + 1]);
                    }
                } 
            } 
        }
    }
    var_36 = ((/* implicit */short) var_2);
}
