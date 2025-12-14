/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128197
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
    var_13 = ((/* implicit */int) (!(var_6)));
    var_14 = ((/* implicit */signed char) (+(((int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)12356)) : (((/* implicit */int) (unsigned char)148)))))));
    var_15 = ((/* implicit */signed char) max((var_11), (((int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_16 = ((/* implicit */int) arr_1 [11ULL]);
        arr_2 [i_0] = ((/* implicit */unsigned short) ((signed char) (-(arr_1 [i_0]))));
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((unsigned long long int) arr_1 [(signed char)8])) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [i_0] [i_0])))))) : (arr_1 [i_0])));
        var_18 = ((/* implicit */int) var_10);
    }
    for (signed char i_1 = 3; i_1 < 20; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 2; i_4 < 18; i_4 += 4) 
                    {
                        for (int i_5 = 1; i_5 < 21; i_5 += 1) 
                        {
                            {
                                arr_19 [i_3] [i_3] = ((/* implicit */unsigned short) (~(764751472)));
                                var_19 = ((/* implicit */unsigned char) ((var_12) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-92)))));
                                var_20 = ((/* implicit */short) (unsigned short)12356);
                            }
                        } 
                    } 
                    arr_20 [i_3] [i_2] [(unsigned short)21] = ((/* implicit */unsigned short) arr_17 [i_1 + 1] [i_1] [i_1] [i_1] [i_3] [i_1 + 1]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_6 = 1; i_6 < 21; i_6 += 2) 
        {
            for (unsigned short i_7 = 1; i_7 < 20; i_7 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_23 [i_7] [i_7] [i_6 - 1] [i_1 - 3])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (arr_14 [i_1] [i_6] [i_6] [i_7]))) : (((((/* implicit */_Bool) 1073741568)) ? (var_5) : (arr_14 [i_1] [i_6] [i_7] [i_7])))))));
                    var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) arr_22 [i_1] [i_6])))), (((((/* implicit */_Bool) arr_0 [i_7 + 2] [i_6])) ? (((/* implicit */int) (unsigned short)49951)) : (((/* implicit */int) arr_24 [i_1 - 2] [i_7 + 2] [i_7])))))))));
                    var_23 = ((/* implicit */int) (unsigned char)0);
                }
            } 
        } 
        arr_25 [(short)6] = var_5;
        arr_26 [i_1] = ((/* implicit */int) 12ULL);
        var_24 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 + 2]))))) / (((/* implicit */int) ((((((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [i_1])) & (((/* implicit */int) arr_21 [(unsigned char)12])))) == (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
    }
    /* vectorizable */
    for (short i_8 = 1; i_8 < 24; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
        {
            for (int i_10 = 0; i_10 < 25; i_10 += 1) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) (signed char)10);
                    var_26 = ((/* implicit */unsigned short) (short)23360);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63798)) ? (arr_30 [i_11] [i_8] [i_8]) : (((/* implicit */int) arr_28 [i_8] [15]))))) ? (((((/* implicit */_Bool) (unsigned short)6446)) ? (((/* implicit */int) arr_33 [i_9] [i_9] [(unsigned short)23])) : (arr_30 [i_8] [i_8] [i_11]))) : ((+(((/* implicit */int) (signed char)4))))));
                        arr_37 [i_8] [(unsigned short)20] [i_9] [i_8] = ((/* implicit */_Bool) var_2);
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_8])) ? (arr_36 [i_8 - 1] [i_8 + 1] [i_8] [i_8] [i_8 - 1] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                    }
                    for (signed char i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (int i_13 = 0; i_13 < 25; i_13 += 2) 
                        {
                            arr_42 [i_13] [i_8] [i_8] = arr_38 [24U] [i_8] [20] [(unsigned char)5];
                            arr_43 [i_8] [3] [(short)14] [(unsigned short)14] [i_8] = ((/* implicit */int) arr_29 [i_10] [i_9]);
                            var_29 = ((/* implicit */_Bool) ((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)10))))))));
                        }
                        var_30 = arr_28 [i_8] [i_9];
                        var_31 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (arr_38 [(_Bool)1] [(unsigned short)0] [(unsigned short)0] [i_8 - 1]) : (((/* implicit */int) (signed char)1))));
                    }
                    arr_44 [i_8] [i_9] [i_8] = ((((/* implicit */_Bool) ((unsigned short) arr_39 [i_8] [i_9] [i_9] [i_8]))) ? ((~(860456313))) : ((-(arr_27 [i_8]))));
                    var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) var_1))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 25; i_14 += 4) 
        {
            for (short i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        for (signed char i_17 = 1; i_17 < 21; i_17 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_53 [i_8 + 1])) ? (arr_38 [i_14] [i_8] [i_16] [(signed char)5]) : (((/* implicit */int) arr_51 [i_8] [i_8] [i_15] [i_16] [(unsigned short)6] [i_17]))));
                                var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_48 [i_8 - 1] [i_17 + 2]))));
                                var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_52 [i_8] [i_14] [i_14] [i_15] [i_16] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (arr_47 [i_8])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_8] [(unsigned char)13] [i_17]))) : (arr_47 [i_8])));
                                var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_36 [i_8] [i_14] [i_15] [i_14] [i_17] [i_17]) : (((/* implicit */unsigned long long int) arr_49 [i_14] [i_14]))))) ? (arr_39 [i_8] [i_8] [(short)0] [i_14]) : (-858200524))))));
                                var_37 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_48 [i_8] [i_14])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_46 [i_16]))))) / (((4294967295U) & (((/* implicit */unsigned int) var_5))))));
                            }
                        } 
                    } 
                    arr_56 [i_15] [i_14] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_8] [11] [i_15] [(unsigned short)20] [i_8 - 1] [i_15]))) > (339113109U)));
                    var_38 = ((/* implicit */unsigned char) ((((arr_47 [i_8]) >> (((3955854186U) - (3955854167U))))) == (((/* implicit */unsigned int) ((int) var_4)))));
                    var_39 = ((/* implicit */unsigned int) (unsigned short)59090);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_18 = 0; i_18 < 25; i_18 += 1) 
        {
            var_40 = ((/* implicit */unsigned char) var_10);
            /* LoopNest 3 */
            for (unsigned short i_19 = 1; i_19 < 23; i_19 += 1) 
            {
                for (unsigned short i_20 = 1; i_20 < 24; i_20 += 2) 
                {
                    for (signed char i_21 = 2; i_21 < 24; i_21 += 1) 
                    {
                        {
                            var_41 = (~(((/* implicit */int) ((unsigned short) arr_51 [i_18] [i_18] [21] [21] [i_18] [i_18]))));
                            var_42 = ((/* implicit */unsigned short) ((short) arr_29 [i_18] [i_20]));
                            arr_67 [i_21] [i_18] [i_19] [i_20] [i_8] [(short)6] = ((var_6) ? (((/* implicit */unsigned int) ((int) var_4))) : (arr_55 [i_20 + 1] [i_18] [i_20] [i_20] [i_21]));
                        }
                    } 
                } 
            } 
            arr_68 [i_8] = ((/* implicit */signed char) var_8);
        }
        var_43 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) arr_61 [i_8] [i_8] [i_8])))));
    }
}
