/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1;
    var_15 = (-32767 - 1);
    var_16 = (var_11 + var_6);

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = ((+((min((arr_1 [i_0]), (arr_2 [i_0 - 1]))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 7;i_3 += 1)
                {
                    {
                        var_17 = var_0;
                        var_18 -= ((((min(var_6, (((0 ? var_12 : var_9)))))) ? ((var_5 ? 6441 : (arr_12 [i_1] [i_2] [0]))) : ((min(-1, -6441)))));
                        arr_14 [i_2] [i_0] [i_3] = (min((min(-22648, 12732)), var_10));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_19 [i_0] = -var_11;
            var_19 = (min(((65535 ? 18138520303637919876 : (arr_1 [i_0]))), ((((arr_1 [i_0]) && (arr_1 [i_0]))))));
        }
    }
    for (int i_5 = 1; i_5 < 17;i_5 += 1)
    {
        var_20 = (min(var_20, var_6));
        var_21 = (arr_20 [i_5 + 1]);
        var_22 = ((((min(((var_12 ? 1 : var_2)), ((min(22651, 1)))))) ? ((~(~var_7))) : var_11));
    }
    #pragma endscop
}
