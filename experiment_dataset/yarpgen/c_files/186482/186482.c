/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = ((((-(arr_2 [i_0]))) + ((max((arr_2 [i_0]), (arr_2 [i_0]))))));
        var_14 = (min(((((arr_0 [i_0] [i_0]) ? 2639011127 : (arr_0 [i_0] [i_0])))), (max((arr_1 [i_0]), ((max((arr_0 [i_0] [i_0]), var_9)))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] = ((!(arr_4 [i_1 + 1] [i_1 + 2])));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_14 [i_2] [i_2 - 3] [i_4] = (!var_6);
                        var_15 = (((arr_6 [i_1] [i_1] [i_2]) ? 0 : 209));
                        arr_15 [i_2] [i_2] [i_2] [i_2 + 1] [i_2 - 2] [i_2] = 1757878717;
                        var_16 = (((((0 ? var_1 : var_3))) ? (!4294967295) : (arr_9 [i_3 + 2] [i_3 + 1] [i_1])));
                        var_17 = (min(var_17, (arr_10 [i_3] [i_3] [i_2] [i_3])));
                    }
                }
            }
        }
        var_18 = (arr_6 [i_1 + 2] [i_1 - 1] [10]);
        var_19 = (((!1757878717) == var_1));
    }
    var_20 = var_4;
    #pragma endscop
}
