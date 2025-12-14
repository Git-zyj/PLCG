/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 9;i_2 += 1) /* same iter space */
                {
                    arr_7 [8] [5] = var_4;
                    var_10 = 931354406;
                }
                for (int i_3 = 2; i_3 < 9;i_3 += 1) /* same iter space */
                {
                    var_11 = var_9;
                    arr_11 [i_1] = var_0;
                    arr_12 [7] [i_0] [i_1] [i_0] = 16777216;
                }
                for (int i_4 = 2; i_4 < 9;i_4 += 1) /* same iter space */
                {
                    var_12 = (min(var_12, var_4));
                    arr_15 [i_0] [3] [3] = var_9;
                }
                var_13 = var_3;
                var_14 &= var_8;
                arr_16 [i_0] = var_1;

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_15 = var_8;
                    var_16 = 3363612889;
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    arr_23 [i_0] [i_0] [i_0] [i_0] = var_0;
                    var_17 = var_1;
                }
                /* vectorizable */
                for (int i_7 = 2; i_7 < 8;i_7 += 1)
                {
                    arr_26 [i_7] [i_1] [i_1] = var_4;
                    var_18 = var_9;
                }
            }
        }
    }
    var_19 = var_3;
    #pragma endscop
}
