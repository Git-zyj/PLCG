/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_10 *= (((arr_0 [i_0]) ? 102 : 8082219123885348741));
        arr_2 [i_0] = (arr_1 [i_0] [i_0]);
        var_11 = arr_0 [i_0];
        var_12 = (max(var_12, (((!(-127 - 1))))));
        var_13 = (min(var_13, (((14 ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_14 = ((-(((!(((var_4 ? 20 : (arr_3 [22] [8])))))))));
        var_15 = 110;

        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            var_16 += min((-98 * 35167192219648), ((((90 ? (arr_4 [14]) : (arr_6 [i_2 - 1] [i_1]))))));
            var_17 = 122;
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                var_18 &= (((((-((var_7 ? var_1 : var_8))))) && (((((52 ? -23 : var_9))) < -var_6))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_19 *= (arr_9 [i_3] [i_3]);
                            var_20 &= (((arr_11 [15] [i_4]) ? 8082219123885348741 : 12409401765784189860));
                            var_21 = (min(var_21, ((max((min((~-9), (arr_12 [i_5] [10]))), var_9)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
