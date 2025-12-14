/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140389
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(arr_4 [i_1 - 1] [i_1 - 1] [i_1]))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_11 &= ((/* implicit */int) arr_10 [i_0] [9]);
                    var_12 = ((/* implicit */_Bool) var_7);
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) arr_1 [i_1 - 1]))));
                    arr_11 [(_Bool)1] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_0 [i_0] [i_1])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -246164110)) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) var_3)))))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_14 [i_1] = ((int) (unsigned char)32);
                    /* LoopSeq 4 */
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        arr_18 [i_4] [(unsigned char)8] [i_1] [(unsigned char)8] [i_0] |= ((/* implicit */_Bool) 246164102);
                        var_14 += ((/* implicit */_Bool) ((int) -246164110));
                        var_15 = ((/* implicit */_Bool) (unsigned char)208);
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_21 [(unsigned char)10] [i_1] = var_7;
                        var_16 = ((/* implicit */_Bool) arr_4 [i_0] [i_1] [0]);
                        var_17 -= ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((unsigned char) var_10))) : (arr_15 [(_Bool)0] [(_Bool)0]));
                    }
                    for (int i_6 = 1; i_6 < 9; i_6 += 2) 
                    {
                        var_18 += -799645312;
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_5 [(unsigned char)2]))));
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        arr_28 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) arr_4 [i_1] [i_1 - 1] [i_7 - 1]);
                        var_20 |= ((/* implicit */unsigned char) arr_20 [i_0] [i_1] [i_1 - 1] [(_Bool)1] [i_3] [i_1]);
                        var_21 += ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_23 [(unsigned char)3] [i_1])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 9; i_8 += 2) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) var_2)))));
                                arr_34 [i_1] [i_1] [i_8] [i_9] = ((unsigned char) arr_9 [i_1 - 1] [i_8 - 1]);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    var_23 += ((/* implicit */_Bool) -692954443);
                    var_24 = var_10;
                }
            }
        } 
    } 
    var_25 = var_10;
    /* LoopNest 2 */
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            {
                var_26 = min((799645312), (((((/* implicit */_Bool) arr_40 [i_11 - 1] [i_11 - 1] [i_12])) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) arr_40 [i_11 - 1] [i_11 - 1] [i_12])))));
                var_27 += ((/* implicit */unsigned char) -246164141);
            }
        } 
    } 
}
