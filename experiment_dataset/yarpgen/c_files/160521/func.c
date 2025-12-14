/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160521
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = var_9;
        var_20 = ((/* implicit */_Bool) arr_1 [i_0]);
        var_21 = ((unsigned char) ((short) ((unsigned long long int) var_5)));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 1; i_2 < 18; i_2 += 2) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */int) arr_3 [i_1]);
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_2 + 2] [i_2 - 1])) ? (((/* implicit */int) arr_4 [i_2 - 1] [i_2 + 2])) : (((/* implicit */int) arr_4 [i_2 + 1] [i_2 + 2]))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    {
                        arr_13 [i_3] [i_3] [i_3] [i_4] = ((/* implicit */signed char) ((int) (-(((/* implicit */int) (short)15872)))));
                        var_23 += ((/* implicit */unsigned char) arr_6 [i_2 + 2]);
                        arr_14 [5LL] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 12146365829972889471ULL)) ? (3526674718674244244ULL) : (((/* implicit */unsigned long long int) arr_12 [i_1] [i_2 + 2] [i_3] [i_4] [i_3]))));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_1))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_5 = 3; i_5 < 18; i_5 += 1) 
            {
                var_25 = ((/* implicit */int) arr_15 [i_2 - 1]);
                arr_17 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) (_Bool)0);
                /* LoopNest 2 */
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    for (long long int i_7 = 3; i_7 < 18; i_7 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) ((unsigned short) arr_6 [i_1]));
                            arr_22 [i_2 + 2] [(signed char)0] [(signed char)3] [i_6] [i_7] [i_6] [i_2 - 1] = ((/* implicit */int) ((unsigned short) arr_15 [i_1]));
                            var_27 = ((/* implicit */long long int) ((_Bool) arr_20 [i_2 - 1] [i_5 + 2] [i_2 - 1] [i_7]));
                        }
                    } 
                } 
                arr_23 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [(unsigned char)4] [i_2] [i_5] [(unsigned char)4])) ? (((/* implicit */int) (short)-15877)) : ((~(-1827272181)))));
                arr_24 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((int) ((unsigned long long int) var_19)));
            }
        }
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            for (int i_9 = 3; i_9 < 18; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        for (short i_11 = 4; i_11 < 18; i_11 += 1) 
                        {
                            {
                                var_28 &= (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_8] [i_1])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_9] [i_8] [i_9] [i_10])))))))) ? (((/* implicit */int) ((short) ((long long int) arr_15 [i_9 + 2])))) : ((((-(2147483645))) & ((~(((/* implicit */int) (short)29967)))))));
                                arr_35 [i_1] [i_1] [i_1] [i_9] [i_1] = ((/* implicit */short) (~((-((-(((/* implicit */int) var_3))))))));
                            }
                        } 
                    } 
                    var_29 -= ((/* implicit */unsigned short) (-(71776119061217280ULL)));
                }
            } 
        } 
    }
    for (long long int i_12 = 3; i_12 < 22; i_12 += 3) 
    {
        arr_39 [24] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_38 [i_12])) == (((/* implicit */int) arr_36 [i_12]))));
        arr_40 [i_12] [i_12] = ((/* implicit */int) arr_38 [i_12]);
        /* LoopNest 2 */
        for (long long int i_13 = 0; i_13 < 25; i_13 += 4) 
        {
            for (long long int i_14 = 0; i_14 < 25; i_14 += 2) 
            {
                {
                    var_30 |= var_4;
                    arr_48 [i_12] [i_13] [i_12] [i_12] = ((/* implicit */short) arr_36 [i_12]);
                }
            } 
        } 
        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_12] [i_12]))) < (12146365829972889476ULL))))))) ? ((~(((((/* implicit */_Bool) 576460752303419392LL)) ? (((/* implicit */long long int) 1776300801)) : (arr_43 [i_12] [i_12] [i_12]))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-2585)))));
        /* LoopNest 2 */
        for (short i_15 = 2; i_15 < 24; i_15 += 1) 
        {
            for (long long int i_16 = 0; i_16 < 25; i_16 += 4) 
            {
                {
                    var_32 = ((/* implicit */int) 16934857300532974642ULL);
                    /* LoopSeq 2 */
                    for (unsigned short i_17 = 0; i_17 < 25; i_17 += 4) 
                    {
                        arr_60 [i_12] [i_12] = ((/* implicit */unsigned short) var_13);
                        var_33 -= ((/* implicit */short) (-(((((/* implicit */_Bool) (~(arr_54 [i_12] [i_17] [3ULL] [11])))) ? (((/* implicit */int) (short)-10108)) : (((/* implicit */int) arr_55 [i_15] [i_17] [i_15] [18LL]))))));
                        var_34 = ((/* implicit */unsigned long long int) arr_42 [i_16] [(unsigned char)24]);
                    }
                    for (int i_18 = 1; i_18 < 21; i_18 += 1) 
                    {
                        arr_63 [i_12] [i_16] [i_18] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_38 [i_12]))));
                        arr_64 [i_12] [(unsigned char)12] [i_16] [i_18 + 4] [i_15] [i_16] = ((/* implicit */_Bool) (short)-15873);
                        var_35 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) arr_38 [i_12])))));
                    }
                    arr_65 [i_12] [i_12] [(short)21] [i_16] = ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) 2147483647)))))) ? (((/* implicit */int) ((short) arr_56 [i_12] [i_15] [i_12] [i_15]))) : (((/* implicit */int) (short)15872)));
                    var_36 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_46 [i_12] [i_12] [i_15])) ? (((/* implicit */int) (short)15869)) : (arr_54 [i_12] [i_12] [i_12] [i_16]))) == (((/* implicit */int) ((short) arr_42 [i_15] [i_16]))))) ? (((/* implicit */int) arr_61 [i_16] [i_12] [i_16] [i_15] [i_15])) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_55 [i_12] [i_12] [16] [i_16]))))) ? (((/* implicit */int) ((short) 576460752303419372LL))) : (((((/* implicit */_Bool) (short)29967)) ? (((/* implicit */int) arr_37 [i_12] [i_12])) : (arr_51 [i_12])))))));
                }
            } 
        } 
    }
    var_37 = ((/* implicit */unsigned long long int) ((short) var_1));
}
