/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (-(max(var_2, var_11)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            var_18 ^= arr_2 [i_0] [i_0] [i_0];
            arr_4 [i_0] = ((-(((arr_2 [i_1 + 1] [i_1 + 1] [i_1]) - 1300163251))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 23;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [0] [i_2] [i_3] [6] = var_8;
                            var_19 = ((~((~((min(45169, 22287)))))));
                        }
                    }
                }
            }
        }
        arr_14 [i_0] [i_0] = (var_3 / 401286309);
        var_20 = (max(var_20, (((((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) - (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (int i_5 = 1; i_5 < 14;i_5 += 1)
    {

        for (int i_6 = 4; i_6 < 13;i_6 += 1)
        {
            var_21 += (-((1447988368 ? 0 : 2846978929)));
            var_22 = (max(var_22, (((11 ? 1447988368 : var_1)))));
            arr_20 [i_5] = (~((11 ? (arr_7 [i_5 + 1]) : 1447988385)));
        }
        arr_21 [i_5] = 15360;
    }
    var_23 = (((((min(574649915, 65535))) ? (~var_8) : var_7)) & 2846978936);
    #pragma endscop
}
