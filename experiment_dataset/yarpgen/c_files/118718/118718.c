/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, -23128));

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((~((min(1, (-32767 - 1))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_12 = var_6;
                        arr_12 [i_2] [i_2] = (~var_0);
                        arr_13 [i_1] [i_2] = var_9;
                    }
                }
            }
        }
        var_13 = ((!(-127 & -7980)));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_14 = (arr_7 [i_4] [0] [i_4 - 1]);
        var_15 = (51554 / 13560);
        arr_17 [i_4] |= (49350 * 13568);
    }
    var_16 = (max((!var_8), var_7));
    var_17 = ((-((var_5 ? var_9 : ((var_8 ? var_7 : -1))))));
    #pragma endscop
}
