/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (arr_1 [i_0]);
        var_14 = (max((min(39164, var_8)), (!var_4)));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_15 = arr_4 [i_1];
        var_16 = 39164;
        arr_5 [i_1] = arr_3 [i_1];
    }
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = ((+((43 ? (~var_9) : (((!(arr_7 [i_2]))))))));
        var_17 = ((((!(arr_7 [i_2 - 1])))));
        arr_10 [i_2] = 65527;
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_18 ^= var_12;
                    arr_19 [14] = 65535;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_19 = ((((((-(arr_15 [i_4] [i_7]))) ? (-107 != 1586545829) : var_2))));
                                arr_25 [i_3] = (arr_21 [i_3] [14] [i_5] [6] [i_7]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
