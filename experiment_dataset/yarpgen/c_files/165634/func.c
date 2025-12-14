/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165634
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
    var_12 -= ((/* implicit */unsigned int) var_5);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            var_13 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) ((arr_1 [i_1]) > (((/* implicit */int) var_4))))))), (((/* implicit */int) ((((unsigned int) arr_3 [i_1])) <= (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-2219))))))))));
            var_14 = ((/* implicit */short) (_Bool)1);
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_15 = ((/* implicit */int) ((unsigned char) arr_2 [i_0] [i_2]));
            arr_9 [i_2] = ((/* implicit */unsigned int) var_4);
            var_16 = ((/* implicit */_Bool) ((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_2]))) : (225149599U)));
            arr_10 [i_2] [i_2] [i_0] = ((/* implicit */int) arr_3 [23]);
        }
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (((var_7) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_0] [(unsigned char)18]))))))) || (((/* implicit */_Bool) (unsigned char)94))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            /* LoopSeq 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_16 [i_0] [i_3] [i_3] [i_4] = ((/* implicit */unsigned int) ((short) var_1));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (_Bool)0))));
                            var_19 = (+(1962625479));
                            var_20 = ((/* implicit */unsigned int) (unsigned char)124);
                            arr_22 [i_0] [i_3] [i_4] [i_3] [i_0] = ((/* implicit */_Bool) arr_2 [i_0] [i_3]);
                            arr_23 [i_3] [i_5] [i_4] [i_3] [(short)12] [i_3] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_0] [i_3] [i_4] [i_3] [i_6]))));
                        }
                    } 
                } 
            }
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    arr_28 [i_0] [i_3] [i_7 - 1] [(short)18] = ((/* implicit */unsigned char) ((unsigned int) arr_15 [i_7 - 1] [i_8] [i_7 - 1] [9U]));
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        arr_33 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_24 [i_3] [i_7 - 1]))));
                        var_21 *= ((/* implicit */short) var_6);
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_7 - 1] [i_7] [14])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_25 [i_7 - 1] [i_7 - 1] [i_9] [i_3]))));
                        var_23 = (!(((/* implicit */_Bool) arr_14 [i_3])));
                    }
                    for (unsigned char i_10 = 2; i_10 < 23; i_10 += 3) 
                    {
                        var_24 ^= ((/* implicit */unsigned int) ((-1783222937) >= (arr_26 [i_7] [4] [i_8] [i_7] [i_7 - 1])));
                        arr_37 [4U] [i_8] [i_8] [i_3] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-6436)) ? (((/* implicit */int) arr_29 [i_8] [i_10 + 1] [i_8])) : (var_5)));
                    }
                    arr_38 [i_0] [i_3] [i_7 - 1] [i_8] &= ((/* implicit */short) ((unsigned int) (~(2407570300U))));
                    var_25 = ((/* implicit */short) -672232284);
                    arr_39 [i_3] = ((/* implicit */short) var_5);
                }
                for (int i_11 = 1; i_11 < 23; i_11 += 2) 
                {
                    var_26 = ((/* implicit */short) ((1530710063U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    arr_43 [i_0] [i_3] [i_3] [(short)15] = ((/* implicit */short) ((int) (short)15698));
                }
                for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                {
                    arr_47 [i_12] [i_3] [i_3] [i_3] [i_12] = ((/* implicit */unsigned char) (-(arr_1 [i_3])));
                    /* LoopSeq 3 */
                    for (unsigned char i_13 = 0; i_13 < 24; i_13 += 3) 
                    {
                        var_27 |= ((arr_42 [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]) == (((/* implicit */int) arr_17 [i_7 - 1] [17U] [i_7] [i_12 + 1] [i_12 + 1] [i_13])));
                        var_28 = ((/* implicit */short) var_4);
                        var_29 = (~(arr_40 [i_7 - 1] [i_7] [i_7 - 1] [i_7] [i_7 - 1]));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((int) (_Bool)1)))));
                    }
                    for (short i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        var_31 = ((/* implicit */int) arr_19 [i_0] [i_3] [i_3] [i_12] [i_0]);
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_15 [(_Bool)1] [11U] [i_12] [i_12 + 1])) ? (var_5) : (((/* implicit */int) (short)180))));
                        var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) arr_17 [(short)5] [i_3] [(_Bool)1] [i_12] [i_14] [i_0]))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_34 = ((((/* implicit */int) var_9)) < (((/* implicit */int) var_0)));
                        arr_56 [i_0] [i_3] [i_7 - 1] [i_12 + 1] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_12 + 1] [i_12 + 1])) ? (((/* implicit */int) arr_24 [i_12] [i_12 + 1])) : (((/* implicit */int) (unsigned char)90))));
                        arr_57 [i_0] [(short)12] [i_3] [i_3] [(short)2] [i_12] [i_15] = ((/* implicit */int) (unsigned char)165);
                        arr_58 [i_0] [i_3] [i_3] [i_12 + 1] [i_0] [i_3] [(_Bool)0] = ((/* implicit */int) arr_5 [i_12 + 1]);
                    }
                }
                var_35 -= ((/* implicit */short) (+(arr_36 [i_7 - 1] [i_7 - 1] [16] [i_7] [(_Bool)1])));
                /* LoopSeq 2 */
                for (unsigned int i_16 = 0; i_16 < 24; i_16 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_17 = 0; i_17 < 24; i_17 += 3) 
                    {
                        arr_63 [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)166))))) ? (((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) (unsigned char)94)) : (((/* implicit */int) (short)6428)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_51 [i_3])) : (var_5)))));
                        var_36 = (unsigned char)240;
                        var_37 = (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (arr_46 [i_3] [i_16] [i_7] [i_3] [i_3])))));
                    }
                    for (int i_18 = 0; i_18 < 24; i_18 += 3) 
                    {
                        var_38 = ((/* implicit */short) arr_49 [1] [i_7 - 1] [i_7 - 1] [i_7] [i_3] [i_7] [4]);
                        var_39 -= ((/* implicit */short) arr_59 [i_0] [i_3] [i_7] [i_16] [i_18] [i_16]);
                    }
                    var_40 = ((/* implicit */_Bool) var_0);
                }
                for (int i_19 = 1; i_19 < 23; i_19 += 2) 
                {
                    arr_69 [i_3] [i_3] [i_3] [i_19] = ((/* implicit */_Bool) ((unsigned int) (unsigned char)94));
                    var_41 |= ((/* implicit */int) ((_Bool) ((unsigned int) var_5)));
                    var_42 = ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) % (((unsigned int) var_5)));
                }
                arr_70 [i_3] [i_3] [i_7] = ((/* implicit */_Bool) arr_30 [i_0] [i_3] [i_7] [i_7 - 1] [i_7]);
                arr_71 [i_0] [i_3] [(short)14] |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))))));
            }
            arr_72 [i_3] [i_3] = ((/* implicit */short) ((arr_32 [i_3] [i_3]) < (arr_32 [i_0] [i_3])));
            var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) var_0))))))));
            var_44 = (_Bool)1;
        }
        for (int i_20 = 1; i_20 < 22; i_20 += 2) 
        {
            /* LoopNest 2 */
            for (short i_21 = 0; i_21 < 24; i_21 += 2) 
            {
                for (unsigned int i_22 = 3; i_22 < 22; i_22 += 3) 
                {
                    {
                        var_45 = ((/* implicit */short) ((_Bool) var_6));
                        var_46 = ((/* implicit */int) var_11);
                    }
                } 
            } 
            var_47 = ((/* implicit */_Bool) var_3);
        }
    }
    var_48 &= ((/* implicit */int) min(((_Bool)1), ((_Bool)1)));
    var_49 = var_9;
}
