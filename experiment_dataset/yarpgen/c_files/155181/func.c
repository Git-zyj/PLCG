/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155181
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
    var_20 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_1)))))) != (((/* implicit */int) ((unsigned char) var_2)))));
    var_21 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0 + 1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [8])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1]))) : (var_4))))))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned short)8])))))))))));
        var_23 *= ((/* implicit */_Bool) min((((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1]))) : (var_17))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 - 1])))))));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */signed char) ((((var_7) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_1)))) / (((/* implicit */int) var_5))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */int) var_13);
                        /* LoopSeq 1 */
                        for (int i_4 = 3; i_4 < 16; i_4 += 2) 
                        {
                            var_24 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_11 [i_1] [i_0] [i_1] [i_2 - 2])) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_14 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1])))), (((arr_6 [i_0 - 1] [i_1] [i_2 - 2] [i_0]) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_2 - 2] [i_1] [i_0]))))));
                            arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_4] [i_4 + 2] [i_4 - 1] [i_4] [i_1])) ? (((((/* implicit */int) arr_14 [i_4 - 1] [i_4] [i_4 - 1] [i_4] [i_4 - 3] [i_4] [i_3])) + (((/* implicit */int) arr_14 [i_4 + 2] [i_4] [i_4] [i_4] [i_4 - 2] [i_3] [i_3])))) : (((/* implicit */int) arr_14 [i_4 - 1] [i_4] [i_4 + 1] [i_4] [i_4 + 4] [i_3] [i_3]))));
                            var_25 = ((/* implicit */signed char) ((((((/* implicit */int) arr_7 [i_0] [i_2 - 2] [i_0])) / (((/* implicit */int) var_9)))) * (((/* implicit */int) ((unsigned char) arr_6 [i_2 + 1] [i_2 - 1] [i_2] [i_0])))));
                        }
                    }
                    var_26 -= ((/* implicit */_Bool) min((arr_1 [i_2]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0 + 1] [i_2])))))));
                    arr_16 [i_0] = var_11;
                }
            } 
        } 
    }
    for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 2) 
        {
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_18 [i_5] [i_6 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_18 [i_5] [i_6 + 1])))))))));
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) > (((/* implicit */int) ((_Bool) arr_18 [i_6 + 1] [i_6 + 1])))));
            /* LoopSeq 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_29 *= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) var_6)) << (((((/* implicit */int) arr_21 [i_6 - 1] [(short)6] [i_6 - 1] [i_7])) - (182))))));
                var_30 = ((/* implicit */unsigned short) var_2);
                arr_23 [i_5] [i_7] [i_7] = ((/* implicit */short) ((unsigned long long int) ((int) var_18)));
                var_31 = ((/* implicit */signed char) var_0);
            }
            /* vectorizable */
            for (long long int i_8 = 1; i_8 < 19; i_8 += 2) 
            {
                arr_28 [i_8] [i_6] [i_8] = ((unsigned char) arr_25 [i_5] [i_6] [i_8 + 2] [i_8 - 1]);
                arr_29 [i_8] [i_5] [i_6] [i_8] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1]))));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    for (signed char i_10 = 1; i_10 < 18; i_10 += 2) 
                    {
                        {
                            arr_36 [i_5] [i_6 + 1] [i_8] [i_8] [i_9] [i_10 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_6] [i_8 + 2])) ? (((/* implicit */int) arr_20 [i_5])) : (((/* implicit */int) arr_27 [i_8] [i_8]))));
                            var_32 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_18 [i_10 + 2] [i_6 - 1]))));
                        }
                    } 
                } 
                arr_37 [i_8] [i_8] [i_8] [i_5] = ((/* implicit */short) (~(((/* implicit */int) arr_27 [i_6 + 1] [i_8]))));
            }
            for (unsigned char i_11 = 1; i_11 < 20; i_11 += 2) 
            {
                var_33 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_39 [i_11 - 1] [i_6 - 1])))))));
                arr_41 [i_5] [i_6 + 1] [i_11] = (-(((/* implicit */int) var_13)));
            }
            arr_42 [i_5] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) arr_26 [i_6 + 1] [i_5] [i_5])) : (((((/* implicit */_Bool) arr_27 [(unsigned char)12] [(unsigned char)12])) ? (((/* implicit */int) arr_31 [i_6 - 1] [i_5])) : (((/* implicit */int) arr_31 [i_6 + 1] [i_5]))))));
        }
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 21; i_12 += 4) 
        {
            for (unsigned char i_13 = 2; i_13 < 20; i_13 += 2) 
            {
                {
                    var_34 = ((/* implicit */unsigned short) var_13);
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 4; i_14 < 19; i_14 += 1) 
                    {
                        for (signed char i_15 = 4; i_15 < 20; i_15 += 4) 
                        {
                            {
                                var_35 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_26 [i_13 - 1] [i_13 - 1] [i_13])) ? (((/* implicit */int) arr_26 [i_13 - 1] [i_13 - 2] [i_13 - 2])) : (((/* implicit */int) arr_26 [i_13 - 2] [i_13 - 2] [i_5])))) >= ((-(((/* implicit */int) arr_26 [i_13 - 1] [i_13 + 1] [i_13]))))));
                                var_36 = ((/* implicit */int) min((var_36), (((((/* implicit */_Bool) ((unsigned char) var_13))) ? ((+(((/* implicit */int) arr_44 [i_14 - 1] [i_15 - 3])))) : (((/* implicit */int) arr_44 [i_14 - 4] [i_15 - 3]))))));
                                var_37 -= ((/* implicit */signed char) ((short) var_10));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_38 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_5]))));
        var_39 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
        var_40 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_5] [(unsigned char)2])) ? (arr_22 [i_5] [(short)0] [i_5]) : (arr_35 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) ? (((/* implicit */int) (!(arr_17 [i_5])))) : (((/* implicit */int) arr_24 [i_5]))))));
    }
    for (unsigned char i_16 = 0; i_16 < 20; i_16 += 2) 
    {
        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_16] [i_16] [i_16])) ? (((/* implicit */int) arr_26 [i_16] [i_16] [i_16])) : (((/* implicit */int) min((arr_26 [i_16] [i_16] [i_16]), (arr_26 [i_16] [i_16] [i_16]))))));
        /* LoopSeq 1 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            arr_55 [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_16] [i_17] [i_16] [i_16]))))) ? (((((/* implicit */_Bool) var_13)) ? (arr_51 [i_16] [i_16]) : (((/* implicit */int) arr_25 [i_16] [i_16] [i_17] [i_17])))) : (((/* implicit */int) arr_25 [i_16] [i_17] [i_16] [i_17]))));
            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_32 [i_16])) ? (((((/* implicit */_Bool) ((unsigned short) arr_2 [i_17]))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_7)))) : (((int) arr_40 [i_17] [i_16]))));
            /* LoopNest 3 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (unsigned short i_19 = 0; i_19 < 20; i_19 += 4) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 4) 
                    {
                        {
                            arr_65 [i_18] [i_17] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned long long int) ((_Bool) arr_21 [i_20] [i_18] [i_18] [i_16]));
                            arr_66 [i_16] [i_17] [i_18] [i_18] [i_16] [i_20] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_13 [i_17] [i_18] [i_18])))), (((/* implicit */int) max((arr_58 [i_16] [i_16]), (arr_58 [i_17] [i_19]))))));
                        }
                    } 
                } 
            } 
        }
    }
}
