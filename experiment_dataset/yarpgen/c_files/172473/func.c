/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172473
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        var_12 = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1]))));
        arr_3 [i_0 - 1] = arr_1 [i_0] [i_0 - 1];
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    {
                        arr_17 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
                        var_13 = ((/* implicit */short) max((var_13), (arr_6 [i_1] [i_1])));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            var_14 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_7 [i_3] [i_3])))) ? ((+(((((/* implicit */_Bool) arr_15 [i_1] [i_1] [(_Bool)1] [(short)21] [i_4] [i_5])) ? (arr_19 [5] [5] [i_3] [i_3] [i_3]) : (((/* implicit */int) arr_8 [i_1] [i_1])))))) : (((/* implicit */int) arr_14 [i_1] [i_1] [i_2] [i_3] [i_4] [i_5]))));
                            arr_20 [i_1] [(short)7] [i_3] [(short)1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) (~(arr_19 [(short)11] [i_4] [i_3] [i_2] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1] [i_1]))) : (arr_4 [i_1]))) : (((((/* implicit */_Bool) arr_15 [i_1] [i_1] [14] [i_1] [7ULL] [i_1])) ? (((arr_11 [i_2] [(short)20] [i_3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))) : (arr_16 [(short)23] [i_2] [i_3] [i_3] [i_3] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5] [i_3] [i_2] [i_1])))))));
                        }
                    }
                } 
            } 
        } 
        arr_21 [i_1] [i_1] = ((/* implicit */short) (-((~(((/* implicit */int) arr_5 [i_1]))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_6 = 0; i_6 < 12; i_6 += 3) 
    {
        arr_25 [(unsigned char)5] = ((/* implicit */short) (~(-2126808218)));
        arr_26 [(unsigned char)9] = ((/* implicit */int) (~(arr_0 [i_6])));
        arr_27 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6] [i_6] [(short)12] [(_Bool)1])) ? (((/* implicit */int) arr_14 [i_6] [i_6] [i_6] [(unsigned char)10] [i_6] [i_6])) : (((/* implicit */int) arr_14 [i_6] [3LL] [i_6] [i_6] [i_6] [(short)12]))));
    }
    var_15 = ((/* implicit */unsigned long long int) var_8);
    var_16 = ((/* implicit */short) (+(10841278704601954131ULL)));
}
