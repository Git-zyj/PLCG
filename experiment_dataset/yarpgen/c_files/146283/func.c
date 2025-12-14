/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146283
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
    var_17 = ((/* implicit */signed char) var_11);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) var_13);
        var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) & (min((((((/* implicit */_Bool) arr_3 [i_0])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned int) arr_0 [(short)11]))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_1 = 3; i_1 < 21; i_1 += 4) 
    {
        var_20 = ((/* implicit */signed char) (~(((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 1]))));
        arr_6 [i_1] [(unsigned short)18] = ((/* implicit */long long int) arr_5 [i_1 - 1] [i_1 + 1]);
    }
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        arr_11 [i_2] &= ((/* implicit */unsigned int) arr_8 [i_2] [i_2]);
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            arr_16 [i_2] [i_3] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) min((var_11), (((/* implicit */short) arr_8 [i_3] [i_2]))))) < (((/* implicit */int) arr_15 [i_3])))))));
            var_21 = ((/* implicit */long long int) var_14);
        }
        var_22 = ((/* implicit */int) arr_12 [i_2] [i_2] [i_2]);
    }
    var_23 &= ((/* implicit */short) var_5);
}
