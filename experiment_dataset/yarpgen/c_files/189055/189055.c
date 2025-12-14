/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = var_10;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 = max((min((max((arr_0 [i_0 + 2]), (-2147483647 - 1))), (arr_1 [14]))), ((1 ^ ((max(var_5, 1))))));
                    arr_7 [i_0] [i_1] = 1;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 11;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                {
                    arr_16 [i_3] [i_3] [i_4] [i_5] = (((arr_9 [i_5]) && (((var_6 ? (arr_15 [i_3] [i_3] [i_3] [i_3 - 2]) : (arr_3 [i_3]))))));
                    var_15 = (var_12 - 1);
                }
            }
        }
        arr_17 [i_3] [i_3] = (((!0) && -1));
        arr_18 [i_3] = (58827 + 579097903);
    }
    for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] [11] = (arr_19 [i_6]);
        arr_22 [i_6] = (-588914234 ^ 0);
    }
    var_16 = ((~(((min(var_11, var_2)) ^ var_13))));
    #pragma endscop
}
