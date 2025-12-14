/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = (((992 | 14168524991574184617) ? ((min(102, (((var_10 >= (arr_0 [i_1]))))))) : (max((var_2 == var_10), (var_6 ^ 207)))));
                var_12 = ((((((((arr_2 [1] [1] [i_1]) * (arr_1 [i_0]))) + 204))) / var_8));
                var_13 |= (!1);
                var_14 = ((!((max((arr_0 [i_1]), (arr_0 [i_0]))))));
            }
        }
    }
    var_15 = (max(var_15, 41));
    var_16 = (~-9618);
    var_17 = (max(1545724592871347272, (((~(var_3 & var_4))))));
    #pragma endscop
}
