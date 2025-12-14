/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                arr_8 [i_0] = 4760244088632935005;
                var_17 = (min(var_17, (((((min(var_1, (min(var_14, 54207))))) ? (337579552609097048 + 1635558286) : (((((18014398509481984 ? var_11 : var_13))) ? (max(var_2, 337579552609097048)) : (max(337579552609097057, var_5)))))))));
                arr_9 [i_0] [i_0] [i_0] = ((var_14 ? (arr_1 [i_0 + 1] [i_1 + 1]) : (((arr_7 [i_0 - 1]) ? (arr_3 [i_0]) : 8589934576))));
            }
        }
    }
    var_18 = 1;
    var_19 = 12794;
    var_20 = (min(var_20, var_8));
    #pragma endscop
}
