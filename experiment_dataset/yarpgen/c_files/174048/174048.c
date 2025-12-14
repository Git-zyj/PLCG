/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(1, 1));
    var_21 = ((var_6 ? (min(((1 ? -69 : 20445)), 1)) : var_0));
    var_22 = (!var_0);

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_23 = ((!(2520506528034669524 / 13594353791384927948)));
            arr_5 [i_0] = var_6;
        }
        for (int i_2 = 2; i_2 < 11;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_24 = (25346 == 1150030956);
                        var_25 = ((1 <= (arr_1 [i_0] [i_0])));
                        arr_16 [i_0] [i_3] [i_2] [i_0] = (--2303591209400008704);
                    }
                }
            }
            var_26 = var_2;
        }
        for (int i_5 = 2; i_5 < 11;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 3; i_6 < 11;i_6 += 1)
            {
                var_27 = -124;
                arr_23 [i_0] [i_0] [i_0] [i_0] = (arr_14 [i_6] [i_6] [i_6] [i_6 - 1]);
                var_28 = ((var_10 ? 1 : -1));
            }
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                var_29 = var_4;
                arr_26 [i_0] [i_5 - 2] [i_7] = ((var_19 ? (arr_14 [i_5 + 2] [i_5 + 1] [i_7] [i_7]) : (arr_19 [i_0])));
            }
            var_30 = ((var_13 ? var_18 : (((-9045 + 2147483647) << (1 - 1)))));
            arr_27 [i_0] [i_0] [i_0 - 1] = 1;
        }
        arr_28 [i_0] [i_0] = 0;
        var_31 = 1;
    }
    var_32 = var_9;
    #pragma endscop
}
