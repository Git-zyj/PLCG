/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_10;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_18 = ((~(min((((arr_2 [i_0]) ? var_1 : (arr_0 [i_0]))), ((max(32, 16)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = ((((((min(var_3, (arr_0 [i_0])))) * (max(240, 3508713714))))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_20 = (~16);
                        arr_12 [i_0] [i_1] [i_0] [i_3] = 5;
                    }
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_21 = ((!(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        arr_16 [i_4] = (max(((max(-1, (arr_2 [i_1])))), (max((((arr_6 [i_0] [i_0] [5] [i_4]) ? var_12 : (arr_3 [i_0] [i_1] [i_2]))), ((var_16 ? -88 : var_11))))));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_5] = 64758;
                        var_22 = (min(var_22, (arr_11 [i_1] [i_1] [i_1] [i_1] [i_1])));

                        for (int i_6 = 2; i_6 < 19;i_6 += 1)
                        {
                            arr_25 [2] [8] [2] [i_5] [i_5] [i_5] = var_16;
                            arr_26 [i_0] [i_0] [2] [i_0] [1] [i_0] [i_0] = (max((((!var_16) ? (~var_7) : (arr_11 [i_0] [i_0] [i_2] [5] [i_6]))), var_2));
                            var_23 = (243794962 <= -10630);
                        }
                    }
                    arr_27 [i_2] = 240;
                }
            }
        }
        arr_28 [i_0] [i_0] = var_2;
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            {
                var_24 = -243794967;
                arr_34 [i_7 + 1] [i_7] [i_7] = -88;
            }
        }
    }
    #pragma endscop
}
