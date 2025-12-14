/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119312
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_10));
    var_21 = min((((var_5 ? var_16 : 33554431))), var_15);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_1 [i_0 + 2]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_10 [i_2] &= (((arr_7 [i_2] [i_2 - 2] [i_2] [i_2]) ^ (arr_7 [i_2] [i_2 - 2] [i_2] [1])));
                        var_22 = (var_1 - 0);
                        var_23 &= (((arr_0 [i_0]) << (((((arr_4 [i_0] [i_0 + 1] [i_2 + 1]) + 16611)) - 16))));
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
    {
        arr_14 [i_4] &= (3632342803 % 8855383193093869617);
        var_24 &= 19875;
    }
    #pragma endscop
}
