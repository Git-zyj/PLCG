/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (max(-13942646490700710895, (min(73, 10903342707536897342))));
                arr_6 [i_0] [i_0] = (min(73, 1));
            }
        }
    }
    var_17 -= max(7903910662217908838, 0);

    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        arr_10 [i_2] = arr_7 [i_2];
        arr_11 [i_2] [i_2] = (arr_9 [i_2]);
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_18 = ((((((arr_9 [i_3]) ? (((!(arr_12 [i_3])))) : 1))) ? (~var_13) : 87));
        var_19 = ((-((min((arr_12 [i_3]), (arr_12 [i_3]))))));
        arr_14 [i_3] = 140737488322560;
    }
    var_20 = ((var_3 % ((1 ? 1 : -65))));
    #pragma endscop
}
