/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_19 = (!8);
                        arr_11 [i_0] [i_0] [i_0] [21] = ((((arr_9 [i_1] [i_2] [i_3]) && -9)));
                        arr_12 [i_0] = 2103296013;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    var_20 = -var_15;
                    arr_19 [i_0] [i_4] [i_4] = var_0;
                    arr_20 [i_4] [i_4] = arr_15 [i_4];

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_21 = 6;
                        arr_23 [i_0] [i_4] [i_5] = (min((max((arr_14 [i_4]), (arr_14 [i_4]))), (!0)));
                        var_22 *= 1330679082;
                        var_23 = (min(var_23, (((var_15 & (max((min((arr_7 [i_0] [2]), (arr_14 [i_6]))), (arr_2 [i_4]))))))));
                    }
                }
            }
        }
        arr_24 [i_0] = ((-18 ? ((((-127 - 1) >= (min((arr_13 [i_0] [6] [i_0]), (arr_7 [21] [i_0])))))) : -18));
        var_24 &= (arr_7 [i_0] [i_0]);
    }
    var_25 = (min(var_25, (~var_5)));
    var_26 = var_5;
    var_27 = (min(var_27, 33554424));
    #pragma endscop
}
