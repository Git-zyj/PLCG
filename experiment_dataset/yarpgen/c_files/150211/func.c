/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150211
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            var_11 = ((unsigned char) (unsigned char)199);
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1] [i_0 - 1])))))));
                            var_13 = (unsigned char)140;
                        }
                        var_14 = var_2;
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (-(((/* implicit */int) var_4)))))));
                        var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (unsigned char)84)))));
                    }
                } 
            } 
        }
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 4) 
        {
            var_17 = var_6;
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)14)) != (((/* implicit */int) arr_11 [i_0 + 3] [i_0 - 1] [i_0 + 1] [i_0] [i_0]))));
        }
        for (unsigned char i_6 = 1; i_6 < 12; i_6 += 2) 
        {
            var_19 -= (unsigned char)18;
            var_20 = arr_4 [i_6 - 1] [i_0] [i_0];
        }
        for (unsigned char i_7 = 4; i_7 < 11; i_7 += 3) 
        {
            var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [i_7 - 3] [i_7 + 2] [i_7 - 2]))));
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_0] [i_0] [i_0])) >= (((/* implicit */int) ((unsigned char) (unsigned char)29)))));
            /* LoopSeq 2 */
            for (unsigned char i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)84)) ^ (((/* implicit */int) arr_0 [i_0] [i_0 - 1])))))));
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)249)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    for (unsigned char i_12 = 0; i_12 < 13; i_12 += 4) 
                    {
                        {
                            var_25 = (unsigned char)249;
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)171)) ? (((((/* implicit */int) var_8)) / (((/* implicit */int) var_6)))) : (((/* implicit */int) var_7))));
                            var_27 = var_3;
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) (unsigned char)246))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 13; i_13 += 1) 
                {
                    for (unsigned char i_14 = 0; i_14 < 13; i_14 += 4) 
                    {
                        {
                            arr_39 [i_13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)98))));
                            arr_40 [(unsigned char)11] [i_13] [(unsigned char)11] = arr_13 [i_13] [i_13] [i_0];
                            arr_41 [i_0 - 1] [i_7 - 4] [i_13] [i_13] [i_0 + 3] [(unsigned char)8] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)31))));
                            arr_42 [i_0] [i_13] [i_8] [i_13] [i_13] [i_14] [i_14] = ((unsigned char) (~(((/* implicit */int) (unsigned char)194))));
                            var_29 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_25 [i_7 - 1])) + (((/* implicit */int) (unsigned char)39))));
                        }
                    } 
                } 
                arr_43 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_36 [i_7 - 3] [(unsigned char)5] [i_7 - 3] [i_7] [i_7 - 4] [i_7])) : (((/* implicit */int) arr_12 [i_8] [i_7 + 2] [i_7 - 4]))));
            }
            for (unsigned char i_15 = 0; i_15 < 13; i_15 += 1) 
            {
                var_30 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_34 [i_15] [(unsigned char)12] [i_7] [i_7 - 4] [i_0] [i_0 + 2]))));
                var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) (-((+(((/* implicit */int) var_7)))))))));
            }
        }
        var_32 = ((unsigned char) arr_22 [i_0 + 3] [i_0 - 1] [i_0 + 3] [i_0 - 1] [i_0 - 1] [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_16 = 0; i_16 < 18; i_16 += 3) 
    {
        var_33 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)81)) < (((/* implicit */int) (unsigned char)236)))) ? (((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */int) arr_47 [(unsigned char)15])) : (((/* implicit */int) (unsigned char)125)))) : (((/* implicit */int) ((unsigned char) arr_49 [i_16])))));
        var_34 = (unsigned char)118;
        var_35 = ((/* implicit */unsigned char) min((var_35), ((unsigned char)246)));
        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (+(((/* implicit */int) var_8)))))));
    }
    var_37 = ((unsigned char) (unsigned char)206);
}
