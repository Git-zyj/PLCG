/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143060
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
    var_19 = var_16;
    var_20 = var_18;
    var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65515))))) ? ((~(((/* implicit */int) var_15)))) : (((/* implicit */int) var_3))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] [(unsigned short)2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_0 [i_0])))) : ((-(((/* implicit */int) arr_2 [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (unsigned short i_3 = 2; i_3 < 14; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            arr_14 [i_2] [i_2] [i_2] [i_0] &= ((/* implicit */unsigned short) ((((((/* implicit */int) var_2)) / (((/* implicit */int) arr_11 [(unsigned short)16] [i_0 - 1] [i_3] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) - (((/* implicit */int) arr_11 [i_3 + 3] [i_4] [i_4] [i_4] [i_4] [i_3 + 3]))));
                            arr_15 [i_0] [i_0] [i_2] [i_0] [i_3] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)21)) >> (((/* implicit */int) (unsigned short)14))));
                        }
                        arr_16 [i_0] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0 + 1])) > (((/* implicit */int) var_10))));
                        arr_17 [i_2] [i_1] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_0 + 2] [i_0] [i_1] [i_1] [i_1] [i_3 + 1])) != (((/* implicit */int) arr_13 [i_3 - 2] [i_3 + 2] [i_3 + 1] [(unsigned short)1] [i_3] [i_3 + 2] [i_3]))));
                        arr_18 [i_0 + 2] [(unsigned short)0] [i_0 + 2] [i_2] [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_3 + 3] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_2])) : (((/* implicit */int) arr_6 [i_3 - 2] [i_2] [i_0 + 1]))));
                    }
                } 
            } 
            arr_19 [i_0 - 1] = ((unsigned short) arr_12 [(unsigned short)6] [(unsigned short)8] [i_0] [(unsigned short)8] [i_0]);
        }
        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            arr_22 [i_0] [i_0] = ((unsigned short) arr_7 [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_0 - 1]);
            arr_23 [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_21 [i_0 - 1]))));
            arr_24 [i_0] [i_0] = ((unsigned short) (unsigned short)61991);
            arr_25 [(unsigned short)5] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_8 [i_0] [i_0 - 1] [i_0 - 1] [(unsigned short)4]))));
        }
        arr_26 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_10 [i_0 + 1] [i_0] [(unsigned short)1] [i_0 - 1] [i_0] [i_0])))));
    }
    for (unsigned short i_6 = 3; i_6 < 22; i_6 += 3) 
    {
        arr_30 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)31)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)36691))));
        arr_31 [i_6] [(unsigned short)15] = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_29 [i_6])) / (((/* implicit */int) arr_29 [i_6]))))));
        arr_32 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_6 + 1])) | (((/* implicit */int) arr_28 [i_6 + 1]))))) ? (((((/* implicit */_Bool) arr_28 [i_6 - 2])) ? (((/* implicit */int) arr_28 [i_6 - 3])) : (((/* implicit */int) arr_28 [i_6 - 2])))) : (((/* implicit */int) arr_28 [i_6 + 1]))));
    }
}
