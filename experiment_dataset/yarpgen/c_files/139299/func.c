/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139299
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
    for (int i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        var_12 ^= ((/* implicit */unsigned int) (~((-(var_11)))));
        var_13 = ((/* implicit */unsigned int) max((var_13), ((+(min((min((var_0), (var_2))), ((+(var_5)))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 536862720))));
                                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_4] [i_3] [i_2])) ? (var_8) : ((~(min((((/* implicit */unsigned int) arr_6 [i_0 - 2] [i_0 - 2] [i_2] [i_3])), (var_7))))))))));
                            }
                        } 
                    } 
                    arr_12 [i_0 - 1] [i_0] [i_1] [i_2] = ((/* implicit */int) (~(var_2)));
                }
            } 
        } 
    }
    /* LoopSeq 4 */
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
    {
        var_16 ^= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 2539944092U))))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            arr_17 [i_5] [i_5] = (-(((int) (!(((/* implicit */_Bool) arr_13 [i_6] [i_5]))))));
            arr_18 [i_6] = ((/* implicit */_Bool) min((((/* implicit */int) ((arr_16 [i_5]) > (((/* implicit */unsigned int) arr_14 [i_5]))))), (arr_14 [i_5])));
        }
    }
    for (int i_7 = 0; i_7 < 13; i_7 += 2) 
    {
        var_17 = arr_15 [i_7] [i_7];
        var_18 = (~(min((((/* implicit */unsigned int) arr_6 [i_7] [i_7] [i_7] [i_7])), (var_0))));
        var_19 = ((/* implicit */unsigned char) ((unsigned int) var_3));
        arr_21 [(unsigned char)2] = max((arr_15 [i_7] [i_7]), (((/* implicit */unsigned int) (+(((/* implicit */int) ((2539944085U) >= (arr_4 [i_7]))))))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            var_20 ^= ((/* implicit */unsigned int) ((int) ((int) var_4)));
            arr_26 [i_8] [i_8] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_8])) && (((/* implicit */_Bool) arr_22 [i_8]))));
        }
        for (int i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            arr_30 [i_8] = arr_24 [i_8];
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) max((var_21), (var_7)));
                        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((unsigned int) ((int) var_10))))));
                        var_23 = ((/* implicit */int) (~(var_8)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_13 = 3; i_13 < 18; i_13 += 1) 
            {
                for (unsigned int i_14 = 1; i_14 < 19; i_14 += 3) 
                {
                    {
                        var_24 = ((/* implicit */int) var_0);
                        arr_43 [i_13] = ((/* implicit */unsigned int) ((var_11) - (arr_32 [i_13 - 2] [i_13 - 3] [i_13] [i_13])));
                        /* LoopSeq 1 */
                        for (unsigned int i_15 = 0; i_15 < 20; i_15 += 3) 
                        {
                            arr_46 [i_13] [i_15] [i_15] [i_14 - 1] [i_13 + 1] [i_10] [i_13] = ((/* implicit */unsigned char) var_9);
                            arr_47 [i_8] [i_10] [i_13] [i_14] [i_13] [i_8] = ((/* implicit */int) (+(arr_44 [i_13] [i_15] [i_13] [i_13] [i_13])));
                            arr_48 [i_13] [i_15] [(_Bool)1] = (~(1048575U));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_13 - 1] [i_14 - 1] [i_13]))) - (var_5)));
                        }
                        arr_49 [i_13] = ((/* implicit */unsigned int) (~((+(var_1)))));
                    }
                } 
            } 
            var_26 = (~(1755023203U));
        }
        for (unsigned int i_16 = 0; i_16 < 20; i_16 += 3) 
        {
            /* LoopNest 3 */
            for (int i_17 = 4; i_17 < 19; i_17 += 3) 
            {
                for (unsigned char i_18 = 0; i_18 < 20; i_18 += 2) 
                {
                    for (unsigned int i_19 = 0; i_19 < 20; i_19 += 4) 
                    {
                        {
                            var_27 ^= ((/* implicit */unsigned int) ((arr_29 [i_8] [i_8] [i_17 - 4]) > (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_4)) >= (arr_42 [8] [i_19] [i_17] [i_18] [i_18] [i_19])))))))));
                            var_29 = ((/* implicit */unsigned int) max((var_29), (var_7)));
                        }
                    } 
                } 
            } 
            arr_59 [i_8] [i_16] [i_16] |= (!(((/* implicit */_Bool) 1454309610)));
        }
        var_30 = ((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_8] [i_8] [i_8])) ^ (((/* implicit */int) arr_37 [i_8] [i_8] [i_8]))));
    }
    /* vectorizable */
    for (unsigned int i_20 = 2; i_20 < 20; i_20 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_21 = 0; i_21 < 21; i_21 += 3) 
        {
            for (int i_22 = 1; i_22 < 20; i_22 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                    {
                        for (unsigned int i_24 = 3; i_24 < 20; i_24 += 3) 
                        {
                            {
                                arr_72 [i_20] [i_20] [i_20 - 2] [i_20 - 1] [i_20 - 2] [i_20 + 1] = ((/* implicit */int) (!((_Bool)1)));
                                var_31 = (~(((unsigned int) arr_71 [i_20] [i_20 + 1] [i_20] [i_20 + 1] [i_20] [i_20] [i_20 - 2])));
                            }
                        } 
                    } 
                    var_32 ^= var_8;
                    var_33 *= ((/* implicit */unsigned int) ((int) arr_66 [i_22 - 1] [i_21] [i_22] [i_20 - 2]));
                    var_34 = (+(arr_61 [i_20]));
                    arr_73 [i_20 + 1] [i_21] [13U] [i_22] |= ((/* implicit */int) (((+(arr_64 [i_20]))) << (((var_1) + (865147738)))));
                }
            } 
        } 
        arr_74 [i_20 - 2] = arr_68 [(unsigned char)0] [i_20 - 1] [i_20 - 1] [13];
        var_35 = ((/* implicit */_Bool) (~(469762048U)));
    }
}
