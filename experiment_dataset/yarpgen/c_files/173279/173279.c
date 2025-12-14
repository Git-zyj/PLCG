/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = (max(var_10, (max((((((var_4 * (arr_6 [0] [i_0])))) ? ((-(arr_4 [8] [8]))) : 189)), (min(((175 - (arr_4 [14] [14]))), (arr_4 [8] [12])))))));
                arr_8 [i_0] = (((((~(arr_2 [i_0 + 2])))) ? ((198 ? var_3 : 1534952989357627553)) : var_3));
            }
        }
    }
    var_11 = var_8;
    #pragma endscop
}
