/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184837
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
    var_19 = 9U;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_2] = min((((unsigned int) ((((/* implicit */_Bool) var_14)) ? (var_6) : (268435424U)))), (108662028U));
                    var_20 = var_16;
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            for (unsigned int i_5 = 2; i_5 < 18; i_5 += 3) 
            {
                {
                    var_21 = max(((~(arr_1 [i_5] [15U]))), (var_15));
                    arr_15 [i_5] [i_4] [i_3] = ((unsigned int) min(((~(22U))), (var_4)));
                    arr_16 [i_5] [i_4] [i_3] |= (-(max((551927826U), (var_1))));
                }
            } 
        } 
    } 
    var_22 = (-(((((/* implicit */_Bool) ((var_13) / (var_8)))) ? (((var_8) * (var_6))) : (var_0))));
}
