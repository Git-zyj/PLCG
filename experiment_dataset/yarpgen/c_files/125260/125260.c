/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125260
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;
    var_17 = (min(var_9, ((min((6948933166364274208 || var_10), 0)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = (((min((min((arr_4 [i_0]), var_15)), -8155)) <= (arr_2 [i_0])));
                    var_18 = (min(235187710642871564, (arr_3 [i_0] [i_0] [i_0])));
                    arr_8 [i_2] [i_2] |= (min((arr_0 [i_0] [i_2 - 1]), (arr_0 [i_2] [i_2 - 2])));
                }
            }
        }
    }
    var_19 = var_15;
    #pragma endscop
}
