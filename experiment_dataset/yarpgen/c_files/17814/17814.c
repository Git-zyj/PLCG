/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            var_14 = var_3;
            arr_4 [i_0] = (arr_2 [i_0] [i_1 - 2]);
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            arr_8 [i_0] = (max(1147, (arr_7 [i_0] [i_2])));
            var_15 = (((min(-1147, (arr_5 [i_0 - 1] [i_0] [i_0 - 1])))) ? (((~(arr_5 [i_0 - 1] [i_0] [i_0 - 4])))) : (min(-1875197601662405219, 1147)));
            var_16 += ((!(((1 ? 1147 : -1147)))));
            var_17 = (arr_7 [i_0] [i_0]);
        }
        arr_9 [i_0 + 1] [i_0] = (arr_0 [i_0]);
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_12 [15] = (min(0, 29809));
        var_18 = (max(((6250826677106049909 / (arr_11 [i_3]))), ((min(((~(-127 - 1))), ((-6250826677106049912 ? -125 : -1315657029)))))));
        var_19 = (min(var_19, 1147));
        var_20 += ((~(arr_10 [i_3])));
        var_21 = (max(var_21, ((((!(~var_0)))))));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        arr_17 [i_4] = (var_11 ? ((max(6250826677106049914, var_4))) : (-6250826677106049900 & var_5));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                {
                    var_22 = (max(var_22, (arr_13 [i_4])));
                    arr_24 [1] [1] = max(59584, 32845);
                }
            }
        }
        var_23 = (max(var_23, -115));
        var_24 = (min(var_24, 2508793086666717392));
    }
    var_25 = (min((3600102841 - -65), var_0));
    var_26 = var_12;
    #pragma endscop
}
