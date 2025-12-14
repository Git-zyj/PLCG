/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (max(8191, -128771902))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = (min(var_16, -8191));
                var_17 = (min(var_17, ((((((arr_1 [i_1]) ? 67108863 : (min(1381019568, -1655462061))))) ? (((((1655462060 ? 131071 : -8)) <= 16383))) : (((860750471 ? -2147483640 : (-2147483647 - 1))))))));
                var_18 = (max(var_18, (((((-((1121597078 / (arr_3 [5] [1])))))) ? ((1655462061 ? -685652496 : ((-27 ? -1655462071 : -1275206162)))) : (max((((arr_0 [5]) ? 2147483631 : (arr_4 [1]))), ((-1275206155 ? -536870912 : (arr_4 [2])))))))));
                var_19 = (max(var_19, (((((-100890083 ? 0 : 0)) <= (min(-1, 304047285)))))));
                arr_5 [i_1] [3] = var_9;
            }
        }
    }
    var_20 = (min(var_20, (((-2147483647 - 1) ? (-18 > var_14) : var_0))));

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        arr_9 [18] = (~-892704647);
        arr_10 [0] = (!var_1);
        arr_11 [12] = arr_7 [1] [2];
        var_21 = (max(var_21, ((616028229 ? 1533004453 : 685652476))));
    }
    #pragma endscop
}
