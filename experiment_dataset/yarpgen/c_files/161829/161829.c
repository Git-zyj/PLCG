/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= 1195107375184064551;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = (max(var_11, (((-(12841057043476513080 | var_9))))));
        arr_2 [i_0] [i_0] = -1;
        arr_3 [i_0] |= ((-((-1 ? 31 : 12658))));
        var_12 = 22;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_13 = (((min(var_2, (arr_4 [i_1])))) ? var_6 : -var_2);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_14 = (3857296251311942186 + 29);
                    var_15 = (min((arr_12 [i_1]), (arr_12 [i_2])));
                }
            }
        }
        var_16 += min((arr_6 [i_1]), ((255 ? (min(0, 29)) : (((min(-13, var_9)))))));
    }
    var_17 = var_9;
    var_18 = (min(var_18, var_2));
    #pragma endscop
}
