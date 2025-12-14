/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -1;
    var_13 = ((var_3 / (((min(var_3, var_0)) / ((max(var_4, 4294967282)))))));
    var_14 = (min(-1965157927, 1624));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (arr_4 [i_0] [i_0]);
                arr_5 [i_0] [i_1] [i_0 + 1] = var_10;
                arr_6 [i_0] [i_0] [i_1] = (min((((min((arr_0 [i_0]), 13)) / 145)), var_2));
                arr_7 [i_1] = (min((arr_2 [i_0] [i_0] [i_0]), var_11));
            }
        }
    }
    #pragma endscop
}
