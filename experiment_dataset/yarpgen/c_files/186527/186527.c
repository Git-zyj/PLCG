/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_12 = (!-var_3);
                arr_5 [10] [2] [i_1] = (arr_3 [i_0 - 3]);
                var_13 = (min(var_13, (((!((!((!(arr_3 [i_0 - 2]))))))))));
                var_14 = (max(var_14, (!-102686374)));
            }
        }
    }
    var_15 = -var_3;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 23;i_4 += 1)
            {
                {
                    var_16 = (!var_0);
                    var_17 ^= (-((~(arr_14 [i_4 - 1] [i_4 + 1] [i_4 - 1]))));
                    arr_15 [i_2] [i_3] [i_4] [i_4] = ((!(((-(!109))))));
                    arr_16 [i_4] [i_3] = (~var_6);
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_18 += (!var_6);
        arr_19 [i_5] = var_6;
    }
    for (int i_6 = 3; i_6 < 8;i_6 += 1)
    {
        var_19 = ((~(!2409)));
        var_20 = ((!(!var_1)));
    }
    #pragma endscop
}
