/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            arr_15 [4] |= var_0;
                            var_17 = (arr_8 [i_3] [i_2] [i_1] [i_0]);
                            var_18 = var_2;
                        }
                        var_19 = (min(var_19, 8000666830437140354));
                        var_20 = var_12;
                        var_21 = (arr_12 [3] [i_1] [i_2] [3]);
                    }
                }
            }
        }
        var_22 = (!1041081799);
        var_23 = (var_3 <= var_10);
        var_24 = ((((~(arr_10 [0] [i_0] [i_0] [i_0] [9])))));
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            {
                var_25 |= var_2;
                arr_22 [i_6] = (arr_18 [1]);
                arr_23 [i_6] = var_8;
                var_26 = (min((arr_18 [i_5]), var_6));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        {
                            var_27 = var_10;
                            var_28 = (arr_26 [i_5] [i_5] [i_7] [i_8]);
                            var_29 = (arr_21 [i_6]);
                            arr_28 [i_6] [i_6] [i_7] = ((min(13, var_2)));
                        }
                    }
                }
            }
        }
    }
    var_30 |= (min(var_15, var_6));
    var_31 -= (!var_15);
    var_32 = (((~var_6) > var_3));
    #pragma endscop
}
