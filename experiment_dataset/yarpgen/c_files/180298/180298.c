/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_7 ? ((var_4 ? var_4 : var_6)) : -var_9))) ? -var_1 : -var_9));
    var_12 = (-var_1 ? var_1 : (min(((var_6 ? var_3 : var_7)), (((var_3 ? var_2 : var_0))))));
    var_13 = ((var_8 ? (max(13910, 16105640536603719849)) : (((((min(-3072283482932289943, 3))) ? 2338788393 : 26958)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_6 [i_0 - 1] [14] [i_0] [i_2] = (min(var_4, ((-(((arr_5 [i_2]) ? (arr_3 [i_2] [i_2] [i_2]) : var_0))))));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1) /* same iter space */
                    {
                        arr_9 [i_0] [i_0] [i_0] [22] = ((((var_1 ? var_1 : (((arr_7 [21] [21] [i_1] [21] [i_2] [i_0]) ? (arr_0 [i_0]) : var_1))))) ? -var_1 : (max((max(var_8, (arr_1 [i_3]))), (arr_3 [i_0] [17] [17]))));
                        var_14 = (max(var_14, ((-((var_6 ? (((arr_8 [i_0] [1] [20] [i_2] [16] [14]) ? var_6 : (arr_4 [i_1]))) : var_10))))));
                    }
                    for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                    {
                        var_15 = ((-((((((arr_8 [i_4] [20] [i_0] [i_0] [14] [i_0]) ? var_10 : (arr_3 [i_0] [i_1 + 1] [i_0])))) ? ((((arr_11 [i_0] [i_1 - 1] [i_0]) ? (arr_10 [i_0] [i_1 + 1] [i_0]) : var_10))) : ((var_2 ? (arr_3 [17] [17] [17]) : (arr_12 [i_1] [i_1] [i_1] [i_0] [i_1])))))));
                        var_16 = (min(((var_9 ? (arr_8 [i_0 + 2] [i_1 - 1] [i_0] [i_1] [i_1] [i_1 + 1]) : (arr_7 [i_0] [24] [i_0] [i_4] [i_0] [i_0]))), ((((((5752 ? 4306 : 0))) ? -61531 : (arr_12 [i_0] [i_0 + 2] [i_1 - 1] [i_0] [i_4]))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
