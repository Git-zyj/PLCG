/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140200
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
    var_19 = ((/* implicit */unsigned int) min((var_19), (max((min((var_9), (((/* implicit */unsigned int) max((var_6), (((/* implicit */short) var_12))))))), (((/* implicit */unsigned int) (short)15))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] [i_0] [i_2] = ((/* implicit */short) arr_2 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((short) 0));
                                var_20 = ((/* implicit */int) max((var_20), (min((max((((((/* implicit */int) (short)-15718)) & (0))), (((/* implicit */int) arr_14 [i_4 + 1] [i_4] [i_4] [i_4] [i_4 + 1])))), (max((0), (1369569522)))))));
                                arr_16 [i_0] [i_1] [i_1] [i_3] [i_4 - 1] [i_1] [i_0] = (!((!(((/* implicit */_Bool) ((419803284U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)30955)))))))));
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_3] [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1]))))) && (((/* implicit */_Bool) arr_4 [i_1])))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] = ((((/* implicit */int) min((arr_12 [i_1] [i_1] [i_1]), (arr_12 [i_2] [i_2] [1U])))) << (((((/* implicit */int) min((arr_12 [i_0] [i_1] [i_2]), (arr_12 [i_0] [i_1] [i_2])))) - (26797))));
                }
            } 
        } 
    } 
}
