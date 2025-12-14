/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_11 = (min(var_11, (((1 ? 38 : (arr_1 [i_0]))))));
        var_12 = (max(var_12, (((max(((0 ? 0 : -2737), (arr_0 [10] [i_0 + 1]))))))));
        var_13 = (max(var_13, (((-7274445667028813785 ? 2147483643 : (-2147483647 - 1))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            {
                arr_7 [i_1] [i_1] = ((((((((var_6 ? (arr_3 [1] [i_2]) : (arr_6 [i_2] [i_2] [i_1])))) < 18446744073709551615))) == (((-2716 || 65529) ? -1 : 61227))));

                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    var_14 = ((!((max(0, 2718)))));
                    var_15 = var_8;
                    arr_12 [i_1] = var_9;
                    var_16 = (max(var_16, (~1)));
                }
                arr_13 [i_1] [i_1 - 1] [i_1] = ((min(7274445667028813784, ((20394 ? var_10 : -6181946809606078518)))));
                var_17 = (max(var_17, var_4));
                var_18 = (min(var_18, (((~(~var_3))))));
            }
        }
    }
    var_19 += ((-((10947961633632584450 ? (~var_3) : (~var_9)))));
    var_20 = -322;
    #pragma endscop
}
