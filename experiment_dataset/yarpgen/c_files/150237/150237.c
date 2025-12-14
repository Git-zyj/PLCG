/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150237
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 8191;
    var_18 = (+-21);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = (min(var_19, 55));
                var_20 ^= (arr_2 [i_0]);

                /* vectorizable */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    var_21 = 2;
                    var_22 = arr_3 [i_2];

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        arr_11 [i_3 + 1] [i_1] [i_2] [i_0] [i_1] [i_0] = (arr_5 [i_1] [i_1] [i_1]);
                        var_23 = ((!(var_9 <= 670141266572660859)));
                    }
                    arr_12 [i_0] [i_1] [i_0] [i_1] = 12636;

                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        arr_15 [i_1] [i_1] [i_1] [i_1] = arr_1 [i_4];
                        var_24 = (max(var_24, (((!(arr_7 [i_2] [i_2 + 1] [i_2]))))));
                        var_25 = 17776602807136890757;
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_26 = (arr_14 [i_0] [i_0] [i_0]);
                        arr_19 [i_1] [i_1] [i_2] [i_5] [i_5] [i_1] = var_11;
                    }
                    for (int i_6 = 2; i_6 < 19;i_6 += 1)
                    {
                        var_27 = (~1);
                        arr_23 [i_1] [i_1] [i_1] [i_6] = (arr_7 [i_1] [i_2 + 2] [i_6]);
                        arr_24 [i_0] [14] [14] [i_1] = var_0;
                        arr_25 [i_0] [i_1] [16] [i_2] [i_1] = ((!(~0)));
                        arr_26 [i_6] [i_1] [i_1] [i_1] [10] &= (~17776602807136890757);
                    }
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    var_28 = var_14;
                    var_29 += ((-(arr_13 [i_0] [i_1] [i_0] [i_0])));
                    arr_30 [i_1] [i_1] [i_1] [i_7] = -2093803240;
                }
                var_30 *= 5757612351811516703;
            }
        }
    }
    var_31 -= ((~(5512907749058371119 * 670141266572660858)));
    #pragma endscop
}
