/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14621
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
    var_16 = var_4;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            {
                arr_6 [i_0] [(_Bool)1] = 1073741823U;
                arr_7 [i_0] [i_1] = (_Bool)1;
                arr_8 [3U] [i_1 - 1] [3U] = 1073741824U;
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned int i_3 = 4; i_3 < 18; i_3 += 4) 
        {
            {
                arr_13 [i_2] = ((/* implicit */_Bool) 3221225472U);
                arr_14 [i_2] = ((/* implicit */_Bool) 1073741823U);
            }
        } 
    } 
}
