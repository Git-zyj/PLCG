/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142938
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [5] = (!var_9);
        var_13 += ((var_10 == (((((var_12 ? 5032517554280861746 : 5032517554280861736))) ? (~var_9) : (((-(arr_1 [3] [i_0]))))))));
    }
    var_14 ^= var_3;
    var_15 |= 4294967287;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            {

                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    var_16 = (max(var_16, ((-var_11 ? -13844506247216059754 : var_5))));
                    var_17 |= (arr_7 [i_2]);
                }
                for (int i_4 = 1; i_4 < 9;i_4 += 1)
                {
                    var_18 += ((~(((arr_7 [8]) & ((var_12 ? var_12 : (arr_12 [7] [7] [9] [7])))))));
                    arr_13 [i_1] [i_2] [i_4 + 1] = -5032517554280861746;
                }
                var_19 = (min(var_19, (((41926 < (72 < 4294967295))))));
            }
        }
    }
    #pragma endscop
}
