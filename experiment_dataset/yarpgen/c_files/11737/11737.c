/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_17 = (((((arr_2 [i_0 - 1] [i_1 - 1]) == (arr_2 [i_0 + 2] [i_1 + 1]))) ? 0 : (((((1 ? -30518 : 20929))) ? (arr_4 [i_0]) : (max(1, 0))))));
                var_18 = (max((((((-18372 ? 3144915433454209798 : var_2))) ? var_11 : (arr_2 [i_0] [i_0 + 1]))), (((((0 ? 34898 : 1)) >= (2652 || 29))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 16;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_3] = (min((((arr_7 [i_2 - 1]) % (-2147483647 - 1))), (arr_5 [i_2])));
                arr_13 [i_2] [i_2] [i_2] = (max(30517, (arr_3 [i_2] [i_2 + 2])));
                arr_14 [i_2] [i_2] = arr_0 [i_2 + 2];
            }
        }
    }
    var_19 = (max(var_12, (min((min(var_7, var_9)), ((7 ? 0 : var_9))))));
    var_20 = var_4;
    #pragma endscop
}
