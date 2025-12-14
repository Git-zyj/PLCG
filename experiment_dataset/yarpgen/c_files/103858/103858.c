/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(110, var_10));
    var_17 = (min(var_17, ((max(var_0, ((((var_15 / 157) ? 1160179637 : 99))))))));

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_2 [4] = ((76 ? -1731387598330526965 : 0));

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_18 ^= ((3071673544300862451 ? (arr_4 [i_0]) : -7747692301473440108));
            var_19 = (min(var_19, var_5));
            arr_5 [2] [i_0] [i_1] = ((-227349871 ? (arr_3 [i_0 + 1] [i_0 + 1] [i_0 - 1]) : ((17873 >> (((arr_4 [i_0 + 1]) - 214))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0 - 2] &= var_15;
                        arr_12 [i_0] [8] [i_2] &= var_8;
                        arr_13 [0] [i_3] [3] [i_2] [4] [i_0] = (arr_10 [i_0 - 1] [i_0] [i_0] [i_0]);
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
        {
            arr_18 [i_0] [i_4] = 2458100439;
            var_20 = var_9;
        }
    }
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        var_21 = var_4;
        var_22 = 1;
    }
    #pragma endscop
}
