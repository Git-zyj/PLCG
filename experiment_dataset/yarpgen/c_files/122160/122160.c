/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122160
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_1));
    var_12 = 16;
    var_13 = (((!((max(6894554525510757746, var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (((0 ? 1 : 25)))));
                var_15 = (max(var_15, (!10)));
                var_16 = ((-(arr_0 [i_0])));
                var_17 = (min((arr_2 [i_0] [i_0]), (arr_4 [i_0] [i_0 + 1] [10])));
                arr_8 [i_0] [i_0] = (arr_4 [i_0 - 1] [i_1 - 2] [i_1]);
            }
        }
    }
    var_18 = ((!((max(65523, (min(-26, 4903455009935250064)))))));
    #pragma endscop
}
