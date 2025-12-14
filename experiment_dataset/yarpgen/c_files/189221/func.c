/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189221
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            var_14 = ((/* implicit */int) ((((/* implicit */long long int) arr_6 [i_4] [i_2] [i_1])) - (var_5)));
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] = var_3;
                            arr_13 [i_0] [i_0] [i_2] [(_Bool)1] = ((/* implicit */long long int) var_7);
                        }
                        var_15 = ((/* implicit */unsigned short) ((-24) / (((/* implicit */int) var_13))));
                        arr_14 [i_0] [i_1] [(short)6] [i_3] = ((/* implicit */short) arr_10 [i_0 + 1] [i_1] [i_2] [i_3] [14ULL] [i_0 + 1] [i_1]);
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (-(((/* implicit */int) (short)-30314)))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */int) (short)-30314);
        arr_15 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) > (((/* implicit */int) arr_0 [i_0 + 3]))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_5 = 3; i_5 < 15; i_5 += 3) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) arr_16 [i_5 + 1]))));
        var_19 = ((/* implicit */unsigned short) (+(min((arr_18 [i_5 - 1] [i_5]), (arr_18 [i_5 + 1] [i_5 + 2])))));
    }
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) min((min((2460678345U), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_3))))))))));
}
