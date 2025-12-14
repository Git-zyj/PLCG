/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 22;i_3 += 1) /* same iter space */
                    {
                        var_10 = (arr_1 [19]);
                        var_11 = (arr_3 [i_1]);
                        arr_13 [i_2] [i_1] = (arr_1 [i_0]);
                        arr_14 [i_1] = (max((-2147483647 - 1), var_6));
                        var_12 = (min((min(-2147483636, (arr_8 [i_1] [i_1] [i_1 - 2] [i_1 - 2]))), (arr_8 [i_1] [i_1 - 3] [i_2] [i_3])));
                    }
                    for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_1] [2] [1] = var_7;
                        var_13 = (min(var_13, (arr_0 [i_2] [i_4])));
                    }
                    arr_19 [1] [i_1] [i_2] = -2147483621;
                }
            }
        }
    }
    var_14 |= var_9;
    var_15 = var_0;
    var_16 = var_1;
    #pragma endscop
}
