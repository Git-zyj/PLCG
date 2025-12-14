/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= var_6;
    var_13 += var_1;

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_14 ^= (arr_0 [2]);
        arr_3 [i_0] = ((max((arr_1 [i_0]), (arr_2 [i_0]))));
        var_15 = var_6;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_16 = -var_9;
        arr_8 [i_1] |= ((arr_4 [i_1]) >> (var_2 + 23606));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            var_17 += var_2;
            var_18 = ((var_5 || (arr_0 [i_2])));
        }
        for (int i_4 = 0; i_4 < 0;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            arr_23 [2] [i_4] = (~var_1);
                            var_19 -= (((arr_0 [i_4 + 1]) * (arr_0 [i_4 + 1])));
                            var_20 = var_1;
                            var_21 = (max(var_21, (arr_10 [i_4 + 1])));
                        }
                    }
                }
            }
            var_22 = (max(var_22, (((0 ? -1999924004 : -1999923994)))));
        }
        var_23 = ((~(!var_2)));
        var_24 = (~var_7);
        var_25 = (((arr_18 [i_2] [i_2] [i_2] [i_2]) != (arr_0 [i_2])));
    }
    #pragma endscop
}
