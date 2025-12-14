/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_13 = ((8062246793938352394 ? (2110562903865585409 / 2110562903865585413) : -2110562903865585413));
        arr_3 [i_0] [i_0] = 9080875956105334511;
        arr_4 [i_0] [i_0] = 2510598235;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_14 = (-274428051 / 2110562903865585413);
            var_15 = ((~((~(arr_6 [i_1])))));
        }
        arr_9 [i_1] = (arr_8 [i_1] [i_1] [i_1]);
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            {
                arr_15 [i_3] [i_4 + 2] [i_4] = ((((~(arr_13 [i_3 + 2] [i_3]))) ^ ((~(arr_13 [i_3 + 2] [4])))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_16 = (~var_0);
                            var_17 = var_1;
                            arr_21 [i_5] [i_3 + 2] [i_5] = ((+(max((min((arr_5 [2] [i_4]), (arr_19 [i_5] [i_3] [1] [i_3]))), -var_5))));
                            var_18 = ((-(min(((min((arr_19 [i_5] [i_4] [i_5] [i_6]), -274428051))), 2110562903865585413))));
                            var_19 -= ((~(max(4294967295, -2110562903865585437))));
                        }
                    }
                }
            }
        }
    }
    var_20 *= (max(var_7, ((min((~274428051), 66)))));
    #pragma endscop
}
