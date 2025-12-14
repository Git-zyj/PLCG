/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117189
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = max((((_Bool) arr_7 [i_0] [i_1 - 1] [i_1 - 1])), (((_Bool) arr_5 [i_2])));
                    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))) & (((/* implicit */int) (_Bool)0))))) ? (min((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)0)))), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_4 [(_Bool)1])))))) : (max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_0 [i_1 - 1])))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) min((var_3), ((_Bool)1))))) & (max((((/* implicit */int) max((var_14), ((_Bool)1)))), (((var_10) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_11 [i_3] [i_3] = ((_Bool) (_Bool)1);
        var_19 ^= ((/* implicit */_Bool) min((((((/* implicit */int) arr_8 [i_3])) * (((/* implicit */int) arr_10 [i_3])))), (((/* implicit */int) arr_9 [i_3]))));
        var_20 ^= (_Bool)0;
    }
}
