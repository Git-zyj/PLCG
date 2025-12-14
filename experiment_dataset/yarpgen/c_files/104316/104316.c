/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((((((((~var_8) ? (arr_0 [i_0] [i_1]) : (arr_1 [i_0] [i_1]))) + 2147483647)) >> ((((1 ? (max(var_5, var_8)) : -1412681876)) - 4861438366246725833)))))));
                var_12 -= (((((min(var_1, var_5)) < var_1))) << (((arr_1 [0] [0]) - (arr_1 [i_0] [i_1]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                arr_10 [i_2 - 1] [i_3] [i_2] = (1603491526557381946 > var_6);
                arr_11 [13] [i_3] = (((arr_4 [i_2] [16]) ? (var_6 | var_7) : ((max((0 & var_2), (arr_9 [i_2 - 1]))))));
                var_13 = (arr_6 [11]);
                arr_12 [15] [i_3] = -4895745982780597101;
            }
        }
    }
    var_14 = (max(var_14, var_3));
    var_15 = (min(var_15, var_4));
    #pragma endscop
}
