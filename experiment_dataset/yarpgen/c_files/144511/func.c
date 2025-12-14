/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144511
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
    for (int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = arr_0 [11] [i_0 + 2];
                var_18 -= ((((/* implicit */_Bool) (+(arr_3 [i_0 + 2] [i_0 + 1] [i_0 - 2])))) ? ((+(((arr_4 [10]) ? (arr_1 [(_Bool)1] [(_Bool)1]) : (((/* implicit */int) arr_4 [(_Bool)1])))))) : (arr_3 [i_0] [i_0] [i_0 - 1]));
                var_19 = ((/* implicit */int) max((var_19), (arr_3 [i_1] [i_1] [i_0])));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 ^= ((/* implicit */_Bool) ((int) (-(((arr_8 [i_0] [i_1]) + (((/* implicit */int) arr_12 [i_0] [i_1] [i_4] [16] [i_4] [16] [i_0])))))));
                                var_21 = arr_3 [i_0] [(_Bool)1] [i_0];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 ^= ((/* implicit */_Bool) var_5);
}
