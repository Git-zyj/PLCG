/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109225
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
    var_20 = ((/* implicit */unsigned int) min((((/* implicit */int) var_9)), (var_4)));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (var_4)))), (max((((/* implicit */unsigned int) var_6)), (var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */int) var_6)), (var_13))) <= (((/* implicit */int) min((var_0), (var_6))))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                arr_8 [2] = ((/* implicit */int) (~(((arr_2 [i_0 + 2]) % (arr_2 [i_0 + 2])))));
                /* LoopSeq 2 */
                for (short i_2 = 4; i_2 < 11; i_2 += 3) 
                {
                    arr_11 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_6 [2] [i_0 + 3])) + (((/* implicit */int) arr_6 [i_0] [i_0 + 1])))) != (((((/* implicit */_Bool) ((short) arr_3 [i_0] [i_0 + 2]))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != (arr_10 [i_0 - 2] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_6)))))))));
                    arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_1 [i_0 + 1]);
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    arr_16 [12U] [i_1] [i_1] [(short)13] = ((arr_0 [i_0 + 1]) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_12)) : (arr_4 [i_3]))));
                    arr_17 [i_1] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) (short)-5007))) * (0U));
                    arr_18 [0U] [i_1 - 2] [i_3] &= ((int) arr_2 [i_0 - 2]);
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 10; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            {
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [i_1] = ((/* implicit */unsigned short) (-(arr_22 [i_4] [i_4 - 2] [i_0 - 2] [i_0] [0U] [i_0] [i_0 + 3])));
                                arr_25 [i_5] [i_4] [i_1] [i_1] [5U] = ((/* implicit */int) ((arr_5 [i_0 - 1]) != (((((/* implicit */_Bool) arr_23 [i_3] [i_1 - 1] [i_1])) ? (var_16) : (((/* implicit */int) var_9))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 12; i_7 += 1) 
                        {
                            {
                                arr_30 [i_3] [i_7] [10U] [i_0] [i_1 - 2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_19 [i_7] [i_3] [i_1 + 1] [i_3] [i_3] [i_0 - 1])) : (((/* implicit */int) arr_19 [12U] [i_7 + 2] [i_7 + 1] [i_7] [i_3] [i_7 + 2]))));
                                arr_31 [i_1] [i_1] [i_6] [i_6] [i_1] = ((/* implicit */unsigned short) ((var_13) - (((/* implicit */int) arr_13 [i_1] [i_3] [i_1 - 2] [i_1]))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        arr_34 [i_8] = ((/* implicit */unsigned short) arr_32 [i_8] [i_8]);
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 18; i_9 += 4) 
        {
            for (int i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                {
                    arr_40 [i_10] [i_10] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_33 [i_9])) > (arr_35 [i_8] [i_9] [i_10])));
                    arr_41 [i_10] [i_9] [i_9] [i_10] = ((/* implicit */short) ((unsigned short) 4294967295U));
                    arr_42 [i_10] [i_9] [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_38 [i_10] [i_8] [i_9] [i_8])))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((unsigned short) var_6)))));
                }
            } 
        } 
        arr_43 [i_8] &= ((/* implicit */unsigned short) (-(arr_32 [i_8] [7])));
    }
}
