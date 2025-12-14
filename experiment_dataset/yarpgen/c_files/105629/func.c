/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105629
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
    var_20 = ((/* implicit */short) max((((/* implicit */int) max((max((((/* implicit */short) var_8)), (var_18))), (((/* implicit */short) var_16))))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max((var_14), (((/* implicit */unsigned short) var_8)))))))));
    var_21 &= ((/* implicit */short) (-(max(((~(((/* implicit */int) (short)1)))), (((/* implicit */int) (unsigned char)203))))));
    var_22 += ((/* implicit */int) var_14);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_7 [i_0 - 1] [i_1] [i_2 + 2] = ((/* implicit */unsigned char) (~(arr_1 [i_0 + 1])));
                    arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])) < (((/* implicit */int) arr_3 [i_1]))));
                    arr_9 [(unsigned short)4] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_1 [i_2]))))));
                    arr_10 [i_2 - 1] [i_1] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_6 [i_0]) - (arr_6 [i_1]))))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) arr_4 [i_0 - 1] [0U])) : (arr_6 [i_0 + 1])));
        arr_12 [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [2U])) ? (((/* implicit */int) arr_3 [4])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [0U])))))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 1; i_3 < 19; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                for (long long int i_5 = 1; i_5 < 18; i_5 += 3) 
                {
                    {
                        var_23 = ((/* implicit */signed char) arr_17 [i_0 + 1] [i_3 - 1] [i_3] [i_5 - 1]);
                        arr_19 [i_3] = ((/* implicit */_Bool) arr_0 [i_3] [i_3]);
                    }
                } 
            } 
        } 
        arr_20 [i_0] [i_0] = ((/* implicit */int) arr_4 [i_0] [(unsigned char)8]);
    }
}
