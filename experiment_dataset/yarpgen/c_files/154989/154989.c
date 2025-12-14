/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_19 = (min(var_19, var_4));
                var_20 -= ((((((~(arr_0 [i_0])))) ? (arr_1 [5]) : var_0)) < ((((max(242, 96))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 8;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_21 -= ((var_12 ? ((var_9 ? ((((arr_3 [i_2] [7] [i_2]) && (arr_5 [i_3])))) : (max((arr_3 [i_2] [i_2] [8]), var_9)))) : (arr_2 [9])));
                arr_10 [i_2] [i_3] [i_3] = (min((max(var_6, var_8)), var_3));
            }
        }
    }
    var_22 = var_18;
    #pragma endscop
}
