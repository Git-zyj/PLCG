/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_8 < 3718455226);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((var_14 ? (arr_0 [i_1 - 1] [i_1 - 1]) : (((((min(8292, 1697213397))) ? (max(var_0, 2348756989)) : var_9)))));
                arr_6 [i_1 + 2] [i_0] = (max((((var_6 ? 1697213397 : var_10))), (((((var_13 + (arr_4 [i_1])))) ? (0 + var_11) : (-2147483647 - 1)))));
                var_18 = (max(var_18, (min((arr_2 [i_1 + 2] [i_1 - 2] [4]), (max((arr_2 [i_1 + 2] [i_1 - 2] [i_1]), (arr_2 [i_1 + 2] [i_1 - 2] [5])))))));
                var_19 = (arr_0 [i_0] [i_1 - 1]);
                var_20 = var_1;
            }
        }
    }
    var_21 = ((-var_9 ? var_11 : (~var_14)));
    var_22 = (min(var_22, 6718));
    #pragma endscop
}
