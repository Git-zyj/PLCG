/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 - 3] = 24215;
                arr_6 [i_0] [i_0] = var_0;

                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    var_11 = max((-127 - 1), (min(0, 24225)));
                    arr_10 [i_2] [i_1] [i_2] [i_1] = min(41328, 10798);
                    arr_11 [i_2] [i_2] [i_2] [i_0] = 41337;
                    arr_12 [i_2] [i_1 + 2] [8] [i_1 + 4] = -10785;
                }
                for (int i_3 = 3; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    var_12 -= (((arr_0 [i_3]) && (((~(1 % 61846))))));
                    var_13 = (((((0 ^ (arr_14 [i_1 + 1])))) ? (min((arr_1 [i_1 + 4] [i_0]), -8176403477256851140)) : (!-4)));
                }
                /* vectorizable */
                for (int i_4 = 3; i_4 < 17;i_4 += 1) /* same iter space */
                {
                    arr_17 [i_0 - 2] [i_1] [i_4] = var_6;
                    arr_18 [i_0 - 1] [i_1] [i_1] &= 1;
                    var_14 = -6924588630926510453;
                }
                for (int i_5 = 3; i_5 < 17;i_5 += 1) /* same iter space */
                {
                    arr_23 [i_0] [i_5] [i_1] [i_5] = (~(min((arr_14 [i_1 + 1]), (((~(arr_4 [i_1 + 1])))))));
                    arr_24 [i_0 - 1] [i_5] [i_0] = ((+((var_7 ? ((max((arr_13 [i_0]), 249))) : (41311 / -112)))));
                }
                var_15 = (arr_9 [i_0] [i_1] [i_0] [i_0]);
            }
        }
    }
    var_16 = -692315986282194112;
    var_17 = var_7;
    var_18 = var_2;
    #pragma endscop
}
