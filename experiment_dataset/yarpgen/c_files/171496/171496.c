/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= ((min(var_1, var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (((arr_2 [i_0]) == (~1)))));
                var_12 = (arr_4 [6] [i_1] [6]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            {
                arr_11 [i_2] [12] = 48;
                var_13 = -4086094819304728332;
            }
        }
    }
    #pragma endscop
}
