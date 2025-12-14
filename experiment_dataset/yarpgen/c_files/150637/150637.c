/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_17 = (-1 * var_6);
        var_18 = (--0);

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_19 = (((arr_4 [i_0 + 2]) ? (arr_3 [i_0 + 2]) : (arr_1 [i_0 - 1])));
            var_20 = ((-(arr_3 [i_0 - 1])));
        }
    }

    for (int i_2 = 4; i_2 < 18;i_2 += 1)
    {
        var_21 = (min(((((arr_6 [i_2 + 2] [i_2 - 3]) ? var_2 : var_2))), (arr_6 [i_2] [i_2])));
        arr_8 [i_2] [i_2] = ((-(((arr_6 [i_2 - 2] [i_2 - 1]) ? (min(-6996828875082309585, var_7)) : (((arr_6 [i_2 + 2] [i_2 + 1]) ^ (arr_6 [i_2] [i_2])))))));
        arr_9 [14] |= ((!((max(((-(arr_7 [i_2 + 2]))), 28060)))));
        arr_10 [i_2] [i_2] = (!var_7);
        var_22 = (arr_7 [i_2 + 1]);
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {

                /* vectorizable */
                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    var_23 = ((var_2 ? ((-2198557160890329578 ? var_1 : var_16)) : (arr_14 [i_5 + 1] [i_5] [i_5 + 1])));
                    var_24 += (((((!(arr_14 [i_5] [i_4] [i_3])))) % var_14));
                }
                var_25 = (((((-var_4 ^ (((arr_15 [i_3] [i_4]) ? (arr_13 [i_3]) : (arr_14 [i_3] [i_3] [i_3])))))) ? ((((((arr_18 [i_3] [i_3]) ? var_4 : var_6))) ? var_9 : 39494)) : ((((((1 ? 1 : var_1))) ? var_6 : (arr_15 [i_3] [i_4]))))));
            }
        }
    }
    #pragma endscop
}
