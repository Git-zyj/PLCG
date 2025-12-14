/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129319
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) -740576645)) ? (((/* implicit */int) (short)511)) : (((/* implicit */int) (short)-28446)))), (-740576645)));
                                var_13 = ((/* implicit */short) max((var_13), (arr_3 [(_Bool)1] [i_1] [(short)20])));
                                arr_14 [20] [(short)4] &= (+(((/* implicit */int) (_Bool)1)));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) var_6);
                    var_14 = ((/* implicit */_Bool) max((-740576642), (2147483647)));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) var_3);
}
