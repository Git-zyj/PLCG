/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_12 = var_9;
        var_13 = (!var_11);
        var_14 ^= (arr_0 [12]);
        var_15 ^= var_6;
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] [i_1] = var_0;
        arr_5 [i_1] = ((max(var_6, var_3)));

        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_16 = (min(var_16, var_9));
            arr_8 [i_2] = var_11;
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_17 = (min(var_11, (arr_14 [i_1] [i_2] [i_2] [15])));
                        arr_15 [i_1] [i_1] [i_2] [i_1 - 1] [i_2] = ((!(~39389)));
                    }
                }
            }
            var_18 *= ((~(((!(((~(arr_12 [i_2] [9] [1])))))))));
            var_19 &= (arr_11 [6] [15] [i_2] [15] [i_2] [i_1]);
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            arr_18 [i_5] [4] = 4611686018427387904;

            for (int i_6 = 4; i_6 < 17;i_6 += 1)
            {
                var_20 = var_10;
                arr_21 [i_1] [i_5] [i_1] = (~var_1);
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 18;i_9 += 1)
                    {
                        {
                            arr_32 [i_1] [1] [1] [1] [i_5] = (min(var_2, (~var_9)));
                            var_21 = (min(var_21, ((min(((~(min(4609434218613702656, -4609434218613702666)))), ((min(0, 39))))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = var_7;
    #pragma endscop
}
