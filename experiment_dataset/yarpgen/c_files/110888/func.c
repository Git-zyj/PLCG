/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110888
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] [(unsigned char)20] = var_11;
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (arr_0 [i_0])))) ? (((/* implicit */int) max((arr_0 [i_0]), (var_4)))) : ((~(((/* implicit */int) var_10))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_10 [(unsigned char)13] [i_1] [(unsigned char)14] = arr_9 [i_0] [i_2];
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_8 [i_1] [i_0]))))))) ? (((/* implicit */int) (unsigned char)11)) : (((((/* implicit */_Bool) (unsigned char)225)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_1 [i_0] [i_2]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) var_12))))))));
                        arr_18 [i_5] [i_5] [i_3] [i_5] [(unsigned char)10] = (unsigned char)30;
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_6 = 4; i_6 < 20; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)31))));
                            var_23 = ((unsigned char) arr_5 [i_6 + 2]);
                        }
                        for (unsigned char i_7 = 2; i_7 < 21; i_7 += 2) 
                        {
                            var_24 = ((unsigned char) (~(((/* implicit */int) arr_20 [(unsigned char)18] [i_5] [i_4] [i_5] [i_3]))));
                            var_25 = ((unsigned char) (unsigned char)196);
                        }
                        var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)31))));
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 1; i_8 < 20; i_8 += 2) 
                        {
                            arr_25 [(unsigned char)3] [i_5] [i_5] [i_5] [i_5] = arr_17 [i_0] [i_0] [i_0] [i_4] [i_5] [(unsigned char)4];
                            arr_26 [i_5] = (unsigned char)151;
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_9 = 2; i_9 < 22; i_9 += 3) /* same iter space */
    {
        arr_31 [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_30 [i_9 + 1])) ? (((/* implicit */int) ((unsigned char) (unsigned char)255))) : (((/* implicit */int) ((unsigned char) (unsigned char)206))))) ^ (((/* implicit */int) ((unsigned char) ((unsigned char) (unsigned char)0))))));
        arr_32 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_29 [i_9 - 1])) : (((/* implicit */int) ((unsigned char) var_1)))));
    }
    for (unsigned char i_10 = 2; i_10 < 22; i_10 += 3) /* same iter space */
    {
        var_27 = arr_28 [i_10];
        arr_37 [i_10] = ((/* implicit */unsigned char) (+((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_30 [i_10]))))))));
    }
    for (unsigned char i_11 = 2; i_11 < 22; i_11 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_39 [i_11]))))))));
        var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (unsigned char)31))))))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) (unsigned char)112))));
        arr_41 [i_11 + 1] [i_11] = arr_30 [i_11];
        var_31 = ((unsigned char) max((arr_36 [i_11 + 1] [i_11 + 1]), ((unsigned char)0)));
    }
    /* LoopNest 3 */
    for (unsigned char i_12 = 2; i_12 < 18; i_12 += 2) 
    {
        for (unsigned char i_13 = 0; i_13 < 21; i_13 += 1) 
        {
            for (unsigned char i_14 = 0; i_14 < 21; i_14 += 4) 
            {
                {
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_6))) & (((/* implicit */int) ((unsigned char) (unsigned char)11)))))) ? (((/* implicit */int) arr_42 [i_14])) : (((/* implicit */int) (unsigned char)234))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_15 = 0; i_15 < 21; i_15 += 3) 
                    {
                        arr_53 [i_15] [(unsigned char)7] [(unsigned char)1] [i_15] [i_15] = ((unsigned char) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_19 [i_12] [i_12]))));
                        var_33 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)206))));
                        arr_54 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) arr_1 [i_12] [i_12 - 1])) : (((/* implicit */int) arr_1 [i_12 - 1] [i_12 - 2]))));
                        arr_55 [i_15] [i_13] [i_14] = ((unsigned char) arr_15 [i_12 - 2] [i_15] [(unsigned char)15]);
                        var_34 = (unsigned char)135;
                    }
                }
            } 
        } 
    } 
}
