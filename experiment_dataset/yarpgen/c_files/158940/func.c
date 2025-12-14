/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158940
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
    var_10 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_11 = ((int) var_4);
                        arr_13 [i_0] [i_2] [i_0] [i_1] [i_0] = var_8;
                    }
                    for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (int i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            var_12 = ((int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))));
                            var_13 = (-(max((((/* implicit */int) var_5)), (var_3))));
                            var_14 = ((var_9) / (((max((var_0), (var_9))) - (var_0))));
                            var_15 = ((/* implicit */int) max((var_15), (max((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_7)))))), ((~(var_3)))))));
                            var_16 = (~(((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_5))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 3) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_2))));
                            var_18 |= ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
                            var_19 = (-(var_1));
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) && ((!(((/* implicit */_Bool) var_2))))));
                            arr_25 [i_0] [i_0] = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))));
                            var_21 = ((int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (var_3)));
                        }
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) /* same iter space */
                        {
                            arr_28 [i_0] [i_1] [i_1] [i_1] [1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_7)))) ? ((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))))) : (((int) var_0))));
                            arr_29 [i_0] [i_1] [i_1] [i_1] [i_0] = max((((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (var_3))));
                            var_22 = (+(((/* implicit */int) min((var_5), (var_4)))));
                        }
                        arr_30 [i_0] = max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (var_7))), (var_1));
                        var_23 = min((((((int) var_5)) & (((var_7) ^ (var_3))))), (((((/* implicit */_Bool) ((unsigned char) var_5))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (max((((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */int) var_5)))), ((-(((/* implicit */int) var_8)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */int) var_2))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))))))));
                        arr_31 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (var_1)))) ? (((((/* implicit */_Bool) var_7)) ? (var_7) : (var_3))) : (((int) var_9)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_9 = 0; i_9 < 24; i_9 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */int) ((unsigned char) var_8));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4))));
                    }
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) /* same iter space */
                    {
                        var_27 = ((unsigned char) var_1);
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_9) : (var_0)));
                        arr_37 [i_0] [i_0] [i_2] [(unsigned char)20] = ((/* implicit */unsigned char) (-(var_1)));
                    }
                    arr_38 [i_0] [i_0] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (~(var_9)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))) : (var_0))));
                }
            } 
        } 
    } 
}
