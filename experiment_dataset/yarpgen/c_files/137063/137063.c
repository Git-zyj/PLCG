/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_12 ^= (((arr_7 [i_0] [i_1] [i_2] [i_3]) ? (!var_1) : 0));
                            var_13 = (min(var_13, var_1));
                        }
                    }
                }
                var_14 = (arr_6 [i_1] [i_1]);
            }
        }
    }

    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        arr_15 [i_4] [i_4] = ((((!(arr_9 [i_4] [i_4]))) ? (((arr_0 [i_4]) ? (arr_3 [i_4]) : (!255))) : (((((arr_0 [i_4]) ? (arr_4 [i_4]) : 1))))));
        arr_16 [i_4] [i_4] = var_10;
        var_15 = 2147483647;
    }
    var_16 = (((((1390375249 ? -var_2 : 1))) ? (min((min(var_3, 1)), var_3)) : var_6));
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                {
                    var_17 = (arr_23 [i_6] [i_6] [i_6 + 4] [i_6 - 1]);
                    arr_25 [i_5] [i_7] [i_7] = ((!(((-(arr_20 [i_7] [i_5 - 1]))))));
                    var_18 = (arr_19 [i_6]);
                }
            }
        }
    }
    #pragma endscop
}
