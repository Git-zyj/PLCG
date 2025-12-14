/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= var_4;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_16 = var_11;
                        var_17 = var_3;
                        var_18 = ((!((min((min(var_0, -4829594963530490721)), (arr_8 [i_1]))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_19 += (arr_7 [i_1] [i_0 - 3]);
                        var_20 = var_13;
                        var_21 = (((arr_4 [i_2 + 1] [i_2 + 1] [i_2 - 1]) ? 121 : var_12));
                        arr_14 [i_0] [i_1] [i_0] = arr_9 [i_2] [i_2 - 1];
                    }
                    var_22 = (((3754677682748024593 ? var_6 : (var_13 | -2266))) < (arr_4 [i_0 - 2] [i_0 - 2] [i_2 + 1]));
                }
            }
        }
    }
    var_23 = 126;
    #pragma endscop
}
