/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_16 = (max(((((var_10 | var_7) <= (var_1 % var_2)))), -var_3));
                            arr_10 [i_0] [17] [1] [4] = ((!(((var_15 % (arr_2 [i_0]))))));
                            arr_11 [i_0] [i_2] [i_2] [7] [i_1] [i_0] = -121;
                            var_17 = (min(var_17, -2111840742));
                        }
                    }
                }
                var_18 = ((((var_13 ? var_11 : var_10))));
            }
        }
    }

    for (int i_4 = 2; i_4 < 20;i_4 += 1)
    {
        arr_14 [i_4] = ((((min(4294967294, 0))) ? (((var_1 <= (arr_13 [i_4 + 1])))) : (arr_13 [i_4 + 2])));
        arr_15 [i_4] = var_10;
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_19 = arr_13 [i_5];

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        {
                            var_20 = (min(var_20, var_14));
                            var_21 = -2111840742;
                        }
                    }
                }
                var_22 = (arr_18 [15] [i_6]);
                var_23 = (((arr_23 [i_5] [i_6] [i_6] [16] [i_7]) < (((min(var_1, (arr_20 [i_5])))))));
            }
            var_24 = (!3571453525213816007);
        }
        var_25 = 1;
        arr_29 [1] [i_5] = (max(((((arr_21 [i_5] [10] [i_5] [14]) >= var_0))), (~48)));
    }
    var_26 = (max(var_9, var_7));
    #pragma endscop
}
