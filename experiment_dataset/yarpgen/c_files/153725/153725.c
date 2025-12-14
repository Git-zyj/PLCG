/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((16066957764777765266 ? 0 : 70)) & (((max(20262, var_17)) ^ var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((((((arr_0 [i_0] [i_1]) ? ((min((arr_4 [i_0] [5] [15]), (arr_3 [i_1] [i_1] [i_0])))) : var_3))) ? -60 : (min(((65522 ? (arr_4 [i_0] [3] [3]) : var_1)), (var_4 < var_8)))));
                arr_7 [i_1] [11] [17] = (max(((((arr_3 [6] [20] [i_0]) ? (arr_3 [i_0] [i_1] [i_1]) : var_14))), (((arr_4 [i_0] [i_0] [i_0]) ? 3489736275 : (!-9069586905146760584)))));
                arr_8 [i_0] [i_1] [i_1] = ((7163215579552794290 ? 20262 : 99));
                arr_9 [i_0] [i_1] = arr_1 [i_0] [i_1];
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            {
                arr_16 [i_2] [i_3] [i_3] = (arr_5 [i_2] [9] [i_3 - 1]);
                arr_17 [i_2] [1] [i_3] = ((60 ? 2259084578 : 618797145));
                arr_18 [i_2] [i_2] [i_3] = (min(var_12, (((~(max(var_18, var_0)))))));
            }
        }
    }
    var_20 = (!-var_12);
    #pragma endscop
}
