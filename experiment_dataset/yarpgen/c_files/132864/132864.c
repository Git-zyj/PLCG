/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [1] [i_1] = 13097154644238440817;

                for (int i_2 = 1; i_2 < 20;i_2 += 1) /* same iter space */
                {
                    var_15 = 11558350584065286812;
                    var_16 = (((((min(var_6, -6536152136806990471)) + (((max((arr_1 [i_0] [8]), 1)))))) | -9297));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
                {
                    var_17 = 5349589429471110786;
                    var_18 = (11618 || var_10);
                    var_19 = (arr_7 [i_3 - 1] [i_0] [i_0] [i_0]);
                    var_20 = 65521;
                }
                var_21 = ((var_9 ? -7670081398201010232 : ((-288863035 ? 65535 : var_11))));
            }
        }
    }
    #pragma endscop
}
