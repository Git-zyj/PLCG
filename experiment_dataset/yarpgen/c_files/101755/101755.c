/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_17 *= (min((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1 + 1])));
                var_18 = (max(((min(var_6, -4))), ((var_9 ? (arr_1 [i_0]) : (max(var_5, (arr_4 [i_0])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            {
                arr_11 [i_2] [i_3 + 2] = var_0;
                var_19 = ((((((arr_1 [i_2 + 2]) ? var_6 : (arr_1 [i_2 - 2])))) ? (((arr_1 [i_2 - 1]) ^ (arr_1 [i_2 - 3]))) : (((arr_1 [i_2 - 1]) ? (arr_1 [i_2 + 3]) : (arr_1 [i_2 - 2])))));
            }
        }
    }
    #pragma endscop
}
