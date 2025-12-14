/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((max(49013, 1204694706)))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0 + 2] = 3090272589;
        var_16 *= 1204694734;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 14;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        var_17 = (min(var_17, (((((3090272562 || (arr_8 [i_3 - 3]))) || ((((arr_16 [i_1] [i_1] [i_4]) ? 1204694734 : (arr_11 [i_4])))))))));
                        arr_17 [i_1] [i_1] = (-((3090272590 ? (arr_7 [i_1 - 1] [i_1 - 1]) : var_0)));
                    }
                }
            }
        }
        arr_18 [0] [i_1] = ((~(arr_2 [i_1 - 1] [i_1 + 1])));
        arr_19 [i_1] = (1204694732 && var_14);
        arr_20 [i_1] [i_1] = ((3090272580 ? (1204694741 == 1204694706) : (((arr_13 [4] [i_1] [i_1 + 1] [i_1]) ? (arr_9 [i_1 + 1] [i_1 + 2]) : 3090272565))));

        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            var_18 = (max(var_18, (((((3090272536 ? 3090272577 : 3090272590)) & (((3090272590 ? (arr_5 [6] [6]) : var_6))))))));
            arr_23 [i_1] [i_1] [6] |= -var_8;
            arr_24 [i_1] [i_1] = ((~(arr_0 [i_1 - 1])));
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            arr_27 [i_1] [i_1] = 1204694731;
            var_19 = ((~(arr_25 [i_1 + 2])));
            var_20 = (arr_25 [i_1 + 1]);
        }
    }
    #pragma endscop
}
