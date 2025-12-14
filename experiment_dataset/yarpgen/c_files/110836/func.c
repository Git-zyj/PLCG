/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110836
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_1] [i_2]);
                    /* LoopSeq 1 */
                    for (long long int i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        var_12 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_5 [1U] [1U]), (arr_5 [i_0] [(unsigned char)11])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0]), (arr_4 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1 - 2]))) : (arr_3 [i_0] [i_1] [i_3])))))) && (((/* implicit */_Bool) arr_2 [i_2] [i_2]))));
                        arr_12 [i_0] [i_1] [i_2] [i_3 - 2] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_3 [i_2] [i_0] [i_0]), (((/* implicit */unsigned long long int) max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */short) arr_0 [i_0])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_3]))) : ((~(min((((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_1])), (arr_7 [i_0])))))));
                    }
                    arr_13 [i_0] &= ((((((/* implicit */int) arr_5 [i_1 + 2] [i_2])) > (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 2] [i_2])) && (((/* implicit */_Bool) arr_7 [i_2]))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_0 [i_0])), (max((((/* implicit */unsigned int) arr_4 [i_0] [(short)8] [i_2])), (arr_2 [i_1] [i_2])))))) : ((-(arr_3 [i_1 - 1] [i_1] [i_1 - 1]))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_4 = 1; i_4 < 18; i_4 += 1) 
    {
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) arr_14 [(unsigned char)16]))));
        arr_16 [i_4] = arr_14 [i_4];
        var_14 = ((/* implicit */unsigned long long int) arr_15 [i_4]);
        var_15 = ((/* implicit */unsigned long long int) arr_15 [i_4]);
    }
    var_16 = var_0;
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */unsigned long long int) var_10)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) & (((((/* implicit */_Bool) var_5)) ? (var_5) : (var_5)))))));
    var_18 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(var_4)))) ? (var_4) : (((var_4) << (((var_10) - (2701023041U))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
}
