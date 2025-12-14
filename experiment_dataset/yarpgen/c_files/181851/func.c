/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181851
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
    var_19 = (_Bool)0;
    var_20 = (_Bool)0;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0] [i_0 + 1])))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] = var_1;
            arr_6 [i_1] [(_Bool)1] [i_0 + 1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1]))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_22 = (!(arr_7 [i_0] [i_0 + 1] [i_1 - 1]));
                var_23 = (_Bool)0;
            }
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) min(((~((-(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) var_0)))))));
            arr_10 [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
        }
        arr_11 [i_0 + 1] = min((((_Bool) arr_7 [i_0] [i_0] [i_0 + 1])), (((_Bool) (_Bool)0)));
    }
}
