/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107640
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [8] = (arr_0 [i_0]);
                arr_6 [i_1] = (((((-(arr_1 [i_0] [i_1])))) | (max(18338157423851714210, -115344917))));
                arr_7 [i_0] &= (max((((arr_2 [i_0] [i_0]) ? ((-(arr_0 [i_0]))) : ((max(var_8, (arr_1 [i_0] [i_1])))))), (((!(((~(arr_4 [9])))))))));
                arr_8 [i_0] [4] [i_1] = (((((~(max((arr_3 [20] [i_1]), var_2))))) ? var_2 : (-3643149118 < var_4)));
            }
        }
    }
    var_11 |= ((-var_7 ? ((max((var_0 ^ var_6), ((max(var_8, var_5)))))) : (max((~var_1), var_0))));
    var_12 = (max((((((var_0 ? var_0 : var_6))) ? (!var_3) : (var_10 > var_3))), var_0));
    #pragma endscop
}
