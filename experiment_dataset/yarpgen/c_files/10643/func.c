/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10643
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
    var_16 = ((/* implicit */unsigned int) (~(var_12)));
    var_17 = var_7;
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_18 += ((((/* implicit */int) arr_1 [i_0])) - (((var_12) | (((/* implicit */int) arr_0 [i_0])))));
        var_19 = (-(((/* implicit */int) arr_1 [i_0])));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 20; i_1 += 2) 
    {
        for (short i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_3 = 3; i_3 < 20; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) arr_14 [i_1] [i_1] [i_1 - 2] [i_1 - 2] [12]);
                                arr_19 [i_1] [i_1] [7U] [i_4] [i_4] [i_5] = ((/* implicit */short) ((arr_13 [i_2] [i_3 - 2] [i_1] [(short)16]) * (((/* implicit */unsigned int) (-(((((/* implicit */int) (short)6654)) * (((/* implicit */int) (short)-23022)))))))));
                                var_21 += ((/* implicit */short) max(((+(((/* implicit */int) (short)-23016)))), ((~(((/* implicit */int) arr_17 [i_1 - 3] [i_1 - 3] [i_1 + 1] [(short)20] [i_1]))))));
                            }
                        } 
                    } 
                } 
                arr_20 [i_1] [i_1] = ((/* implicit */short) (+(arr_12 [i_1] [i_2] [i_1] [i_2])));
                arr_21 [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_1] [i_1] [i_2] [i_1] [i_2]))))) ? (max((arr_3 [i_1]), (((/* implicit */unsigned int) var_14)))) : (arr_10 [i_1 - 3] [i_1]))) < (((/* implicit */unsigned int) (~(arr_18 [i_1] [i_1] [i_1] [i_1] [i_1]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) (~(((((/* implicit */_Bool) var_6)) ? ((-(598632551U))) : (((/* implicit */unsigned int) (+(var_4))))))));
}
