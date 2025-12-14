/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176661
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned char)171)), (532676608U)));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) 2165905016U));
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        {
                            arr_15 [i_0] [i_3] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-32743)) & (((/* implicit */int) (unsigned char)238))));
                            var_10 = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)36), ((unsigned char)197)))) <= (((/* implicit */int) arr_13 [i_2] [i_1 + 1] [i_1 + 2] [i_1 - 1] [i_0]))));
                            var_11 = ((unsigned short) ((((arr_14 [i_4] [i_3] [12U] [i_2] [i_2] [(unsigned short)4] [i_0]) + (arr_8 [i_1 + 1] [i_1 + 1] [i_0]))) | (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))));
                        }
                    } 
                } 
            } 
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)202))));
            var_12 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23909)) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) var_6))))) ? (arr_14 [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_3), (var_1)))))))));
        }
        arr_17 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)221)), ((unsigned short)30744)))) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_8))));
        var_13 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((532676595U), (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)91)), (arr_1 [i_0])))))), (min(((-(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) arr_11 [(short)3] [i_0] [i_0] [i_0] [(short)3]))))));
    }
    var_14 = ((/* implicit */_Bool) min((4024189320U), (((/* implicit */unsigned int) var_1))));
}
