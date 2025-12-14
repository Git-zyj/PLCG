/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] = (min(((!((!(arr_2 [i_0] [i_1]))))), (!0)));
                    var_11 = (i_1 % 2 == 0) ? ((((-1339 - 127) ? (((((arr_2 [i_0] [i_1]) + 2147483647)) >> (var_3 - 1132334971822173093))) : -1003241366))) : ((((-1339 - 127) ? (((((((arr_2 [i_0] [i_1]) - 2147483647)) + 2147483647)) >> (var_3 - 1132334971822173093))) : -1003241366)));
                }
            }
        }
    }
    var_12 = var_3;
    #pragma endscop
}
