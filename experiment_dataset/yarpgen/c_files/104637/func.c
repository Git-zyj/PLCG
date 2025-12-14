/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104637
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
    var_20 = var_7;
    var_21 = max(((short)-1996), ((short)-29714));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0 + 3] = ((/* implicit */unsigned char) ((long long int) arr_1 [i_0 - 1]));
        var_22 = ((/* implicit */long long int) arr_2 [i_0 + 2]);
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
        {
            arr_8 [i_0 - 1] = ((/* implicit */unsigned int) (short)-29232);
            arr_9 [i_0] [i_1] = ((/* implicit */_Bool) var_17);
            var_23 = ((/* implicit */_Bool) (short)29218);
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (unsigned char i_3 = 3; i_3 < 13; i_3 += 3) 
                {
                    {
                        arr_16 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */long long int) var_11);
                        arr_17 [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0 + 2] [i_0 - 1])) ? (arr_4 [i_0 - 1] [i_2] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_0 + 1] [i_0 - 1])))));
                    }
                } 
            } 
        }
        for (signed char i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
        {
            arr_20 [i_4] [i_4] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_4])) ? (var_12) : (arr_15 [i_0] [i_0] [i_4] [(signed char)8])))) ? (((((/* implicit */_Bool) -1003183412)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-32749)))) : (((((/* implicit */_Bool) (short)29213)) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) (short)-3704))))));
            arr_21 [i_4] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_13 [i_0] [i_4])) ? (((/* implicit */int) (short)-29226)) : (((/* implicit */int) arr_18 [i_4] [i_0])))) + (2147483647))) >> ((((+(arr_15 [i_0] [i_4] [i_0] [i_4]))) + (2043463233)))));
            /* LoopSeq 1 */
            for (long long int i_5 = 1; i_5 < 15; i_5 += 2) 
            {
                arr_25 [i_5] [i_4] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-16971))));
                arr_26 [i_0 - 1] [i_0 - 1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)158)) >= (((/* implicit */int) (short)-29235))));
            }
            arr_27 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_4])) ? (arr_22 [i_0] [i_0 - 1]) : (((/* implicit */long long int) arr_24 [i_0 - 1] [i_0 - 1] [i_4]))));
        }
        for (short i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            arr_31 [7U] [(unsigned char)9] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) (short)-3081))))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)11))) > (var_10))))));
            arr_32 [i_6] [(short)7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)65519)) : (((((/* implicit */int) (unsigned char)227)) / (((/* implicit */int) arr_18 [i_6] [i_6]))))));
        }
        var_24 = ((/* implicit */short) 1649267441664LL);
    }
}
