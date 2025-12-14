/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115222
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
    var_17 += ((/* implicit */_Bool) max(((~(((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))), ((~(min((var_13), (var_7)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_6 [19U] [(_Bool)1] [i_0 - 1] [i_0] = (!(((/* implicit */_Bool) ((var_5) * (var_14)))));
                    var_18 ^= ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) ((arr_5 [i_2] [i_1] [21U] [i_0 + 3]) + (arr_5 [i_2] [i_1] [i_0] [i_0])))))));
                    arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_11)), (var_13)))) && (((/* implicit */_Bool) ((var_10) ? ((+(((/* implicit */int) arr_0 [i_0] [3U])))) : (((/* implicit */int) ((_Bool) arr_2 [i_0]))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 3) 
    {
        arr_10 [i_3] = var_11;
        var_19 = (-(arr_5 [i_3] [14U] [1U] [i_3 - 1]));
    }
}
