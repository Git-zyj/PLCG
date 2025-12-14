/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (((((var_9 >= var_16) >= (!var_6))) ? var_1 : ((((!(~0)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 14;i_4 += 1) /* same iter space */
                        {
                            arr_12 [i_4 - 1] [13] [i_2] [i_1 - 1] [i_0] = ((24117 ? (-3938978622387329818 | 3116) : ((((arr_3 [i_4 - 1] [5] [i_2]) ? (arr_4 [i_3] [i_1] [i_1]) : (arr_9 [i_0] [i_0] [i_0] [i_0]))))));
                            arr_13 [10] = (((var_2 ? var_14 : 1528955315)));
                        }
                        for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            var_20 = var_10;
                            var_21 = (arr_14 [13] [i_1] [i_1 + 1] [1]);
                        }
                        var_22 = ((((((-9223372036854775807 - 1) ? (arr_5 [i_2]) : -9))) ? (((4294967282 ? (arr_1 [i_2] [i_2]) : var_11))) : ((var_6 ? var_14 : var_15))));
                        arr_17 [i_2] [i_2] = (1519484332 && 10675);
                        var_23 = (((var_5 ? -1416949950085919891 : var_10)));
                    }
                }
            }
        }
        var_24 = var_8;
    }
    #pragma endscop
}
