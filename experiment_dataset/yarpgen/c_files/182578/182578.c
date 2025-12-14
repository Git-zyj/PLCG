/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = (var_14 ? (((max(var_3, var_5)))) : var_11);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (!var_5);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 21;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 18;i_4 += 1) /* same iter space */
                        {
                            var_18 = var_13;
                            arr_12 [i_0] [i_1] [i_0] [1] [i_0] = (~var_3);
                            var_19 = -var_2;
                        }
                        for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
                        {
                            var_20 = (min(var_20, var_6));
                            arr_16 [i_3] [i_3] [i_3] [i_3] [i_3] |= ((var_11 ? var_10 : ((var_3 ? var_8 : var_11))));
                        }
                        var_21 = (!var_5);
                    }
                }
            }
        }
        arr_17 [i_0] = -var_3;
        arr_18 [i_0] = -var_9;
    }
    #pragma endscop
}
