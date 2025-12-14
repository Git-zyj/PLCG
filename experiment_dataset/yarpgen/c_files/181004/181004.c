/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_14 = ((-4883092089137771683 ? (-32767 - 1) : 4294967295));
        var_15 = -var_6;

        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (((arr_3 [i_0 - 1] [i_0 + 4] [i_0 + 3]) - (arr_3 [i_0] [i_0] [i_0 + 4])));
            var_16 = ((-4294967295 ? var_1 : (((4294967295 ? 4294967282 : 42223)))));
            var_17 = ((370560891360472238 ? ((-1873615791 ? -1 : -43)) : (arr_2 [i_0 + 2])));
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] = (-863606630 || 16383);
                            var_18 = (max(var_18, (((-(arr_10 [i_2] [i_1] [1] [i_3] [i_4]))))));
                            var_19 -= (!var_6);
                        }
                    }
                }
            }
        }
        for (int i_5 = 3; i_5 < 19;i_5 += 1)
        {
            var_20 -= ((var_5 ? (arr_6 [14]) : (arr_7 [i_0 - 1] [i_0 - 1] [i_5 - 1])));
            arr_16 [i_0] [i_0] [i_0] = (arr_15 [i_5 - 1] [i_0]);
            arr_17 [i_0] = (((arr_3 [i_0 + 1] [i_0 + 1] [i_5]) != (arr_12 [i_0] [i_0] [i_0 + 1] [i_0 + 3] [i_0 - 1] [i_0])));
        }
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        arr_21 [i_6] [i_6] = ((~(arr_6 [i_6])));
        arr_22 [i_6] [12] = var_6;
    }
    var_21 = (15044935885772497457 & 1);
    var_22 = (((((((max(4294967295, var_7))) ? (min(4294967295, var_1)) : 4294967295))) ? 2974407289614754261 : (5218544586145464113 || 785)));
    #pragma endscop
}
