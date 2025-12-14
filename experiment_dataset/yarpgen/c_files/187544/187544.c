/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] |= (((!-2904) * ((((arr_1 [i_0] [i_0]) >= var_15)))));
                    var_16 = ((var_14 ? ((0 ? var_6 : -784071236)) : var_12));
                }
            }
        }
        var_17 = ((((arr_0 [i_0]) ? (arr_6 [i_0]) : 0)));
        var_18 = 3116331863;
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        var_19 = ((-1124295498967747919 ? -1 : 1));
        var_20 = -1124295498967747922;
        arr_13 [i_3] |= (~var_5);
        var_21 = (min(2112917391, (min(-29867, 17264940279251280076))));
        var_22 = ((((((((1 * (-32767 - 1)))) ? (arr_9 [i_3 - 1]) : (arr_3 [i_3 - 1])))) ? 11219 : (arr_7 [i_3] [i_3] [i_3])));
    }
    var_23 = var_2;
    #pragma endscop
}
