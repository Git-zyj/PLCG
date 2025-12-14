/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_1] &= arr_6 [i_0] [i_0];
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            arr_16 [14] [14] [i_1] [i_2] [i_3] [i_4] = var_7;
                            var_17 = 0;
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_5 [i_0] [i_3]) ? (arr_5 [i_1] [i_2]) : (arr_5 [i_1] [i_2])));
                            arr_18 [i_4] [i_3] [i_2] [12] [i_0] [i_0] = (arr_1 [i_0]);
                        }
                    }
                }
            }
        }
        for (int i_5 = 2; i_5 < 15;i_5 += 1)
        {
            arr_22 [i_0] [i_5] = (!3768889381);
            arr_23 [i_0] [i_5] = 0;
            var_18 = var_8;
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_19 -= (!2359617140);
            var_20 = (arr_3 [i_6] [i_0]);
            var_21 = (arr_11 [i_0] [i_6] [i_6]);
        }

        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_22 = (min(var_22, (((4294967295 != (var_0 != var_10))))));
            var_23 = 7416;
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                var_24 = (arr_4 [i_0]);
                var_25 = (max(var_25, (((38700 ? 149 : var_16)))));
            }
            var_26 -= ((arr_3 [i_8] [i_8]) ? 246 : 0);
        }
        var_27 *= (var_9 % 165);
    }
    var_28 = var_5;
    var_29 = var_4;
    var_30 = var_2;
    #pragma endscop
}
