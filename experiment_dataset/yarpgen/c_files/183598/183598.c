/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((~(~var_0))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [4] [10] [4] [i_2] |= var_1;
                    var_11 = (max(var_11, var_8));
                }
            }
        }
        var_12 = (max(var_12, 255));
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
    {
        var_13 = ((max(var_4, var_9)));
        var_14 = 0;
        var_15 = (min(var_15, var_4));
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
    {
        var_16 = (~34590);
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    {
                        var_17 -= var_8;
                        arr_21 [i_7] [i_6] [18] [i_4] |= 34592;
                        var_18 ^= (!var_5);
                        var_19 = 34594;
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 10;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 11;i_10 += 1)
            {
                {
                    var_20 |= -var_0;
                    arr_33 [i_9] [i_9] = var_3;
                }
            }
        }
    }
    var_21 |= (max(30946, var_2));
    #pragma endscop
}
