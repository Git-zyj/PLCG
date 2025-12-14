/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = var_15;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_12 [1] [i_1] [i_1] [i_0] = var_8;
                        var_21 = (0 <= var_9);
                        arr_13 [i_0] [i_0] [i_0] [13] [i_1] [i_0] = ((((min(-419438104, -419438104))) + (min(((2244298771361487978 ? var_4 : var_17)), (var_18 < var_17)))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_22 = ((((arr_8 [i_4] [i_4]) ? var_8 : ((var_5 ? var_5 : var_4)))));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_23 = ((-((var_16 >> (var_11 - 3462741158638267920)))));
            var_24 = ((7421787298252799563 >> (-419438103 + 419438126)));
        }
        var_25 = 524032;
        var_26 = (min(((-419438104 ? 0 : 312367707171634056), (var_16 || -419438103))));
        var_27 = (max(var_16, (var_18 > var_1)));
    }
    var_28 = 127;
    var_29 = (min((((var_11 || (2890034412871276524 > 481036337152)))), (max(var_10, var_17))));
    var_30 = (min((min(var_4, (((-2 ? var_7 : var_7))))), (((((min(var_0, var_1))) || var_3)))));
    #pragma endscop
}
