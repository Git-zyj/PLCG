/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_4));
    var_11 ^= var_9;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = (min(var_12, -3));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_13 = var_9;
            var_14 = var_8;
        }
        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            var_15 = (!var_2);
            arr_6 [i_0] [i_2] [i_2] = var_7;
            arr_7 [i_0] [9] = var_8;
            var_16 *= var_9;
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {

            for (int i_4 = 3; i_4 < 16;i_4 += 1)
            {
                arr_14 [i_0] = ((!(((~(!var_9))))));
                var_17 = var_2;
                arr_15 [i_3] [1] = var_9;
                var_18 += (~var_8);
            }
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                var_19 *= var_5;
                var_20 += (!-41);
            }
            for (int i_6 = 3; i_6 < 17;i_6 += 1)
            {
                var_21 = var_6;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 16;i_8 += 1)
                    {
                        {
                            arr_28 [i_6] [i_6 - 2] [i_8 + 2] = ((!(~var_3)));
                            arr_29 [i_6] [i_6] [i_6] [i_0] [1] [i_0] [i_0] = (!var_0);
                        }
                    }
                }
            }
            var_22 = var_1;
        }
        arr_30 [i_0] [i_0] = (+-var_9);
        var_23 = var_3;
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
    {
        var_24 = var_0;
        var_25 = (~var_4);
        var_26 = var_6;
    }
    for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
    {
        arr_37 [i_10] = (~var_6);
        var_27 = var_2;
        var_28 = (min(var_28, (!var_0)));
    }
    var_29 = ((~(!var_5)));
    #pragma endscop
}
