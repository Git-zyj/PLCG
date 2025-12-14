/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_10, (~-var_12)));

    for (int i_0 = 3; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 3] = ((!(((var_8 ? (arr_1 [i_0 + 2] [i_0 - 3]) : var_4)))));
        var_16 = var_8;
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1) /* same iter space */
    {
        var_17 += arr_0 [i_1];
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    {
                        arr_15 [i_4] [i_4] [i_3] [i_3] [i_3] = (~(((arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1]) / (arr_9 [i_1 - 1] [i_1 - 1] [i_1 + 1]))));
                        var_18 = (arr_4 [i_1] [i_3]);
                        var_19 ^= ((((-(arr_8 [i_1 + 2] [i_2] [i_3]))) * 117));
                        var_20 = ((79 ? (~-var_5) : (((~(arr_11 [i_4] [i_3] [i_2] [i_1 - 3]))))));
                        var_21 += ((~(arr_12 [i_4] [i_3] [i_2] [i_1 - 3])));
                    }
                }
            }
        }
        arr_16 [i_1 + 2] [i_1 + 2] = (--6035150475481263587);
    }
    var_22 = (max((!var_6), ((((var_12 ? var_1 : var_11)) <= var_3))));
    #pragma endscop
}
