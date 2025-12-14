/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_18 *= 1;
                var_19 = (((((arr_2 [i_0]) >> (((~18363717869077382076) - 83026204632169517)))) | (arr_0 [i_0] [i_0])));
                arr_6 [i_0] [i_0] [i_0] = (max((((~(arr_3 [i_0])))), (((((var_13 ? 1 : 10244399300632855310))) ? (((arr_0 [i_0] [i_0]) ^ (arr_1 [i_0]))) : (~1)))));
                arr_7 [i_0] [i_1] [i_1] = (min((~1), (max((arr_5 [i_0] [i_1] [i_0]), -3182568509334803236))));
            }
        }
    }
    #pragma endscop
}
