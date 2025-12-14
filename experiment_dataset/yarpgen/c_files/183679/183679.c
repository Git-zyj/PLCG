/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_2 || ((min(5521, 19474)))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_3] [8] [i_0] = var_1;
                        arr_12 [i_3] = (-9223372036854775807 - 1);
                    }
                }
            }
        }
        var_13 -= -9223372036854775791;
        var_14 = (-576460752303423487 ? (((((arr_4 [6] [i_0]) <= 576460752303423489)))) : (((arr_2 [i_0]) - -1)));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        var_15 += var_9;
        var_16 = ((-576460752303423481 ^ -15510) ? (!1) : ((min(var_3, 65535))));
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        arr_20 [i_5] = (((var_11 % var_6) ? 16 : (((min(4092, var_4)) / ((var_8 ? (arr_18 [i_5]) : 2))))));
        var_17 = (arr_16 [i_5]);
        var_18 = ((((!var_3) && (((arr_19 [3]) && (arr_19 [i_5]))))));
    }
    #pragma endscop
}
