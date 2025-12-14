/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160151
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
    var_19 = 734550102U;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) 3560417194U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1189800132U)))))) : (1418872272U))) : ((-(min((var_17), (3927532927U)))))))));
                                var_21 = ((((arr_14 [i_0] [i_1] [i_2]) - (arr_10 [i_0] [i_0] [i_0]))) + (734550102U));
                                arr_15 [i_0] [i_1] [i_3] [i_0] = 2515046074U;
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) max((var_22), (arr_12 [i_1] [i_1] [i_0] [i_0] [i_0] [5U])));
            }
        } 
    } 
    var_23 = var_6;
}
