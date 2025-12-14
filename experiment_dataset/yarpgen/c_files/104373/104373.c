/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (((((max(1, ((-(arr_4 [i_1])))))) ? ((4462385911913131600 ? (arr_2 [i_0]) : 6535249438462128341)) : (((~(arr_4 [i_0])))))))));
                var_20 = ((-(!var_5)));
                arr_6 [i_0] [6] = (max(var_1, 6144));
            }
        }
    }
    #pragma endscop
}
