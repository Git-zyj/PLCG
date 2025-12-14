/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14349
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
    var_10 = var_8;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    var_11 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (3042803874U) : (arr_2 [i_1])))))))) : (0U));
                    arr_8 [i_2] [i_1] [i_2] [i_2] = 0U;
                }
                var_12 = ((unsigned int) ((unsigned int) 0U));
                var_13 = 2381433451U;
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (min((var_7), (var_8))) : (min((12U), (0U))))))));
    var_15 = var_3;
}
