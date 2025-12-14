/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104459
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        arr_8 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
                        arr_9 [i_2] [i_0] [(unsigned char)10] [i_2] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (unsigned char)62))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        arr_14 [(unsigned char)1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)209)) : (((/* implicit */int) ((unsigned char) var_15)))));
                        var_16 = (unsigned char)209;
                    }
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        var_17 *= var_2;
                        arr_17 [i_0] [i_0] [i_1] [i_2] [i_5] [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)10))));
                    }
                    arr_18 [i_0] [i_0] [i_2] [i_2] = (unsigned char)163;
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        var_18 = arr_16 [i_0] [i_0];
                        arr_21 [i_2] [(unsigned char)5] [i_6] [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)0)))) - (((/* implicit */int) arr_12 [(unsigned char)1] [(unsigned char)8] [(unsigned char)13] [(unsigned char)14]))));
                    }
                }
                /* vectorizable */
                for (unsigned char i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 1; i_8 < 14; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 15; i_9 += 2) 
                        {
                            {
                                var_19 = arr_4 [i_0] [i_7] [i_0];
                                arr_30 [i_0] [i_9] = var_0;
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_0]))));
                    var_21 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)255))));
                    /* LoopSeq 4 */
                    for (unsigned char i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_24 [i_0] [i_1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_1] [i_0] [(unsigned char)6] [(unsigned char)4])) : (((/* implicit */int) var_8))));
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 1; i_11 < 14; i_11 += 2) 
                        {
                            var_23 = (unsigned char)203;
                            arr_37 [i_0] [i_1] [i_7] [i_10] [i_0] = var_11;
                            var_24 = ((unsigned char) arr_12 [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 1]);
                        }
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (unsigned char)255))) - (((/* implicit */int) arr_13 [i_0] [i_7] [(unsigned char)10] [i_7] [i_1] [i_0]))));
                        arr_38 [(unsigned char)8] [i_1] [i_7] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_1 [i_0 - 3]))));
                    }
                    for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_0]))));
                        var_27 = var_10;
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((unsigned char) arr_20 [i_0 - 2] [i_1] [i_1] [i_12]))));
                        arr_42 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)155))));
                    }
                    for (unsigned char i_13 = 3; i_13 < 12; i_13 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((unsigned char) (unsigned char)195))));
                        var_30 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) var_10)))))));
                        var_31 = var_15;
                    }
                    for (unsigned char i_14 = 0; i_14 < 15; i_14 += 1) 
                    {
                        arr_47 [i_0] [i_1] [i_0] [i_14] = var_2;
                        var_32 = (unsigned char)219;
                    }
                }
                arr_48 [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) ((unsigned char) (unsigned char)183))))), (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)255)))) >> (((((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */int) arr_39 [i_0])) : (((/* implicit */int) var_2)))) - (137)))))))) : (((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) ((unsigned char) (unsigned char)183))))), (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)255)))) >> (((((((((/* implicit */_Bool) (unsigned char)119)) ? (((/* implicit */int) arr_39 [i_0])) : (((/* implicit */int) var_2)))) - (137))) + (146))))))));
            }
        } 
    } 
    var_33 = (unsigned char)210;
}
