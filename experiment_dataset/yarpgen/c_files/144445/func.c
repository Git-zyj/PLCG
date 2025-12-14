/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144445
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_15))) >> (((arr_4 [i_0 + 1]) - (1222069440956600790ULL)))));
                    var_18 = ((/* implicit */short) var_14);
                    var_19 -= ((/* implicit */_Bool) 34359738336ULL);
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 7; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_13 [i_3] = ((/* implicit */unsigned short) 5LL);
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28043)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17276))) : (18446744073709551592ULL)))) ? (((/* implicit */unsigned long long int) arr_6 [i_0 + 1] [i_3 + 4] [i_4])) : (((unsigned long long int) arr_6 [i_4] [i_3] [i_2]))));
                                var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0 - 1] [i_3 + 1] [i_2]))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((arr_4 [i_1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) ((((/* implicit */_Bool) 10968858496127951450ULL)) || (((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2]))))))))));
                }
            } 
        } 
        var_23 ^= ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) (unsigned short)3379)) ? (arr_3 [i_0] [i_0 - 1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))));
        var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17276))) : (arr_4 [i_0]))) - (((/* implicit */unsigned long long int) var_1))));
    }
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -175835985)) ? (-175835997) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */int) var_10)))) : ((-(((/* implicit */int) (short)14244))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_5 = 3; i_5 < 10; i_5 += 4) 
    {
        var_26 = ((((/* implicit */int) (short)17255)) / ((+(((/* implicit */int) var_5)))));
        /* LoopSeq 2 */
        for (short i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            var_27 ^= ((/* implicit */int) (-(-3552168550707495281LL)));
                            arr_25 [i_9] [i_8] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) - (((/* implicit */int) (short)-8545))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                        {
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-17276)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                            var_29 = arr_10 [i_5] [i_5] [i_5] [i_5];
                            var_30 = ((/* implicit */int) arr_17 [i_5 - 3] [i_7 - 2]);
                            var_31 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_7 - 2] [i_5 - 1]))));
                        }
                        for (unsigned short i_11 = 4; i_11 < 7; i_11 += 4) 
                        {
                            var_32 -= ((/* implicit */signed char) ((short) var_2));
                            var_33 ^= ((/* implicit */short) ((unsigned long long int) arr_28 [i_5 - 1] [i_7 + 1] [i_7] [i_7 - 2] [i_11 + 3] [i_7] [i_11 + 4]));
                            var_34 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_13))) ? (((/* implicit */int) ((((/* implicit */int) arr_29 [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_5 - 2] [i_11 + 1] [i_7])) < (((/* implicit */int) (short)28043))))) : (((/* implicit */int) ((arr_23 [i_5] [i_5] [i_7 + 1] [i_7 + 1]) < (((/* implicit */int) (unsigned short)3379)))))));
                        }
                        var_35 = ((/* implicit */short) arr_15 [i_5]);
                    }
                } 
            } 
            arr_32 [i_6] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (short)-17253)) || (((/* implicit */_Bool) (short)19918)))));
        }
        for (short i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
        {
            arr_36 [i_5] = ((/* implicit */unsigned long long int) arr_31 [i_5] [i_5]);
            var_36 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_26 [i_5] [i_5 - 1] [i_5] [i_5 - 3] [i_5] [i_5 - 2] [i_5])) ^ (((/* implicit */int) (_Bool)1))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_13 = 1; i_13 < 11; i_13 += 4) 
    {
        var_37 += ((/* implicit */unsigned long long int) (~(arr_38 [i_13 - 1])));
        arr_40 [i_13] [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_38 [i_13 - 1]))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 1) 
    {
        for (signed char i_15 = 0; i_15 < 25; i_15 += 4) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 0; i_17 < 25; i_17 += 1) 
                    {
                        for (short i_18 = 0; i_18 < 25; i_18 += 4) 
                        {
                            {
                                var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((((((/* implicit */_Bool) arr_50 [i_18] [i_18] [i_17] [i_14] [i_14] [i_14])) || (((/* implicit */_Bool) arr_50 [i_18] [i_17] [i_16] [i_14] [i_15] [i_14])))) ? (((/* implicit */int) (((~(var_17))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_41 [i_16])) >> (((((/* implicit */int) (unsigned short)510)) - (504))))))))) : (((((/* implicit */int) max((var_12), (((/* implicit */unsigned char) (_Bool)1))))) >> (((((((/* implicit */_Bool) var_17)) ? (arr_51 [i_14] [i_14] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)15))))) - (335566428247442635LL))))))))));
                                arr_52 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) arr_42 [i_14])) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)62)), ((~(((/* implicit */int) (unsigned char)186))))))) : (min((((/* implicit */unsigned long long int) (-(1468361153U)))), (min((7477885577581600165ULL), (((/* implicit */unsigned long long int) var_11))))))));
                                var_39 = ((/* implicit */long long int) ((unsigned long long int) arr_51 [i_14] [i_15] [i_16]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_19 = 2; i_19 < 23; i_19 += 2) 
                    {
                        for (unsigned short i_20 = 1; i_20 < 23; i_20 += 4) 
                        {
                            {
                                var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) arr_48 [i_14] [i_15] [i_16] [i_14]))));
                                var_41 = ((/* implicit */_Bool) var_16);
                                var_42 ^= ((/* implicit */short) (unsigned short)16713);
                            }
                        } 
                    } 
                    arr_58 [i_14] = ((/* implicit */unsigned char) ((arr_48 [i_14] [i_16] [i_14] [i_14]) < (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-3041)))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_21 = 0; i_21 < 25; i_21 += 4) 
                    {
                        var_43 += ((/* implicit */unsigned short) ((var_14) < (((/* implicit */unsigned long long int) var_1))));
                        var_44 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)15008))));
                    }
                }
            } 
        } 
    } 
}
