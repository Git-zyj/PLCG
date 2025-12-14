/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116532
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_11 = (arr_7 [i_1 + 1] [i_0 - 1] [i_0 - 1] [i_0]);
                        arr_12 [i_0] [i_0] [i_0] [i_2] [i_2] [i_3] = (arr_7 [i_0] [i_0 - 1] [i_1 + 1] [i_3]);

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            var_12 = (min(var_12, 2134797906));
                            var_13 -= -310689393;
                        }
                        for (int i_5 = 3; i_5 < 21;i_5 += 1)
                        {
                            arr_21 [i_0] = (4294967295 ? (arr_20 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1]) : 12110);
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_3] [12] [i_3] = (~3439372942);
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_14 = (((arr_23 [i_1 + 1] [i_1 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (arr_13 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 - 1]) : 310689383));
                            var_15 = (max(var_15, (((-(arr_11 [i_1 - 1] [i_0 - 1]))))));
                        }
                    }
                    var_16 = ((var_4 == ((max(1, -54)))));
                }
            }
        }
    }
    var_17 = max(61972, var_8);
    var_18 = (max(var_18, (~var_10)));
    var_19 = (max(var_19, (310689393 == var_3)));
    var_20 = var_0;
    #pragma endscop
}
