/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134604
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
    var_13 = (-(var_4));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = var_12;
                                arr_13 [i_2] [i_1] [i_2] [i_3] [i_1] [i_0] = ((/* implicit */signed char) ((int) (((((~(var_11))) + (2147483647))) << (((((var_9) + (98453552))) - (9))))));
                                arr_14 [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_7 [i_1] [i_3] [i_4]))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_4] [i_2 - 1] [i_2])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_15 = ((int) (unsigned char)65);
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) var_12);
                            arr_21 [i_1] [i_5] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [i_2 - 1] [i_6]))));
                            var_16 -= ((/* implicit */unsigned char) (+(arr_8 [i_2 - 1] [i_1 + 1] [i_1 + 1] [i_0])));
                            arr_22 [i_1] [i_1] [i_1] [i_5] [i_5] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_7 [i_2 + 1] [i_1 - 3] [i_2])) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_2 + 1] [i_1 - 3] [i_6])) + (58)))));
                            var_17 = ((/* implicit */unsigned int) ((var_9) * (((/* implicit */int) ((_Bool) arr_1 [i_0] [i_0])))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)103)) && (((/* implicit */_Bool) 2579146892U)))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
                            var_19 += ((signed char) ((unsigned char) arr_6 [i_5]));
                            arr_25 [i_0] [i_1] [i_1] [i_1] [i_5] [i_5] [i_7] = (~(((/* implicit */int) ((var_7) != (((/* implicit */unsigned int) arr_18 [i_0] [i_1] [i_2] [i_5] [i_7]))))));
                        }
                        var_20 = ((/* implicit */unsigned char) arr_6 [i_1]);
                    }
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        arr_28 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(var_11))))))) != (((((var_4) << (((((/* implicit */int) arr_1 [i_0] [i_2])) - (169))))) << (((((arr_6 [i_1]) - (((/* implicit */unsigned int) var_2)))) - (3642123446U)))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 1; i_9 < 21; i_9 += 2) 
                        {
                            var_21 = ((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_2] [i_8] [i_9]);
                            arr_31 [i_0] [i_1] [i_2] [i_8] [i_8] [i_9] = ((((/* implicit */unsigned int) ((int) ((((/* implicit */int) arr_7 [i_2] [i_1] [i_0])) % (var_6))))) / ((+(arr_26 [i_9 - 1] [i_9] [i_9] [i_2] [i_2] [i_2 + 1]))));
                        }
                        for (signed char i_10 = 1; i_10 < 21; i_10 += 1) 
                        {
                            arr_35 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) arr_12 [i_10] [i_8] [i_2] [i_1] [i_0]);
                            arr_36 [i_0] [i_1] [i_2] [i_8] [i_1] = (~(((/* implicit */int) ((signed char) 550296054U))));
                        }
                        arr_37 [i_0] [i_1] [i_2] [i_1] = ((int) (-(arr_26 [i_0] [i_2 + 1] [i_2] [i_8] [i_2] [i_1 - 3])));
                        var_22 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_26 [i_0] [i_1] [i_2] [i_0] [i_2] [i_2])))))))));
                    }
                    var_23 = ((((/* implicit */int) ((((((/* implicit */int) arr_16 [i_0] [i_0] [i_1])) - (var_11))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1])))))))) + (((int) var_2)));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) ((((/* implicit */int) var_5)) / (var_10)));
    var_25 = ((/* implicit */unsigned char) var_12);
    var_26 += ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
}
