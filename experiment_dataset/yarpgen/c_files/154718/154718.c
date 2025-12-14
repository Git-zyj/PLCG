/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 &= (max(-var_2, (min(4275398198, 4976643565710029854))));
                    arr_10 [i_2] [i_1] [i_0] = (min(((((var_5 ^ 4976643565710029854) > ((max(var_7, var_4)))))), ((19464 ? var_7 : var_1))));
                }
            }
        }
    }
    var_14 = var_5;

    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        arr_14 [i_3] = ((arr_11 [i_3]) ? 4039060113 : var_2);
        var_15 = 3157285767;
        var_16 |= (min((arr_11 [i_3]), (((13470100507999521761 ? var_0 : var_9)))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        arr_22 [i_4] [i_4] = var_9;
                        var_17 = 3157285767;
                        arr_23 [i_4] [21] [i_5] [i_4] [i_4] = var_6;
                    }
                }
            }
        }
    }
    var_18 ^= var_5;
    #pragma endscop
}
