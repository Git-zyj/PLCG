/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!-1911734223);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (min((~0), (~-12875)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_12 [i_3] [8] [i_2] [i_1] [i_1] [i_0] = ((1542442036311752782 >> (144 - 98)));
                        arr_13 [i_0] [5] [i_0] [5] [i_3] [i_3] = 17792559978836089345;
                    }
                    arr_14 [i_0] = (max((((!(arr_11 [1] [i_2] [i_1] [i_0])))), var_8));
                    var_11 = (max(((((((arr_11 [i_0] [i_1] [i_2] [i_2]) / var_9))) ? (-12884 / -1911734240) : (-2147483641 < var_5))), -1305094165));
                }
            }
        }
    }
    var_12 = ((+((((14310059285522222325 * var_5) <= ((14 ? var_5 : var_3)))))));
    var_13 -= var_4;
    var_14 *= var_2;
    #pragma endscop
}
