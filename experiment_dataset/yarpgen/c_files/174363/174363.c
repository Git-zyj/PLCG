/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = -908202802;
        arr_2 [i_0] = (!var_10);
        arr_3 [i_0] = 0;
        var_21 = (((arr_1 [i_0] [i_0]) == var_12));
    }

    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_22 += (max(((var_19 ? (arr_5 [10] [i_1]) : -11)), (((-((var_4 ? 19871 : (arr_5 [i_1] [i_1]))))))));
        arr_6 [i_1] = arr_1 [i_1] [i_1];
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = 18446744073709551600;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        arr_20 [i_3] [i_3] [i_4 - 1] [i_4] = max((max(((16 ? (arr_13 [i_2]) : -7610861410090621165)), ((max(var_5, (arr_19 [i_2] [i_3] [i_4] [i_5])))))), (min(((~(arr_8 [i_3]))), (arr_19 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1]))));
                        arr_21 [4] &= (max(908202819, 131941395333120));
                        var_23 = (arr_14 [i_4 - 1]);
                    }
                }
            }
        }
        arr_22 [i_2] = ((var_1 != (arr_15 [i_2] [i_2] [i_2] [7])));
        arr_23 [i_2] = -4294967295;
    }
    #pragma endscop
}
