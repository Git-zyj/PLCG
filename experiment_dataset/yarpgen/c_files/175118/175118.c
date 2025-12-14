/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    var_17 = (max(-25, var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, ((((~(arr_3 [i_0] [i_1] [i_2])))))));
                    arr_7 [i_2] [i_1] [8] [i_2] = (max(((min(var_12, (arr_4 [i_0] [i_1] [i_2])))), (25 && var_15)));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                    {
                        var_19 = (max(((((min((arr_2 [i_3] [i_1] [i_0]), (arr_4 [i_0] [i_1] [i_2])))) ? var_5 : (arr_0 [i_0]))), var_15));
                        arr_12 [i_0] |= max(((max((arr_4 [i_0] [i_1] [i_2]), (arr_4 [i_0] [i_1] [i_2])))), (arr_4 [i_0] [i_0] [i_0]));
                        var_20 = (max(6028523097204182171, (!var_13)));
                        var_21 = ((((((((arr_3 [i_0] [i_1] [i_1]) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) : -6028523097204182174)) ^ -var_7))) || ((max(((((arr_0 [i_0]) || var_12))), var_6)))));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_2] [i_2] [i_2] [i_4] = ((!((max((((6028523097204182171 ? -28550 : 25292))), (max(6028523097204182171, var_11)))))));
                        var_22 = ((!(((((arr_2 [i_0] [i_0] [i_0]) && 3760204676516415844)) || (((var_11 ? (arr_13 [i_1] [i_1] [i_2] [i_4] [i_0] [i_2]) : -1913602686651228719)))))));
                        var_23 = (!var_6);
                    }
                }
            }
        }
    }
    #pragma endscop
}
