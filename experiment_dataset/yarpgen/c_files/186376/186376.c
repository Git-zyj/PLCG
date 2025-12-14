/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, (min(159, (min(3934306287, 734837722))))));
                    var_13 ^= 360661008;
                }
            }
        }
    }
    var_14 |= (min(var_6, -var_3));

    for (int i_3 = 3; i_3 < 17;i_3 += 1)
    {
        var_15 ^= ((-5660890 || ((-1674393053 < (arr_3 [i_3 + 1] [12])))));
        var_16 += (360661025 < 128);
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_17 += ((((max(var_6, (arr_9 [i_4] [i_4])))) ? (arr_9 [i_4] [i_4]) : ((-(arr_9 [i_4] [i_4])))));
        var_18 = (min(var_18, 176));
    }
    var_19 |= (!-var_8);
    #pragma endscop
}
