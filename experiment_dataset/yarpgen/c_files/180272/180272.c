/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(-1, -var_5));
    var_15 = (((var_10 / var_1) ? (var_13 / -1339958982) : (min(var_5, 402653184))));
    var_16 = 1589992342;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 = (min(var_17, ((((arr_0 [i_1] [i_2]) == ((min((max(0, (-2147483647 - 1))), ((max(-1, 0)))))))))));
                    var_18 = (max(var_18, -2978894898));
                    arr_8 [i_0] [i_1] [i_2] |= (40292 % 1);
                    var_19 = (min(var_19, ((min(747901561, 0)))));
                }
            }
        }
    }
    #pragma endscop
}
