/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163416
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */short) arr_1 [i_1 + 1] [i_1]);
                arr_7 [i_0] [i_1 + 4] [i_0] = max((arr_0 [i_0]), (((/* implicit */unsigned short) arr_1 [i_0] [(unsigned short)13])));
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_1 + 4] [i_2 + 4] [i_0] [i_3] [(unsigned char)4] = arr_9 [i_1 + 3] [20] [i_3] [i_4];
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((arr_16 [i_1 + 1] [i_1] [i_2] [i_2] [i_2 + 4] [i_2 + 2]) != (((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_1 + 1] [i_1] [i_2] [i_2] [i_2 - 1] [i_3])) && (((/* implicit */_Bool) arr_12 [i_1 - 1] [i_1] [i_1 - 1] [i_2])))))));
                                arr_19 [i_0] [i_1] [i_2] [i_0] [i_3] = ((/* implicit */_Bool) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (arr_13 [i_0]))))) <= (max((((/* implicit */unsigned int) arr_16 [i_0] [i_1] [i_2] [i_3] [i_2] [i_2])), (var_6))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_11 = ((/* implicit */short) max((((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_0)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))));
}
