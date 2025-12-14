/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((min(713462694, 760068855))), (713462667 ^ var_15)));
    var_17 = var_3;
    var_18 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_19 = (min(var_19, (((-(((arr_7 [i_0] [i_1]) ? (arr_0 [15]) : -35)))))));
                    arr_8 [i_0] [i_1] [i_1] = (max(26966, 1));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((+((min((arr_7 [i_0] [4]), 1)))));
                }
            }
        }
    }
    #pragma endscop
}
